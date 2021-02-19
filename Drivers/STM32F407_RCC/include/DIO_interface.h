/***********************************************************************************************/
/*                                                                                             */
/*  Author     : Omar Mekkawy                                                                  */
/*  Date       : 4 SEP 2020                                                                    */
/*  Version    : V01                                                                           */
/*  Target H/W : STM32F407                                                                     */
/*                                                                                             */
/***********************************************************************************************/
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H


// GPIO Output Value
#define GPIO_High						0x01
#define GPIO_Low						0x00

// GPIO Mode
#define GPIO_Mode_Input					0x00
#define GPIO_Mode_Analog				0x01
#define GPIO_Mode_AF_PP					0x02
#define GPIO_Mode_AF_OD					0x03
#define GPIO_Mode_Output_PP				0x04
#define GPIO_Mode_Output_OD				0x05

// Internal Pull Up / Pull Down Resistor
#define GPIO_PULL_UP_DOWN_NOPULL		0x00
#define GPIO_PULL_UP_DOWN_PULLUP		0x01
#define GPIO_PULL_UP_DOWN_PULLDOWN		0x02

// GPIO output Speed
#define GPIO_Speed_NoSpeed				0x00
#define GPIO_Speed_Low					0x01
#define GPIO_Speed_Medium				0x02
#define GPIO_Speed_High					0x03
#define GPIO_Speed_VeryHigh				0x04


#define GPIOA_BASE_ADDRESS 0x40020000
#define GPIOB_BASE_ADDRESS 0x40020400
#define GPIOC_BASE_ADDRESS 0x40020800
#define GPIOD_BASE_ADDRESS 0x40020C00
#define GPIOE_BASE_ADDRESS 0x40021000
#define GPIOF_BASE_ADDRESS 0x40021400
#define GPIOG_BASE_ADDRESS 0x40021800
#define GPIOH_BASE_ADDRESS 0x40021C00
#define GPIOI_BASE_ADDRESS 0x40022000

typedef struct {
	volatile u32 MODER;		// Offset 0x00
	volatile u32 OTYPER;	// Offset 0x04
	volatile u32 OSPEEDER;	// Offset 0x08
	volatile u32 PUPDR;		// Offset 0x0C
	volatile u32 IDR;		// Offset 0x10
	volatile u32 ODR;		// Offset 0x14
	volatile u32 BSRR;		// Offset 0x18
	volatile u32 LCKR;		// Offset 0x1C
	volatile u32 AFRL;		// Offset 0x20
	volatile u32 AFRH; 		// Offset 0x24
} GPIO_TypeDef;

#define GPIOA ((GPIO_TypeDef*)(GPIOA_BASE_ADDRESS))
#define GPIOB ((GPIO_TypeDef*)(GPIOB_BASE_ADDRESS))
#define GPIOC ((GPIO_TypeDef*)(GPIOC_BASE_ADDRESS))
#define GPIOD ((GPIO_TypeDef*)(GPIOD_BASE_ADDRESS))
#define GPIOE ((GPIO_TypeDef*)(GPIOE_BASE_ADDRESS))
#define GPIOF ((GPIO_TypeDef*)(GPIOF_BASE_ADDRESS))
#define GPIOG ((GPIO_TypeDef*)(GPIOG_BASE_ADDRESS))
#define GPIOH ((GPIO_TypeDef*)(GPIOH_BASE_ADDRESS))
#define GPIOI ((GPIO_TypeDef*)(GPIOI_BASE_ADDRESS))

void MGPIO_voidSetPinMode(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN, u8 copy_u8Mode,u8 copy_u8PULL, u8 copy_u8Speed);
void MGPIO_voidSetPinValue(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN, u8 copy_u8Value);
void MGPIO_voidTogPinValue(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN);
u8 MGPIO_u8GetPinValue(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN);
HAL_Status_TypeDef MGPIO_HAL_Status_TypeDefLockGPIO(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN);
HAL_Status_TypeDef MGPIO_HAL_Status_TypeDefEnableAlternateFunction(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8AlternateFunction);
HAL_Status_TypeDef MGPIO_HAL_Status_TypeDefResetAlternateFunction(GPIO_TypeDef *copy_GPIO_TypeDefPORT, u8 copy_u8PIN);

#endif

