#include "dht11_task.h"
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DHT11Task_Init(DHT11_HandleType *DHT11x, void(*pFuncDelayus)(UINT32_T delay), void(*pFuncDelayms)(UINT32_T delay), UINT32_T(*pFuncTimerTick)(void))
{
	return DHT11Lib_Init(DHT11x, pFuncDelayus, pFuncDelayms,pFuncTimerTick);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DHT11Task_DeInit(DHT11_HandleType *DHT11x)
{
	return DHT11Lib_DeInit(DHT11x);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T DHT11Task_ReadTempHumi(DHT11_HandleType *DHT11x)
{
	return DHT11Lib_ReadTempHumi(DHT11x);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
float DHT11Task_GetTemp(DHT11_HandleType* DHT11x)
{
	return DHT11Lib_GetTemp(DHT11x);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
float DHT11Task_GetHumi(DHT11_HandleType* DHT11x)
{
	return DHT11Lib_GetHumi(DHT11x);
}