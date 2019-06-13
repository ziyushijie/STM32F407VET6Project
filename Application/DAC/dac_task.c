#include "dac_task.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC1_Init(void)
{
	return DACLib_DAC1_Init();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC2_Init(void)
{
	return DACLib_DAC2_Init();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_Init(void)
{
	return DACLib_Init();
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC1_WriteVoltageUV(UINT32_T volUV)
{
	return DACLib_DAC1_WriteVoltageUV(volUV);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC1_WriteVoltageMV(UINT32_T volMV)
{
	return DACLib_DAC1_WriteVoltageMV(volMV);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC1_WriteVoltageV(float volV)
{
	return DACLib_DAC1_WriteVoltageV(volV);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC2_WriteVoltageUV(UINT32_T volUV)
{
	return DACLib_DAC2_WriteVoltageUV(volUV);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC2_WriteVoltageMV(UINT32_T volMV)
{
	return DACLib_DAC2_WriteVoltageMV(volMV);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC2_WriteVoltageV(float volV)
{
	return DACLib_DAC2_WriteVoltageV(volV);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC_WriteVoltageUV(UINT32_T volUV)
{
	return DACLib_DAC_WriteVoltageUV(volUV);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC_WriteVoltageMV(UINT32_T volMV)
{
	return DACLib_DAC_WriteVoltageMV(volMV);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功	    能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DACTask_DAC_WriteVoltageV(float volV)
{
	return DACLib_DAC_WriteVoltageV(volV);
}