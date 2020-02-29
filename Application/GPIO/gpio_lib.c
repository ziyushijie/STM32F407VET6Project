#include "gpio_lib.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T GPIOLib_Clock(GPIO_TypeDef *GPIOx, UINT8_T isEnable)
{
	#ifdef USE_MCU_STM32
		return GPIO_Clock(GPIOx, isEnable);
	#else
		return OK_0;
	#endif
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void GPIOLib_Init(void)
{
#ifdef USE_MCU_STM32
	GPIO_Init();
#endif
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T GPIOLib_WaitPinPort(GPIO_HandleType* GPIOx, UINT8_T isHighLevel)
{
	return GPIO_WaitPinPort(GPIOx, isHighLevel);
}