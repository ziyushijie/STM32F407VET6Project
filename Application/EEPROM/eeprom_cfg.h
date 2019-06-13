#ifndef EEPROM_CFG_H_
#define EEPROM_CFG_H_
//////////////////////////////////////////////////////////////////////////////////////
/////////////////使用Flash模拟Eeprom的功能，用于少量数据的记/
/////////////////使用Flash的最后一个Sector作为存储数据的区域
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
	#include "flash_task.h"
	//////////////////////////////////////////////////////////////////////////////////////
	//===定义EEPROM使用的位置
	#if STM32_FLASH_SIZE<256
		#define	EEPROM_START_ADDR	( STM32_FLASH_BASE+(STM32_SECTOR_NUM-2)*STM32_SECTOR_SIZE )
		#define EEPROM_END_ADDR		( EEPROM_START_ADDR+STM32_SECTOR_SIZE )
	#else
		#define	EEPROM_START_ADDR	( STM32_FLASH_BASE+(STM32_SECTOR_NUM-1)*STM32_SECTOR_SIZE )
		#define EEPROM_END_ADDR		( EEPROM_START_ADDR+STM32_SECTOR_SIZE )
	#endif

	//===函数定义
	void     EEPROM_Init(void);
	UINT16_T EEPROM_ReadHalfWord(UINT16_T addr);
	void     EEPROM_ReadHalfWordData(UINT16_T addr, UINT16_T *pVal, UINT16_T length);
	UINT8_T  EEPROM_WriteHalfWord(UINT16_T addr, UINT16_T val);
	UINT8_T  EEPROM_WriteHalfWordData(UINT16_T addr, UINT16_T *pVal, UINT16_T length);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /*EEPROM_CFG_H_ */