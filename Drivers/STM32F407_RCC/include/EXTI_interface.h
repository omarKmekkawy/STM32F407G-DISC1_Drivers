#ifndef EXTI_INTERFACE_H
#define EXTI_INTERFACE_H

typedef enum
{
	MEXTI_RisingEdgeTrigger,
	MEXTI_FalingEdgeTrigger,
	MEXTI_OnChangeEdgeTrigger
}MEXTI_Edge;


void MEXTI_voidSetEdgeTriggering(EXTI_IRQn Copy_EXTILine,MEXTI_Edge EdgeTriggering);
void MEXTI_voidEnableExternalInterrupt(EXTI_IRQn Copy_EXTILine);
void MEXTI_voidDisableExternalInterrupt(EXTI_IRQn Copy_EXTILine);
void MEXTI_voidGenerateSoftwareInterrupt(EXTI_IRQn Copy_EXTILine);
void MEXTI_voidClearPendingInterrupt(EXTI_IRQn Copy_EXTILine);


#endif
