#include "si5351a_task.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SI5351ATask_I2C_Init(SI5351A_HandleType* SI5351Ax, void(*pFuncDelayus)(UINT32_T delay), UINT32_T(*pFuncTimerTick)(void), UINT8_T isHWI2C)
{
	return SI5351ALib_I2C_Init(SI5351Ax, pFuncDelayus,pFuncTimerTick, isHWI2C);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SI5351ATask_I2C_DeInit(SI5351A_HandleType* SI5351Ax)
{
	return SI5351ALib_I2C_DeInit(SI5351Ax);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SI5351ATask_I2C_SetFreqHz(SI5351A_HandleType* SI5351Ax, UINT8_T clkChannel, UINT64_T freq)
{
	return SI5351ALib_I2C_SetFreqHz(SI5351Ax, clkChannel, freq);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SI5351ATask_I2C_SetFreqKHz(SI5351A_HandleType* SI5351Ax, UINT8_T clkChannel, float freqKHz)
{
	return SI5351ALib_I2C_SetFreqKHz(SI5351Ax, clkChannel, freqKHz);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T SI5351ATask_I2C_SetFreqMHz(SI5351A_HandleType* SI5351Ax, UINT8_T clkChannel, float freqMHz)
{
	return SI5351ALib_I2C_SetFreqMHz(SI5351Ax, clkChannel, freqMHz);
}