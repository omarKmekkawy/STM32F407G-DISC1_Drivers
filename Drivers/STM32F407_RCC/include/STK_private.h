#ifndef STK_PRIVATE_H
#define STK_PRIVATE_H

/**
 *	@brief		STK Data Type ( Struct )
 *	@details	A data type struct used for mapping the SYSTICK registers. See page 251 for more details.
 *
 */
typedef struct
{
	volatile u32 CTRL;		//!<	Offset: 0x00 SysTick control and status register (STK_CTRL)		Privileged	RW	Reset = 0x00000000
	volatile u32 LOAD;		//!<	Offset: 0x04 SysTick reload value register (STK_LOAD)			Privileged	RW	Reset = Unknown
	volatile u32 VAL;		//!<	Offset: 0x08 SysTick current value register (STK_VAL)			Privileged	RW	Reset = Unknown
	volatile u32 CALIB;		//!<	Offset: 0x0C SysTick calibration value register (STK_CALIB)		Privileged	RO	Reset = 0xC0000000
}STK_t;

/**
 * 	@brief		Define a pointer to the STK_t data type
 * 	@details
 */
#define MSTK ((STK_t*)(0xE000E010))

#endif
