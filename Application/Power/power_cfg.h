#ifndef POWER_CFG_H_
#define POWER_CFG_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "complier_lib.h"
	#include "gpio_task.h"
	#include "dac_task.h"
	#include "delay_task.h"
	#include "hw_cfg.h"
	//////////////////////////////////////////////////////////////////////////////////////
	
	//===DPSA使能端口
	#define DPSA_CTRH_PORT						GPIOC
	#define DPSA_CTRH_BIT						LL_GPIO_PIN_13
	#define DPSA_CTRH_STATE						GPIO_GET_STATE(DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_WRITE						GPIO_SET_WRITE(DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_READ						GPIO_SET_READ( DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_OUT_0						GPIO_OUT_0(    DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_OUT_1						GPIO_OUT_1(    DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRH_OUT_C						GPIO_OUT_C(    DPSA_CTRH_PORT,DPSA_CTRH_BIT)
	#define DPSA_CTRL_PORT						GPIOC
	#define DPSA_CTRL_BIT						LL_GPIO_PIN_14
	#define DPSA_CTRL_STATE						GPIO_GET_STATE(DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_WRITE						GPIO_SET_WRITE(DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_READ						GPIO_SET_READ( DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_OUT_0						GPIO_OUT_0(	   DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_OUT_1						GPIO_OUT_1(    DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_CTRL_OUT_C						GPIO_OUT_C(    DPSA_CTRL_PORT,DPSA_CTRL_BIT)
	#define DPSA_POWER_ON						( DPSA_CTRL_OUT_0,DPSA_CTRH_OUT_1 )
	#define DPSA_POWER_OFF						( DPSA_CTRH_OUT_0,DPSA_CTRL_OUT_1 )
	#define DPSA_POWER_HZ						( DPSA_CTRH_OUT_0,DPSA_CTRL_OUT_0 )
	
	//===DPSB使能端口
	#define DPSB_CTRH_PORT						GPIOC
	#define DPSB_CTRH_BIT						LL_GPIO_PIN_15
	#define DPSB_CTRH_STATE						GPIO_GET_STATE(DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_WRITE						GPIO_SET_WRITE(DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_READ						GPIO_SET_READ( DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_OUT_0						GPIO_OUT_0(    DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_OUT_1						GPIO_OUT_1(    DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRH_OUT_C						GPIO_OUT_C(    DPSB_CTRH_PORT,DPSB_CTRH_BIT)
	#define DPSB_CTRL_PORT						GPIOB
	#define DPSB_CTRL_BIT						LL_GPIO_PIN_3
	#define DPSB_CTRL_STATE						GPIO_GET_STATE(DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_WRITE						GPIO_SET_WRITE(DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_READ						GPIO_SET_READ( DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_OUT_0						GPIO_OUT_0(	   DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_OUT_1						GPIO_OUT_1(    DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_CTRL_OUT_C						GPIO_OUT_C(    DPSB_CTRL_PORT,DPSB_CTRL_BIT)
	#define DPSB_POWER_ON						( DPSB_CTRL_OUT_0,DPSB_CTRH_OUT_1 )
	#define DPSB_POWER_OFF						( DPSB_CTRH_OUT_0,DPSB_CTRL_OUT_1 )
	#define DPSB_POWER_HZ						( DPSB_CTRH_OUT_0,DPSB_CTRL_OUT_0 )
	
	//===DPSC使能端口
	#define DPSC_CTRH_PORT						GPIOC
	#define DPSC_CTRH_BIT						LL_GPIO_PIN_6
	#define DPSC_CTRH_STATE						GPIO_GET_STATE(DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_WRITE						GPIO_SET_WRITE(DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_READ						GPIO_SET_READ( DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_OUT_0						GPIO_OUT_0(    DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_OUT_1						GPIO_OUT_1(    DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRH_OUT_C						GPIO_OUT_C(    DPSC_CTRH_PORT,DPSC_CTRH_BIT)
	#define DPSC_CTRL_PORT						GPIOC
	#define DPSC_CTRL_BIT						LL_GPIO_PIN_7
	#define DPSC_CTRL_STATE						GPIO_GET_STATE(DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_WRITE						GPIO_SET_WRITE(DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_READ						GPIO_SET_READ( DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_OUT_0						GPIO_OUT_0(	   DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_OUT_1						GPIO_OUT_1(    DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_CTRL_OUT_C						GPIO_OUT_C(    DPSC_CTRL_PORT,DPSC_CTRL_BIT)
	#define DPSC_POWER_ON						( DPSC_CTRL_OUT_0,DPSC_CTRH_OUT_1 )
	#define DPSC_POWER_OFF						( DPSC_CTRH_OUT_0,DPSC_CTRL_OUT_1 )
	#define DPSC_POWER_HZ						( DPSC_CTRH_OUT_0,DPSC_CTRL_OUT_0 )
	
	//===DPSD使能端口
	#define DPSD_CTRH_PORT						GPIOC
	#define DPSD_CTRH_BIT						LL_GPIO_PIN_8
	#define DPSD_CTRH_STATE						GPIO_GET_STATE(DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_WRITE						GPIO_SET_WRITE(DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_READ						GPIO_SET_READ( DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_OUT_0						GPIO_OUT_0(    DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_OUT_1						GPIO_OUT_1(    DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRH_OUT_C						GPIO_OUT_C(    DPSD_CTRH_PORT,DPSD_CTRH_BIT)
	#define DPSD_CTRL_PORT						GPIOC
	#define DPSD_CTRL_BIT						LL_GPIO_PIN_9
	#define DPSD_CTRL_STATE						GPIO_GET_STATE(DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_WRITE						GPIO_SET_WRITE(DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_READ						GPIO_SET_READ( DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_OUT_0						GPIO_OUT_0(    DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_OUT_1						GPIO_OUT_1(    DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_CTRL_OUT_C						GPIO_OUT_C(    DPSD_CTRL_PORT,DPSD_CTRL_BIT)
	#define DPSD_POWER_ON						( DPSD_CTRL_OUT_0,DPSD_CTRH_OUT_1 )
	#define DPSD_POWER_OFF						( DPSD_CTRH_OUT_0,DPSD_CTRL_OUT_1 )
	#define DPSD_POWER_HZ						( DPSD_CTRH_OUT_0,DPSD_CTRL_OUT_0 )
	
	//===DPS电源控制
	#define DPS_POWER_ON						( DPSA_POWER_ON,DPSB_POWER_ON,DPSC_POWER_ON,DPSD_POWER_ON )
	#define DPS_POWER_OFF						( DPSA_POWER_OFF,DPSB_POWER_OFF,DPSC_POWER_OFF,DPSD_POWER_OFF )
	#define DPS_POWER_HZ						( DPSA_POWER_HZ,DPSB_POWER_HZ,DPSC_POWER_HZ,DPSD_POWER_HZ )
	
	//===函数定义
	void Power_Init(void);
	void Power_DeInit(void);
    
	//===用于区分不同的板子
	#ifdef LM317_USE_HV_RESET
		//===LM317使能端口
		#define LM317_CTRH_PORT						GPIOB
		#define LM317_CTRH_BIT						LL_GPIO_PIN_9
		#define LM317_CTRH_STATE					GPIO_GET_STATE(LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_WRITE					GPIO_SET_WRITE(LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_READ						GPIO_SET_READ( LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_OUT_0					GPIO_OUT_0(    LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_OUT_1					GPIO_OUT_1(    LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_OUT_C					GPIO_OUT_C(    LM317_CTRH_PORT,LM317_CTRH_BIT)

		#define LM317_CTRL_PORT						GPIOB
		#define LM317_CTRL_BIT						LL_GPIO_PIN_8
		#define LM317_CTRL_STATE					GPIO_GET_STATE(LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_WRITE					GPIO_SET_WRITE(LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_READ						GPIO_SET_READ( LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_OUT_0					GPIO_OUT_0(	   LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_OUT_1					GPIO_OUT_1(    LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_OUT_C					GPIO_OUT_C(    LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_POWER_ON						( LM317_CTRL_OUT_0,LM317_CTRH_OUT_1,DelayTask_ms(1) )
		#define LM317_POWER_OFF						( LM317_CTRH_OUT_0,LM317_CTRL_OUT_1 )
		#define LM317_POWER_HZ						( LM317_CTRH_OUT_0,LM317_CTRL_OUT_0 )
	#else
		//===LM317使能端口
		#define LM317_CTRH_PORT						GPIOE
		#define LM317_CTRH_BIT						LL_GPIO_PIN_4
		#define LM317_CTRH_STATE					GPIO_GET_STATE(LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_WRITE					GPIO_SET_WRITE(LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_READ						GPIO_SET_READ( LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_OUT_0					GPIO_OUT_0(    LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_OUT_1					GPIO_OUT_1(    LM317_CTRH_PORT,LM317_CTRH_BIT)
		#define LM317_CTRH_OUT_C					GPIO_OUT_C(    LM317_CTRH_PORT,LM317_CTRH_BIT)

		#define LM317_CTRL_PORT						GPIOE
		#define LM317_CTRL_BIT						LL_GPIO_PIN_3
		#define LM317_CTRL_STATE					GPIO_GET_STATE(LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_WRITE					GPIO_SET_WRITE(LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_READ						GPIO_SET_READ( LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_OUT_0					GPIO_OUT_0(	   LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_OUT_1					GPIO_OUT_1(    LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_CTRL_OUT_C					GPIO_OUT_C(    LM317_CTRL_PORT,LM317_CTRL_BIT)
		#define LM317_POWER_ON						( LM317_CTRL_OUT_0,LM317_CTRH_OUT_1,DelayTask_ms(1) )
		#define LM317_POWER_OFF						( LM317_CTRH_OUT_0,LM317_CTRL_OUT_1 )
		#define LM317_POWER_HZ						( LM317_CTRH_OUT_0,LM317_CTRL_OUT_0 )
	#endif
	
	//===定义LM317的基础电压值
	#define LM317_BASE_POWER_MV					1260
	//===定义LM317最大输出的电压值
	#define LM317_MAX_POWER_MV					(6000)
	//===定义LM317最小输出的电压值
	#define LM317_MIN_POWER_MV					(1450)//(1440)//---默认最小值
	//===损失的电压
	#define LM317_LOST_POWER_MV					200

	//===函数定义
	UINT8_T LM317_Init(UINT8_T isPowerON, UINT32_T volMV);
	UINT8_T LM317_DeInit(void);
	UINT8_T LM317_PowerMV(UINT32_T volMV);
	UINT8_T LM317_PowerV(float volV);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*POWER_CFG_H_ */