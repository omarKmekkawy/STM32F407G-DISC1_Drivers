#include "STD_TYPES.h"
#include "NONSTD_TYPES.h"
#include "BIT_MATH.h"

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"

#include "RCC_interface.h"
#include "DIO_interface.h"
#include "SCB_interface.h"
#include "NVIC_interface.h"
#include "EXTI_interface.h"
#include "SYSCFG_interface.h"
#include "STK_interface.h"

void Delay(u16 copy_u16Delay);


int main(void)
{

	MRCC_voidInitSystemClock(RCC_CLK_HSE);

	MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,0);
	MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,1);
	MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,2);
	MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,3);
	MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,4);
	MRCC_u8EnablePeripheralClock(RCC_Bus_APB2,14);

	MGPIO_voidSetPinMode(GPIOD,12,GPIO_Mode_Output_PP,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_Medium);
	MGPIO_voidSetPinMode(GPIOD,13,GPIO_Mode_Output_PP,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_Medium);
	MGPIO_voidSetPinMode(GPIOD,14,GPIO_Mode_Output_PP,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_Medium);
	MGPIO_voidSetPinMode(GPIOD,15,GPIO_Mode_Output_PP,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_Medium);
	MGPIO_voidSetPinMode(GPIOA,0,GPIO_Mode_Input,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_NoSpeed);

	MNVIC_void_Init();

	MNVIC_void_EnableIRQ(IRQn_EXTI0);
	MNVIC_void_EnableIRQ(IRQn_EXTI1);
	MNVIC_void_SetPriority(IRQn_EXTI0,3,2);

	MEXTI_voidEnableExternalInterrupt(EXTI0);
	MEXTI_voidEnableExternalInterrupt(EXTI1);

	MSYSCFG_voidConfigureExternalInterrupt(PA0);
	//MSYSCFG_voidConfigureExternalInterrupt(PB5);
	//MSYSCFG_voidConfigureExternalInterrupt(PH2);

	//MEXTI_voidGenerateSoftwareInterrupt(EXTI0);
	MEXTI_voidSetEdgeTriggering(EXTI0,MEXTI_FalingEdgeTrigger);


	MSTK_voidInit(STK_CLKSOURCE_AHB_PROCESSOR_CLK);

	while (1)
    {
		MGPIO_voidTogPinValue(GPIOD,13);
		MSTK_voidSetBusyWait(1000000);
    }
}

void Delay(u16 copy_u16Delay) {
	for (unsigned int i = 0; i < copy_u16Delay; i++) {
		for (unsigned int j = 0; j < 1000; j++) {
			asm("NOP");
		}
	}
}

void EXTI0_IRQHandler(void)
 {
	MGPIO_voidTogPinValue(GPIOD,12);
	MEXTI_voidGenerateSoftwareInterrupt(EXTI1);
	MEXTI_voidClearPendingInterrupt(EXTI0);
 }
void EXTI1_IRQHandler(void)
 {
	MEXTI_voidClearPendingInterrupt(EXTI1);
	MGPIO_voidTogPinValue(GPIOD,14);
 }
