#include "adc_lib.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T ADCLib_ADC_Init(void)
{
	return ADC_ADC_Init();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T ADCLib_ADCTask_START(ADC_TypeDef *ADCx)
{
	return  ADC_ADCTask_START(ADCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T ADCLib_ADCTask_STOP(ADC_TypeDef *ADCx)
{
	return ADC_ADCTask_STOP(ADCx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T ADCLib_HandleChannelVal(ADCASK_HandleType *ADCASKx)
{
	return ADC_HandleChannelVal(ADCASKx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT16_T ADCLib_GetChipPower(void)
{
	return ADC_GetChipPower();
}