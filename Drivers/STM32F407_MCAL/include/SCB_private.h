#ifndef SCB_PRIVATE_H
#define SCB_PRIVATE_H


/**
 * @brief	Definitions the base address for the SCB
 * @details
 */
#define SCB_BASE_ADDRESS 0xE000ED00


/**
 * @brief	SCB Data Type ( Struct )
 * @details
 */
typedef struct
{
	  volatile u32 CPUID;			//!<	Offset: 0x00 CPUID base register (CPUID)
	  volatile u32 ICSR;			//!<	Offset: 0x04 Interrupt control and state register (ICSR)
	  volatile u32 VTOR;			//!<	Offset: 0x08 Vector table offset register (VTOR)
	  volatile u32 AIRCR;			//!<	Offset: 0x0C Offset: 0x100 Application interrupt and reset control register (AIRCR)
	  volatile u32 SCR;				//!<	Offset: 0x10 System control register (SCR)
	  volatile u32 CCR;				//!<	Offset: 0x14 Configuration and control register (CCR)
	  volatile u8  SHPR[12];		//!<	Offset: 0x18 System handler priority registers (SHPRx)
	  volatile u32 SHCSR;			//!<	Offset: 0x24 System handler control and state register (SHCSR)
	  volatile u32 CFSR;			//!<	Offset: 0x28 Configurable fault status register (CFSR; UFSR+BFSR+MMFSR)
	  volatile u32 HFSR;			//!<	Offset: 0x2C Usage fault status register (UFSR)
	  volatile u32 RESERVED0;		//!<	Offset: 0x30 RESERVED
	  volatile u32 MMAR;			//!<	Offset: 0x34 Bus fault status register (BFSR)
	  volatile u32 BFAR;			//!<	Offset: 0x38 Memory management fault address register (MMFSR)
	  volatile u32 AFSR;			//!<	Offset: 0x3C Auxiliary fault status register (AFSR)
}  SCB_t;

/**
 * @brief 	Define a pointer to the NVIC_t data type
 * @details
 */
#define SCB ((SCB_t *)SCB_BASE_ADDRESS)


#endif
