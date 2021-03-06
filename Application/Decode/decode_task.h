#ifndef DECODE_TASK_H_
#define DECODE_TASK_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "decode_lib.h"
	#include "key_task.h"
	//////////////////////////////////////////////////////////////////////////////////////
	//===��������
	void DecodeTask_Init(void);
	void DecodeTask_ActivateSites(UINT8_T activateSites);
	void DecodeTask_ClearActivateSites(void);
	void  DecodeTask_ClearState(void);
	void DecodeTask_START(void);
	void DecodeTask_STOP(void);
	UINT8_T DecodeTask_ScanRST(void);
	void DecodeTask_IRQTask(void);
	void DecodeTask_QueryInit(UINT8_T activateSites);
	void DecodeTask_Query(void);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*DECODE_TASK_H_ */