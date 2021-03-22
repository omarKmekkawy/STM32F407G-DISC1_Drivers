/*
 * SYSCFG_program.c
 *
 *  Created on: Mar 12, 2021
 *      Author: black
 */

#include "NONSTD_TYPES.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include <stdio.h>
#include <stdlib.h>
#include "diag/Trace.h"

#include "SYSCFG_interface.h"
#include "SYSCFG_private.h"
#include "SYSCFG_config.h"


void MSYSCFG_voidConfigureExternalInterrupt(SYSCFG_EXTI_LINE_t ExternalInterruptEventLine)
{

	volatile u8 Local_EXTILineNo = (((u8)ExternalInterruptEventLine)>>4);
	volatile u8 Local_EXTIMultiplexerPinIndex = ((u8)ExternalInterruptEventLine)&(0x0F);
	volatile u8 Local_EXTICRxRegIndex = 0;
	volatile u8 Local_ShiftingIndex = 0;

	trace_printf("Local_EXTILineNo = %d\n",Local_EXTILineNo);
	trace_printf("Local_EXTIMultiplexerPinIndex = %d\n",Local_EXTIMultiplexerPinIndex);

	if ((ExternalInterruptEventLine >= PA0) && (ExternalInterruptEventLine < PA4))
	{
		Local_EXTICRxRegIndex = 0;
	}
	else if ((ExternalInterruptEventLine >= PA4) && (ExternalInterruptEventLine < PA8))
	{
		Local_EXTICRxRegIndex = 1;
	}
	else if ((ExternalInterruptEventLine >= PA8) && (ExternalInterruptEventLine < PA12))
	{
		Local_EXTICRxRegIndex = 2;
	}
	else if ((ExternalInterruptEventLine >= PA12) && (ExternalInterruptEventLine < PH15))
	{
		Local_EXTICRxRegIndex = 3;
	}

	Local_ShiftingIndex = Local_EXTILineNo % 4;

	MSYSCFG->EXTICR[Local_EXTICRxRegIndex] &= ~((0b1111)<<(Local_ShiftingIndex * 4)); // Clear the 4bits
	MSYSCFG->EXTICR[Local_EXTICRxRegIndex] |= (u32)((ExternalInterruptEventLine & (0x0F))<<(Local_ShiftingIndex * 4));
}
