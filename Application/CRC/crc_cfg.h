#ifndef CRC_CFG_H_
#define CRC_CFG_H_
//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
	//////////////////////////////////////////////////////////////////////////////////////
#include "complier_lib.h"
//////////////////////////////////////////////////////////////////////////////////////
//===����ʹ�õ�CRCУ�鷽��
#define USE_CRC32
#define USE_CRC16

//===AVR��8BIT��MCU��֧��16��32��У��,��ʱû�н��
#ifdef USE_MCU_AVR
#ifdef USE_CRC32
#undef USE_CRC32
#endif
#ifdef USE_CRC16
#undef USE_CRC16
#endif
#endif
#define USE_CRC8
#define USE_CHECKSUM

#define USE_CRC8_07H				0x07
#define USE_CRC8_31H				0x31

//===�Ƿ����ݶ��嵽SRAM��
#define USE_SRAM

//===��������
	void	 CRC_Init(void);
	void	 CRC_DeInit(void);
	UINT8_T	 CRC_Enable(void);
	UINT32_T CRC_CRC32_CRC(UINT8_T *pVal, UINT32_T length);
	UINT16_T CRC_CRC16_Table(UINT8_T *pVal, UINT32_T length);
	UINT8_T  CRC_CRC8_Table(UINT8_T crcVal, UINT8_T *pVal, UINT32_T length);
	UINT8_T  CRC_CheckSum(UINT8_T *pVal, UINT32_T length);
	//////////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
//////////////////////////////////////////////////////////////////////////////////////
#endif /* CRC_CFG_H_ */