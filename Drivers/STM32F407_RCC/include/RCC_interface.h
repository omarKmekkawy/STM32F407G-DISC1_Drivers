/***********************************************************************************************/
/*                                                                                             */
/*  Author     : Omar Mekkawy                                                                  */
/*  Date       : 4 SEP 2020                                                                    */
/*  Version    : V01                                                                           */
/*  Target H/W : STM32F103                                                                     */
/*                                                                                             */
/***********************************************************************************************/

#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

// Status Code
#define SUCCESS 0x00
#define FAILURE	0x01

// System clock types
#define RCC_CLK_HSI 0x00
#define RCC_CLK_HSE 0x01
#define RCC_CLK_PLL 0x02

// Bus Types
#define RCC_Bus_AHB1 0x01
#define RCC_Bus_AHB2 0x02
#define RCC_Bus_AHB3 0x03

#define RCC_Bus_APB1 0x04
#define RCC_Bus_APB2 0x05

typedef enum {
// MCO2
	RCC_MCO2_SRC_SYSCLK,
	RCC_MCO2_SRC_PLLI2SCLK,
	RCC_MCO2_SRC_HSE,
	RCC_MCO2_SRC_PLLCLK,
} MCAL_RCC_MCO2_SRC;

typedef enum {
	RCC_MCO2_PRESCALER_1,
	RCC_MCO2_PRESCALER_2,
	RCC_MCO2_PRESCALER_3,
	RCC_MCO2_PRESCALER_4,
	RCC_MCO2_PRESCALER_5,
} MCAL_RCC_MCO_PRE;

typedef enum {
// MCO1
	RCC_MCO1_SRC_LSE,
	RCC_MCO1_SRC_HSE,
	RCC_MCO1_SRC_HSI,
	RCC_MCO1_SRC_PLLCLK,
} MCAL_RCC_MCO1_SRC;

/* The maximum frequency of the AHB  is 168 MHz
 * The maximum frequency of the APB2 is  84 MHz
 * The maximum frequency of the APB1 is  42 MHz
 * The USB OTG FS clock is 48MHz, the RNG ( Random Number Generator ) clock <= 48MHz
 * The SDIO clock <= 48MHz which is coming from a specific output of PLL (PLL48CLK)
 * */

void MRCC_voidInitSystemClock(u8 Copy_u8Rcc_CLK);
void MRCC_voidInitRtcClock(u8 Copy_u8Rtc_CLK);
MCAL_Status_TypeDef MRCC_u8EnablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralID);
MCAL_Status_TypeDef MRCC_u8DisablePeripheralClock(u8 Copy_u8BusName, u8 Copy_u8PeripheralID);
MCAL_Status_TypeDef MRCC_u8EnableMCO1(MCAL_RCC_MCO1_SRC Copy_u8McoSource, MCAL_RCC_MCO_PRE Copy_u8McoPrescaler);
MCAL_Status_TypeDef MRCC_u8EnableMCO2(MCAL_RCC_MCO2_SRC Copy_u8McoSource, MCAL_RCC_MCO_PRE Copy_u8McoPrescaler);
MCAL_Status_TypeDef MRCC_u8DisableMCO1(void);
MCAL_Status_TypeDef MRCC_u8DisableMCO2(void);

#endif
