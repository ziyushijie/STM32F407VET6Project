#include "hmc5883_task.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T HMC5883Task_I2C_Init(HMC5883_HandleType* HMC5883x, void(*pFuncDelayus)(UINT32_T delay), void(*pFuncDelayms)(UINT32_T delay),UINT32_T(*pFuncTimerTick)(void), UINT8_T isHWI2C)
{
	return HMC5883Lib_I2C_Init(HMC5883x, pFuncDelayus,pFuncDelayms,pFuncTimerTick, isHWI2C);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T HMC5883Task_I2C_DeInit(HMC5883_HandleType* HMC5883x)
{
	return HMC5883Lib_I2C_DeInit(HMC5883x);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T HMC5883Task_I2C_WriteSingle(HMC5883_HandleType* HMC5883x, UINT8_T addr, UINT8_T val)
{
	return HMC5883Lib_I2C_WriteSingle(HMC5883x, addr, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T HMC5883Task_I2C_ReadSingle(HMC5883_HandleType* HMC5883x, UINT8_T addr, UINT8_T* pVal)
{
	return HMC5883Lib_I2C_ReadSingle(HMC5883x, addr, pVal);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T HMC5883Task_I2C_ReadBulk(HMC5883_HandleType* HMC5883x, UINT8_T addr, UINT8_T* pVal, UINT8_T length)
{
	return HMC5883Lib_I2C_ReadBulk(HMC5883x,addr,pVal,length);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T HMC5883Task_I2C_ConfigInit(HMC5883_HandleType* HMC5883x)
{
	return HMC5883Lib_I2C_ConfigInit(HMC5883x);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T HMC5883Task_I2C_ReadRawData(HMC5883_HandleType* HMC5883x)
{
	return HMC5883Lib_I2C_ReadRawData(HMC5883x);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void HMC5883Task_I2C_CalibrateMag(HMC5883_HandleType* HMC5883x)
{
	HMC5883Lib_I2C_CalibrateMag(HMC5883x);
}