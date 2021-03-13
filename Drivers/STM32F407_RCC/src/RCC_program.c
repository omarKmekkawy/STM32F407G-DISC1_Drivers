/***********************************************************************************************/
/*                                                                                             */
/*  Author     : Omar Mekkawy                                                                  */
/*  Date       : 4 SEP 2020                                                                    */
/*  Version    : V01                                                                           */
/*  Target H/W : STM32F103                                                                     */
/*                                                                                             */
/***********************************************************************************************/

#include "STD_TYPES.h"
#include "NONSTD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"

void MRCC_voidInitSystemClock(u8 Copy_u8Rcc_CLK) {

	if (Copy_u8Rcc_CLK == RCC_CLK_HSI) {
		RCC_CR = 0x00000001;
	} else if (Copy_u8Rcc_CLK == RCC_CLK_HSE) {
		RCC_CR = 0x00010000;				// Enable the HSE
		while (GET_BIT(RCC_CR,17) == 0) // Wait until the HSE is ready and stable
		{
			trace_puts("HSE not ready");
		}
		RCC_CFGR = 0x00000001;			// Switch system clock to HSE
		CLR_BIT(RCC_CR, 24);
	} else {
		RCC_CR = 0x01000000;
	}
}
MCAL_Status_TypeDef MRCC_u8EnablePeripheralClock(u8 Copy_u8BusName,
		u8 Copy_u8PeripheralID) {
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
MCAL_Status_TypeDef MRCC_u8DisablePeripheralClock(u8 Copy_u8BusName,
		u8 Copy_u8PeripheralID) {
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

MCAL_Status_TypeDef MRCC_u8EnableMCO1(MCAL_RCC_MCO1_SRC Copy_u8McoSource,MCAL_RCC_MCO_PRE Copy_u8McoPrescaler) {

	// Clear the MCO1[0:1] bits in RCC_CFGR register
	RCC_CFGR |= ~((0b11) << 21);

	switch (Copy_u8McoSource) {
	case RCC_MCO1_SRC_HSI:
		RCC_CFGR |= ((0b00) << 21);
		break;
	case RCC_MCO1_SRC_LSE:
		RCC_CFGR |= ((0b01) << 21);
		break;
	case RCC_MCO1_SRC_HSE:
		RCC_CFGR |= ((0b10) << 21);
		break;
	case RCC_MCO1_SRC_PLLCLK:
		RCC_CFGR |= ((0b11) << 21);
		break;
	default:
		return HAL_STATUS_ERROR;
		break;
	}

	// Clear the MCO1PRE[26:24] bits in RCC_CFGR register
	RCC_CFGR |= ~((0b111) << 24);


	switch (Copy_u8McoPrescaler) {
	case RCC_MCO2_PRESCALER_1:
		RCC_CFGR |= ((0b000) << 24);
		break;
	case RCC_MCO2_PRESCALER_2:
		RCC_CFGR |= ((0b100) << 24);
		break;
	case RCC_MCO2_PRESCALER_3:
		RCC_CFGR |= ((0b101) << 24);
		break;
	case RCC_MCO2_PRESCALER_4:
		RCC_CFGR |= ((0b110) << 24);
		break;
	case RCC_MCO2_PRESCALER_5:
		RCC_CFGR |= ((0b111) << 24);
		break;
	default:
		return HAL_STATUS_ERROR;
		break;
	}

	return HAL_STATUS_OK;
}

MCAL_Status_TypeDef MRCC_u8EnableMCO2(MCAL_RCC_MCO2_SRC Copy_u8McoSource,MCAL_RCC_MCO_PRE Copy_u8McoPrescaler) {
	// Clear the MCO1[31:30] bits in RCC_CFGR register
		RCC_CFGR |= ~((0b11) << 30);

		switch (Copy_u8McoSource) {
		case RCC_MCO2_SRC_SYSCLK:
			RCC_CFGR |= ((0b00) << 30);
			break;
		case RCC_MCO2_SRC_PLLI2SCLK:
			RCC_CFGR |= ((0b01) << 30);
			break;
		case RCC_MCO2_SRC_HSE:
			RCC_CFGR |= ((0b10) << 30);
			break;
		case RCC_MCO2_SRC_PLLCLK:
			RCC_CFGR |= ((0b11) << 30);
			break;
		default:
			return HAL_STATUS_ERROR;
			break;
		}

		// Clear the MCO1PRE[29:27] bits in RCC_CFGR register
		RCC_CFGR |= ~((0b111) << 27);


		switch (Copy_u8McoPrescaler) {
		case RCC_MCO2_PRESCALER_1:
			RCC_CFGR |= ((0b000) << 27);
			break;
		case RCC_MCO2_PRESCALER_2:
			RCC_CFGR |= ((0b100) << 27);
			break;
		case RCC_MCO2_PRESCALER_3:
			RCC_CFGR |= ((0b101) << 27);
			break;
		case RCC_MCO2_PRESCALER_4:
			RCC_CFGR |= ((0b110) << 27);
			break;
		case RCC_MCO2_PRESCALER_5:
			RCC_CFGR |= ((0b111) << 27);
			break;
		default:
			return HAL_STATUS_ERROR;
			break;
		}

		return HAL_STATUS_OK;
}
MCAL_Status_TypeDef MRCC_u8DisableMCO1(void) {

}
MCAL_Status_TypeDef MRCC_u8DisableMCO2(void) {

}
