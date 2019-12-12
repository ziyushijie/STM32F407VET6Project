#ifndef IWDG_CFG_H_
#define IWDG_CFG_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	//===定义使用的头文件
	#include "complier_lib.h"
	//////////////////////////////////////////////////////////////////////////////////////
	//===定义独立看门狗的时间
	#define	IWDG_500MS				0
	#define	IWDG_1000MS				1
	#define	IWDG_1500MS				2
	#define	IWDG_2000MS				3
	#define	IWDG_3000MS				4
	#define	IWDG_4000MS				5
	#define	IWDG_5000MS				6
	#define	IWDG_6000MS				7
	#define	IWDG_7000MS				8
	#define	IWDG_8000MS				9
	#define	IWDG_9000MS				10
	#define	IWDG_10000MS			11
	//===使用的独立看门狗时间
	#define USE_IWDG_TIME			IWDG_1000MS
	
	//===函数定义
	UINT8_T IWDG_Init(void);
	UINT8_T IWDG_DeInit(void);
	UINT8_T IWDG_Reset(void);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*IWDG_CFG_H_ */