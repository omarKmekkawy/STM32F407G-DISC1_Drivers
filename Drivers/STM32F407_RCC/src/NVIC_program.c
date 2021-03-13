#include "NONSTD_TYPES.h"
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "SCB_interface.h"

#include "NVIC_interface.h"
#include "NVIC_private.h"
#include "NVIC_config.h"



/**
 * @brief
 * @details
 *
 */
void MNVIC_void_Init(void)
{
	MSCB_voidSetGrouping(MNVIC_GROUB_SUB_DISTRIBUTION);
}


/**
 * @brief
 * @details
 * @param priority_grouping
 */
void MNVIC_void_SetPriorityGrouping(u32 priority_grouping)
{
	MSCB_voidSetGrouping(priority_grouping);
}


/**
 * @brief
 * @details
 * @param IRQn
 */
void MNVIC_void_EnableIRQ(IRQn_t IRQn)
{

	u32 Local_ShiftingValue = 0;
	u32 Local_RegisterNo = 0;

	Local_RegisterNo = IRQn / 32;

	if (IRQn <=31)
	{
		Local_ShiftingValue = IRQn;
	}
	else
	{
		Local_ShiftingValue = IRQn - (Local_RegisterNo*32);
	}
	MNVIC->ISER[Local_RegisterNo] |= (1 << Local_ShiftingValue);
}


/**
 * @brief
 * @details
 * @param IRQn
 */
void MNVIC_void_DisableIRQ(IRQn_t IRQn)
{
	u32 Local_ShiftingValue = 0;
	u32 Local_RegisterNo = 0;

	Local_RegisterNo = IRQn / 32;

	if (IRQn <=31)
	{
		Local_ShiftingValue = IRQn;
	}
	else
	{
		Local_ShiftingValue = IRQn - (Local_RegisterNo*32);
	}
	MNVIC->ICER[Local_RegisterNo] |= (1 << Local_ShiftingValue);
}


/**
 * @brief
 * @details
 * @param IRQn
 * @return
 */
u32 MNVIC_u32_GetPendingIRQ(IRQn_t IRQn) {
	u32 Local_ShiftingValue = 0;
	u32 Local_RegisterNo = 0;

	Local_RegisterNo = IRQn / 32;

	if (IRQn <= 31) {
		Local_ShiftingValue = IRQn;
	} else {
		Local_ShiftingValue = IRQn - (Local_RegisterNo * 32);
	}
	return (GET_BIT(MNVIC->ISPR[Local_RegisterNo],Local_ShiftingValue));
}


/**
 * @brief
 * @details
 * @param IRQn
 */
void MNVIC_void_SetPendingIRQ(IRQn_t IRQn) {
	u32 Local_ShiftingValue = 0;
	u32 Local_RegisterNo = 0;

	Local_RegisterNo = IRQn / 32;

	if (IRQn <= 31) {
		Local_ShiftingValue = IRQn;
	} else {
		Local_ShiftingValue = IRQn - (Local_RegisterNo * 32);
	}
	MNVIC->ISPR[Local_RegisterNo] |= (1 << Local_ShiftingValue);
}


/**
 * @brief
 * @details
 * @param IRQn
 */
void MNVIC_void_ClearPendingIRQ (IRQn_t IRQn)
{
	u32 Local_ShiftingValue = 0;
	u32 Local_RegisterNo = 0;

	Local_RegisterNo = IRQn / 32;

	if (IRQn <= 31) {
		Local_ShiftingValue = IRQn;
	} else {
		Local_ShiftingValue = IRQn - (Local_RegisterNo * 32);
	}
	MNVIC->ICPR[Local_RegisterNo] |= (1 << Local_ShiftingValue);
}


/**
 * @brief
 * @details
 * @param IRQn
 * @return
 */
u32 MNVIC_u32_GetActive (IRQn_t IRQn)
{
	u32 Local_ShiftingValue = 0;
	u32 Local_RegisterNo = 0;

	Local_RegisterNo = IRQn / 8;

	if (IRQn <= 31) {
		Local_ShiftingValue = IRQn;
	} else {
		Local_ShiftingValue = IRQn - (Local_RegisterNo * 8);
	}

	return (GET_BIT(MNVIC->IABR[Local_RegisterNo],Local_ShiftingValue));
}


/**
 *
 * @param IRQn
 * @param GroupPriority
 * @param SubPriority
 */
void MNVIC_void_SetPriority(IRQn_t IRQn, u32 GroupPriority,u32 SubPriority)
{
	u32 Local_PriorityGroup = 0;
	u32 Local_EncodedPriority = 0;

	Local_PriorityGroup = MSCB_u32GetPriorityGrouping();
	trace_printf("Local_PriorityGroup = %d\n",Local_PriorityGroup);
	Local_EncodedPriority = MNVIC_u32_EncodePriority(Local_PriorityGroup,GroupPriority,SubPriority);
	trace_printf("Local_EncodedPriority = %d\n",Local_EncodedPriority);

	MNVIC->IPR[IRQn] = (u8)((Local_EncodedPriority)<<4);
}


/**
 * @brief
 * @details
 * @param IRQn
 * @return
 */
u32 MNVIC_u32_GetPriority (IRQn_t IRQn)
{
	return (MNVIC->IPR[IRQn]);
}

/**
 *
 * @param PriorityGroup
 * @param GroupPriority
 * @param SubPriority
 * @return
 */
u32 MNVIC_u32_EncodePriority(u32 PriorityGroup,u32 GroupPriority,u32 SubPriority)
{
	u32 Local_NumberOfGroupBits = 0;
	u32 Local_NumberOfSubBits = 0;
	u32 Local_PriorityEncoded = 0;

	Local_NumberOfGroupBits = (7-(PriorityGroup & (0x07)));
	Local_NumberOfSubBits = (4-Local_NumberOfGroupBits);
	Local_PriorityEncoded = (((GroupPriority) & ((1<<Local_NumberOfGroupBits)-1)) << Local_NumberOfSubBits) | (((SubPriority) & ((1<<Local_NumberOfSubBits)-1)));
	return Local_PriorityEncoded;
}
