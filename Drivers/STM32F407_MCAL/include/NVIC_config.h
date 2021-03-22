#ifndef NVIC_CONFIG_H
#define NVIC_CONFIG_H

/**
 * @brief	Definition for the NVIC grouping distribution ( Group Priority, Sub Priority ).
 * @details Use on of these Options to determine the grouping distribution:
 * 			MNVIC_GROUP_4_SUB_0		-> means 4 bit(s) for group, and 0 bit(s) for the sub
 * 			MNVIC_GROUP_3_SUB_1		-> means 3 bit(s) for group, and 1 bit(s) for the sub
 * 			MNVIC_GROUP_2_SUB_2		-> means 2 bit(s) for group, and 2 bit(s) for the sub
 * 			MNVIC_GROUP_1_SUB_3		-> means 1 bit(s) for group, and 3 bit(s) for the sub
 * 			MNVIC_GROUP_0_SUB_4		-> means 0 bit(s) for group, and 4 bit(s) for the sub
 */
#define MNVIC_GROUB_SUB_DISTRIBUTION MNVIC_GROUP_2_SUB_2


#ifndef MNVIC_GROUB_SUB_DISTRIBUTION
#error "Error in NVIC Grouping Config"
#endif

#endif
