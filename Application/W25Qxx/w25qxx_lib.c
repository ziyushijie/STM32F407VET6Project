#include "w25qxx_lib.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T W25QXXLib_SPI_Init(W25QXX_HandleType *W25Qx, void(*pFuncDelayus)(UINT32_T delay), void(*pFuncDelayms)(UINT32_T delay), UINT32_T(*pFuncTimerTick)(void), UINT8_T isHW)
{
	return W25QXX_SPI_Init(W25Qx, pFuncDelayus, pFuncDelayms, pFuncTimerTick, isHW);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T W25QXXLib_SPI_ReadRegSR1(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	return W25QXX_SPI_ReadRegSR1(W25Qx, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T W25QXXLib_SPI_ReadRegSR2(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	return W25QXX_SPI_ReadRegSR2(W25Qx, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_WriteRegSR1(W25QXX_HandleType *W25Qx, UINT8_T cmd, UINT8_T isAutoInit)
{
	W25QXX_SPI_WriteRegSR1(W25Qx, cmd, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_WriteRegSR2(W25QXX_HandleType *W25Qx, UINT8_T cmd, UINT8_T isAutoInit)
{
	W25QXX_SPI_WriteRegSR2(W25Qx, cmd, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_EnableWrite(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	W25QXX_SPI_EnableWrite(W25Qx, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_DisableWrite(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	W25QXX_SPI_DisableWrite(W25Qx, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT16_T W25QXXLib_SPI_ReadID(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	return W25QXX_SPI_ReadID(W25Qx, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T W25QXXLib_SPI_WaitBusy(W25QXX_HandleType *W25Qx, UINT32_T timeOut, UINT8_T isAutoInit)
{
	return W25QXX_SPI_WaitBusy(W25Qx,timeOut, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_ReadData(W25QXX_HandleType *W25Qx, UINT32_T addr, UINT8_T *pVal, UINT16_T length, UINT8_T isAutoInit)
{
	W25QXX_SPI_ReadData(W25Qx, addr, pVal, length, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_ReadFast(W25QXX_HandleType *W25Qx, UINT32_T addr, UINT8_T *pVal, UINT16_T length, UINT8_T isAutoInit)
{
	W25QXX_SPI_ReadFast(W25Qx, addr, pVal, length, isAutoInit);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_WritePage(W25QXX_HandleType *W25Qx, UINT32_T addr, UINT8_T *pVal, UINT16_T length, UINT8_T isAutoInit)
{
	W25QXX_SPI_WritePage(W25Qx, addr, pVal, length, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_EraseChip(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	W25QXX_SPI_EraseChip(W25Qx, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_EraseSector(W25QXX_HandleType *W25Qx, UINT32_T sectorAddr, UINT8_T isAutoInit)
{
	W25QXX_SPI_EraseSector(W25Qx, sectorAddr, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_EraseBlock32KB(W25QXX_HandleType *W25Qx, UINT32_T blockAddr, UINT8_T isAutoInit)
{
	W25QXX_SPI_EraseBlock32KB(W25Qx, blockAddr, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_EraseBlock64KB(W25QXX_HandleType *W25Qx, UINT32_T blockAddr, UINT8_T isAutoInit)
{
	W25QXX_SPI_EraseBlock64KB(W25Qx, blockAddr, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_PowerDown(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	W25QXX_SPI_PowerDown(W25Qx, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_WakeUp(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	W25QXX_SPI_WakeUp(W25Qx, isAutoInit);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_ReadUniqueIDNumber(W25QXX_HandleType *W25Qx, UINT8_T *pVal, UINT8_T isAutoInit)
{
	W25QXX_SPI_ReadUniqueIDNumber(W25Qx, pVal, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_ReadJEDECID(W25QXX_HandleType *W25Qx, UINT8_T *pVal, UINT8_T isAutoInit)
{
	W25QXX_SPI_ReadJEDECID(W25Qx, pVal, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_EraseSecurityReg(W25QXX_HandleType *W25Qx, UINT32_T regAddr, UINT8_T isAutoInit)
{
	W25QXX_SPI_EraseSecurityReg(W25Qx, regAddr, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_ProgramSecurityReg(W25QXX_HandleType *W25Qx, UINT32_T regAddr, UINT8_T *pVal, UINT16_T length, UINT8_T isAutoInit)
{
	W25QXX_SPI_ProgramSecurityReg(W25Qx, regAddr, pVal, length, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_ReadSecurityReg(W25QXX_HandleType *W25Qx, UINT32_T regAddr, UINT8_T *pVal, UINT16_T length, UINT8_T isAutoInit)
{
	W25QXX_SPI_ReadSecurityReg(W25Qx, regAddr, pVal, length, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_EnableReset(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	W25QXX_SPI_EnableReset(W25Qx, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_Reset(W25QXX_HandleType *W25Qx, UINT8_T isAutoInit)
{
	W25QXX_SPI_Reset(W25Qx, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_WriteNoCheck(W25QXX_HandleType *W25Qx, UINT32_T addr, UINT8_T* pVal, UINT16_T length, UINT8_T isAutoInit)
{
	W25QXX_SPI_WriteNoCheck(W25Qx, addr, pVal, length, isAutoInit);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void W25QXXLib_SPI_WriteAndCheck(W25QXX_HandleType *W25Qx, UINT32_T addr, UINT8_T* pVal, UINT16_T length, UINT8_T isAutoInit)
{
	W25QXX_SPI_WriteAndCheck(W25Qx, addr, pVal, length,isAutoInit);
}