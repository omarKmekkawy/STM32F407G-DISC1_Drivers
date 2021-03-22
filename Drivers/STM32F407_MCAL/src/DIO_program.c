/***********************************************************************************************/
/*                                                                                             */
/*  Author     : Omar Mekkawy                                                                  */
/*  Date       : 4 SEP 2020                                                                    */
/*  Version    : V01                                                                           */
/*  Target H/W : STM32F407                                                                     */
/*                                                                                             */
/***********************************************************************************************/

#include "STD_TYPES.h"
#include "NONSTD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_private.h"
#include "DIO_config.h"

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"


void MGPIO_voidSetPinMode(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN,u8 copy_u8Mode, u8 copy_u8PULL, u8 copy_u8Speed) {

	copy_GPIO_TypeDefPORT->PUPDR &= ~((0b11) << (copy_u8PIN * 2)); // Reset the Pull up [00]
	copy_GPIO_TypeDefPORT->OSPEEDER &= ~((0b11) << (copy_u8PIN * 2)); // Reset the Speed 	 [00]

	if (copy_u8Mode == GPIO_Mode_Input) {
		// Input Pin
		copy_GPIO_TypeDefPORT->MODER &= ~((0b11) << (copy_u8PIN * 2)); // Reset the 2 Mode bits for this pin
	} else if (copy_u8Mode == GPIO_Mode_AF_OD) {
		// Alternate Function Open Drain
		copy_GPIO_TypeDefPORT->MODER &= ~((0b11) << (copy_u8PIN * 2)); // Reset the 2 Mode bits for this pin
		copy_GPIO_TypeDefPORT->MODER |= ((0b10) << (copy_u8PIN * 2)); // Set as Alternate Function
		SET_BIT(copy_GPIO_TypeDefPORT->OTYPER, copy_u8PIN);
	} else if (copy_u8Mode == GPIO_Mode_AF_PP) {
		// Alternate Function Push Pull
		copy_GPIO_TypeDefPORT->MODER &= ~((0b11) << (copy_u8PIN * 2)); // Reset the 2 Mode bits for this pin
		copy_GPIO_TypeDefPORT->MODER |= ((0b10) << (copy_u8PIN * 2)); // Set as Alternate Function
		CLR_BIT(copy_GPIO_TypeDefPORT->OTYPER, copy_u8PIN);
	} else if ((copy_u8Mode == GPIO_Mode_Output_PP)) {
		// Output Push Pull
		copy_GPIO_TypeDefPORT->MODER &= ~((0b11) << (copy_u8PIN * 2)); // Reset the 2 Mode bits for this pin
		copy_GPIO_TypeDefPORT->MODER |= ((0b01) << (copy_u8PIN * 2)); // Set as Output
		CLR_BIT(copy_GPIO_TypeDefPORT->OTYPER, copy_u8PIN);	// Set this pin as Push Pull
	} else if ((copy_u8Mode == GPIO_Mode_Output_OD)) {
		// Output Open Drain
		copy_GPIO_TypeDefPORT->MODER &= ~((0b11) << (copy_u8PIN * 2)); // Reset the 2 Mode bits for this pin
		copy_GPIO_TypeDefPORT->MODER |= ((0b01) << (copy_u8PIN * 2)); // Set as Output
		SET_BIT(copy_GPIO_TypeDefPORT->OTYPER, copy_u8PIN);	// Set this pin as Open Drain
	}

	if (copy_u8PULL == GPIO_PULL_UP_DOWN_PULLUP) {
		copy_GPIO_TypeDefPORT->PUPDR |= ((0b10) << (copy_u8PIN * 2)); // Set this pin as pull up
	} else if (copy_u8PULL == GPIO_PULL_UP_DOWN_PULLDOWN) {
		copy_GPIO_TypeDefPORT->PUPDR |= ((0b10) << (copy_u8PIN * 2)); // Set this pin as pull down
	} else {
		copy_GPIO_TypeDefPORT->PUPDR &= ~((0b11) << (copy_u8PIN * 2)); // Set this pin as no pull up no pull down
	}

	if ((copy_u8Mode == GPIO_Mode_Output_PP)
			|| (copy_u8Mode == GPIO_Mode_Output_OD)) {
		if (copy_u8Speed == GPIO_Speed_Low) {
			copy_GPIO_TypeDefPORT->OSPEEDER &= ~((0b11) << (copy_u8PIN * 2)); // Low Speed 	 	[00]
		} else if (copy_u8Speed == GPIO_Speed_Medium) {
			copy_GPIO_TypeDefPORT->OSPEEDER |= ((0b01) << (copy_u8PIN * 2)); // Medium Speed	 	[01]
		} else if (copy_u8Speed == GPIO_Speed_High) {
			copy_GPIO_TypeDefPORT->OSPEEDER |= ((0b10) << (copy_u8PIN * 2)); // High Speed	 	[10]
		} else {
			copy_GPIO_TypeDefPORT->OSPEEDER |= ((0b11) << (copy_u8PIN * 2)); // Very High Speed	[10]
		}
	}
}

void MGPIO_voidSetPinValue(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN,
		u8 copy_u8Value) {
	if (copy_u8Value == GPIO_High) {
		copy_GPIO_TypeDefPORT->BSRR = (1 << copy_u8PIN);
	} else {
		copy_GPIO_TypeDefPORT->BSRR = (1 << (copy_u8PIN + 16));
	}
}

void MGPIO_voidTogPinValue(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN) {
	u8 Local_u8GetBit;

	Local_u8GetBit = GET_BIT(copy_GPIO_TypeDefPORT->ODR, copy_u8PIN);

	if (Local_u8GetBit == GPIO_High) {
		copy_GPIO_TypeDefPORT->BSRR = (1 << (copy_u8PIN + 16));
	} else {
		copy_GPIO_TypeDefPORT->BSRR = (1 << copy_u8PIN);
	}
}
u8 MGPIO_u8GetPinValue(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN) {
	u8 Local_u8GetBit;
	Local_u8GetBit = GET_BIT(copy_GPIO_TypeDefPORT->IDR, copy_u8PIN);
	return Local_u8GetBit;
}
MCAL_Status_TypeDef MGPIO_MCAL_Status_TypeDefLockGPIO(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN) {

	volatile u32 tmp = (0x1UL << 16U);
	volatile u32 Pin = (1 << copy_u8PIN);

	/* Apply lock key write sequence */
	tmp |= Pin;
	/* Set LCKx bit(s): LCKK='1' + LCK[15-0] */
	copy_GPIO_TypeDefPORT->LCKR = tmp;
	/* Reset LCKx bit(s): LCKK='0' + LCK[15-0] */
	copy_GPIO_TypeDefPORT->LCKR = Pin;
	/* Set LCKx bit(s): LCKK='1' + LCK[15-0] */
	copy_GPIO_TypeDefPORT->LCKR = tmp;
	/* Read LCKR register. This read is mandatory to complete key lock sequence */
	tmp = copy_GPIO_TypeDefPORT->LCKR;

	if (GET_BIT(copy_GPIO_TypeDefPORT->LCKR,16) == 1) {
		return HAL_STATUS_OK;
	} else {
		return HAL_STATUS_ERROR;
	}
}

MCAL_Status_TypeDef MGPIO_MCAL_Status_TypeDefEnableAlternateFunction(GPIO_TypeDef *copy_GPIO_TypeDefPORT, GPIOx_AF_t copy_u8AlternateFunction)
{

	/* Alternate Function Mapping
	 * The alternate function table in page No. 62 could be mapped in
	 * 32 bit number.
	 * 1- the first 4bits (LSB) will be for alternate function index (0..15)
	 * 2- the second 4bits (MSB)will be for Pin index(0..15)
	*/


	u8 Local_u8PinIndex;
	u8 Local_u8AlternateFunctionIndex;

	Local_u8PinIndex = (copy_u8AlternateFunction >> (4));
	Local_u8AlternateFunctionIndex = (copy_u8AlternateFunction & (0x0F));


	if (Local_u8PinIndex <= 7)
	{
		// Using AFRL Register
		trace_printf("Pin Index = %d\n",Local_u8PinIndex);
		trace_printf(" AF Index = %d\n",Local_u8AlternateFunctionIndex);

		copy_GPIO_TypeDefPORT->AFRL &= ~((0b1111) << (Local_u8PinIndex * 4)); // Reset the Alternate Function Bits
		copy_GPIO_TypeDefPORT->AFRL |= ((Local_u8AlternateFunctionIndex) << (Local_u8PinIndex * 4));
	}
	else
	{
		Local_u8PinIndex -= 8;
		// Using AFRH Register
		trace_printf("Pin Index = %d\n",Local_u8PinIndex);
		trace_printf(" AF Index = %d\n",Local_u8AlternateFunctionIndex);

		copy_GPIO_TypeDefPORT->AFRH &= ~((0b1111) << (Local_u8PinIndex * 4)); // Reset the Alternate Function Bits
		copy_GPIO_TypeDefPORT->AFRH |= ((Local_u8AlternateFunctionIndex) << (Local_u8PinIndex * 4));
	}

	return HAL_STATUS_OK;
}
MCAL_Status_TypeDef MGPIO_MCAL_Status_TypeDefResetAlternateFunction(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN)
{


	/* Alternate Function Mapping
	 * The alternate function table in page No. 62 could be mapped in
	 * 32 bit number.
	 * 1- the first 4bits (LSB) will be for alternate function index (0..15)
	 * 2- the second 4bits (MSB)will be for Pin index(0..15)
	*/


	if (copy_u8PIN <= 7)
	{
		// Using AFRL Register
		trace_printf("Pin Index = %d\n",copy_u8PIN);

		copy_GPIO_TypeDefPORT->AFRL &= ~((0b1111) << (copy_u8PIN * 4)); // Reset the Alternate Function Bits
	}
	else
	{
		copy_u8PIN -= 8;
		// Using AFRH Register
		trace_printf("Pin Index = %d\n",copy_u8PIN);

		copy_GPIO_TypeDefPORT->AFRH &= ~((0b1111) << (copy_u8PIN * 4)); // Reset the Alternate Function Bits
	}

	return HAL_STATUS_OK;
}
