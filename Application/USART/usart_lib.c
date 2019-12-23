#include "usart_lib.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_Init(USART_HandlerType*  USARTx, UINT16_T rxSize, UINT8_T* pRxVal, UINT8_T rxCRCFlag, UINT16_T txSize, UINT8_T* pTxVal, UINT8_T txCRCFlag, UINT32_T(*pTimerTick)(void))
{
	UINT8_T _return = OK_0;
	_return = USART_Init(USARTx, rxSize, pRxVal, rxCRCFlag, txSize, pTxVal, txCRCFlag, pTimerTick);
	if (_return == OK_0)
	{
		if (CRCTask_Enable() != OK_0)
		{
			//---CRC校验函数调用失败,之后的CRC标志设置为无校验位
			USARTx->msgRXDHandler.msgCRCFlag = 0;
			USARTx->msgTXDHandler.msgCRCFlag = 0;
		}
	}
	return _return;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_DeInit(USART_HandlerType*  USARTx)
{
	return USART_DeInit(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_ParamInit(USART_HandlerType *USARTx, UINT8_T id, UINT8_T idIndex, UINT8_T cmdIndex, UINT8_T d1Index, UINT8_T d2Index)
{
	return USART_ParamInit(USARTx, id, idIndex, cmdIndex, d1Index, d2Index);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_Read_Init(USART_HandlerType*  USARTx)
{
	return USART_Read_Init(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_GetReadState(USART_HandlerType* USARTx)
{
	return USART_GetReadState(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_ClearReadState(USART_HandlerType* USARTx)
{
	return USART_ClearReadState(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_GetWriteState(USART_HandlerType* USARTx)
{
	return USART_GetWriteState(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_ClearWriteState(USART_HandlerType* USARTx)
{
	return USART_ClearWriteState(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_TimeTick_Init(USART_HandlerType*USARTx, UINT8_T isRx)
{
	return USART_TimeTick_Init(USARTx, isRx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_TimeTick_OVF(USART_HandlerType*USARTx, UINT32_T timeOut, UINT8_T isRx)
{
	return USART_TimeTick_OVF(USARTx, timeOut, isRx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_GetOVF(USART_HandlerType* USARTx, UINT8_T isRx)
{
	return USART_GetOVF(USARTx, isRx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_ClearOVF(USART_HandlerType* USARTx, UINT8_T isRx)
{
	return USART_ClearOVF(USARTx, isRx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_TimeOVFTask(USART_HandlerType*USARTx, UINT8_T isRx)
{
	return USART_TimeOVFTask(USARTx, isRx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_ITRead_8BitsTask(USART_HandlerType*USARTx, UINT8_T val)
{
	return USART_ITRead_8BitsTask(USARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_ITRead_16BitsTask(USART_HandlerType*USARTx, UINT8_T val)
{
	return USART_ITRead_16BitsTask(USARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_ITRead_Task(USART_HandlerType*USARTx, UINT8_T val)
{
	return USART_ITRead_Task(USARTx, val);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_Write_Init(USART_HandlerType*USARTx)
{
	return USART_Write_Init(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_DeviceID(USART_HandlerType*USARTx)
{
	return USART_DeviceID(USARTx);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_ITWrite_TXETask(USART_HandlerType*USARTx)
{
	return USART_ITWrite_TXETask(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_ITWrite_TCTask(USART_HandlerType*USARTx)
{
	return USART_ITWrite_TCTask(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_RealTime_AddByte(USART_HandlerType*USARTx, UINT8_T val)
{
	return USART_RealTime_AddByte(USARTx, val);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_RealTime_AddSize(USART_HandlerType*USARTx, UINT16_T val)
{
	return USART_RealTime_AddSize(USARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_RealTime_AddCRC(USART_HandlerType*USARTx)
{
	return USART_RealTime_AddCRC(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 USARTLib_FillMode_Init( USART_HandlerType*USARTx, UINT8_T isChildCmd)
{
	return USART_FillMode_Init( USARTx,isChildCmd );
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_FillMode_AddByte(USART_HandlerType*USARTx, UINT8_T val)
{
	return USART_FillMode_AddByte(USARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_FillMode_AddData(USART_HandlerType*USARTx, UINT8_T *pVal, UINT16_T length)
{
	return USART_FillMode_AddData(USARTx, pVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 USARTLib_FillMode_SetResultFlag(USART_HandlerType* USARTx, UINT8_T val)
{
	return USART_FillMode_SetResultFlag( USARTx,  val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTLib_FillMode_AddIndexW(USART_HandlerType* USARTx, UINT16_T val)
{
	return USART_FillMode_AddIndexW(USARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明： 接收的数据进行处理，主要是校验信息
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_CRCTask_Read(USART_HandlerType*USARTx)
{
	return USART_CRCTask_Read(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_CRCTask_Write(USART_HandlerType*USARTx)
{
	return USART_CRCTask_Write(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_FillMode_WriteSTART(USART_HandlerType*USARTx, UINT8_T isNeedID)
{
	return USART_FillMode_WriteSTART(USARTx, isNeedID);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_PollMode_WriteByte(USART_HandlerType*USARTx, UINT8_T  val)
{
	return USART_PollMode_WriteByte(USARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_PollMode_WriteData(USART_HandlerType*USARTx, char *pVal)
{
	return USART_PollMode_WriteData(USARTx, pVal);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void USARTLib_PrintfClockFreq(USART_HandlerType*USARTx)
{
	USART_PrintfClockFreq(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T USARTLib_IT_TCTask(USART_HandlerType* USARTx)
{
	return USART_IT_TCTask(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：中断处理函数
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void USARTLib_IRQTask(USART_HandlerType* USARTx)
{
	USART_IRQTask(USARTx);
}