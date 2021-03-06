#ifndef EEPROM_LIB_H_
#define EEPROM_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "eeprom_cfg.h"
	//////////////////////////////////////////////////////////////////////////////////////
	//===��������
	void     EEPROMLib_Init(void);
	UINT16_T EEPROMLib_ReadHalfWord(UINT16_T addr);
	void     EEPROMLib_ReadHalfWordData(UINT16_T addr, UINT16_T *pVal, UINT16_T length);
	UINT8_T  EEPROMLib_WriteHalfWord(UINT16_T addr, UINT16_T val);
	UINT8_T  EEPROMLib_WriteHalfWordData(UINT16_T addr, UINT16_T *pVal, UINT16_T length);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*EEPROM_LIB_H_ */