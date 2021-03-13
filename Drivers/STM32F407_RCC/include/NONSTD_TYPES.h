#ifndef NONSTD_TYPES_H
#define NONSTD_TYPES_H

/**
 * @brief This is a return type for the functions for status.
 */
typedef enum
{
  HAL_STATUS_OK       = 0x00U,//!< HAL_STATUS_OK		OK 		Status
  HAL_STATUS_ERROR    = 0x01U,//!< HAL_STATUS_ERROR		Error	Status
  HAL_STATUS_BUSY     = 0x02U,//!< HAL_STATUS_BUSY		Busy	Status
  HAL_STATUS_TIMEOUT  = 0x03U //!< HAL_STATUS_TIMEOUT	Timeout Status
} MCAL_Status_TypeDef;



/**
 *	@brief Alternate Function Mapping
 *	The alternate function table in page No. 62 could be mapped in 32 bit number.
 *	See page 62 in STM32F405xx STM32F407xx Data sheet for details
 */


typedef enum
{
	// Pin 0 Alternate Functions
	AF_Px0_AF0			= 0x00, //!< AF_Px0_AF0		Pin No. 0, Alternate Function 0
	AF_Px0_AF1			= 0x01, //!< AF_Px0_AF1		Pin No. 0, Alternate Function 1
	AF_Px0_AF2			= 0x02, //!< AF_Px0_AF2		Pin No. 0, Alternate Function 2
	AF_Px0_AF3			= 0x03, //!< AF_Px0_AF3		Pin No. 0, Alternate Function 3
	AF_Px0_AF4			= 0x04, //!< AF_Px0_AF4		Pin No. 0, Alternate Function 4
	AF_Px0_AF5			= 0X05, //!< AF_Px0_AF5		Pin No. 0, Alternate Function 5
	AF_Px0_AF6			= 0x06, //!< AF_Px0_AF6		Pin No. 0, Alternate Function 6
	AF_Px0_AF7			= 0x07, //!< AF_Px0_AF7		Pin No. 0, Alternate Function 7
	AF_Px0_AF8			= 0x08, //!< AF_Px0_AF8		Pin No. 0, Alternate Function 8
	AF_Px0_AF9			= 0x09, //!< AF_Px0_AF9		Pin No. 0, Alternate Function 9
	AF_Px0_AF10			= 0x0A,	//!< AF_Px0_AF10	Pin No. 0, Alternate Function 10
	AF_Px0_AF11			= 0x0B,	//!< AF_Px0_AF11	Pin No. 0, Alternate Function 11
	AF_Px0_AF12			= 0x0C,	//!< AF_Px0_AF12	Pin No. 0, Alternate Function 12
	AF_Px0_AF13			= 0x0D,	//!< AF_Px0_AF13	Pin No. 0, Alternate Function 13
	AF_Px0_AF14			= 0x0E,	//!< AF_Px0_AF14	Pin No. 0, Alternate Function 14
	AF_Px0_AF15			= 0x0F,	//!< AF_Px0_AF15	Pin No. 0, Alternate Function 15

	// Pin 1 Alternate Functions
	AF_Px1_AF0			= 0x10, //!< AF_Px1_AF0     Pin No. 1, Alternate Function 0
	AF_Px1_AF1			= 0x11, //!< AF_Px1_AF1     Pin No. 1, Alternate Function 1
	AF_Px1_AF2			= 0x12, //!< AF_Px1_AF2     Pin No. 1, Alternate Function 2
	AF_Px1_AF3			= 0x13, //!< AF_Px1_AF3     Pin No. 1, Alternate Function 3
	AF_Px1_AF4			= 0x14, //!< AF_Px1_AF4     Pin No. 1, Alternate Function 4
	AF_Px1_AF5			= 0X15, //!< AF_Px1_AF5     Pin No. 1, Alternate Function 5
	AF_Px1_AF6			= 0x16, //!< AF_Px1_AF6     Pin No. 1, Alternate Function 6
	AF_Px1_AF7			= 0x17, //!< AF_Px1_AF7     Pin No. 1, Alternate Function 7
	AF_Px1_AF8			= 0x18, //!< AF_Px1_AF8     Pin No. 1, Alternate Function 8
	AF_Px1_AF9			= 0x19, //!< AF_Px1_AF9     Pin No. 1, Alternate Function 9
	AF_Px1_AF10			= 0x1A,	//!< AF_Px1_AF10    Pin No. 1, Alternate Function 10
	AF_Px1_AF11			= 0x1B,	//!< AF_Px1_AF11    Pin No. 1, Alternate Function 11
	AF_Px1_AF12			= 0x1C,	//!< AF_Px1_AF12    Pin No. 1, Alternate Function 12
	AF_Px1_AF13			= 0x1D,	//!< AF_Px1_AF13    Pin No. 1, Alternate Function 13
	AF_Px1_AF14			= 0x1E,	//!< AF_Px1_AF14    Pin No. 1, Alternate Function 14
	AF_Px1_AF15			= 0x1F,	//!< AF_Px1_AF15	Pin No. 1, Alternate Function 15

	// Pin 2 Alternate Functions
	AF_Px2_AF0			= 0x20, //!< AF_Px2_AF0		Pin No. 2, Alternate Function 0
	AF_Px2_AF1			= 0x21, //!< AF_Px2_AF1		Pin No. 2, Alternate Function 1
	AF_Px2_AF2			= 0x22, //!< AF_Px2_AF2		Pin No. 2, Alternate Function 2
	AF_Px2_AF3			= 0x23, //!< AF_Px2_AF3		Pin No. 2, Alternate Function 3
	AF_Px2_AF4			= 0x24, //!< AF_Px2_AF4		Pin No. 2, Alternate Function 4
	AF_Px2_AF5			= 0X25, //!< AF_Px2_AF5		Pin No. 2, Alternate Function 5
	AF_Px2_AF6			= 0x26, //!< AF_Px2_AF6		Pin No. 2, Alternate Function 6
	AF_Px2_AF7			= 0x27, //!< AF_Px2_AF7		Pin No. 2, Alternate Function 7
	AF_Px2_AF8			= 0x28, //!< AF_Px2_AF8		Pin No. 2, Alternate Function 8
	AF_Px2_AF9			= 0x29, //!< AF_Px2_AF9		Pin No. 2, Alternate Function 9
	AF_Px2_AF10			= 0x2A,	//!< AF_Px2_AF10	Pin No. 2, Alternate Function 10
	AF_Px2_AF11			= 0x2B,	//!< AF_Px2_AF11	Pin No. 2, Alternate Function 11
	AF_Px2_AF12			= 0x2C,	//!< AF_Px2_AF12	Pin No. 2, Alternate Function 12
	AF_Px2_AF13			= 0x2D,	//!< AF_Px2_AF13	Pin No. 2, Alternate Function 13
	AF_Px2_AF14			= 0x2E,	//!< AF_Px2_AF14	Pin No. 2, Alternate Function 14
	AF_Px2_AF15			= 0x2F,	//!< AF_Px2_AF15	Pin No. 2, Alternate Function 15

	// Pin 3 Alternate Functions
	AF_Px3_AF0			= 0x30, //!< AF_Px3_AF0	 	Pin No. 3, Alternate Function 0
	AF_Px3_AF1			= 0x31, //!< AF_Px3_AF1	 	Pin No. 3, Alternate Function 1
	AF_Px3_AF2			= 0x32, //!< AF_Px3_AF2	   	Pin No. 3, Alternate Function 2
	AF_Px3_AF3			= 0x33, //!< AF_Px3_AF3		Pin No. 3, Alternate Function 3
	AF_Px3_AF4			= 0x34, //!< AF_Px3_AF4	 	Pin No. 3, Alternate Function 4
	AF_Px3_AF5			= 0X35, //!< AF_Px3_AF5	 	Pin No. 3, Alternate Function 5
	AF_Px3_AF6			= 0x36, //!< AF_Px3_AF6	 	Pin No. 3, Alternate Function 6
	AF_Px3_AF7			= 0x37, //!< AF_Px3_AF7	 	Pin No. 3, Alternate Function 7
	AF_Px3_AF8			= 0x38, //!< AF_Px3_AF8	 	Pin No. 3, Alternate Function 8
	AF_Px3_AF9			= 0x39, //!< AF_Px3_AF9	 	Pin No. 3, Alternate Function 9
	AF_Px3_AF10			= 0x3A,	//!< AF_Px3_AF10	Pin No. 3, Alternate Function 10
	AF_Px3_AF11			= 0x3B,	//!< AF_Px3_AF11	Pin No. 3, Alternate Function 11
	AF_Px3_AF12			= 0x3C,	//!< AF_Px3_AF12	Pin No. 3, Alternate Function 12
	AF_Px3_AF13			= 0x3D,	//!< AF_Px3_AF13	Pin No. 3, Alternate Function 13
	AF_Px3_AF14			= 0x3E,	//!< AF_Px3_AF14	Pin No. 3, Alternate Function 14
	AF_Px3_AF15			= 0x3F,	//!< AF_Px3_AF15	Pin No. 3, Alternate Function 15

	// Pin 4 Alternate Functions
	AF_Px4_AF0			= 0x40, //!< AF_Px4_AF0 	Pin No. 4, Alternate Function 0
	AF_Px4_AF1			= 0x41, //!< AF_Px4_AF1 	Pin No. 4, Alternate Function 1
	AF_Px4_AF2			= 0x42, //!< AF_Px4_AF2   	Pin No. 4, Alternate Function 2
	AF_Px4_AF3			= 0x43, //!< AF_Px4_AF3		Pin No. 4, Alternate Function 3
	AF_Px4_AF4			= 0x44, //!< AF_Px4_AF4 	Pin No. 4, Alternate Function 4
	AF_Px4_AF5			= 0X45, //!< AF_Px4_AF5 	Pin No. 4, Alternate Function 5
	AF_Px4_AF6			= 0x46, //!< AF_Px4_AF6 	Pin No. 4, Alternate Function 6
	AF_Px4_AF7			= 0x47, //!< AF_Px4_AF7 	Pin No. 4, Alternate Function 7
	AF_Px4_AF8			= 0x48, //!< AF_Px4_AF8 	Pin No. 4, Alternate Function 8
	AF_Px4_AF9			= 0x49, //!< AF_Px4_AF9 	Pin No. 4, Alternate Function 9
	AF_Px4_AF10			= 0x4A,	//!< AF_Px4_AF10	Pin No. 4, Alternate Function 10
	AF_Px4_AF11			= 0x4B,	//!< AF_Px4_AF11	Pin No. 4, Alternate Function 11
	AF_Px4_AF12			= 0x4C,	//!< AF_Px4_AF12	Pin No. 4, Alternate Function 12
	AF_Px4_AF13			= 0x4D,	//!< AF_Px4_AF13	Pin No. 4, Alternate Function 13
	AF_Px4_AF14			= 0x4E,	//!< AF_Px4_AF14	Pin No. 4, Alternate Function 14
	AF_Px4_AF15			= 0x4F,	//!< AF_Px4_AF15	Pin No. 4, Alternate Function 15

	// Pin 5 Alternate Functions
	AF_Px5_AF0			= 0x50, //!< AF_Px5_AF0		Pin No. 5, Alternate Function 0
	AF_Px5_AF1			= 0x51, //!< AF_Px5_AF1		Pin No. 5, Alternate Function 1
	AF_Px5_AF2			= 0x52, //!< AF_Px5_AF2  	Pin No. 5, Alternate Function 2
	AF_Px5_AF3			= 0x53, //!< AF_Px5_AF3		Pin No. 5, Alternate Function 3
	AF_Px5_AF4			= 0x54, //!< AF_Px5_AF4		Pin No. 5, Alternate Function 4
	AF_Px5_AF5			= 0X55, //!< AF_Px5_AF5		Pin No. 5, Alternate Function 5
	AF_Px5_AF6			= 0x56, //!< AF_Px5_AF6		Pin No. 5, Alternate Function 6
	AF_Px5_AF7			= 0x57, //!< AF_Px5_AF7		Pin No. 5, Alternate Function 7
	AF_Px5_AF8			= 0x58, //!< AF_Px5_AF8		Pin No. 5, Alternate Function 8
	AF_Px5_AF9			= 0x59, //!< AF_Px5_AF9		Pin No. 5, Alternate Function 9
	AF_Px5_AF10			= 0x5A,	//!< AF_Px5_AF10	Pin No. 5, Alternate Function 10
	AF_Px5_AF11			= 0x5B,	//!< AF_Px5_AF11	Pin No. 5, Alternate Function 11
	AF_Px5_AF12			= 0x5C,	//!< AF_Px5_AF12	Pin No. 5, Alternate Function 12
	AF_Px5_AF13			= 0x5D,	//!< AF_Px5_AF13	Pin No. 5, Alternate Function 13
	AF_Px5_AF14			= 0x5E,	//!< AF_Px5_AF14	Pin No. 5, Alternate Function 14
	AF_Px5_AF15			= 0x5F,	//!< AF_Px5_AF15	Pin No. 5, Alternate Function 15

	// Pin 6 Alternate Functions
	AF_Px6_AF0			= 0x60, //!< AF_Px6_AF0		Pin No. 6, Alternate Function 0
	AF_Px6_AF1			= 0x61, //!< AF_Px6_AF1		Pin No. 6, Alternate Function 1
	AF_Px6_AF2			= 0x62, //!< AF_Px6_AF2 	Pin No. 6, Alternate Function 2
	AF_Px6_AF3			= 0x63, //!< AF_Px6_AF3		Pin No. 6, Alternate Function 3
	AF_Px6_AF4			= 0x64, //!< AF_Px6_AF4		Pin No. 6, Alternate Function 4
	AF_Px6_AF5			= 0X65, //!< AF_Px6_AF5		Pin No. 6, Alternate Function 5
	AF_Px6_AF6			= 0x66, //!< AF_Px6_AF6		Pin No. 6, Alternate Function 6
	AF_Px6_AF7			= 0x67, //!< AF_Px6_AF7		Pin No. 6, Alternate Function 7
	AF_Px6_AF8			= 0x68, //!< AF_Px6_AF8		Pin No. 6, Alternate Function 8
	AF_Px6_AF9			= 0x69, //!< AF_Px6_AF9		Pin No. 6, Alternate Function 9
	AF_Px6_AF10			= 0x6A,	//!< AF_Px6_AF10	Pin No. 6, Alternate Function 10
	AF_Px6_AF11			= 0x6B,	//!< AF_Px6_AF11	Pin No. 6, Alternate Function 11
	AF_Px6_AF12			= 0x6C,	//!< AF_Px6_AF12	Pin No. 6, Alternate Function 12
	AF_Px6_AF13			= 0x6D,	//!< AF_Px6_AF13	Pin No. 6, Alternate Function 13
	AF_Px6_AF14			= 0x6E,	//!< AF_Px6_AF14	Pin No. 6, Alternate Function 14
	AF_Px6_AF15			= 0x6F,	//!< AF_Px6_AF15	Pin No. 6, Alternate Function 15

	// Pin 7 Alternate Functions
	AF_Px7_AF0			= 0x70, //!< AF_Px7_AF0		Pin No. 7, Alternate Function 0
	AF_Px7_AF1			= 0x71, //!< AF_Px7_AF1		Pin No. 7, Alternate Function 1
	AF_Px7_AF2			= 0x72, //!< AF_Px7_AF2		Pin No. 7, Alternate Function 2
	AF_Px7_AF3			= 0x73, //!< AF_Px7_AF3		Pin No. 7, Alternate Function 3
	AF_Px7_AF4			= 0x74, //!< AF_Px7_AF4		Pin No. 7, Alternate Function 4
	AF_Px7_AF5			= 0X75, //!< AF_Px7_AF5		Pin No. 7, Alternate Function 5
	AF_Px7_AF6			= 0x76, //!< AF_Px7_AF6		Pin No. 7, Alternate Function 6
	AF_Px7_AF7			= 0x77, //!< AF_Px7_AF7		Pin No. 7, Alternate Function 7
	AF_Px7_AF8			= 0x78, //!< AF_Px7_AF8		Pin No. 7, Alternate Function 8
	AF_Px7_AF9			= 0x79, //!< AF_Px7_AF9		Pin No. 7, Alternate Function 9
	AF_Px7_AF10			= 0x7A, //!< AF_Px7_AF10	Pin No. 7, Alternate Function 10
	AF_Px7_AF11			= 0x7B, //!< AF_Px7_AF11	Pin No. 7, Alternate Function 11
	AF_Px7_AF12			= 0x7C, //!< AF_Px7_AF12	Pin No. 7, Alternate Function 12
	AF_Px7_AF13			= 0x7D, //!< AF_Px7_AF13	Pin No. 7, Alternate Function 13
	AF_Px7_AF14			= 0x7E, //!< AF_Px7_AF14	Pin No. 7, Alternate Function 14
	AF_Px7_AF15			= 0x7F, //!< AF_Px7_AF15	Pin No. 7, Alternate Function 15

	// Pin 8 Alternate Functions
	AF_Px8_AF0			= 0x80, //!< AF_Px8_AF0		Pin No. 8, Alternate Function 0
	AF_Px8_AF1			= 0x81, //!< AF_Px8_AF1		Pin No. 8, Alternate Function 1
	AF_Px8_AF2			= 0x82, //!< AF_Px8_AF2		Pin No. 8, Alternate Function 2
	AF_Px8_AF3			= 0x83, //!< AF_Px8_AF3		Pin No. 8, Alternate Function 3
	AF_Px8_AF4			= 0x84, //!< AF_Px8_AF4		Pin No. 8, Alternate Function 4
	AF_Px8_AF5			= 0X85, //!< AF_Px8_AF5		Pin No. 8, Alternate Function 5
	AF_Px8_AF6			= 0x86, //!< AF_Px8_AF6		Pin No. 8, Alternate Function 6
	AF_Px8_AF7			= 0x87, //!< AF_Px8_AF7		Pin No. 8, Alternate Function 7
	AF_Px8_AF8			= 0x88, //!< AF_Px8_AF8		Pin No. 8, Alternate Function 8
	AF_Px8_AF9			= 0x89, //!< AF_Px8_AF9		Pin No. 8, Alternate Function 9
	AF_Px8_AF10			= 0x8A, //!< AF_Px8_AF10	Pin No. 8, Alternate Function 10
	AF_Px8_AF11			= 0x8B, //!< AF_Px8_AF11	Pin No. 8, Alternate Function 11
	AF_Px8_AF12			= 0x8C, //!< AF_Px8_AF12	Pin No. 8, Alternate Function 12
	AF_Px8_AF13			= 0x8D, //!< AF_Px8_AF13	Pin No. 8, Alternate Function 13
	AF_Px8_AF14			= 0x8E, //!< AF_Px8_AF14	Pin No. 8, Alternate Function 14
	AF_Px8_AF15			= 0x8F, //!< AF_Px8_AF15	Pin No. 8, Alternate Function 15

	// Pin 9 Alternate Functions
	AF_Px9_AF0			= 0x90, //!< AF_Px9_AF0		Pin No. 9, Alternate Function 0
	AF_Px9_AF1			= 0x91, //!< AF_Px9_AF1		Pin No. 9, Alternate Function 1
	AF_Px9_AF2			= 0x92, //!< AF_Px9_AF2		Pin No. 9, Alternate Function 2
	AF_Px9_AF3			= 0x93, //!< AF_Px9_AF3		Pin No. 9, Alternate Function 3
	AF_Px9_AF4			= 0x94, //!< AF_Px9_AF4		Pin No. 9, Alternate Function 4
	AF_Px9_AF5			= 0X95, //!< AF_Px9_AF5		Pin No. 9, Alternate Function 5
	AF_Px9_AF6			= 0x96, //!< AF_Px9_AF6		Pin No. 9, Alternate Function 6
	AF_Px9_AF7			= 0x97, //!< AF_Px9_AF7		Pin No. 9, Alternate Function 7
	AF_Px9_AF8			= 0x98, //!< AF_Px9_AF8		Pin No. 9, Alternate Function 8
	AF_Px9_AF9			= 0x99, //!< AF_Px9_AF9		Pin No. 9, Alternate Function 9
	AF_Px9_AF10			= 0x9A, //!< AF_Px9_AF10	Pin No. 9, Alternate Function 10
	AF_Px9_AF11			= 0x9B, //!< AF_Px9_AF11	Pin No. 9, Alternate Function 11
	AF_Px9_AF12			= 0x9C, //!< AF_Px9_AF12	Pin No. 9, Alternate Function 12
	AF_Px9_AF13			= 0x9D, //!< AF_Px9_AF13	Pin No. 9, Alternate Function 13
	AF_Px9_AF14			= 0x9E, //!< AF_Px9_AF14	Pin No. 9, Alternate Function 14
	AF_Px9_AF15			= 0x9F, //!< AF_Px9_AF15	Pin No. 9, Alternate Function 15

	// Pin 10 Alternate Functions
	AF_Px10_AF0			= 0xA0, //!< AF_Px10_AF0	Pin No. 10, Alternate Function 0
	AF_Px10_AF1			= 0xA1, //!< AF_Px10_AF1	Pin No. 10, Alternate Function 1
	AF_Px10_AF2			= 0xA2, //!< AF_Px10_AF2	Pin No. 10, Alternate Function 2
	AF_Px10_AF3			= 0xA3, //!< AF_Px10_AF3	Pin No. 10, Alternate Function 3
	AF_Px10_AF4			= 0xA4, //!< AF_Px10_AF4	Pin No. 10, Alternate Function 4
	AF_Px10_AF5			= 0XA5, //!< AF_Px10_AF5	Pin No. 10, Alternate Function 5
	AF_Px10_AF6			= 0xA6, //!< AF_Px10_AF6	Pin No. 10, Alternate Function 6
	AF_Px10_AF7			= 0xA7, //!< AF_Px10_AF7	Pin No. 10, Alternate Function 7
	AF_Px10_AF8			= 0xA8, //!< AF_Px10_AF8	Pin No. 10, Alternate Function 8
	AF_Px10_AF9			= 0xA9, //!< AF_Px10_AF9	Pin No. 10, Alternate Function 9
	AF_Px10_AF10		= 0xAA, //!< AF_Px10_AF10	Pin No. 10, Alternate Function 10
	AF_Px10_AF11		= 0xAB, //!< AF_Px10_AF11	Pin No. 10, Alternate Function 11
	AF_Px10_AF12		= 0xAC, //!< AF_Px10_AF12	Pin No. 10, Alternate Function 12
	AF_Px10_AF13		= 0xAD, //!< AF_Px10_AF13	Pin No. 10, Alternate Function 13
	AF_Px10_AF14		= 0xAE, //!< AF_Px10_AF14	Pin No. 10, Alternate Function 14
	AF_Px10_AF15		= 0xAF, //!< AF_Px10_AF15	Pin No. 10, Alternate Function 15

	// Pin 11 Alternate Functions
	AF_Px11_AF0			= 0xB0,//!< AF_Px11_AF0		Pin No. 11, Alternate Function 0
	AF_Px11_AF1			= 0xB1,//!< AF_Px11_AF1		Pin No. 11, Alternate Function 1
	AF_Px11_AF2			= 0xB2,//!< AF_Px11_AF2		Pin No. 11, Alternate Function 2
	AF_Px11_AF3			= 0xB3,//!< AF_Px11_AF3		Pin No. 11, Alternate Function 3
	AF_Px11_AF4			= 0xB4,//!< AF_Px11_AF4		Pin No. 11, Alternate Function 4
	AF_Px11_AF5			= 0XB5,//!< AF_Px11_AF5		Pin No. 11, Alternate Function 5
	AF_Px11_AF6			= 0xB6,//!< AF_Px11_AF6		Pin No. 11, Alternate Function 6
	AF_Px11_AF7			= 0xB7,//!< AF_Px11_AF7		Pin No. 11, Alternate Function 7
	AF_Px11_AF8			= 0xB8,//!< AF_Px11_AF8		Pin No. 11, Alternate Function 8
	AF_Px11_AF9			= 0xB9,//!< AF_Px11_AF9		Pin No. 11, Alternate Function 9
	AF_Px11_AF10		= 0xBA,//!< AF_Px11_AF10	Pin No. 11, Alternate Function 10
	AF_Px11_AF11		= 0xBB,//!< AF_Px11_AF11	Pin No. 11, Alternate Function 11
	AF_Px11_AF12		= 0xBC,//!< AF_Px11_AF12	Pin No. 11, Alternate Function 12
	AF_Px11_AF13		= 0xBD,//!< AF_Px11_AF13	Pin No. 11, Alternate Function 13
	AF_Px11_AF14		= 0xBE,//!< AF_Px11_AF14	Pin No. 11, Alternate Function 14
	AF_Px11_AF15		= 0xBF,//!< AF_Px11_AF15	Pin No. 11, Alternate Function 15

	// Pin 12 Alternate Functions
	AF_Px12_AF0			= 0xC0,//!< AF_Px12_AF0		Pin No. 12, Alternate Function 0
	AF_Px12_AF1			= 0xC1,//!< AF_Px12_AF1		Pin No. 12, Alternate Function 1
	AF_Px12_AF2			= 0xC2,//!< AF_Px12_AF2		Pin No. 12, Alternate Function 2
	AF_Px12_AF3			= 0xC3,//!< AF_Px12_AF3		Pin No. 12, Alternate Function 3
	AF_Px12_AF4			= 0xC4,//!< AF_Px12_AF4		Pin No. 12, Alternate Function 4
	AF_Px12_AF5			= 0XC5,//!< AF_Px12_AF5		Pin No. 12, Alternate Function 5
	AF_Px12_AF6			= 0xC6,//!< AF_Px12_AF6		Pin No. 12, Alternate Function 6
	AF_Px12_AF7			= 0xC7,//!< AF_Px12_AF7		Pin No. 12, Alternate Function 7
	AF_Px12_AF8			= 0xC8,//!< AF_Px12_AF8		Pin No. 12, Alternate Function 8
	AF_Px12_AF9			= 0xC9,//!< AF_Px12_AF9		Pin No. 12, Alternate Function 9
	AF_Px12_AF10		= 0xCA,//!< AF_Px12_AF10	Pin No. 12, Alternate Function 10
	AF_Px12_AF11		= 0xCB,//!< AF_Px12_AF11	Pin No. 12, Alternate Function 11
	AF_Px12_AF12		= 0xCC,//!< AF_Px12_AF12	Pin No. 12, Alternate Function 12
	AF_Px12_AF13		= 0xCD,//!< AF_Px12_AF13	Pin No. 12, Alternate Function 13
	AF_Px12_AF14		= 0xCE,//!< AF_Px12_AF14	Pin No. 12, Alternate Function 14
	AF_Px12_AF15		= 0xCF,//!< AF_Px12_AF15	Pin No. 12, Alternate Function 15

	// Pin 13 Alternate Functions
	AF_Px13_AF0			= 0xD0,//!< AF_Px13_AF0		Pin No. 13, Alternate Function 0
	AF_Px13_AF1			= 0xD1,//!< AF_Px13_AF1		Pin No. 13, Alternate Function 1
	AF_Px13_AF2			= 0xD2,//!< AF_Px13_AF2		Pin No. 13, Alternate Function 2
	AF_Px13_AF3			= 0xD3,//!< AF_Px13_AF3		Pin No. 13, Alternate Function 3
	AF_Px13_AF4			= 0xD4,//!< AF_Px13_AF4		Pin No. 13, Alternate Function 4
	AF_Px13_AF5			= 0XD5,//!< AF_Px13_AF5		Pin No. 13, Alternate Function 5
	AF_Px13_AF6			= 0xD6,//!< AF_Px13_AF6		Pin No. 13, Alternate Function 6
	AF_Px13_AF7			= 0xD7,//!< AF_Px13_AF7		Pin No. 13, Alternate Function 7
	AF_Px13_AF8			= 0xD8,//!< AF_Px13_AF8		Pin No. 13, Alternate Function 8
	AF_Px13_AF9			= 0xD9,//!< AF_Px13_AF9		Pin No. 13, Alternate Function 9
	AF_Px13_AF10		= 0xDA,//!< AF_Px13_AF10	Pin No. 13, Alternate Function 10
	AF_Px13_AF11		= 0xDB,//!< AF_Px13_AF11	Pin No. 13, Alternate Function 11
	AF_Px13_AF12		= 0xDC,//!< AF_Px13_AF12	Pin No. 13, Alternate Function 12
	AF_Px13_AF13		= 0xDD,//!< AF_Px13_AF13	Pin No. 13, Alternate Function 13
	AF_Px13_AF14		= 0xDE,//!< AF_Px13_AF14	Pin No. 13, Alternate Function 14
	AF_Px13_AF15		= 0xDF,//!< AF_Px13_AF15	Pin No. 13, Alternate Function 15

	// Pin 14 Alternate Functions
	AF_Px14_AF0			= 0xE0,//!< AF_Px14_AF0		Pin No. 14, Alternate Function 0
	AF_Px14_AF1			= 0xE1,//!< AF_Px14_AF1		Pin No. 14, Alternate Function 1
	AF_Px14_AF2			= 0xE2,//!< AF_Px14_AF2		Pin No. 14, Alternate Function 2
	AF_Px14_AF3			= 0xE3,//!< AF_Px14_AF3		Pin No. 14, Alternate Function 3
	AF_Px14_AF4			= 0xE4,//!< AF_Px14_AF4		Pin No. 14, Alternate Function 4
	AF_Px14_AF5			= 0XE5,//!< AF_Px14_AF5		Pin No. 14, Alternate Function 5
	AF_Px14_AF6			= 0xE6,//!< AF_Px14_AF6		Pin No. 14, Alternate Function 6
	AF_Px14_AF7			= 0xE7,//!< AF_Px14_AF7		Pin No. 14, Alternate Function 7
	AF_Px14_AF8			= 0xE8,//!< AF_Px14_AF8		Pin No. 14, Alternate Function 8
	AF_Px14_AF9			= 0xE9,//!< AF_Px14_AF9		Pin No. 14, Alternate Function 9
	AF_Px14_AF10		= 0xEA,//!< AF_Px14_AF10	Pin No. 14, Alternate Function 10
	AF_Px14_AF11		= 0xEB,//!< AF_Px14_AF11	Pin No. 14, Alternate Function 11
	AF_Px14_AF12		= 0xEC,//!< AF_Px14_AF12	Pin No. 14, Alternate Function 12
	AF_Px14_AF13		= 0xED,//!< AF_Px14_AF13	Pin No. 14, Alternate Function 13
	AF_Px14_AF14		= 0xEE,//!< AF_Px14_AF14	Pin No. 14, Alternate Function 14
	AF_Px14_AF15		= 0xEF,//!< AF_Px14_AF15	Pin No. 14, Alternate Function 15

	// Pin 15 Alternate Functions
	AF_Px15_AF0			= 0xF0,//!< AF_Px15_AF0		Pin No. 15, Alternate Function 0
	AF_Px15_AF1			= 0xF1,//!< AF_Px15_AF1		Pin No. 15, Alternate Function 1
	AF_Px15_AF2			= 0xF2,//!< AF_Px15_AF2		Pin No. 15, Alternate Function 2
	AF_Px15_AF3			= 0xF3,//!< AF_Px15_AF3		Pin No. 15, Alternate Function 3
	AF_Px15_AF4			= 0xF4,//!< AF_Px15_AF4		Pin No. 15, Alternate Function 4
	AF_Px15_AF5			= 0XF5,//!< AF_Px15_AF5		Pin No. 15, Alternate Function 5
	AF_Px15_AF6			= 0xF6,//!< AF_Px15_AF6		Pin No. 15, Alternate Function 6
	AF_Px15_AF7			= 0xF7,//!< AF_Px15_AF7		Pin No. 15, Alternate Function 7
	AF_Px15_AF8			= 0xF8,//!< AF_Px15_AF8		Pin No. 15, Alternate Function 8
	AF_Px15_AF9			= 0xF9,//!< AF_Px15_AF9		Pin No. 15, Alternate Function 9
	AF_Px15_AF10		= 0xFA,//!< AF_Px15_AF10	Pin No. 15, Alternate Function 10
	AF_Px15_AF11		= 0xFB,//!< AF_Px15_AF11	Pin No. 15, Alternate Function 11
	AF_Px15_AF12		= 0xFC,//!< AF_Px15_AF12	Pin No. 15, Alternate Function 12
	AF_Px15_AF13		= 0xFD,//!< AF_Px15_AF13	Pin No. 15, Alternate Function 13
	AF_Px15_AF14		= 0xFE,//!< AF_Px15_AF14	Pin No. 15, Alternate Function 14
	AF_Px15_AF15		= 0xFF //!< AF_Px15_AF15	Pin No. 15, Alternate Function 15

}MCAL_AlternateFunctionMapping;



/**
 *	@brief Alternative functions for all GPIOs
 */
typedef enum
{

	// PORTA Alternate Function Mapping
	AF_TIM2_CH1_ETR_PA0_AF1				= AF_Px0_AF1,      		//!< AF_TIM2_CH1_ETR_PA0_AF1
	AF_TIM5_CH1_PA0_AF2					= AF_Px0_AF2,         	//!< AF_TIM5_CH1_PA0_AF2
	AF_TIM8_ETR_PA0_AF3					= AF_Px0_AF3,         	//!< AF_TIM8_ETR_PA0_AF3
	AF_USART2_CTS_PA0_AF7				= AF_Px0_AF7,        	//!< AF_USART2_CTS_PA0_AF7
	AF_USART4_TX_PA0_AF8				= AF_Px0_AF8,        	//!< AF_USART4_TX_PA0_AF8
	AF_ETH_MII_CRS_PA0_AF11				= AF_Px0_AF11,     		//!< AF_ETH_MII_CRS_PA0_AF11
	AF_EVENTOUT_PA0_AF15				= AF_Px0_AF15,      	//!< AF_EVENTOUT_PA0_AF15

	AF_TIM2_CH2_PA1_AF1					= AF_Px1_AF1,         	//!< AF_TIM2_CH2_PA1_AF1
	AF_TIM5_CH2_PA1_AF2					= AF_Px1_AF2,         	//!< AF_TIM5_CH2_PA1_AF2
	AF_USART2_RTS_PA1_AF7				= AF_Px1_AF7,        	//!< AF_USART2_RTS_PA1_AF7
	AF_UART4_RX_PA1_AF8					= AF_Px1_AF8,         	//!< AF_UART4_RX_PA1_AF8
	AF_ETH_MII_RX_CLK_PA1_AF11			= AF_Px1_AF11,   		//!< AF_ETH_MII_RX_CLK_PA1_AF11
	AF_ETH_RMII__REF_CLK_PA1_AF11		= AF_Px1_AF11, 			//!< AF_ETH_RMII__REF_CLK_PA1_AF11
	AF_EVENTOUT_PA1						= AF_Px1_AF15,          //!< AF_EVENTOUT_PA1

	AF_TIM2_CH3_PA2_AF1					= AF_Px2_AF1,         	//!< AF_TIM2_CH3_PA2_AF1
	AF_TIM5_CH3_PA2_AF2					= AF_Px2_AF2,         	//!< AF_TIM5_CH3_PA2_AF2
	AF_TIM9_CH1_PA2_AF3					= AF_Px2_AF3,         	//!< AF_TIM9_CH1_PA2_AF3
	AF_USART2_TX_PA2_AF7				= AF_Px2_AF7,         	//!< AF_USART2_TX_PA2_AF7
	AF_ETH_MDIO_PA2_AF11				= AF_Px2_AF11,        	//!< AF_ETH_MDIO_PA2_AF11
	AF_EVENTOUT_PA2_AF15				= AF_Px2_AF15,        	//!< AF_EVENTOUT_PA2_AF15

	AF_TIM2_CH4_PA3_AF1					= AF_Px3_AF1,         	//!< AF_TIM2_CH4_PA3_AF1
	AF_TIM5_CH4_PA3_AF2					= AF_Px3_AF2,         	//!< AF_TIM5_CH4_PA3_AF2
	AF_TIM9_CH2_PA3_AF3					= AF_Px3_AF3,         	//!< AF_TIM9_CH2_PA3_AF3
	AF_USART2_RX_PA3_AF7				= AF_Px3_AF7,         	//!< AF_USART2_RX_PA3_AF7
	AF_OTG_HS_ULPI_D0_PA3_AF10			= AF_Px3_AF10,   		//!< AF_OTG_HS_ULPI_D0_PA3_AF10
	AF_ETH_MII_COL_PA3_AF11				= AF_Px3_AF11,     		//!< AF_ETH_MII_COL_PA3_AF11
	AF_EVENTOUT_PA3_AF15				= AF_Px3_AF15,        	//!< AF_EVENTOUT_PA3_AF15

	AF_SPI1_NSS_PA4_AF5					= AF_Px4_AF5,         	//!< AF_SPI1_NSS_PA4_AF5
	AF_SPI3_NSS_PA4_AF6					= AF_Px4_AF6,         	//!< AF_SPI3_NSS_PA4_AF6
	AF_I2S3_WS_PA4_AF6					= AF_Px4_AF6,           //!< AF_I2S3_WS_PA4_AF6
	AF_USART2_CK_PA4_AF7				= AF_Px4_AF7,          	//!< AF_USART2_CK_PA4_AF7
	AF_OTG_HS_SOF_PA4_AF12				= AF_Px4_AF12,      	//!< AF_OTG_HS_SOF_PA4_AF12
	AF_DCMI_HSYNC_PA4_AF13				= AF_Px4_AF13,      	//!< AF_DCMI_HSYNC_PA4_AF13
	AF_EVENTOUT_PA4_PA4_AF15			= AF_Px4_AF15,     		//!< AF_EVENTOUT_PA4_PA4_AF15

	AF_TIM2_CH1_ETR_PA5_AF1				= AF_Px5_AF1,      		//!< AF_TIM2_CH1_ETR_PA5_AF1
	AF_TIM8_CH1N_PA5_AF3				= AF_Px5_AF3,         	//!< AF_TIM8_CH1N_PA5_AF3
	AF_SPI1_SCK_PA5_AF5					= AF_Px5_AF5,         	//!< AF_SPI1_SCK_PA5_AF5
	AF_OTG_HS_ULPI_CK_PA5_AF10			= AF_Px5_AF10,   		//!< AF_OTG_HS_ULPI_CK_PA5_AF10
	AF_EVENTOUT_PA5_AF15				= AF_Px5_AF15,        	//!< AF_EVENTOUT_PA5_AF15

	AF_TIM1_BKIN_PA6_AF1				= AF_Px6_AF1,         	//!< AF_TIM1_BKIN_PA6_AF1
	AF_TIM3_CH1_PA6_AF2					= AF_Px6_AF2,         	//!< AF_TIM3_CH1_PA6_AF2
	AF_TIM8_BKIN_PA6_AF3				= AF_Px6_AF3,         	//!< AF_TIM8_BKIN_PA6_AF3
	AF_SPI1_MISO_PA6_AF5				= AF_Px6_AF5,         	//!< AF_SPI1_MISO_PA6_AF5
	AF_TIM13_CH1_PA6_AF9				= AF_Px6_AF9,         	//!< AF_TIM13_CH1_PA6_AF9
	AF_DCMI_PIXCLK_PA6_AF13				= AF_Px6_AF13,     		//!< AF_DCMI_PIXCLK_PA6_AF13
	AF_EVENTOUT_PA6_AF15				= AF_Px6_AF15,        	//!< AF_EVENTOUT_PA6_AF15

	AF_TIM1_CH1N_PA7_AF1				= AF_Px7_AF1,         	//!< AF_TIM1_CH1N_PA7_AF1
	AF_TIM3_CH2_PA7_AF2					= AF_Px7_AF2,         	//!< AF_TIM3_CH2_PA7_AF2
	AF_TIM8_CH1N_PA7_AF3				= AF_Px7_AF3,         	//!< AF_TIM8_CH1N_PA7_AF3
	AF_SPI1_MOSI_PA7_AF5				= AF_Px7_AF5,         	//!< AF_SPI1_MOSI_PA7_AF5
	AF_TIM14_CH1_PA7_AF9				= AF_Px7_AF9,         	//!< AF_TIM14_CH1_PA7_AF9
	AF_ETH_MII_RX_DV_PA7_AF11			= AF_Px7_AF11,    		//!< AF_ETH_MII_RX_DV_PA7_AF11
	AF_ETH_RMII_CRS_DV_PA7_AF11			= AF_Px7_AF11,  		//!< AF_ETH_RMII_CRS_DV_PA7_AF11
	AF_EVENTOUT_PA7_AF15				= AF_Px7_AF15,        	//!< AF_EVENTOUT_PA7_AF15

	AF_MCO1_PA8_AF0						= AF_Px8_AF0,           //!< AF_MCO1_PA8_AF0
	AF_TIM1_CH1_PA8_AF1					= AF_Px8_AF1,         	//!< AF_TIM1_CH1_PA8_AF1
	AF_I2C3_SCL_PA8_AF4					= AF_Px8_AF4,         	//!< AF_I2C3_SCL_PA8_AF4
	AF_USART1_CK_PA8_AF7				= AF_Px8_AF7,         	//!< AF_USART1_CK_PA8_AF7
	AF_OTG_FS_SOF_PA8_AF10				= AF_Px8_AF10,      	//!< AF_OTG_FS_SOF_PA8_AF10
	AF_EVENTOUT_PA8_AF15				= AF_Px8_AF15,        	//!< AF_EVENTOUT_PA8_AF15

	AF_TIM1_CH2_PA9_AF1					= AF_Px9_AF1,         	//!< AF_TIM1_CH2_PA9_AF1
	AF_I2C3_SMBA_PA9_AF4				= AF_Px9_AF4,         	//!< AF_I2C3_SMBA_PA9_AF4
	AF_USART1_TX_PA9_AF7 				= AF_Px9_AF7,        	//!< AF_USART1_TX_PA9_AF7
	AF_DCMI_D0_PA9_AF13					= AF_Px9_AF13,        	//!< AF_DCMI_D0_PA9_AF13
	AF_EVENTOUT_PA9_AF15				= AF_Px9_AF15,        	//!< AF_EVENTOUT_PA9_AF15

	AF_TIM1_CH3_PA10_AF1				= AF_Px10_AF1,        	//!< AF_TIM1_CH3_PA10_AF1
	AF_USART1_RX_PA10_AF7				= AF_Px10_AF7,       	//!< AF_USART1_RX_PA10_AF7
	AF_OTG_FS_ID_PA10_AF10				= AF_Px10_AF10,     	//!< AF_OTG_FS_ID_PA10_AF10
	AF_DCMI_D1_PA10_AF13				= AF_Px10_AF13,       	//!< AF_DCMI_D1_PA10_AF13
	AF_EVENTOUT_PA10_AF15				= AF_Px10_AF15,      	//!< AF_EVENTOUT_PA10_AF15

	AF_TIM1_CH4_PA11_AF1				= AF_Px11_AF1,        	//!< AF_TIM1_CH4_PA11_AF1
	AF_USART1_CTS_PA11_AF7				= AF_Px11_AF7,      	//!< AF_USART1_CTS_PA11_AF7
	AF_CAN1_RX_PA11_AF9					= AF_Px11_AF9,        	//!< AF_CAN1_RX_PA11_AF9
	AF_OTG_FS_DM_PA11_AF10				= AF_Px11_AF10,     	//!< AF_OTG_FS_DM_PA11_AF10
	AF_EVENTOUT_PA11_AF15				= AF_Px11_AF15,      	//!< AF_EVENTOUT_PA11_AF15

	AF_TIM1_ETR_PA12_AF1				= AF_Px12_AF1,        	//!< AF_TIM1_ETR_PA12_AF1
	AF_USART1_RTS_PA12_AF7				= AF_Px12_AF7,      	//!< AF_USART1_RTS_PA12_AF7
	AF_CAN1_TX_PA12_AF9					= AF_Px12_AF9,        	//!< AF_CAN1_TX_PA12_AF9
	AF_OTG_FS_DP_PA12_AF10				= AF_Px12_AF10,     	//!< AF_OTG_FS_DP_PA12_AF10
	AF_EVENTOUT_PA12_AF15				= AF_Px12_AF15,      	//!< AF_EVENTOUT_PA12_AF15

	AF_JTMS_SWDIO_PA13_AF0				= AF_Px13_AF0,      	//!< AF_JTMS_SWDIO_PA13_AF0
	AF_EVENTOUT_PA13_AF15				= AF_Px13_AF15,      	//!< AF_EVENTOUT_PA13_AF15

	AF_JTCK_SWCLK_PA14_AF0				= AF_Px14_AF0,      	//!< AF_JTCK_SWCLK_PA14_AF0
	AF_EVENTOUT_PA14_AF15				= AF_Px14_AF15,      	//!< AF_EVENTOUT_PA14_AF15


	AF_JTDI_PA15_AF0					= AF_Px15_AF0,          //!< AF_JTDI_PA15_AF0
	AF_TIM2_CH1_PA15_AF1				= AF_Px15_AF1,        	//!< AF_TIM2_CH1_PA15_AF1
	AF_TIM2_ETR_PA15_AF1				= AF_Px15_AF1,        	//!< AF_TIM2_ETR_PA15_AF1
	AF_SPI1_NSS_PA15_AF5				= AF_Px15_AF5,        	//!< AF_SPI1_NSS_PA15_AF5
	AF_SPI3_NSS_PA15_AF6				= AF_Px15_AF6,        	//!< AF_SPI3_NSS_PA15_AF6
	AF_I2S3_WS_PA15_AF6					= AF_Px15_AF6,        	//!< AF_I2S3_WS_PA15_AF6
	AF_EVENTOUT_PA15_AF15				= AF_Px15_AF15,      	//!< AF_EVENTOUT_PA15_AF15


	// PORTB Alternate Function Mapping
	// PB0
	AF_TIM1_CH2N_PB0_AF1					= AF_Px0_AF1,       //!< AF_TIM1_CH2N_PB0_AF1
	AF_TIM3_CH3_PB0_AF2						= AF_Px0_AF2,       //!< AF_TIM3_CH3_PB0_AF2
	AF_TIM8_CH2N_PB0_AF3					= AF_Px0_AF3,       //!< AF_TIM8_CH2N_PB0_AF3
	AF_OTG_HS_ULPI_D1_PB0_AF10				= AF_Px0_AF10,  	//!< AF_OTG_HS_ULPI_D1_PB0_AF10
	AF_ETH_MII_RXD2_PB0_AF11				= AF_Px0_AF11,    	//!< AF_ETH_MII_RXD2_PB0_AF11
	AF_EVENTOUT_PB0_AF15					= AF_Px0_AF15,      //!< AF_EVENTOUT_PB0_AF15

	// PB1
	AF_TIM1_CH3N_PB1_AF						= AF_Px1_AF1,       //!< AF_TIM1_CH3N_PB1_AF
	AF_TIM3_CH4_PB1_AF						= AF_Px1_AF2,       //!< AF_TIM3_CH4_PB1_AF
	AF_TIM8_CH3N_PB1_AF						= AF_Px1_AF3,       //!< AF_TIM8_CH3N_PB1_AF
	AF_OTG_HS_ULPI_D2_PB1_AF				= AF_Px1_AF10,    	//!< AF_OTG_HS_ULPI_D2_PB1_AF
	AF_ETH_MII_RXD3_PB1_AF					= AF_Px1_AF11,     	//!< AF_ETH_MII_RXD3_PB1_AF
	AF_EVENTOUT_PB1_AF						= AF_Px1_AF15,      //!< AF_EVENTOUT_PB1_AF

	// PB2
	AF_EVENTOUT_PB2_AF						= AF_Px2_AF15,      //!< AF_EVENTOUT_PB2_AF

	// PB3
	AF_JTDO_TRACES_WO_PB1_AF0  				= AF_Px3_AF0,  		//!< AF_JTDO_TRACES_WO_PB1_AF0
	AF_TIM2_CH2_PB1_AF1        				= AF_Px3_AF1,  		//!< AF_TIM2_CH2_PB1_AF1
	AF_SPI1_SCK_PB1_AF5        				= AF_Px3_AF5,  		//!< AF_SPI1_SCK_PB1_AF5
	AF_SPI3_SCK_PB1_AF6        				= AF_Px3_AF6,  		//!< AF_SPI3_SCK_PB1_AF6
	AF_I2S3_CK_PB1_AF6         				= AF_Px3_AF6,  		//!< AF_I2S3_CK_PB1_AF6
	AF_EVENTOUT_PB1_AF15					= AF_Px3_AF15,      //!< AF_EVENTOUT_PB1_AF15

	// PB4
	AF_NJTRST_PB4_AF0						= AF_Px4_AF0,       //!< AF_NJTRST_PB4_AF0
	AF_TIM3_CH1_PB4_AF2						= AF_Px4_AF2,       //!< AF_TIM3_CH1_PB4_AF2
	AF_SPI1_MISO_PB4_AF5					= AF_Px4_AF5,       //!< AF_SPI1_MISO_PB4_AF5
	AF_SPI3_MISO_PB4_AF6					= AF_Px4_AF6,       //!< AF_SPI3_MISO_PB4_AF6
	AF_I2S3ext_SD_PB4_AF7					= AF_Px4_AF7,       //!< AF_I2S3ext_SD_PB4_AF7
	AF_EVENTOUT_PB4_AF15					= AF_Px4_AF15,      //!< AF_EVENTOUT_PB4_AF15

	// PB5
	AF_TIM3_CH2_PB5_AF2						= AF_Px5_AF2,       //!< AF_TIM3_CH2_PB5_AF2
	AF_I2C1_SMBA_PB5_AF4					= AF_Px5_AF4,       //!< AF_I2C1_SMBA_PB5_AF4
	AF_SPI1_MOSI_PB5_AF5					= AF_Px5_AF5,       //!< AF_SPI1_MOSI_PB5_AF5
	AF_SPI3_MOSI_PB5_AF6					= AF_Px5_AF6,       //!< AF_SPI3_MOSI_PB5_AF6
	AF_I2S3_SD_PB5_AF6						= AF_Px5_AF6,       //!< AF_I2S3_SD_PB5_AF6
	AF_CAN2_RX_PB5_AF9						= AF_Px5_AF9,       //!< AF_CAN2_RX_PB5_AF9
	AF_OTG_HS_ULPI_D7_PB5_AF10				= AF_Px5_AF10,  	//!< AF_OTG_HS_ULPI_D7_PB5_AF10
	AF_ETH_PPS_OUT_PB5_AF11					= AF_Px5_AF11,    	//!< AF_ETH_PPS_OUT_PB5_AF11
	AF_DCMI_D10_PB5_AF13					= AF_Px5_AF13,      //!< AF_DCMI_D10_PB5_AF13
	AF_EVENTOUT_PB5_AF15					= AF_Px5_AF15,      //!< AF_EVENTOUT_PB5_AF15

	// PB6
	AF_TIM4_CH1_PB6_AF2						= AF_Px6_AF2,       //!< AF_TIM4_CH1_PB6_AF2
	AF_I2C1_SCL_PB6_AF4						= AF_Px6_AF4,       //!< AF_I2C1_SCL_PB6_AF4
	AF_USART1_TX_PB6_AF7					= AF_Px6_AF7,       //!< AF_USART1_TX_PB6_AF7
	AF_CAN2_TX_PB6_AF9						= AF_Px6_AF9,       //!< AF_CAN2_TX_PB6_AF9
	AF_DCMI_D5_PB6_AF13						= AF_Px6_AF13,      //!< AF_DCMI_D5_PB6_AF13
	AF_EVENTOUT_PB6_AF15					= AF_Px6_AF15,      //!< AF_EVENTOUT_PB6_AF15

	// PB7
	AF_TIM4_CH2_PB7_AF						= AF_Px7_AF2,       //!< AF_TIM4_CH2_PB7_AF
	AF_I2C1_SDA_PB7_AF						= AF_Px7_AF4,       //!< AF_I2C1_SDA_PB7_AF
	AF_USART1_RX_PB7_AF						= AF_Px7_AF7,       //!< AF_USART1_RX_PB7_AF
	AF_FSMC_NL_PB7_AF						= AF_Px7_AF12,      //!< AF_FSMC_NL_PB7_AF
	AF_DCMI_VSYNC_PB7_AF					= AF_Px7_AF13,      //!< AF_DCMI_VSYNC_PB7_AF
	AF_EVENTOUT_PB7_AF						= AF_Px7_AF15,      //!< AF_EVENTOUT_PB7_AF

	// PB8
	AF_TIM4_CH3_PB8_AF2						= AF_Px8_AF2,       //!< AF_TIM4_CH3_PB8_AF2
	AF_TIM10_CH1_PB8_AF3					= AF_Px8_AF3,       //!< AF_TIM10_CH1_PB8_AF3
	AF_I2C1_SCL_PB8_AF4						= AF_Px8_AF4,       //!< AF_I2C1_SCL_PB8_AF4
	AF_CAN1_RX_PB8_AF9						= AF_Px8_AF9,       //!< AF_CAN1_RX_PB8_AF9
	AF_ETH_MII_TXD3_PB8_AF11				= AF_Px8_AF11,      //!< AF_ETH_MII_TXD3_PB8_AF11
	AF_SDIO_D4_PB8_AF12						= AF_Px8_AF12,      //!< AF_SDIO_D4_PB8_AF12
	AF_DCMI_D6_PB8_AF13						= AF_Px8_AF13,      //!< AF_DCMI_D6_PB8_AF13
	AF_EVENTOUT_PB8_AF15					= AF_Px8_AF15,      //!< AF_EVENTOUT_PB8_AF15

	// PB9
	AF_TIM4_CH4_PB9_AF2						= AF_Px9_AF2,       //!< AF_TIM4_CH4_PB9_AF2
	AF_TIM11_CH1_PB9_AF3					= AF_Px9_AF3,       //!< AF_TIM11_CH1_PB9_AF3
	AF_I2C1_SDA_PB9_AF4						= AF_Px9_AF4,       //!< AF_I2C1_SDA_PB9_AF4
	AF_SPI2_NSS_PB9_AF5						= AF_Px9_AF5,       //!< AF_SPI2_NSS_PB9_AF5
	AF_I2S2_WS_PB9_AF5						= AF_Px9_AF5,       //!< AF_I2S2_WS_PB9_AF5
	AF_CAN1_TX_PB9_AF9						= AF_Px9_AF9,       //!< AF_CAN1_TX_PB9_AF9
	AF_SDIO_D5_PB9_AF12						= AF_Px9_AF12,      //!< AF_SDIO_D5_PB9_AF12
	AF_DCMI_D7_PB9_AF13						= AF_Px9_AF13,      //!< AF_DCMI_D7_PB9_AF13
	AF_EVENTOUT_PB9_AF15					= AF_Px9_AF15,      //!< AF_EVENTOUT_PB9_AF15


	// PB10
	AF_TIM2_CH3_PB10_AF1 					= AF_Px10_AF1,      //!< AF_TIM2_CH3_PB10_AF1
	AF_I2C2_SCL_PB10_AF4 					= AF_Px10_AF4,      //!< AF_I2C2_SCL_PB10_AF4
	AF_SPI2_SCK_PB10_AF5 					= AF_Px10_AF5,      //!< AF_SPI2_SCK_PB10_AF5
	AF_I2S2_CK_PB10_AF5 					= AF_Px10_AF5,      //!< AF_I2S2_CK_PB10_AF5
	AF_USART3_TX_PB10_AF7 					= AF_Px10_AF7,      //!< AF_USART3_TX_PB10_AF7
	AF_OTG_HS_ULPI_D3_PB10_AF10 			= AF_Px10_AF10,		//!< AF_OTG_HS_ULPI_D3_PB10_AF10
	AF_ETH_MII_RX_ER_PB10_AF11 				= AF_Px10_AF11,		//!< AF_ETH_MII_RX_ER_PB10_AF11
	AF_EVENTOUT_PB10_AF15 					= AF_Px10_AF15,    	//!< AF_EVENTOUT_PB10_AF15

	// PB11
	AF_TIM2_CH4_PB11_AF1					= AF_Px11_AF1,      //!< AF_TIM2_CH4_PB11_AF1
	AF_I2C2_SDA_PB11_AF4					= AF_Px11_AF4,      //!< AF_I2C2_SDA_PB11_AF4
	AF_USART3_RX_PB11_AF7					= AF_Px11_AF7,      //!< AF_USART3_RX_PB11_AF7
	AF_OTG_HS_ULPI_D4_PB11_AF10				= AF_Px11_AF10, 	//!< AF_OTG_HS_ULPI_D4_PB11_AF10
	AF_ETH_MII_TX_EN_PB11_AF11				= AF_Px11_AF11, 	//!< AF_ETH_MII_TX_EN_PB11_AF11
	AF_ETH_RMII_TX_EN_PB11_AF11				= AF_Px11_AF11, 	//!< AF_ETH_RMII_TX_EN_PB11_AF11
	AF_EVENTOUT_PB11_AF15					= AF_Px11_AF15,     //!< AF_EVENTOUT_PB11_AF15

	// PB12
	AF_TIM1_BKIN_PB12_AF1					= AF_Px12_AF1,      //!< AF_TIM1_BKIN_PB12_AF1
	AF_I2C2_SMBA_PB12_AF4					= AF_Px12_AF4,      //!< AF_I2C2_SMBA_PB12_AF4
	AF_SPI2_NSS_PB12_AF5					= AF_Px12_AF5,      //!< AF_SPI2_NSS_PB12_AF5
	AF_I2S2_WS_PB12_AF5						= AF_Px12_AF5,      //!< AF_I2S2_WS_PB12_AF5
	AF_USART3_CK_PB12_AF7					= AF_Px12_AF7,      //!< AF_USART3_CK_PB12_AF7
	AF_CAN2_RX_PB12_AF9						= AF_Px12_AF9,      //!< AF_CAN2_RX_PB12_AF9
	AF_OTG_HS_ULPI_D5_PB12_AF10				= AF_Px12_AF10,		//!< AF_OTG_HS_ULPI_D5_PB12_AF10
	AF_ETH_MII_TXD0_PB12_AF11				= AF_Px12_AF11,  	//!< AF_ETH_MII_TXD0_PB12_AF11
	AF_ETH_RMII_TXD0_PB12_AF11				= AF_Px12_AF11, 	//!< AF_ETH_RMII_TXD0_PB12_AF11
	AF_OTG_HS_ID_PB12_AF12					= AF_Px12_AF12,    	//!< AF_OTG_HS_ID_PB12_AF12
	AF_EVENTOUT_PB12_AF15					= AF_Px12_AF15,     //!< AF_EVENTOUT_PB12_AF15

	// PB13
	AF_TIM1_CH1N_PB13_AF1					= AF_Px13_AF1,      //!< AF_TIM1_CH1N_PB13_AF1
	AF_SPI2_SCK_PB13_AF5					= AF_Px13_AF5,      //!< AF_SPI2_SCK_PB13_AF5
	AF_I2S2_CK_PB13_AF5						= AF_Px13_AF5,      //!< AF_I2S2_CK_PB13_AF5
	AF_USART3_CTS_PB13_AF7					= AF_Px13_AF7,      //!< AF_USART3_CTS_PB13_AF7
	AF_CAN2_TX_PB13_AF9						= AF_Px13_AF9,      //!< AF_CAN2_TX_PB13_AF9
	AF_OTG_HS_ULPI_D6_PB13_AF10				= AF_Px13_AF10,		//!< AF_OTG_HS_ULPI_D6_PB13_AF10
	AF_ETH_MII_TXD1_PB13_AF11				= AF_Px13_AF11,  	//!< AF_ETH_MII_TXD1_PB13_AF11
	AF_ETH_RMII_TXD1_PB13_AF11				= AF_Px13_AF11, 	//!< AF_ETH_RMII_TXD1_PB13_AF11
	AF_EVENTOUT_PB13_AF15					= AF_Px13_AF15,     //!< AF_EVENTOUT_PB13_AF15

	// PB14
	AF_TIM1_CH2N_PB14_AF1					= AF_Px14_AF1,      //!< AF_TIM1_CH2N_PB14_AF1
	AF_TIM8_CH2N_PB14_AF3					= AF_Px14_AF3,      //!< AF_TIM8_CH2N_PB14_AF3
	AF_SPI2_MISO_PB14_AF5					= AF_Px14_AF5,      //!< AF_SPI2_MISO_PB14_AF5
	AF_I2S2ext_SD_PB14_AF6					= AF_Px14_AF6,      //!< AF_I2S2ext_SD_PB14_AF6
	AF_USART3_RTS_PB14_AF7					= AF_Px14_AF7,      //!< AF_USART3_RTS_PB14_AF7
	AF_TIM12_CH1_PB14_AF9					= AF_Px14_AF9,      //!< AF_TIM12_CH1_PB14_AF9
	AF_OTG_HS_DM_PB14_AF12					= AF_Px14_AF12,     //!< AF_OTG_HS_DM_PB14_AF12
	AF_EVENTOUT_PB14_AF15					= AF_Px14_AF15,     //!< AF_EVENTOUT_PB14_AF15

	// PB15
	AF_RTC_REFIN_PB15_AF0					= AF_Px15_AF0,      //!< AF_RTC_REFIN_PB15_AF0
	AF_TIM1_CH3N_PB15_AF1					= AF_Px15_AF1,      //!< AF_TIM1_CH3N_PB15_AF1
	AF_TIM8_CH3N_PB15_AF3					= AF_Px15_AF3,      //!< AF_TIM8_CH3N_PB15_AF3
	AF_SPI2_MOSI_PB15_AF5					= AF_Px15_AF5,      //!< AF_SPI2_MOSI_PB15_AF5
	AF_I2S2_SD_PB15_AF5						= AF_Px15_AF5,      //!< AF_I2S2_SD_PB15_AF5
	AF_TIM12_CH2_PB15_AF9					= AF_Px15_AF9,      //!< AF_TIM12_CH2_PB15_AF9
	AF_OTG_HS_DP_PB15_AF12					= AF_Px15_AF12,    	//!< AF_OTG_HS_DP_PB15_AF12
	AF_EVENTOUT_PB15_AF15					= AF_Px15_AF15,     //!< AF_EVENTOUT_PB15_AF15

	// PORTC Alternate Function Mapping
	// PC0
	AF_OTG_HS_ULPI_STP_PC0_AF10				= AF_Px0_AF10, 		//!< AF_OTG_HS_ULPI_STP_PC0_AF10
	AF_EVENTOUT_PC0_AF15					= AF_Px0_AF15,      //!< AF_EVENTOUT_PC0_AF15

	// PC1
	AF_ETH_MDC_PC1_AF11						= AF_Px1_AF11,      //!< AF_ETH_MDC_PC1_AF11
	AF_EVENTOUT_PC1_AF15					= AF_Px1_AF15,      //!< AF_EVENTOUT_PC1_AF15

	// PC2
	AF_SPI2_MISO_PC2_AF5					= AF_Px2_AF5,       //!< AF_SPI2_MISO_PC2_AF5
	AF_I2S2ext_SD_PC2_AF6					= AF_Px2_AF6,       //!< AF_I2S2ext_SD_PC2_AF6
	AF_OTG_HS_ULPI_DIR_PC2_AF10				= AF_Px2_AF10, 		//!< AF_OTG_HS_ULPI_DIR_PC2_AF10
	AF_ETH_MII_TXD2_PC2_AF11				= AF_Px2_AF11,    	//!< AF_ETH_MII_TXD2_PC2_AF11
	AF_EVENTOUT_PC2_AF15					= AF_Px2_AF15,      //!< AF_EVENTOUT_PC2_AF15

	// PC3
	AF_SPI2_MOSI_PC3_AF5					= AF_Px3_AF5,       //!< AF_SPI2_MOSI_PC3_AF5
	AF_I2S2_SD_PC3_AF5						= AF_Px3_AF5,       //!< AF_I2S2_SD_PC3_AF5
	AF_OTG_HS_ULPI_NXT_PC3_AF10				= AF_Px3_AF10, 		//!< AF_OTG_HS_ULPI_NXT_PC3_AF10
	ETH_MII_TX_CLK_PC3_AF11					= AF_Px3_AF11,    	//!< ETH_MII_TX_CLK_PC3_AF11
	AF_EVENTOUT_PC3_AF15					= AF_Px3_AF15,      //!< AF_EVENTOUT_PC3_AF15


	// PC4
	AF_ETH_MII_RXD0_PC4_AF11				= AF_Px4_AF11,    	//!< AF_ETH_MII_RXD0_PC4_AF11
	AF_ETH_RMII_RXD0_PC4_AF11				= AF_Px4_AF11,   	//!< AF_ETH_RMII_RXD0_PC4_AF11
	AF_EVENTOUT_PC4_AF15					= AF_Px4_AF15,      //!< AF_EVENTOUT_PC4_AF15

	// PC5
	AF_ETH_MII_RXD1_PC5_AF11				= AF_Px5_AF11,    	//!< AF_ETH_MII_RXD1_PC5_AF11
	AF_ETH_RMII_RXD1_PC5_AF11				= AF_Px5_AF11,   	//!< AF_ETH_RMII_RXD1_PC5_AF11
	AF_EVENTOUT_PC5_AF15					= AF_Px5_AF15,      //!< AF_EVENTOUT_PC5_AF15

	// PC6
	AF_TIM3_CH1_PC6_AF2						= AF_Px6_AF2,       //!< AF_TIM3_CH1_PC6_AF2
	AF_TIM8_CH1_PC6_AF3						= AF_Px6_AF3,       //!< AF_TIM8_CH1_PC6_AF3
	AF_I2S2_MCK_PC6_AF5						= AF_Px6_AF5,       //!< AF_I2S2_MCK_PC6_AF5
	AF_USART6_TX_PC6_AF8					= AF_Px6_AF8,       //!< AF_USART6_TX_PC6_AF8
	AF_SDIO_D6_PC6_AF12						= AF_Px6_AF12,      //!< AF_SDIO_D6_PC6_AF12
	AF_DCMI_D0_PC6_AF13						= AF_Px6_AF13,      //!< AF_DCMI_D0_PC6_AF13
	AF_EVENTOUT_PC6_AF15					= AF_Px6_AF15,      //!< AF_EVENTOUT_PC6_AF15


	// PC7
	AF_TIM3_CH2_PC7_AF2						= AF_Px7_AF2,       //!< AF_TIM3_CH2_PC7_AF2
	AF_TIM8_CH2_PC7_AF3						= AF_Px7_AF3,       //!< AF_TIM8_CH2_PC7_AF3
	AF_I2S3_MCK_PC7_AF6						= AF_Px7_AF6,       //!< AF_I2S3_MCK_PC7_AF6
	AF_USART6_RX_PC7_AF8					= AF_Px7_AF8,       //!< AF_USART6_RX_PC7_AF8
	AF_SDIO_D7_PC7_AF12						= AF_Px7_AF12,      //!< AF_SDIO_D7_PC7_AF12
	AF_DCMI_D1_PC7_AF13						= AF_Px7_AF13,      //!< AF_DCMI_D1_PC7_AF13
	AF_EVENTOUT_PC7_AF15					= AF_Px7_AF15,      //!< AF_EVENTOUT_PC7_AF15

	// PC8
	AF_TIM3_CH3_PC8_AF2						= AF_Px8_AF2,        //!< AF_TIM3_CH3_PC8_AF2
	AF_TIM8_CH3_PC8_AF3						= AF_Px8_AF3,        //!< AF_TIM8_CH3_PC8_AF3
	AF_USART6_CK_PC8_AF8					= AF_Px8_AF8,        //!< AF_USART6_CK_PC8_AF8
	AF_SDIO_D0_PC8_AF12						= AF_Px8_AF12,       //!< AF_SDIO_D0_PC8_AF12
	AF_DCMI_D2_PC8_AF13						= AF_Px8_AF13,       //!< AF_DCMI_D2_PC8_AF13
	AF_EVENTOUT_PC8_AF15					= AF_Px8_AF15,       //!< AF_EVENTOUT_PC8_AF15

	// PC9
	AF_MCO2_PC9_AF0							= AF_Px9_AF0,        //!< AF_MCO2_PC9_AF0
	AF_TIM3_CH4_PC9_AF2						= AF_Px9_AF2,        //!< AF_TIM3_CH4_PC9_AF2
	AF_TIM8_CH4_PC9_AF3						= AF_Px9_AF3,        //!< AF_TIM8_CH4_PC9_AF3
	AF_I2C3_SDA_PC9_AF4						= AF_Px9_AF4,        //!< AF_I2C3_SDA_PC9_AF4
	AF_I2S_CKIN_PC9_AF5						= AF_Px9_AF5,        //!< AF_I2S_CKIN_PC9_AF5
	AF_SDIO_D1_PC9_AF12						= AF_Px9_AF12,       //!< AF_SDIO_D1_PC9_AF12
	AF_DCMI_D3_PC9_AF13						= AF_Px9_AF13,       //!< AF_DCMI_D3_PC9_AF13
	AF_EVENTOUT_PC9_AF15					= AF_Px9_AF15,       //!< AF_EVENTOUT_PC9_AF15

	// PC10
	AF_SPI3_SCK_PC10_AF6					= AF_Px10_AF6,       //!< AF_SPI3_SCK_PC10_AF6
	AF_I2S3_CK_PC10_AF6						= AF_Px10_AF6,       //!< AF_I2S3_CK_PC10_AF6
	AF_USART3_TX_PC10_AF7					= AF_Px10_AF7,       //!< AF_USART3_TX_PC10_AF7
	AF_UART4_TX_PC10_AF8					= AF_Px10_AF8,       //!< AF_UART4_TX_PC10_AF8
	AF_SDIO_D2_PC10_AF12					= AF_Px10_AF12,      //!< AF_SDIO_D2_PC10_AF12
	AF_DCMI_D8_PC10_AF13					= AF_Px10_AF13,      //!< AF_DCMI_D8_PC10_AF13
	AF_EVENTOUT_PC10_AF15					= AF_Px10_AF15,      //!< AF_EVENTOUT_PC10_AF15

	// PC11
	AF_I2S3ext_SD_PC11_AF5					= AF_Px11_AF5,      //!< AF_I2S3ext_SD_PC11_AF5
	AF_SPI3_MISO_PC11_AF6					= AF_Px11_AF6,      //!< AF_SPI3_MISO_PC11_AF6
	AF_USART3_RX_PC11_AF7					= AF_Px11_AF7,      //!< AF_USART3_RX_PC11_AF7
	AF_UART4_RX_PC11_AF8					= AF_Px11_AF8,      //!< AF_UART4_RX_PC11_AF8
	AF_SDIO_D3_PC11_AF12					= AF_Px11_AF12,     //!< AF_SDIO_D3_PC11_AF12
	AF_DCMI_D4_PC11_AF13					= AF_Px11_AF13,     //!< AF_DCMI_D4_PC11_AF13
	AF_EVENTOUT_PC11_AF15					= AF_Px11_AF15,     //!< AF_EVENTOUT_PC11_AF15

	// PC12
	AF_SPI3_MOSI_PC12_AF6					= AF_Px12_AF6,      //!< AF_SPI3_MOSI_PC12_AF6
	AF_I2S3_SD_PC12_AF6						= AF_Px12_AF6,      //!< AF_I2S3_SD_PC12_AF6
	AF_USART3_CK_PC12_AF7					= AF_Px12_AF7,      //!< AF_USART3_CK_PC12_AF7
	AF_UART5_TX_PC12_AF8					= AF_Px12_AF8,      //!< AF_UART5_TX_PC12_AF8
	AF_SDIO_CK_PC12_AF12					= AF_Px12_AF12,     //!< AF_SDIO_CK_PC12_AF12
	AF_DCMI_D9_PC12_AF13					= AF_Px12_AF13,     //!< AF_DCMI_D9_PC12_AF13
	AF_EVENTOUT_PC12_AF15					= AF_Px12_AF15,     //!< AF_EVENTOUT_PC12_AF15

	// PC13
	AF_EVENTOUT_PC13_AF15					= AF_Px13_AF15,     //!< AF_EVENTOUT_PC13_AF15

	// PC14
	AF_EVENTOUT_PC14_AF15					= AF_Px14_AF15,     //!< AF_EVENTOUT_PC14_AF15

	// PC15
	AF_EVENTOUT_PC15_AF15					= AF_Px15_AF15,     //!< AF_EVENTOUT_PC15_AF15


	// PORTD Alternate Function Mapping
	// PD0
	AF_CAN1_RX_PD0_AF9						= AF_Px0_AF9,        //!< AF_CAN1_RX_PD0_AF9
	AF_FSMC_D2_PD0_AF12						= AF_Px0_AF12,       //!< AF_FSMC_D2_PD0_AF12
	AF_EVENTOUT_PD0_AF15					= AF_Px0_AF15,       //!< AF_EVENTOUT_PD0_AF15

	// PD1
	AF_CAN1_TX_PD1_AF9						= AF_Px1_AF9,        //!< AF_CAN1_TX_PD1_AF9
	AF_FSMC_D3_PD1_AF12						= AF_Px1_AF12,       //!< AF_FSMC_D3_PD1_AF12
	AF_EVENTOUT_PD1_AF15					= AF_Px1_AF15,       //!< AF_EVENTOUT_PD1_AF15

	// PD2
	AF_TIM3_ETR_PD2_AF2						= AF_Px2_AF2,        //!< AF_TIM3_ETR_PD2_AF2
	AF_UART5_RX_PD2_AF8						= AF_Px2_AF8,        //!< AF_UART5_RX_PD2_AF8
	AF_SDIO_CMD_PD2_AF12					= AF_Px2_AF12,       //!< AF_SDIO_CMD_PD2_AF12
	AF_DCMI_D11_PD2_AF13					= AF_Px2_AF13,       //!< AF_DCMI_D11_PD2_AF13
	AF_EVENTOUT_PD2_AF15					= AF_Px2_AF15,       //!< AF_EVENTOUT_PD2_AF15

	// PD3
	AF_USART2_CTS_PD3_AF7					= AF_Px3_AF7,       //!< AF_USART2_CTS_PD3_AF7
	AF_FSMC_CLK_PD3_AF12					= AF_Px3_AF12,      //!< AF_FSMC_CLK_PD3_AF12
	AF_EVENTOUT_PD3_AF15					= AF_Px3_AF15,      //!< AF_EVENTOUT_PD3_AF15

	// PD4
	AF_USART2_RTS_PD4_AF7					= AF_Px4_AF7,       //!< AF_USART2_RTS_PD4_AF7
	AF_FSMC_NOE_PD4_AF12					= AF_Px4_AF12,      //!< AF_FSMC_NOE_PD4_AF12
	AF_EVENTOUT_PD4_AF15					= AF_Px4_AF15,      //!< AF_EVENTOUT_PD4_AF15

	// PD5
	AF_USART2_TX_PD5_AF7					= AF_Px5_AF7,        //!< AF_USART2_TX_PD5_AF7
	AF_FSMC_NWE_PD5_AF12					= AF_Px5_AF12,       //!< AF_FSMC_NWE_PD5_AF12
	AF_EVENTOUT_PD5_AF15					= AF_Px5_AF15,       //!< AF_EVENTOUT_PD5_AF15

	// PD6
	AF_USART2_RX_PD6_AF7					= AF_Px6_AF7,        //!< AF_USART2_RX_PD6_AF7
	AF_FSMC_NWAIT_PD6_AF12					= AF_Px6_AF12,     	 //!< AF_FSMC_NWAIT_PD6_AF12
	AF_EVENTOUT_PD6_AF15					= AF_Px6_AF15,       //!< AF_EVENTOUT_PD6_AF15

	// PD7
	AF_USART2_CK_PD7_AF7					= AF_Px7_AF7,        //!< AF_USART2_CK_PD7_AF7
	AF_FSMC_NE1_PD7_AF12					= AF_Px7_AF12,       //!< AF_FSMC_NE1_PD7_AF12
	AF_FSMC_NCE2_PD7_AF12					= AF_Px7_AF12,       //!< AF_FSMC_NCE2_PD7_AF12
	AF_EVENTOUT_PD7_AF15					= AF_Px7_AF15,       //!< AF_EVENTOUT_PD7_AF15

	// PD8
	AF_USART3_TX_PD8_AF7					= AF_Px8_AF7,        //!< AF_USART3_TX_PD8_AF7
	AF_FSMC_D13_PD8_AF12					= AF_Px8_AF12,       //!< AF_FSMC_D13_PD8_AF12
	AF_EVENTOUT_PD8_AF15					= AF_Px8_AF15,       //!< AF_EVENTOUT_PD8_AF15

	// PD9
	AF_USART3_RX_PD9_AF7					= AF_Px9_AF7,        //!< AF_USART3_RX_PD9_AF7
	AF_FSMC_D14_PD9_AF12					= AF_Px9_AF12,       //!< AF_FSMC_D14_PD9_AF12
	AF_EVENTOUT_PD9_AF15					= AF_Px9_AF15,       //!< AF_EVENTOUT_PD9_AF15

	// PD10
	AF_USART3_CK_PD10_AF7					= AF_Px10_AF7,       //!< AF_USART3_CK_PD10_AF7
	AF_FSMC_D15_PD10_AF12					= AF_Px10_AF12,      //!< AF_FSMC_D15_PD10_AF12
	AF_EVENTOUT_PD10_AF15					= AF_Px10_AF15,      //!< AF_EVENTOUT_PD10_AF15

	// PD11
	AF_USART3_CTS_PD11_AF7					= AF_Px11_AF7,      //!< AF_USART3_CTS_PD11_AF7
	AF_FSMC_A16_PD11_AF12					= AF_Px11_AF12,     //!< AF_FSMC_A16_PD11_AF12
	AF_EVENTOUT_PD11_AF15					= AF_Px11_AF15,     //!< AF_EVENTOUT_PD11_AF15

	// PD12
	AF_TIM4_CH1_PD12_AF2					= AF_Px12_AF2,      //!< AF_TIM4_CH1_PD12_AF2
	AF_USART3_RTS_PD12_AF7					= AF_Px12_AF7,      //!< AF_USART3_RTS_PD12_AF7
	AF_FSMC_A17_PD12_AF12					= AF_Px12_AF12,     //!< AF_FSMC_A17_PD12_AF12
	AF_EVENTOUT_PD12_AF15					= AF_Px12_AF15,     //!< AF_EVENTOUT_PD12_AF15

	// PD13
	AF_TIM4_CH2_PD13_AF2					= AF_Px13_AF2,      //!< AF_TIM4_CH2_PD13_AF2
	AF_FSMC_A18_PD13_AF12					= AF_Px13_AF12,     //!< AF_FSMC_A18_PD13_AF12
	AF_EVENTOUT_PD13_AF15					= AF_Px13_AF15,     //!< AF_EVENTOUT_PD13_AF15

	// PD14
	AF_TIM4_CH3_PD14_AF2					= AF_Px14_AF2,      //!< AF_TIM4_CH3_PD14_AF2
	AF_FSMC_D0_PD14_AF12					= AF_Px14_AF12,     //!< AF_FSMC_D0_PD14_AF12
	AF_EVENTOUT_PD14_AF15					= AF_Px14_AF15,     //!< AF_EVENTOUT_PD14_AF15

	// PD15
	AF_TIM4_CH4_PD15_AF2					= AF_Px15_AF2,      //!< AF_TIM4_CH4_PD15_AF2
	AF_FSMC_D1_PD15_AF12					= AF_Px15_AF12,     //!< AF_FSMC_D1_PD15_AF12
	AF_EVENTOUT_PD15_AF15					= AF_Px15_AF15,     //!< AF_EVENTOUT_PD15_AF15

	// PORTE Alternate Function Mapping
	// PE0
	AF_TIM4_ETR_PE0_AF2						= AF_Px0_AF2,       //!< AF_TIM4_ETR_PE0_AF2
	AF_FSMC_NBL0_PE0_AF12					= AF_Px0_AF12,      //!< AF_FSMC_NBL0_PE0_AF12
	AF_DCMI_D2_PE0_AF13						= AF_Px0_AF13,      //!< AF_DCMI_D2_PE0_AF13
	AF_EVENTOUT_PE0_AF15					= AF_Px0_AF15,      //!< AF_EVENTOUT_PE0_AF15

	// PE1
	AF_FSMC_NBL1_PE1_AF12					= AF_Px1_AF12,      //!< AF_FSMC_NBL1_PE1_AF12
	AF_DCMI_D3_PE1_AF13						= AF_Px1_AF13,      //!< AF_DCMI_D3_PE1_AF13
	AF_EVENTOUT_PE1_AF15					= AF_Px1_AF15,      //!< AF_EVENTOUT_PE1_AF15

	// PE2
	AF_TRACECLK_PE2_AF0						= AF_Px2_AF0,       //!< AF_TRACECLK_PE2_AF0
	AF_ETH_MII_TXD3_PE2_AF11				= AF_Px2_AF11,    	//!< AF_ETH_MII_TXD3_PE2_AF11
	AF_FSMC_A23_PE2_AF12					= AF_Px2_AF12,      //!< AF_FSMC_A23_PE2_AF12
	AF_EVENTOUT_PE2_AF15					= AF_Px2_AF15,      //!< AF_EVENTOUT_PE2_AF15

	// PE3
	AF_TRACED0_PE3_AF0						= AF_Px3_AF0,        //!< AF_TRACED0_PE3_AF0
	AF_FSMC_A19_PE3_AF12					= AF_Px3_AF12,       //!< AF_FSMC_A19_PE3_AF12
	AF_EVENTOUT_PE3_AF15					= AF_Px3_AF15,       //!< AF_EVENTOUT_PE3_AF15

	// PE4
	AF_TRACED1_PE4_AF0						= AF_Px4_AF0,        //!< AF_TRACED1_PE4_AF0
	AF_FSMC_A20_PE4_AF12					= AF_Px4_AF12,       //!< AF_FSMC_A20_PE4_AF12
	AF_DCMI_D4_PE4_AF13						= AF_Px4_AF13,       //!< AF_DCMI_D4_PE4_AF13
	AF_EVENTOUT_PE4_AF15					= AF_Px4_AF15,       //!< AF_EVENTOUT_PE4_AF15

	// PE5
	AF_TRACED2_PE5_AF0						= AF_Px5_AF0,        //!< AF_TRACED2_PE5_AF0
	AF_TIM9_CH1_PE5_AF3						= AF_Px5_AF3,        //!< AF_TIM9_CH1_PE5_AF3
	AF_FSMC_A21_PE5_AF12					= AF_Px5_AF12,       //!< AF_FSMC_A21_PE5_AF12
	AF_DCMI_D6_PE5_AF13						= AF_Px5_AF13,       //!< AF_DCMI_D6_PE5_AF13
	AF_EVENTOUT_PE5_AF15					= AF_Px5_AF15,       //!< AF_EVENTOUT_PE5_AF15

	// PE6
	AF_TRACED3_PE6_AF0						= AF_Px6_AF0,        //!< AF_TRACED3_PE6_AF0
	AF_TIM9_CH2_PE6_AF3						= AF_Px6_AF3,        //!< AF_TIM9_CH2_PE6_AF3
	AF_FSMC_A22_PE6_AF12					= AF_Px6_AF12,       //!< AF_FSMC_A22_PE6_AF12
	AF_DCMI_D7_PE6_AF13						= AF_Px6_AF13,       //!< AF_DCMI_D7_PE6_AF13
	AF_EVENTOUT_PE6_AF15					= AF_Px6_AF15,       //!< AF_EVENTOUT_PE6_AF15

	// PE7
	AF_TIM1_ETR_PE7_AF1						= AF_Px7_AF1,        //!< AF_TIM1_ETR_PE7_AF1
	AF_FSMC_D4_PE7_AF12						= AF_Px7_AF12,       //!< AF_FSMC_D4_PE7_AF12
	AF_EVENTOUT_PE7_AF15					= AF_Px7_AF15,       //!< AF_EVENTOUT_PE7_AF15

	// PE8
	AF_TIM1_CH1N_PE8_AF						= AF_Px8_AF1,        //!< AF_TIM1_CH1N_PE8_AF
	AF_FSMC_D5_PE8_AF						= AF_Px8_AF12,       //!< AF_FSMC_D5_PE8_AF
	AF_EVENTOUT_PE8_AF						= AF_Px8_AF15,       //!< AF_EVENTOUT_PE8_AF

	// PE9
	AF_TIM1_CH1_PE9_AF1						= AF_Px9_AF1,        //!< AF_TIM1_CH1_PE9_AF1
	AF_FSMC_D6_PE9_AF12						= AF_Px9_AF12,       //!< AF_FSMC_D6_PE9_AF12
	AF_EVENTOUT_PE9_AF15					= AF_Px9_AF15,       //!< AF_EVENTOUT_PE9_AF15

	// PE10
	AF_TIM1_CH2N_PE10_AF1					= AF_Px10_AF1,       //!< AF_TIM1_CH2N_PE10_AF1
	AF_FSMC_D7_PE10_AF12					= AF_Px10_AF12,      //!< AF_FSMC_D7_PE10_AF12
	AF_EVENTOUT_PE10_AF15					= AF_Px10_AF15,      //!< AF_EVENTOUT_PE10_AF15

	// PE11
	AF_TIM1_CH2_PE11_AF1					= AF_Px11_AF1,       //!< AF_TIM1_CH2_PE11_AF1
	AF_FSMC_D8_PE11_AF12					= AF_Px11_AF12,      //!< AF_FSMC_D8_PE11_AF12
	AF_EVENTOUT_PE11_AF15					= AF_Px11_AF15,      //!< AF_EVENTOUT_PE11_AF15

	// PE12
	AF_TIM1_CH3N_PE12_AF1					= AF_Px12_AF1,       //!< AF_TIM1_CH3N_PE12_AF1
	AF_FSMC_D9_PE12_AF12					= AF_Px12_AF12,      //!< AF_FSMC_D9_PE12_AF12
	AF_EVENTOUT_PE12_AF15					= AF_Px12_AF15,      //!< AF_EVENTOUT_PE12_AF15

	// PE13
	AF_TIM1_CH3_PE13_AF1					= AF_Px13_AF1,       //!< AF_TIM1_CH3_PE13_AF1
	AF_FSMC_D10_PE13_AF12					= AF_Px13_AF12,      //!< AF_FSMC_D10_PE13_AF12
	AF_EVENTOUT_PE13_AF15					= AF_Px13_AF15,      //!< AF_EVENTOUT_PE13_AF15

	// PE14
	AF_TIM1_CH4_PE14_AF1					= AF_Px14_AF1,       //!< AF_TIM1_CH4_PE14_AF1
	AF_FSMC_D11_PE14_AF12					= AF_Px14_AF12,      //!< AF_FSMC_D11_PE14_AF12
	AF_EVENTOUT_PE14_AF15					= AF_Px14_AF15,      //!< AF_EVENTOUT_PE14_AF15

	// PE15
	AF_TIM1_BKIN_PE15_AF1					= AF_Px15_AF1,       //!< AF_TIM1_BKIN_PE15_AF1
	AF_FSMC_D12_PE15_AF12					= AF_Px15_AF12,      //!< AF_FSMC_D12_PE15_AF12
	AF_EVENTOUT_PE15_AF15					= AF_Px15_AF15,      //!< AF_EVENTOUT_PE15_AF15

	// PORTF Alternate Function Mapping
	// PF0
	AF_I2C2_SDA_PF0_AF4						= AF_Px0_AF4,        //!< AF_I2C2_SDA_PF0_AF4
	AF_FSMC_A0_PF0_AF12						= AF_Px0_AF12,       //!< AF_FSMC_A0_PF0_AF12
	AF_EVENTOUT_PF0_AF15					= AF_Px0_AF15,       //!< AF_EVENTOUT_PF0_AF15

	// PF1
	AF_I2C2_SCL_PF1_AF4						= AF_Px1_AF4,        //!< AF_I2C2_SCL_PF1_AF4
	AF_FSMC_A1_PF1_AF12						= AF_Px1_AF12,       //!< AF_FSMC_A1_PF1_AF12
	AF_EVENTOUT_PF1_AF15					= AF_Px1_AF15,       //!< AF_EVENTOUT_PF1_AF15

	// PF2
	AF_I2C2_SMBA_PF2_AF4					= AF_Px2_AF4,        //!< AF_I2C2_SMBA_PF2_AF4
	AF_FSMC_A2_PF2_AF12						= AF_Px2_AF12,       //!< AF_FSMC_A2_PF2_AF12
	AF_EVENTOUT_PF2_AF15					= AF_Px2_AF15,       //!< AF_EVENTOUT_PF2_AF15

	// PF3
	AF_FSMC_A3_PF3_AF12						= AF_Px3_AF12,       //!< AF_FSMC_A3_PF3_AF12
	AF_EVENTOUT_PF3_AF15					= AF_Px3_AF15,       //!< AF_EVENTOUT_PF3_AF15

	// PF4
	AF_FSMC_A4_PF4_AF12						= AF_Px4_AF12,       //!< AF_FSMC_A4_PF4_AF12
	AF_EVENTOUT_PF4_AF15					= AF_Px4_AF15,       //!< AF_EVENTOUT_PF4_AF15

	// PF5
	AF_FSMC_A5_PF5_AF12						= AF_Px5_AF12,       //!< AF_FSMC_A5_PF5_AF12
	AF_EVENTOUT_PF5_AF15					= AF_Px5_AF15,       //!< AF_EVENTOUT_PF5_AF15

	// PF6
	AF_TIM10_CH1_PF6_AF3					= AF_Px6_AF3,        //!< AF_TIM10_CH1_PF6_AF3
	AF_FSMC_NIORD_PF6_AF12					= AF_Px6_AF12,       //!< AF_FSMC_NIORD_PF6_AF12
	AF_EVENTOUT_PF6_AF15					= AF_Px6_AF15,       //!< AF_EVENTOUT_PF6_AF15

	// PF7
	AF_TIM11_CH1_PF7_AF3					= AF_Px7_AF3,        //!< AF_TIM11_CH1_PF7_AF3
	AF_FSMC_NREG_PF7_AF12					= AF_Px7_AF12,      //!< AF_FSMC_NREG_PF7_AF12
	AF_EVENTOUT_PF7_AF15					= AF_Px7_AF15,       //!< AF_EVENTOUT_PF7_AF15

	// PF8
	AF_TIM13_CH1_PF8_AF9					= AF_Px8_AF9,        //!< AF_TIM13_CH1_PF8_AF9
	AF_FSMC_NIOWR_PF8_AF12					= AF_Px8_AF12,     //!< AF_FSMC_NIOWR_PF8_AF12
	AF_EVENTOUT_PF8_AF15					= AF_Px8_AF15,       //!< AF_EVENTOUT_PF8_AF15

	// PE9
	AF_TIM14_CH1_PF9_AF9					= AF_Px9_AF9,        //!< AF_TIM14_CH1_PF9_AF9
	AF_FSMC_CD_PF9_AF12						= AF_Px9_AF12,       //!< AF_FSMC_CD_PF9_AF12
	AF_EVENTOUT_PF9_AF15					= AF_Px9_AF15,       //!< AF_EVENTOUT_PF9_AF15

	// PE10
	AF_FSMC_INTR_PF10_AF12					= AF_Px10_AF12,    //!< AF_FSMC_INTR_PF10_AF12
	AF_EVENTOUT_PF10_AF15					= AF_Px10_AF15,     //!< AF_EVENTOUT_PF10_AF15

	// PE11
	AF_DCMI_D12_PF11_AF13					= AF_Px11_AF13,     //!< AF_DCMI_D12_PF11_AF13
	AF_EVENTOUT_PF11_AF15					= AF_Px11_AF15,     //!< AF_EVENTOUT_PF11_AF15

	// PE12
	AF_FSMC_A6_PF12_AF12					= AF_Px12_AF12,      //!< AF_FSMC_A6_PF12_AF12
	AF_EVENTOUT_PF12_AF15					= AF_Px12_AF15,     //!< AF_EVENTOUT_PF12_AF15

	// PE13
	AF_FSMC_A7_PF13_AF12					= AF_Px13_AF12,      //!< AF_FSMC_A7_PF13_AF12
	AF_EVENTOUT_PF13_AF15					= AF_Px13_AF15,     //!< AF_EVENTOUT_PF13_AF15

	// PE14
	AF_FSMC_A8_PF14_AF12					= AF_Px14_AF12,      //!< AF_FSMC_A8_PF14_AF12
	AF_EVENTOUT_PF14_AF15					= AF_Px14_AF15,     //!< AF_EVENTOUT_PF14_AF15

	// PE15
	AF_FSMC_A9_PF15_AF12					= AF_Px15_AF12,      //!< AF_FSMC_A9_PF15_AF12
	AF_EVENTOUT_PF15_AF15					= AF_Px15_AF15,     //!< AF_EVENTOUT_PF15_AF15

	// PORTG Alternate Function Mapping
	// PG0
	AF_FSMC_A10_PG0_AF12					= AF_Px0_AF12,       //!< AF_FSMC_A10_PG0_AF12
	AF_EVENTOUT_PG0_AF15					= AF_Px0_AF15,       //!< AF_EVENTOUT_PG0_AF15

	// PG1
	AF_FSMC_A11_PG1_AF12					= AF_Px1_AF12,       //!< AF_FSMC_A11_PG1_AF12
	AF_EVENTOUT_PG1_AF15					= AF_Px1_AF15,       //!< AF_EVENTOUT_PG1_AF15

	// PG2
	AF_FSMC_A12_PG2_AF12					= AF_Px2_AF12,       //!< AF_FSMC_A12_PG2_AF12
	AF_EVENTOUT_PG2_AF15					= AF_Px2_AF15,       //!< AF_EVENTOUT_PG2_AF15

	// PG3
	AF_FSMC_A13_PG3_AF12					= AF_Px3_AF12,       //!< AF_FSMC_A13_PG3_AF12
	AF_EVENTOUT_PG3_AF15					= AF_Px3_AF15,       //!< AF_EVENTOUT_PG3_AF15

	// PG4
	AF_FSMC_A14_PG4_AF12					= AF_Px4_AF12,       //!< AF_FSMC_A14_PG4_AF12
	AF_EVENTOUT_PG4_AF15					= AF_Px4_AF15,       //!< AF_EVENTOUT_PG4_AF15

	// PG5
	AF_FSMC_A15_PG5_AF12					= AF_Px5_AF12,       //!< AF_FSMC_A15_PG5_AF12
	AF_EVENTOUT_PG5_AF15					= AF_Px5_AF15,       //!< AF_EVENTOUT_PG5_AF15

	// PG6
	AF_FSMC_INT2_PG6_AF12					= AF_Px6_AF12,      //!< AF_FSMC_INT2_PG6_AF12
	AF_EVENTOUT_PG6_AF15					= AF_Px6_AF15,       //!< AF_EVENTOUT_PG6_AF15

	// PG7
	AF_USART6_CK_PG7_AF8					= AF_Px7_AF8,        //!< AF_USART6_CK_PG7_AF8
	AF_FSMC_INT3_PG7_AF12					= AF_Px7_AF12,      //!< AF_FSMC_INT3_PG7_AF12
	AF_EVENTOUT_PG7_AF15					= AF_Px7_AF15,       //!< AF_EVENTOUT_PG7_AF15

	// PG8
	AF_USART6_RTS_PG8_AF8					= AF_Px8_AF8,       //!< AF_USART6_RTS_PG8_AF8
	AF_ETH_PPS_OUT_PG8_AF11					= AF_Px8_AF11,    //!< AF_ETH_PPS_OUT_PG8_AF11
	AF_EVENTOUT_PG8_AF15					= AF_Px8_AF15,       //!< AF_EVENTOUT_PG8_AF15

	// PG9
	AF_USART6_RX_PG9_AF8					= AF_Px9_AF8,        //!< AF_USART6_RX_PG9_AF8
	AF_FSMC_NE2_PG9_AF12					= AF_Px9_AF12,       //!< AF_FSMC_NE2_PG9_AF12
	AF_FSMC_NCE3_PG9_AF12					= AF_Px9_AF12,      //!< AF_FSMC_NCE3_PG9_AF12
	AF_EVENTOUT_PG9_AF15					= AF_Px9_AF15,       //!< AF_EVENTOUT_PG9_AF15

	// PG10
	AF_FSMC_NCE4_1_PG10_AF12				= AF_Px10_AF12,   //!< AF_FSMC_NCE4_1_PG10_AF12
	AF_FSMC_NE3_PG10_AF12					= AF_Px10_AF12,     //!< AF_FSMC_NE3_PG10_AF12
	AF_EVENTOUT_PG10_AF15					= AF_Px10_AF15,     //!< AF_EVENTOUT_PG10_AF15

	// PG11
	AF_ETH_MII_TX_EN_PG11_AF11				= AF_Px11_AF11, //!< AF_ETH_MII_TX_EN_PG11_AF11
	AF_ETH_RMII_TX_EN_PG11_AF11				= AF_Px11_AF11,//!< AF_ETH_RMII_TX_EN_PG11_AF11
	AF_FSMC_NCE4_2_PG11_AF12				= AF_Px11_AF12,   //!< AF_FSMC_NCE4_2_PG11_AF12
	AF_EVENTOUT_PG11_AF15					= AF_Px11_AF15,     //!< AF_EVENTOUT_PG11_AF15

	// PG12
	AF_USART6_RTS_PG12_AF8					= AF_Px12_AF8,     //!< AF_USART6_RTS_PG12_AF8
	AF_FSMC_NE4_PG12_AF12					= AF_Px12_AF12,     //!< AF_FSMC_NE4_PG12_AF12
	AF_EVENTOUT_PG12_AF15					= AF_Px12_AF15,     //!< AF_EVENTOUT_PG12_AF15

	// PG13
	AF_UART6_CTS_PG13_AF8					= AF_Px13_AF8,      //!< AF_UART6_CTS_PG13_AF8
	AF_ETH_MII_TXD0_PG13_AF11				= AF_Px13_AF11,  //!< AF_ETH_MII_TXD0_PG13_AF11
	AF_ETH_RMII_TXD0_PG13_AF11				= AF_Px13_AF11, //!< AF_ETH_RMII_TXD0_PG13_AF11
	AF_FSMC_A24_PG13_AF12					= AF_Px13_AF12,     //!< AF_FSMC_A24_PG13_AF12
	AF_EVENTOUT_PG13_AF15					= AF_Px13_AF15,     //!< AF_EVENTOUT_PG13_AF15

	// PG14
	AF_USART6_TX_PG14_AF8					= AF_Px14_AF8,      //!< AF_USART6_TX_PG14_AF8
	AF_ETH_MII_TXD1_PG14_AF11				= AF_Px14_AF11,  //!< AF_ETH_MII_TXD1_PG14_AF11
	AF_ETH_RMII_TXD1_PG14_AF11				= AF_Px14_AF11, //!< AF_ETH_RMII_TXD1_PG14_AF11
	AF_FSMC_A25_PG14_AF12					= AF_Px14_AF12,     //!< AF_FSMC_A25_PG14_AF12
	AF_EVENTOUT_PG14_AF15					= AF_Px14_AF15,     //!< AF_EVENTOUT_PG14_AF15

	// PG15
	AF_USART6_CTS_PG15_AF8					= AF_Px15_AF8,     //!< AF_USART6_CTS_PG15_AF8
	AF_DCMI_D13_PG15_AF13					= AF_Px15_AF13,     //!< AF_DCMI_D13_PG15_AF13
	AF_EVENTOUT_PG15_AF15					= AF_Px15_AF15,     //!< AF_EVENTOUT_PG15_AF15


	// PORTH Alternate Function Mapping
	// PH0
	AF_EVENTOUT_PH0_AF15					= AF_Px0_AF15,       //!< AF_EVENTOUT_PH0_AF15

	// PH1
	AF_EVENTOUT_PH1_AF15					= AF_Px1_AF15,       //!< AF_EVENTOUT_PH1_AF15

	// PH2
	AF_ETH_MII_CRS_PH2_AF11					= AF_Px2_AF11,    //!< AF_ETH_MII_CRS_PH2_AF11
	AF_EVENTOUT_PH2_AF15					= AF_Px2_AF15,       //!< AF_EVENTOUT_PH2_AF15

	// PH3
	AF_ETH_MII_COL_PH3_AF11					= AF_Px3_AF11,    //!< AF_ETH_MII_COL_PH3_AF11
	AF_EVENTOUT_PH3_AF15					= AF_Px3_AF15,       //!< AF_EVENTOUT_PH3_AF15

	// PH4
	AF_I2C2_SCL_PH4_AF4						= AF_Px4_AF4,        //!< AF_I2C2_SCL_PH4_AF4
	AF_OTG_HS_ULPI_NXT_PH4_AF10				= AF_Px4_AF10, //!< AF_OTG_HS_ULPI_NXT_PH4_AF10
	AF_EVENTOUT_PH4_AF15					= AF_Px4_AF15,       //!< AF_EVENTOUT_PH4_AF15

	// PH5
	AF_I2C2_SDA_PH5_AF4						= AF_Px5_AF4,        //!< AF_I2C2_SDA_PH5_AF4
	AF_EVENTOUT_PH5_AF15					= AF_Px5_AF15,       //!< AF_EVENTOUT_PH5_AF15

	// PH6
	AF_I2C2_SMBA_PH6_AF4					= AF_Px6_AF4,        //!< AF_I2C2_SMBA_PH6_AF4
	AF_TIM12_CH1_PH6_AF9					= AF_Px6_AF9,        //!< AF_TIM12_CH1_PH6_AF9
	AF_ETH_MII_RXD2_PH6_AF11				= AF_Px6_AF11,    //!< AF_ETH_MII_RXD2_PH6_AF11
	AF_EVENTOUT_PH6_AF15					= AF_Px6_AF15,       //!< AF_EVENTOUT_PH6_AF15

	// PH7
	AF_I2C3_SCL_PH7_AF4						= AF_Px7_AF4,        //!< AF_I2C3_SCL_PH7_AF4
	AF_ETH_MII_RXD3_PH7_AF11				= AF_Px7_AF11,    //!< AF_ETH_MII_RXD3_PH7_AF11
	AF_EVENTOUT_PH7_AF15					= AF_Px7_AF15,       //!< AF_EVENTOUT_PH7_AF15

	// PH8
	AF_I2C3_SDA_PH8_AF4						= AF_Px8_AF4,        //!< AF_I2C3_SDA_PH8_AF4
	AF_DCMI_HSYNC_PH8_AF13					= AF_Px8_AF11,     //!< AF_DCMI_HSYNC_PH8_AF13
	AF_EVENTOUT_PH8_AF15					= AF_Px8_AF15,       //!< AF_EVENTOUT_PH8_AF15

	// PH9
	AF_I2C3_SMBA_PH9_AF4					= AF_Px9_AF4,        //!< AF_I2C3_SMBA_PH9_AF4
	AF_TIM12_CH2_PH9_AF9					= AF_Px9_AF9,        //!< AF_TIM12_CH2_PH9_AF9
	AF_DCMI_D0_PH9_AF13						= AF_Px9_AF13,       //!< AF_DCMI_D0_PH9_AF13
	AF_EVENTOUT_PH9_AF15					= AF_Px9_AF15,       //!< AF_EVENTOUT_PH9_AF15

	// PH10
	AF_TIM5_CH1_PH10_AF2					= AF_Px10_AF2,       //!< AF_TIM5_CH1_PH10_AF2
	AF_DCMI_D1_PH10_AF13					= AF_Px10_AF13,      //!< AF_DCMI_D1_PH10_AF13
	AF_EVENTOUT_PH10_AF15					= AF_Px10_AF15,     //!< AF_EVENTOUT_PH10_AF15

	// PH11
	AF_TIM5_CH2_PH11_AF2					= AF_Px11_AF2,       //!< AF_TIM5_CH2_PH11_AF2
	AF_DCMI_D2_PH11_AF13					= AF_Px11_AF13,      //!< AF_DCMI_D2_PH11_AF13
	AF_EVENTOUT_PH11_AF15					= AF_Px11_AF15,     //!< AF_EVENTOUT_PH11_AF15

	// PH12
	AF_TIM5_CH3_PH12_AF2					= AF_Px12_AF2,       //!< AF_TIM5_CH3_PH12_AF2
	AF_DCMI_D3_PH12_AF13					= AF_Px12_AF13,      //!< AF_DCMI_D3_PH12_AF13
	AF_EVENTOUT_PH12_AF15					= AF_Px12_AF15,     //!< AF_EVENTOUT_PH12_AF15


	// PH13
	AF_TIM8_CH1N_PH13_AF3					= AF_Px13_AF3,      //!< AF_TIM8_CH1N_PH13_AF3
	AF_CAN1_TX_PH13_AF9						= AF_Px13_AF9,       //!< AF_CAN1_TX_PH13_AF9
	AF_EVENTOUT_PH13_AF15					= AF_Px13_AF15,     //!< AF_EVENTOUT_PH13_AF15


	// PH14
	AF_TIM8_CH2N_PH14_AF3					= AF_Px14_AF3,      //!< AF_TIM8_CH2N_PH14_AF3
	AF_DCMI_D4_PH14_AF13					= AF_Px14_AF13,      //!< AF_DCMI_D4_PH14_AF13
	AF_EVENTOUT_PH14_AF15					= AF_Px14_AF15,     //!< AF_EVENTOUT_PH14_AF15


	// PH15
	AF_TIM8_CH3N_PH15_AF3					= AF_Px15_AF3,      //!< AF_TIM8_CH3N_PH15_AF3
	AF_DCMI_D11_PH15_AF13					= AF_Px15_AF13,     //!< AF_DCMI_D11_PH15_AF13
	AF_EVENTOUT_PH15_AF15					= AF_Px15_AF15,     //!< AF_EVENTOUT_PH15_AF15



	// PORTI Alternate Function Mapping
	// PI0
	AF_TIM5_CH4_PI0_AF2						= AF_Px0_AF2,        //!< AF_TIM5_CH4_PI0_AF2
	AF_SPI2_NSS_PI0_AF5						= AF_Px0_AF5,        //!< AF_SPI2_NSS_PI0_AF5
	AF_I2S2_WS_PI0_AF5						= AF_Px0_AF5,         //!< AF_I2S2_WS_PI0_AF5
	AF_DCMI_D13_PI0_AF13					= AF_Px0_AF13,       //!< AF_DCMI_D13_PI0_AF13
	AF_EVENTOUT_PI0_AF15					= AF_Px0_AF15,       //!< AF_EVENTOUT_PI0_AF15

	// PI1
	AF_SPI2_SCK_PI1_AF5						= AF_Px1_AF5,        //!< AF_SPI2_SCK_PI1_AF5
	AF_I2S2_CK_PI1_AF5						= AF_Px1_AF5,         //!< AF_I2S2_CK_PI1_AF5
	AF_DCMI_D8_PI1_AF13						= AF_Px1_AF13,       //!< AF_DCMI_D8_PI1_AF13
	AF_EVENTOUT_PI1_AF15					= AF_Px1_AF15,       //!< AF_EVENTOUT_PI1_AF15

	// PI2
	AF_TIM8_CH4_PI2_AF3						= AF_Px2_AF3,        //!< AF_TIM8_CH4_PI2_AF3
	AF_SPI2_MISO_PI2_AF5					= AF_Px2_AF5,        //!< AF_SPI2_MISO_PI2_AF5
	AF_I2S2ext_SD_PI2_AF6					= AF_Px2_AF6,       //!< AF_I2S2ext_SD_PI2_AF6
	AF_DCMI_D9_PI2_AF13						= AF_Px2_AF13,       //!< AF_DCMI_D9_PI2_AF13
	AF_EVENTOUT_PI2_AF15					= AF_Px2_AF15,       //!< AF_EVENTOUT_PI2_AF15

	// PI3
	AF_TIM8_ETR_PI3_AF3						= AF_Px3_AF3,        //!< AF_TIM8_ETR_PI3_AF3
	AF_SPI2_MOSI_PI3_AF5					= AF_Px3_AF5,        //!< AF_SPI2_MOSI_PI3_AF5
	AF_I2S2_SD_PI3_AF5						= AF_Px3_AF5,         //!< AF_I2S2_SD_PI3_AF5
	AF_DCMI_D10_PI3_AF13					= AF_Px3_AF13,       //!< AF_DCMI_D10_PI3_AF13
	AF_EVENTOUT_PI3_AF15					= AF_Px3_AF15,       //!< AF_EVENTOUT_PI3_AF15

	// PI4
	AF_TIM8_BKIN_PI4_AF3					= AF_Px4_AF3,        //!< AF_TIM8_BKIN_PI4_AF3
	AF_DCMI_D5_PI4_AF13						= AF_Px4_AF13,       //!< AF_DCMI_D5_PI4_AF13
	AF_EVENTOUT_PI4_AF15					= AF_Px4_AF15,       //!< AF_EVENTOUT_PI4_AF15

	// PI5
	AF_TIM8_CH1_PI5_AF3						= AF_Px5_AF3,        //!< AF_TIM8_CH1_PI5_AF3
	AF_DCMI_VSYNC_PI5_AF13					= AF_Px5_AF13,     //!< AF_DCMI_VSYNC_PI5_AF13
	AF_EVENTOUT_PI5_AF15					= AF_Px5_AF15,       //!< AF_EVENTOUT_PI5_AF15

	// PI6
	AF_TIM8_CH2_PI6_AF3						= AF_Px6_AF3,        //!< AF_TIM8_CH2_PI6_AF3
	AF_DCMI_D6_PI6_AF13						= AF_Px6_AF13,       //!< AF_DCMI_D6_PI6_AF13
	AF_EVENTOUT_PI6_AF15					= AF_Px6_AF15,       //!< AF_EVENTOUT_PI6_AF15

	// PI7
	AF_TIM8_CH3_PI7_AF3						= AF_Px7_AF3,        //!< AF_TIM8_CH3_PI7_AF3
	AF_DCMI_D7_PI7_AF13						= AF_Px7_AF13,       //!< AF_DCMI_D7_PI7_AF13
	AF_EVENTOUT_PI7_AF15					= AF_Px7_AF15,       //!< AF_EVENTOUT_PI7_AF15

	// PI8
	AF_EVENTOUT_PI8_AF15					= AF_Px8_AF15,       //!< AF_EVENTOUT_PI8_AF15

	// PI9
	AF_CAN1_RX_PI9_AF9						= AF_Px9_AF9,         //!< AF_CAN1_RX_PI9_AF9
	AF_EVENTOUT_PI9_AF15					= AF_Px9_AF15,       //!< AF_EVENTOUT_PI9_AF15

	// PI10
	AF_ETH_MII_RX_ER_PI10_AF11				= AF_Px10_AF9,  //!< AF_ETH_MII_RX_ER_PI10_AF11
	AF_EVENTOUT_PI10_AF15					= AF_Px10_AF15,     //!< AF_EVENTOUT_PI10_AF15

	// PI11
	AF_OTG_HS_ULPI_DIR_PI11_AF11			= AF_Px11_AF10,//!< AF_OTG_HS_ULPI_DIR_PI11_AF11
	AF_EVENTOUT_PI11_AF15					= AF_Px11_AF15,     //!< AF_EVENTOUT_PI11_AF15


} GPIOx_AF_t;



/**
 *	@brief Check page No. 375 in RM0090 Reference manual file.
 *
 */
typedef enum
{
	WWDG = 0,						//!< #0		Window Watchdog interrupt 0x0000 0040
	IRQn_PVD = 1, 					//!< #1		PVD through EXTI line detection interrupt 0x0000 0044
	IRQn_TAMP_STAMP = 2,			//!< #2		Tamper and TimeStamp interrupts through the EXTI line 0x0000 0048
	IRQn_RTC_WKUP = 3,				//!< #3		RTC Wakeup interrupt through the EXTI line 0x0000 004C
	IRQn_FLASH = 4, 				//!< #4		Flash global interrupt 0x0000 0050
	IRQn_RCC = 5,   				//!< #5		RCC global interrupt 0x0000 0054
	IRQn_EXTI0 = 6, 				//!< #6		EXTI Line0 interrupt 0x0000 0058
	IRQn_EXTI1 = 7, 				//!< #7		EXTI Line1 interrupt 0x0000 005C
	IRQn_EXTI2 = 8, 				//!< #8		EXTI Line2 interrupt 0x0000 0060
	IRQn_EXTI3 = 9, 				//!< #9		EXTI Line3 interrupt 0x0000 0064
	IRQn_EXTI4 = 10,				//!< #10	EXTI Line4 interrupt 0x0000 0068
	IRQn_DMA1_Stream0 = 11,			//!< #11	DMA1 Stream0 global interrupt 0x0000 006C
	IRQn_DMA1_Stream1 = 12,			//!< #12	DMA1 Stream1 global interrupt 0x0000 0070
	IRQn_DMA1_Stream2 = 13,			//!< #13	DMA1 Stream2 global interrupt 0x0000 0074
	IRQn_DMA1_Stream3 = 14,			//!< #14	DMA1 Stream3 global interrupt 0x0000 0078
	IRQn_DMA1_Stream4 = 15,			//!< #15	DMA1 Stream4 global interrupt 0x0000 007C
	IRQn_DMA1_Stream5 = 16,			//!< #16	DMA1 Stream5 global interrupt 0x0000 0080
	IRQn_DMA1_Stream6 = 17,			//!< #17	DMA1 Stream6 global interrupt 0x0000 0084
	IRQn_ADC = 18,          		//!< #18	ADC1, ADC2 and ADC3 global interrupts 0x0000 0088
	IRQn_CAN1_TX = 19,      		//!< #19	CAN1 TX interrupts 0x0000 008C
	IRQn_CAN1_RX0 = 20,        		//!< #20	CAN1 RX0 interrupts 0x0000 0090
	IRQn_CAN1_RX1 = 21,         	//!< #21	CAN1 RX1 interrupt 0x0000 0094
	IRQn_CAN1_CSE = 22,         	//!< #22	CAN1 SCE interrupt 0x0000 0098
	IRQn_EXTI9_5  = 23,         	//!< #23	EXTI Line[9:5] interrupts 0x0000 009C
	IRQn_TIM1_BRK_TIM9 = 24, 		//!< #24	TIM1 Break interrupt and TIM9 global interrupt 0x0000 00A0
	IRQn_TIM1_UP_TIM10 = 25,		//!< #25	TIM1 Update interrupt and TIM10 global interrupt 0x0000 00A4//!< TIM1_UP_TIM10
	IRQn_TIM1_TRG_COM_TIM11 = 26, 	//!< #26	TIM1 Trigger and Commutation interrupts and TIM11 global interrupt
	IRQn_TIM1_CC = 27, 				//!< #27	TIM1 Capture Compare interrupt 0x0000 00AC
	IRQn_TIM2 = 28,					//!< #28	TIM2 global interrupt 0x0000 00B0
	IRQn_TIM3 = 29, 				//!< #29	TIM3 global interrupt 0x0000 00B4
	IRQn_TIM4 = 30,					//!< #30	TIM4 global interrupt 0x0000 00B8
	IRQn_I2C1_EV = 31, 				//!< #31	I2C1 event interrupt 0x0000 00BC
	IRQn_I2C1_ER = 32, 				//!< #32	I2C1 error interrupt 0x0000 00C0
	IRQn_I2C2_EV = 33, 				//!< #33	I2C2 event interrupt 0x0000 00C4
	IRQn_I2C2_ER = 34,				//!< #34	I2C2 error interrupt 0x0000 00C8
	IRQn_SPI1 = 35,					//!< #35	SPI1 global interrupt 0x0000 00CC
	IRQn_SPI2 = 36, 				//!< #36	SPI2 global interrupt 0x0000 00D0
	IRQn_USART1 = 37,				//!< #37	USART1 global interrupt 0x0000 00D4
	IRQn_USART2 = 38,				//!< #38	USART2 global interrupt 0x0000 00D8
	IRQn_USART3 = 39,				//!< #39	USART3 global interrupt 0x0000 00DC
	IRQn_EXTI15_10 = 40, 			//!< #40	EXTI Line[15:10] interrupts 0x0000 00E0
	IRQn_RTC_Alarm = 41,			//!< #41	RTC Alarms (A and B) through EXTI line interrupt 0x0000 00E4
	IRQn_OTG_FS_WKUP = 42,			//!< #42	USB On-The-Go FS Wakeup through EXTI line interrupt 0x0000 00E8
	IRQn_TIM8_BRK_TIM12 = 43,		//!< #43	TIM8 Break interrupt and TIM12 global interrupt 0x0000 00EC
	IRQn_TIM8_UP_TIM13 = 44,		//!< #44	TIM8 Update interrupt and TIM13 global interrupt 0x0000 00F0
	IRQn_TIM8_TRG_COM_TIM14 = 45,	//!< #45	TIM8 Trigger and Commutation interrupts and TIM14 global interrupt 0x0000 00F4
	IRQn_TIM8_CC = 46,				//!< #46	TIM8 Capture Compare interrupt 0x0000 00F8
	IRQn_DMA1_Stream7 = 47,			//!< #47	DMA1 Stream7 global interrupt 0x0000 00FC
	IRQn_FSMC = 48,					//!< #48	FSMC global interrupt 0x0000 0100
	IRQn_SDIO = 49,      			//!< #49	SDIO global interrupt 0x0000 0104
	IRQn_TIM5 = 50,					//!< #50	TIM5 global interrupt 0x0000 0108
	IRQn_SPI3 = 51,					//!< #51	SPI3 global interrupt 0x0000 010C
	IRQn_UART4 = 52,				//!< #52	UART4 global interrupt 0x0000 0110
	IRQn_UART5 = 53,				//!< #53	UART5 global interrupt 0x0000 0114
	IRQn_TIM6_DAC = 54,				//!< #54	TIM6 global interrupt, DAC1 and DAC2 underrun error interrupts 0x0000 0118
	IRQn_TIM7 = 55,					//!< #55	TIM7 global interrupt 0x0000 011C
	IRQn_DMA2_Stream0 = 56, 		//!< #56	DMA2 Stream0 global interrupt 0x0000 0120
	IRQn_DMA2_Stream1 = 57, 		//!< #57	DMA2 Stream1 global interrupt 0x0000 0124
	IRQn_DMA2_Stream2 = 58,			//!< #58	DMA2 Stream2 global interrupt 0x0000 0128
	IRQn_DMA2_Stream3 = 59,			//!< #59	DMA2 Stream3 global interrupt 0x0000 012C
	IRQn_DMA2_Stream4 = 60,			//!< #60	DMA2 Stream4 global interrupt 0x0000 0130
	IRQn_ETH = 61, 					//!< #61	Ethernet global interrupt 0x0000 0134
	IRQn_ETH_WKUP = 62,				//!< #62	Ethernet Wakeup through EXTI line interrupt 0x0000 0138
	IRQn_CAN2_TX = 63,				//!< #63	CAN2 TX interrupts 0x0000 013C
	IRQn_CAN2_RX0 = 64,				//!< #64	CAN2 RX0 interrupts 0x0000 0140
	IRQn_CAN2_RX1 = 65,				//!< #65	CAN2 RX1 interrupt 0x0000 0144
	IRQn_CAN2_SCE = 66,				//!< #66	AN2 SCE interrupt 0x0000 0148
	IRQn_OTG_FS = 67,				//!< #67	USB On The Go FS global interrupt 0x0000 014C
	IRQn_DMA2_Stream5 = 68,			//!< #68	DMA2 Stream5 global interrupt 0x0000 0150
	IRQn_DMA2_Stream6 = 69,			//!< #69	DMA2 Stream6 global interrupt 0x0000 0154
	IRQn_DMA2_Stream7 = 70,			//!< #70	DMA2 Stream7 global interrupt 0x0000 0158
	IRQn_USART6 = 71,				//!< #71	USART6 global interrupt 0x0000 015C
	IRQn_I2C3_EV = 72,				//!< #72	I2C3 event interrupt 0x0000 0160
	IRQn_I2C3_ER = 73,				//!< #73	I2C3 error interrupt 0x0000 0164
	IRQn_OTG_HS_EP1_OUT = 74,		//!< #74	USB On The Go HS End Point 1 Out global interrupt 0x0000 0168
	IRQn_OTG_HS_EP1_IN = 75,		//!< #75	USB On The Go HS End Point 1 In global interrupt 0x0000 016C
	IRQn_OTG_HS_WKUP = 76,			//!< #76	USB On The Go HS Wakeup through EXTI interrupt 0x0000 0170
	IRQn_OTG_HS = 77,				//!< #77	USB On The Go HS global interrupt 0x0000 0174
	IRQn_DCMI = 78,					//!< #78	DCMI global interrupt 0x0000 0178
	IRQn_CRYP = 79,					//!< #79	CRYP crypto global interrupt 0x0000 017C
	IRQn_HASH_RNG = 80,				//!< #81	Hash and Rng global interrupt 0x0000 0180
	IRQn_FPU = 81,					//!< #81	FPU global interrupt 0x0000 0184
}IRQn_t;


/**
 *
 */
typedef enum
{
	EXTI0, //!< EXTI0
	EXTI1, //!< EXTI1
	EXTI2, //!< EXTI2
	EXTI3, //!< EXTI3
	EXTI4, //!< EXTI4
	EXTI5, //!< EXTI5
	EXTI6, //!< EXTI6
	EXTI7, //!< EXTI7
	EXTI8, //!< EXTI8
	EXTI9, //!< EXTI9
	EXTI10,//!< EXTI10
	EXTI11,//!< EXTI11
	EXTI12,//!< EXTI12
	EXTI13,//!< EXTI13
	EXTI14,//!< EXTI14
	EXTI15,//!< EXTI15
	EXTI16,//!< EXTI16
	EXTI17,//!< EXTI17
	EXTI18,//!< EXTI18
	EXTI19,//!< EXTI19
	EXTI20,//!< EXTI20
	EXTI21,//!< EXTI21
	EXTI22 //!< EXTI22
}EXTI_IRQn;


/**
 * @brief	EXTI Event Lines Configuration Data Type ( Enum )
 * @details	The configuration is splitted into a 1 byte, the lower 4bits for the multiplexer value and
 * 			the higher 4bits for the port mapping ( PAx = 0, PBx = 1,... )
 */
typedef enum
{
	// EXTI0 Event Line
	PA0 = 0x00,		//!< PA0
	PB0 = 0x01,		//!< PB0
	PC0 = 0x02,		//!< PC0
	PD0 = 0x03,		//!< PD0
	PE0 = 0x04,		//!< PE0
	PF0 = 0x05,		//!< PF0
	PG0 = 0x06,		//!< PG0
	PH0 = 0x07,		//!< PH0
	PI0 = 0x08,		//!< PI0

	// EXTI1 Event Line
	PA1 = 0x10,		//!< PA1
	PB1 = 0x11,		//!< PB1
	PC1 = 0x12,		//!< PC1
	PD1 = 0x13,		//!< PD1
	PE1 = 0x14,		//!< PE1
	PF1 = 0x15,		//!< PF1
	PG1 = 0x16,		//!< PG1
	PH1 = 0x17,		//!< PH1
	PI1 = 0x18,		//!< PI1

	// EXTI2 Event Line
	PA2 = 0x20,		//!< PA2
	PB2 = 0x21,		//!< PB2
	PC2 = 0x22,		//!< PC2
	PD2 = 0x23,		//!< PD2
	PE2 = 0x24,		//!< PE2
	PF2 = 0x25,		//!< PF2
	PG2 = 0x26,		//!< PG2
	PH2 = 0x27,		//!< PH2
	PI2 = 0x28,		//!< PI2

	// EXTI3 Event Line
	PA3 = 0x30,		//!< PA3
	PB3 = 0x31,		//!< PB3
	PC3 = 0x32,		//!< PC3
	PD3 = 0x33,		//!< PD3
	PE3 = 0x34,		//!< PE3
	PF3 = 0x35,		//!< PF3
	PG3 = 0x36,		//!< PG3
	PH3 = 0x37,		//!< PH3
	PI3 = 0x38,		//!< PI3

	// EXTI4 Event Line
	PA4 = 0x40,		//!< PA4
	PB4 = 0x41,		//!< PB4
	PC4 = 0x42,		//!< PC4
	PD4 = 0x43,		//!< PD4
	PE4 = 0x44,		//!< PE4
	PF4 = 0x45,		//!< PF4
	PG4 = 0x46,		//!< PG4
	PH4 = 0x47,		//!< PH4
	PI4 = 0x48,		//!< PI4

	// EXTI5 Event Line
	PA5 = 0x50,		//!< PA5
	PB5 = 0x51,		//!< PB5
	PC5 = 0x52,		//!< PC5
	PD5 = 0x53,		//!< PD5
	PE5 = 0x54,		//!< PE5
	PF5 = 0x55,		//!< PF5
	PG5 = 0x56,		//!< PG5
	PH5 = 0x57,		//!< PH5
	PI5 = 0x58,		//!< PI5

	// EXTI6 Event Line
	PA6 = 0x60,		//!< PA6
	PB6 = 0x61,		//!< PB6
	PC6 = 0x62,		//!< PC6
	PD6 = 0x63,		//!< PD6
	PE6 = 0x64,		//!< PE6
	PF6 = 0x65,		//!< PF6
	PG6 = 0x66,		//!< PG6
	PH6 = 0x67,		//!< PH6
	PI6 = 0x68,		//!< PI6

	// EXTI7 Event Line
	PA7 = 0x70,		//!< PA7
	PB7 = 0x71,		//!< PB7
	PC7 = 0x72,		//!< PC7
	PD7 = 0x73,		//!< PD7
	PE7 = 0x74,		//!< PE7
	PF7 = 0x75,		//!< PF7
	PG7 = 0x76,		//!< PG7
	PH7 = 0x77,		//!< PH7
	PI7 = 0x78,		//!< PI7

	// EXTI8 Event Line
	PA8 = 0x80,		//!< PA8
	PB8 = 0x81,		//!< PB8
	PC8 = 0x82,		//!< PC8
	PD8 = 0x83,		//!< PD8
	PE8 = 0x84,		//!< PE8
	PF8 = 0x85,		//!< PF8
	PG8 = 0x86,		//!< PG8
	PH8 = 0x87,		//!< PH8
	PI8 = 0x88,		//!< PI8

	// EXTI9 Event Line
	PA9 = 0x90,		//!< PA9
	PB9 = 0x91,		//!< PB9
	PC9 = 0x92,		//!< PC9
	PD9 = 0x93,		//!< PD9
	PE9 = 0x94,		//!< PE9
	PF9 = 0x95,		//!< PF9
	PG9 = 0x96,		//!< PG9
	PH9 = 0x97,		//!< PH9
	PI9 = 0x98,		//!< PI9

	// EXTI10 Event Line
	PA10 = 0xA0,		//!< PA10
	PB10 = 0xA1,		//!< PB10
	PC10 = 0xA2,		//!< PC10
	PD10 = 0xA3,		//!< PD10
	PE10 = 0xA4,		//!< PE10
	PF10 = 0xA5,		//!< PF10
	PG10 = 0xA6,		//!< PG10
	PH10 = 0xA7,		//!< PH10
	PI10 = 0xA8,		//!< PI10

	// EXTI11 Event Line
	PA11 = 0xB0,		//!< PA11
	PB11 = 0xB1,		//!< PB11
	PC11 = 0xB2,		//!< PC11
	PD11 = 0xB3,		//!< PD11
	PE11 = 0xB4,		//!< PE11
	PF11 = 0xB5,		//!< PF11
	PG11 = 0xB6,		//!< PG11
	PH11 = 0xB7,		//!< PH11
	PI11 = 0xB8,		//!< PI11

	// EXTI12 Event Line
	PA12 = 0xC0,		//!< PA12
	PB12 = 0xC1,		//!< PB12
	PC12 = 0xC2,		//!< PC12
	PD12 = 0xC3,		//!< PD12
	PE12 = 0xC4,		//!< PE12
	PF12 = 0xC5,		//!< PF12
	PG12 = 0xC6,		//!< PG12
	PH12 = 0xC7,		//!< PH12
	PI12 = 0xC8,		//!< PI12

	// EXTI13 Event Line
	PA13 = 0xD0,		//!< PA13
	PB13 = 0xD1,		//!< PB13
	PC13 = 0xD2,		//!< PC13
	PD13 = 0xD3,		//!< PD13
	PE13 = 0xD4,		//!< PE13
	PF13 = 0xD5,		//!< PF13
	PG13 = 0xD6,		//!< PG13
	PH13 = 0xD7,		//!< PH13
	PI13 = 0xD8,		//!< PI13

	// EXTI14 Event Line
	PA14 = 0xE0,		//!< PA14
	PB14 = 0xE1,		//!< PB14
	PC14 = 0xE2,		//!< PC14
	PD14 = 0xE3,		//!< PD14
	PE14 = 0xE4,		//!< PE14
	PF14 = 0xE5,		//!< PF14
	PG14 = 0xE6,		//!< PG14
	PH14 = 0xE7,		//!< PH14
	PI14 = 0xE8,		//!< PI14

	// EXTI15 Event Line
	PA15 = 0xF0,		//!< PA15
	PB15 = 0xF1,		//!< PB15
	PC15 = 0xF2,		//!< PC15
	PD15 = 0xF3,		//!< PD15
	PE15 = 0xF4,		//!< PE15
	PF15 = 0xF5,		//!< PF15
	PG15 = 0xF6,		//!< PG15
	PH15 = 0xF7,		//!< PH15
	PI15 = 0xF8,		//!< PI15

}SYSCFG_EXTI_LINE_t;

#endif
