#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H


/**
 * @brief	Priority Level from 0 to 15, a higher level corresponds to lower priority, so level 0 is the highest priority.
 */
typedef enum{
	NVIC_PRIORITY_0, 	//!< NVIC_PRIORITY_0	( The Lowest Priority )
	NVIC_PRIORITY_1, 	//!< NVIC_PRIORITY_1
	NVIC_PRIORITY_2, 	//!< NVIC_PRIORITY_2
	NVIC_PRIORITY_3, 	//!< NVIC_PRIORITY_3
	NVIC_PRIORITY_4, 	//!< NVIC_PRIORITY_4
	NVIC_PRIORITY_5, 	//!< NVIC_PRIORITY_5
	NVIC_PRIORITY_6, 	//!< NVIC_PRIORITY_6
	NVIC_PRIORITY_7, 	//!< NVIC_PRIORITY_7
	NVIC_PRIORITY_8, 	//!< NVIC_PRIORITY_8
	NVIC_PRIORITY_9, 	//!< NVIC_PRIORITY_9
	NVIC_PRIORITY_10,	//!< NVIC_PRIORITY_10
	NVIC_PRIORITY_11,	//!< NVIC_PRIORITY_11
	NVIC_PRIORITY_12,	//!< NVIC_PRIORITY_12
	NVIC_PRIORITY_13,	//!< NVIC_PRIORITY_13
	NVIC_PRIORITY_14,	//!< NVIC_PRIORITY_14
	NVIC_PRIORITY_15,	//!< NVIC_PRIORITY_15	( The highest Priority )
}NVIC_PRIORITY;


/**
 * @brief
 * @details
 *
 */
void MNVIC_void_Init(void);

/**
 *
 * @param priority_grouping
 */
void MNVIC_void_SetPriorityGrouping(u32 priority_grouping);
/**
 *
 * @param IRQn
 */
void MNVIC_void_EnableIRQ(IRQn_t IRQn);
/**
 *
 * @param IRQn
 */
void MNVIC_void_DisableIRQ(IRQn_t IRQn);
/**
 *
 * @param IRQn
 * @return
 */
u32 MNVIC_u32_GetPendingIRQ (IRQn_t IRQn);
/**
 *
 * @param IRQn
 */
void MNVIC_void_SetPendingIRQ (IRQn_t IRQn);
/**
 *
 * @param IRQn
 */
void MNVIC_void_ClearPendingIRQ (IRQn_t IRQn);
/**
 *
 * @param IRQn
 * @return
 */
u32 MNVIC_u32_GetActive (IRQn_t IRQn);

/**
 *
 * @param IRQn
 * @param GroupPriority
 * @param SubPriority
 */
void MNVIC_void_SetPriority (IRQn_t IRQn, u32 GroupPriority,u32 SubPriority);
/**
 *
 * @param IRQn
 * @return
 */
u32 MNVIC_u32_GetPriority (IRQn_t IRQn);

/**
 *
 * @param PriorityGroup
 * @param GroupPriority
 * @param SubPriority
 * @return
 */
u32 MNVIC_u32_EncodePriority(u32 PriorityGroup,u32 GroupPriority,u32 SubPriority);


#endif
