#include "STD_TYPES.h"
#include "NONSTD_TYPES.h"
#include "BIT_MATH.h"

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"

#include "RCC_interface.h"
#include "DIO_interface.h"

void Delay(u16 copy_u16Delay);

int main(void)
{
	trace_puts("Initializing RCC ...");
	MRCC_voidInitSystemClock(RCC_CLK_HSE);
	u8 RCC_Status = MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,0);

	trace_printf("RCC_Status = %d\n",RCC_Status);
	RCC_Status = MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,1);
	trace_printf("RCC_Status = %d\n",RCC_Status);
	RCC_Status = MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,2);
	trace_printf("RCC_Status = %d\n",RCC_Status);
	RCC_Status = MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,3);
	trace_printf("RCC_Status = %d\n",RCC_Status);
	RCC_Status = MRCC_u8EnablePeripheralClock(RCC_Bus_AHB1,4);

	MGPIO_voidSetPinMode(GPIOD,12,GPIO_Mode_Output_PP,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_Medium);
	MGPIO_voidSetPinMode(GPIOD,13,GPIO_Mode_Output_PP,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_Medium);
	MGPIO_voidSetPinMode(GPIOD,14,GPIO_Mode_Output_PP,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_Medium);
	MGPIO_voidSetPinMode(GPIOD,15,GPIO_Mode_Output_PP,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_Medium);
	MGPIO_voidSetPinMode(GPIOA,0,GPIO_Mode_Input,GPIO_PULL_UP_DOWN_NOPULL,GPIO_Speed_NoSpeed);

	MGPIO_HAL_Status_TypeDefEnableAlternateFunction(GPIOA,AF_TIM1_ETR_PA12_AF1);
	MGPIO_HAL_Status_TypeDefResetAlternateFunction(GPIOA,12);

	while (1)
    {
		MGPIO_voidSetPinValue(GPIOD,12,MGPIO_u8GetPinValue(GPIOA,0));
    }
}

void Delay(u16 copy_u16Delay) {
	for (unsigned int i = 0; i < copy_u16Delay; i++) {
		for (unsigned int j = 0; j < 1000; j++) {
			asm("NOP");
		}
	}
}
