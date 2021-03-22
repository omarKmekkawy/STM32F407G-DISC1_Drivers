/***********************************************************************************************/
/*                                                                                             */
/*  Author     : Omar Mekkawy                                                                  */
/*  Date       : 4 SEP 2020                                                                    */
/*  Version    : V01                                                                           */
/*  Target H/W : STM32F103                                                                     */
/*                                                                                             */
/***********************************************************************************************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H


#define RCC_Base_Address 0x40023800


#define RCC_CR 			*((u32*)(RCC_Base_Address + 0x00)) 		// RCC clock control register, Address offset: 0x00
#define RCC_PLLCFGR 	*((u32*)(RCC_Base_Address + 0x04))		// RCC PLL configuration register, Address offset: 0x04
#define RCC_CFGR		*((u32*)(RCC_Base_Address + 0x08)) 		// RCC clock configuration register, Address offset: 0x08
#define RCC_CIR 		*((u32*)(RCC_Base_Address + 0x0C))		// RCC clock interrupt register, Address offset: 0x0C
#define RCC_AHB1RSTR 	*((u32*)(RCC_Base_Address + 0x10))		// RCC AHB1 peripheral reset register, Address offset: 0x10
#define RCC_AHB2RSTR 	*((u32*)(RCC_Base_Address + 0x14))		// RCC AHB2 peripheral reset register, Address offset: 0x14
#define RCC_AHB3RSTR 	*((u32*)(RCC_Base_Address + 0x18))		// RCC AHB3 peripheral reset register, Address offset: 0x18
#define RCC_APB1RSTR 	*((u32*)(RCC_Base_Address + 0x20))		// RCC APB1 peripheral reset register, Address offset: 0x20
#define RCC_APB2RSTR 	*((u32*)(RCC_Base_Address + 0x24))		// RCC APB2 peripheral reset register, Address offset: 0x24
#define RCC_AHB1ENR 	*((u32*)(RCC_Base_Address + 0x30))		// RCC AHB1 peripheral clock enable register, Address offset: 0x30
#define RCC_AHB2ENR 	*((u32*)(RCC_Base_Address + 0x34))		// RCC AHB2 peripheral clock enable register, Address offset: 0x34
#define RCC_AHB3ENR 	*((u32*)(RCC_Base_Address + 0x38))		// RCC AHB3 peripheral clock enable register, Address offset: 0x38
#define RCC_APB1ENR 	*((u32*)(RCC_Base_Address + 0x40))		// RCC APB1 peripheral clock enable register, Address offset: 0x40
#define RCC_APB2ENR 	*((u32*)(RCC_Base_Address + 0x44))		// RCC APB2 peripheral clock enable register, Address offset: 0x44
#define RCC_AHB1LPENR 	*((u32*)(RCC_Base_Address + 0x50))		// RCC AHB1 peripheral clock enable in low power mode register, Address offset: 0x50
#define RCC_AHB2LPENR 	*((u32*)(RCC_Base_Address + 0x54))		// RCC AHB2 peripheral clock enable in low power mode register,	Address offset: 0x54
#define RCC_AHB3LPENR 	*((u32*)(RCC_Base_Address + 0x58))		// RCC AHB3 peripheral clock enable in low power mode register, Address offset: 0x58
#define RCC_APB1LPENR 	*((u32*)(RCC_Base_Address + 0x60))		// RCC APB1 peripheral clock enable in low power mode register, Address offset: 0x60
#define RCC_APB2LPENR 	*((u32*)(RCC_Base_Address + 0x64))		// RCC APB2 peripheral clock enable in low power mode register, Address offset: 0x64
#define RCC_BDCR 		*((u32*)(RCC_Base_Address + 0x70))		// RCC Backup domain control register, Address offset: 0x70
#define RCC_CSR 		*((u32*)(RCC_Base_Address + 0x74))		// RCC clock control & status register, Address offset: 0x74
#define RCC_SSCGR 		*((u32*)(RCC_Base_Address + 0x80))		// RCC spread spectrum clock generation register, Address offset: 0x80
#define RCC_PLLI2SCFGR  *((u32*)(RCC_Base_Address + 0x84))		// RCC PLLI2S configuration register, Address offset: 0x84


#endif
