#ifndef STK_INTERFACE_H
#define STK_INTERFACE_H


/**
 * @brief	Enum type definition for SYSTICK Clock source selection
 * @details
 */
typedef enum
{
	STK_CLKSOURCE_AHB_DIV_8,			//!<	AHB/8
	STK_CLKSOURCE_AHB_PROCESSOR_CLK		//!<	Processor clock (AHB)

}STK_CLKSOURCE_t;

typedef enum
{
	STK_MODE_SINGLE_INTERVAL,
	STK_MODE_PERIOD_INTERVAL
}STK_Mode;

/**
 *
 * @param Copy_StkClkSource
 */
void MSTK_voidInit(STK_CLKSOURCE_t Copy_StkClkSource);

/**
 *
 * @param Copy_u32Ticks
 */
void MSTK_voidSetBusyWait(u32 Copy_u32Ticks);

/**
 *
 * @param Copy_u32Ticks
 * @param Copy_ptr
 */
void MSTK_voidSetIntervalSingle(u32 Copy_u32Ticks, void (*Copy_ptr)(void));

/**
 *
 * @param Copy_u32Ticks
 * @param Copy_ptr
 */
void MSTK_voidSetIntervalPeriod(u32 Copy_u32Ticks, void (*Copy_ptr)(void));

/**
 *
 */
void MSTK_voidStopInterval(void);

/**
 *
 * @return
 */
u32 MSTK_u32GetElapsedTime(void);

/**
 *
 * @return
 */
u32 MSTK_u32GetRemainingTime(void);


#endif
