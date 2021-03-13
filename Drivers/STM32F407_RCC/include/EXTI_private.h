#ifndef EXTI_PRIVATE_H
#define EXTI_PRIVATE_H

/**
 * @brief	Definitions the base address for the EXTI
 * @details
 */
#define EXTI_BASE_ADDRESS 0x40013C00


/**
 * @brief	EXTI Data Type ( Struct )
 * @details
 */
typedef struct
{
	volatile u32 IMR;		//!<	Offset: 0x00	Interrupt mask register (EXTI_IMR)
	volatile u32 EMR;		//!<	Offset: 0x04	Event mask register (EXTI_EMR)
	volatile u32 RTSR;		//!<	Offset: 0x08	Rising trigger selection register (EXTI_RTSR)
	volatile u32 FTSR;		//!<	Offset: 0x0C	Falling trigger selection register (EXTI_FTSR)
	volatile u32 SWIER;		//!<	Offset: 0x10	Software interrupt event register (EXTI_SWIER)
	volatile u32 PR;		//!<	Offset: 0x14	Pending register (EXTI_PR)

}EXTI_t;

#define MEXTI ((EXTI_t *)EXTI_BASE_ADDRESS)

#endif
