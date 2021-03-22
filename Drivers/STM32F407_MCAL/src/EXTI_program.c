/*
 * EXTI_program.c
 *
 *  Created on: Mar 12, 2021
 *      Author: black
 */

#include "STD_TYPES.h"
#include "NONSTD_TYPES.h"
#include "BIT_MATH.h"
#include "EXTI_interface.h"
#include "EXTI_private.h"
#include "EXTI_config.h"



void MEXTI_voidSetEdgeTriggering(EXTI_IRQn Copy_EXTILine,MEXTI_Edge EdgeTriggering)
{
	if (EdgeTriggering == MEXTI_RisingEdgeTrigger)
	{
		SET_BIT(MEXTI->RTSR,Copy_EXTILine);
	}
	else if(EdgeTriggering == MEXTI_FalingEdgeTrigger)
	{
		SET_BIT(MEXTI->FTSR,Copy_EXTILine);
	}
	else
	{
		SET_BIT(MEXTI->RTSR,Copy_EXTILine);
		SET_BIT(MEXTI->FTSR,Copy_EXTILine);
	}
}
void MEXTI_voidEnableExternalInterrupt(EXTI_IRQn Copy_EXTILine)
{
	SET_BIT(MEXTI->IMR,Copy_EXTILine);
}
void MEXTI_voidDisableExternalInterrupt(EXTI_IRQn Copy_EXTILine)
{
	CLR_BIT(MEXTI->RTSR,Copy_EXTILine);
	CLR_BIT(MEXTI->FTSR,Copy_EXTILine);
	CLR_BIT(MEXTI->IMR,Copy_EXTILine);
}
void MEXTI_voidGenerateSoftwareInterrupt(EXTI_IRQn Copy_EXTILine)
{
	SET_BIT(MEXTI->SWIER,Copy_EXTILine);
}
void MEXTI_voidClearPendingInterrupt(EXTI_IRQn Copy_EXTILine)
{
	SET_BIT(MEXTI->PR,Copy_EXTILine);
}


