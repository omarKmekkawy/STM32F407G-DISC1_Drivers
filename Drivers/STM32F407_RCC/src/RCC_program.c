/***********************************************************************************************/
/*                                                                                             */
/*  Author     : Omar Mekkawy                                                                  */
/*  Date       : 4 SEP 2020                                                                    */
/*  Version    : V01                                                                           */
/*  Target H/W : STM32F103                                                                     */
/*                                                                                             */
/***********************************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"

void MRCC_voidInitSystemClock(u8 Copy_u8Rcc_CLK){

	if (Copy_u8Rcc_CLK == RCC_CLK_HSI) {
		RCC_CR = 0x00000001;
	} else if (Copy_u8Rcc_CLK == RCC_CLK_HSE) {
		RCC_CR = 0x00010000;				// Enable the HSE
		while (GET_BIT(RCC_CR,17) == 0) 	// Wait until the HSE is ready and stable
		{
			trace_puts("HSE not ready");
		}
		RCC_CFGR = 0x00000001;			// Switch system clock to HSE
		CLR_BIT(RCC_CR, 24);
	} else {
		RCC_CR = 0x01000000;
	}
}
u8 MRCC_u8EnablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralID) {
	if (Copy_u8PeripheralID <= 31) {
		switch (Copy_u8BusName) {
		case RCC_Bus_AHB1:
			SET_BIT(RCC_AHB1ENR, Copy_u8PeripheralID);
			break;
		case RCC_Bus_AHB2:
			SET_BIT(RCC_AHB2ENR, Copy_u8PeripheralID);
			break;
		case RCC_Bus_AHB3:
			SET_BIT(RCC_AHB3ENR, Copy_u8PeripheralID);
			break;
		case RCC_Bus_APB1:
			SET_BIT(RCC_APB1ENR, Copy_u8PeripheralID);
			break;
		case RCC_Bus_APB2:
			SET_BIT(RCC_APB2ENR, Copy_u8PeripheralID);
			break;
		}
		return SUCCESS;
	} else {
		return FAILURE;
	}
}
u8 MRCC_u8DisablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralID) {
	if (Copy_u8PeripheralID <= 31) {
		switch (Copy_u8BusName) {
		case RCC_Bus_AHB1:
			CLR_BIT(RCC_AHB1ENR, Copy_u8PeripheralID);
			break;
		case RCC_Bus_AHB2:
			CLR_BIT(RCC_AHB2ENR, Copy_u8PeripheralID);
			break;
		case RCC_Bus_AHB3:
			CLR_BIT(RCC_AHB3ENR, Copy_u8PeripheralID);
			break;
		case RCC_Bus_APB1:
			CLR_BIT(RCC_APB1ENR, Copy_u8PeripheralID);
			break;
		case RCC_Bus_APB2:
			CLR_BIT(RCC_APB2ENR, Copy_u8PeripheralID);
			break;
		}
		return SUCCESS;
	} else {
		return FAILURE;
	}
}

