#ifndef AHT10_TASK_H_
#define AHT10_TASK_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include"aht10_lib.h"
	//////////////////////////////////////////////////////////////////////////////////////
	UINT8_T AHT10Task_I2C_DeInit(AHT10_HandleType* AHT10x);
	UINT8_T AHT10Task_I2C_Init(AHT10_HandleType* AHT10x, void(*pFuncDelayus)(UINT32_T delay), void(*pFuncDelayms)(UINT32_T delay), UINT32_T(*pFuncTimerTick)(void), UINT8_T isHWI2C);
	UINT8_T AHT10Task_I2C_ReadTempHumi(AHT10_HandleType* AHT10x);
	float AHT10Task_I2C_GetTemp(AHT10_HandleType* AHT10x);
	float AHT10Task_I2C_GetHumi(AHT10_HandleType* AHT10x);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*AHT10_TASK_H_ */