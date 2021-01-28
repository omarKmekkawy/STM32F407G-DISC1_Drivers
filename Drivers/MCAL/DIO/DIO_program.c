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

void MGPIO_voidSetPinMode(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN,
		u8 copy_u8Mode, u8 copy_u8PULL, u8 copy_u8Speed) {

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
HAL_Status_TypeDef MGPIO_voidLockGPIO(GPIO_TypeDef *copy_GPIO_TypeDefPORT,u8 copy_u8PIN) {

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
