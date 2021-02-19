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

// MCO2
#define RCC_MCO2_SRC_SYSCLK 	0x00
#define RCC_MCO2_SRC_PLLI2SCLK 	0x01
#define RCC_MCO2_SRC_HSE 		0x02
#define RCC_MCO2_SRC_PLLCLK		0x03
#define RCC_MCO2_PRESCALER_1	0x00
#define RCC_MCO2_PRESCALER_2	0x01
#define RCC_MCO2_PRESCALER_3	0x02
#define RCC_MCO2_PRESCALER_4	0x03
#define RCC_MCO2_PRESCALER_5	0x04

// MCO1
#define RCC_MCO1_SRC_LSE		0x00
#define RCC_MCO1_SRC_HSE		0x01
#define RCC_MCO1_SRC_HSI		0x02
#define RCC_MCO1_SRC_PLLCLK		0x03
#define RCC_MCO1_PRESCALER_1	0x00
#define RCC_MCO1_PRESCALER_2	0x01
#define RCC_MCO1_PRESCALER_3	0x02
#define RCC_MCO1_PRESCALER_4	0x03
#define RCC_MCO1_PRESCALER_5	0x04


void MRCC_voidInitSystemClock(u8 Copy_u8Rcc_CLK);
void MRCC_voidInitRtcClock(u8 Copy_u8Rtc_CLK);
u8 MRCC_u8EnablePeripheralClock(u8 Copy_u8BusName,u8 Copy_u8PeripheralID);
u8 MRCC_u8DisablePeripheralClock(u8 Copy_u8BusName,u8 Copy_u8PeripheralID);
u8 MRCC_u8InitializeMCO1(u8 Copy_u8McoSource,u8 Copy_u8McoPrescaler);
u8 MRCC_u8InitializeMCO2(u8 Copy_u8McoSource,u8 Copy_u8McoPrescaler);

#endif
