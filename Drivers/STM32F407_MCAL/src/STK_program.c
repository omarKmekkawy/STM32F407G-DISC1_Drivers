#include "STD_TYPES.h"
#include "NONSTD_TYPES.h"

#include "BIT_MATH.h"

#include "STK_interface.h"
#include "STK_private.h"
#include "STK_config.h"


/**
 * @brief	Define Callback Global Variable
 */
static void (*MSTK_Callback)(void);

/**
 * @brief	Define Variable for interval mode
 */
static u8 MSTK_u8ModeOfInterval;





/**
 * The processor has a 24-bit system timer, SysTick, that counts down from the reload value to
 * zero, reloads (wraps to) the value in the STK_LOAD register on the next clock edge, then
 * counts down on subsequent clocks.
 * When the processor is halted for debugging the counter does not decrement.
 */

/**
 *
 * @param Copy_StkClkSource
 */
void MSTK_voidInit(STK_CLKSOURCE_t Copy_StkClkSource)
{
	if(Copy_StkClkSource == STK_CLKSOURCE_AHB_DIV_8)
	{
		// STK_CLKSOURCE_AHB_DIV_8 is selected
		SET_BIT(MSTK->CTRL,2);			//!< Set the CLKSOURCE bit in the CTRL register.
	}
	else if(Copy_StkClkSource == STK_CLKSOURCE_AHB_PROCESSOR_CLK)
	{
		// STK_CLKSOURCE_AHB_PROCESSOR_CLK is selected
		CLR_BIT(MSTK->CTRL,2);			//!< Clear the CLKSOURCE bit in the CTRL register.

	}
	else
	{
		MSTK -> CTRL = 0;				//!< Disable the SYSTICK.
		// Error handling
	}
}

/**
 *
 * @param Copy_u32Ticks
 */
void MSTK_voidSetBusyWait(u32 Copy_u32Ticks)
{
	MSTK->LOAD = Copy_u32Ticks; 			//!<	Load the LOAD register with the ticks.

	SET_BIT(MSTK->CTRL,0);					//!<	Start the timer by setting the ENABLE bit.

	while(GET_BIT(MSTK->CTRL,16) == (0));	//!<	Loop until the timer reaches 0.

	CLR_BIT(MSTK->CTRL,0);					//!<	Stop the timer by setting the ENABLE bit.
	MSTK->LOAD = 0;							//!<	Clear the LOAD register.
	MSTK->VAL = 0;							//!<	Clear the VAL register.
}

/**
 *
 * @param Copy_u32Ticks
 * @param Copy_ptr
 */
void MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks, void (*Copy_ptr)(void))
{
	MSTK->LOAD = Copy_u32Ticks;				//!<	Load the LOAD register with the ticks.

	SET_BIT(MSTK->CTRL,0);					//!<	Start the timer by setting the ENABLE bit.

	MSTK_Callback = Copy_ptr;				//!<	Save CallBack.

	MSTK_u8ModeOfInterval = STK_MODE_SINGLE_INTERVAL; //!<	Set Mode to single.

	SET_BIT(MSTK->CTRL,1);					//!< 	Enable STK Interrupt.
}

/**
 *
 * @param Copy_u32Ticks
 * @param Copy_ptr
 */
void MSTK_voidSetIntervalPeriod(u32 Copy_u32Ticks, void (*Copy_ptr)(void))
{
	MSTK->LOAD = Copy_u32Ticks;				//!<	Load the LOAD register with the ticks.

	SET_BIT(MSTK->CTRL,0);					//!<	Start the timer by setting the ENABLE bit.

	MSTK_Callback = Copy_ptr;				//!<	Save CallBack.

	MSTK_u8ModeOfInterval = STK_MODE_PERIOD_INTERVAL; //!<	Set Mode to single.

	SET_BIT(MSTK->CTRL,1);					//!< 	Enable STK Interrupt.
}

/**
 *
 */
void MSTK_voidStopInterval(void)
{

	CLR_BIT(MSTK->CTRL,1); 					//!<	Disable STK Interrupt

	SET_BIT(MSTK->CTRL,0);					//!<	Stop Timer

	MSTK->LOAD = 0;							//!<	Clear the LOAD register.
	MSTK->VAL = 0;							//!<	Clear the VAL register.
}

/**
 *
 * @return
 */
u32 MSTK_u32GetElapsedTime(void)
{
	u32 Local_u32ElapsedTime;
	Local_u32ElapsedTime = (MSTK -> LOAD) - (MSTK -> VAL);
	return Local_u32ElapsedTime;
}

/**
 *
 * @return
 */
u32 MSTK_u32GetRemainingTime(void)
{
	u32 Local_u32RemainingTime;
	Local_u32RemainingTime = MSTK -> VAL;
	return Local_u32RemainingTime;
}

void SysTick_Handler(void)
{

	volatile u8 Local_u8Temporary;

	if (MSTK_u8ModeOfInterval == STK_MODE_SINGLE_INTERVAL)
	{
		/* Disable STK Interrupt */
		CLR_BIT(MSTK->CTRL,1);

		/* Stop Timer */
		SET_BIT(MSTK->CTRL,0);
		MSTK -> LOAD = 0;
		MSTK -> VAL  = 0;
	}
	/* Callback notification */
	MSTK_Callback();

	/* Clear interrupt flag */
	Local_u8Temporary = GET_BIT(MSTK->CTRL,16);
}
