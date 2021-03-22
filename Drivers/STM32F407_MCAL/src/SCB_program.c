/*
 * SCB_program.c
 *
 *  Created on: Mar 11, 2021
 *      Author: black
 */

#include "NONSTD_TYPES.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SCB_interface.h"
#include "SCB_private.h"
#include "SCB_config.h"


/**
 *
 * @param GroupingValue
 */
void MSCB_voidSetGrouping(u32 GroupingValue)
{
	SCB->AIRCR = GroupingValue;
}

/**
 *	@brief Perform system reset request
 *	@details
 */
void MSCB_voidSystemReset(void)
{
	SCB->AIRCR |= (1<<2);
}

/**
 *
 * @return
 */
u32 MSCB_u32GetPriorityGrouping(void)
{
	return (((SCB->AIRCR)&(7<<8)) >> 8);
}

