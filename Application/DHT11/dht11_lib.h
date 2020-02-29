#ifndef DHT11_LIB_H_
#define DHT11_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "dht11_cfg.h"
	//////////////////////////////////////////////////////////////////////////////////////
	//===��������
	UINT8_T DHT11Lib_Init(DHT11_HandleType *DHT11x, void(*pFuncDelayus)(UINT32_T delay), void(*pFuncDelayms)(UINT32_T delay), UINT32_T(*pFuncTimerTick)(void));
	UINT8_T DHT11Lib_DeInit(DHT11_HandleType *DHT11x);
	UINT8_T DHT11Lib_ReadTempHumi(DHT11_HandleType *DHT11x);
	float	DHT11Lib_GetTemp(DHT11_HandleType* DHT11x);
	float	DHT11Lib_GetHumi(DHT11_HandleType* DHT11x);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
/////////////////////////////////////////////////////////////////////////////////////
#endif /*DHT11_LIB_H_*/