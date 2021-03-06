#ifndef ONE_WIRE_LIB_H_
#define ONE_WIRE_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "one_wire_cfg.h"
	///////////////////////////////////////////////////////////////////////////////////////
	//===��������
	UINT8_T OneWireLib_Init(OneWire_HandleType *OneWirex, void(*pFuncDelayus)(UINT32_T delay));
	UINT8_T OneWireLib_DeInit(OneWire_HandleType *OneWirex);
	UINT8_T OneWireLib_START(OneWire_HandleType *OneWirex);
	UINT8_T OneWireLib_WriteByte(OneWire_HandleType *OneWirex, UINT8_T val);
	UINT8_T OneWireLib_ReadByte(OneWire_HandleType *OneWirex);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*ONE_WIRE_LIB_H_ */