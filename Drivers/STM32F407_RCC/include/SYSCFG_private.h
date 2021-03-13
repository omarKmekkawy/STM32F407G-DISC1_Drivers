#ifndef SYSCFG_PRIVATE_H
#define SYSCFG_PRIVATE_H

/**
 * @brief	Definitions the base address for the SYSCFG
 * @details
 */
#define SYSCFG_BASE_ADDRESS 0x40013800


typedef struct
{
	volatile u32 MEMRMP;		//!<	Offset: 0x00
	volatile u32 PMC;			//!<	Offset: 0x04
	volatile u32 EXTICR[4];		//!<	Offset: 0x08
	volatile u32 RESERVED0;		//!<	Offset: 0x18
	volatile u32 RESERVED1;		//!<	Offset: 0x1C
	volatile u32 CMPCR;			//!<	Offset: 0x20
}SYSCFG_t;

#define MSYSCFG ((SYSCFG_t *)(SYSCFG_BASE_ADDRESS))

#endif
