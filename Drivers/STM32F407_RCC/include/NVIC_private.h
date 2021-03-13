#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H

/**
 * @brief	Definitions the base address for the NVIC
 * @details
 */
#define NVIC_BASE_ADDRESS 0xE000E100

/**
 * @brief 	Definitions of the priority grouping values to be written in the SCB->AIRCR register.
 * @details
 */
#define MNVIC_GROUP_4_SUB_0		0x05FA0300 // 4 bits for group (IPR) => group
#define MNVIC_GROUP_3_SUB_1		0x05FA0400 // 3 bits for group and 1 bit  for sub priority
#define MNVIC_GROUP_2_SUB_2		0x05FA0500 // 2 bits for group and 2 bits for sub priority
#define MNVIC_GROUP_1_SUB_3		0x05FA0600 // 1 bit  for group and 3 bit  for sub priority
#define MNVIC_GROUP_0_SUB_4		0x05FA0700 // 0 bit  for group and 4 bit  for sub priority


/**
 * @brief	NVIC Data Type ( Struct )
 * @details
 */
typedef struct
{
  volatile u32 ISER[8U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Enable Register */
  volatile u32 RESERVED0[24U];
  volatile u32 ICER[8U];               /*!< Offset: 0x180 (R/W)  Interrupt Clear Enable Register */
  volatile u32 RSERVED1[24U];
  volatile u32 ISPR[8U];               /*!< Offset: 0x200 (R/W)  Interrupt Set Pending Register */
  volatile u32 RESERVED2[24U];
  volatile u32 ICPR[8U];               /*!< Offset: 0x280 (R/W)  Interrupt Clear Pending Register */
  volatile u32 RESERVED3[24U];
  volatile u32 IABR[8U];               /*!< Offset: 0x300 (R/W)  Interrupt Active bit Register */
  volatile u32 RESERVED4[56U];
  volatile u8  IPR[240U];              /*!< Offset: 0x400 (R/W)  Interrupt Priority Register (8Bit wide) */
  volatile u32 RESERVED5[644U];
  volatile u32 STIR;                   /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register */
}  NVIC_t;

/**
 * @brief 	Define a pointer to the NVIC_t data type
 * @details
 */
#define MNVIC ((NVIC_t *)NVIC_BASE_ADDRESS)


#endif
