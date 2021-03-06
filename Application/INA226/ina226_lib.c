#include "ina226_lib.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：初始化
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T INA226Lib_I2C_Init(INA226_HandleType* INA226x, void(*pFuncDelayus)(UINT32_T delay), UINT32_T(*pFuncTimerTick)(void), UINT8_T isHWI2C)
{
	return INA226_I2C_Init(INA226x, pFuncDelayus,pFuncTimerTick,isHWI2C);
}