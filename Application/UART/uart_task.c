#include "uart_task.h"

//===全局变量的定义
UINT8_T UART1_RX_BUFFER[UART1_RX_MAX_SIZE] = { 0 };
UINT8_T UART1_TX_BUFFER[UART1_RX_MAX_SIZE] = { 0 };

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_ConfigInit(UART_HandleType* UARTx, UART_HandleType* UARTInitx)
{
	return UARTLib_ConfigInit(UARTx, UARTInitx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_Init(UART_HandleType*  UARTx, UINT16_T rxSize, UINT8_T* pRxVal, UINT8_T rxCRCFlag, UINT16_T txSize, UINT8_T* pTxVal, UINT8_T txCRCFlag, UINT32_T(*pTimerTick)(void))
{
	UINT8_T _return = OK_0;
	//_return = UARTLib_ParamInit(UARTx, UART1_DEVICE_ID, UART1_ID_INDEX, UART1_CMD_INDEX, UART1_DATA1_INDEX, UART1_DATA2_INDEX);
	_return = UARTLib_Init(UARTx, rxSize, pRxVal, rxCRCFlag, txSize, pTxVal, txCRCFlag, pTimerTick);
	return _return;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_DeInit(UART_HandleType*  UARTx)
{
	return UARTLib_DeInit(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_ParamInit(UART_HandleType *UARTx, UINT8_T id, UINT8_T idIndex, UINT8_T cmdIndex, UINT8_T d1Index, UINT8_T d2Index)
{
	return UARTLib_ParamInit(UARTx, id, idIndex, cmdIndex, d1Index, d2Index);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_Read_Init(UART_HandleType*  UARTx)
{
	return UARTLib_Read_Init(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_GetState(UART_HandleDef* UARTDefx)
{
	return UARTLib_GetState(UARTDefx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_ClearState(UART_HandleDef* UARTDefx)
{
	return UARTLib_ClearState(UARTDefx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_TimeTask_OverFlow(UART_HandleType*UARTx)
{
	//---发送
	//UARTLib_TimeTask_OverFlow(UARTx, 0);
	//---接收
	return  UARTLib_TimeTask_OverFlow(UARTx, 1);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_ITRead_8BitsTask(UART_HandleType*UARTx, UINT8_T val)
{
	return UARTLib_ITRead_8BitsTask(UARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_ITRead_16BitsTask(UART_HandleType*UARTx, UINT8_T val)
{
	return UARTLib_ITRead_16BitsTask(UARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_ITRead_Task(UART_HandleType*UARTx, UINT8_T val)
{
	return UARTLib_ITRead_Task(UARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_Write_Init(UART_HandleType*UARTx)
{
	return UARTLib_Write_Init(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_ITWrite_TXETask(UART_HandleType*UARTx)
{
	return UARTLib_ITWrite_TXETask(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_ITWrite_TCTask(UART_HandleType*UARTx)
{
	return UARTLib_ITWrite_TCTask(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_RealTime_AddByte(UART_HandleType*UARTx, UINT8_T val)
{
	return UARTLib_RealTime_AddByte(UARTx, val);
}
///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_RealTime_AddSize(UART_HandleType*UARTx, UINT16_T val)
{
	return UARTLib_RealTime_AddSize(UARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_RealTime_AddCRC(UART_HandleType*UARTx)
{
	return UARTLib_RealTime_AddCRC(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 UARTTask_FillMode_Init( UART_HandleType*UARTx, UINT8_T isChildCmd)
{
	return UARTLib_FillMode_Init(UARTx,isChildCmd);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_FillMode_AddByte(UART_HandleType*UARTx, UINT8_T val)
{
	return  UARTLib_FillMode_AddByte(UARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_FillMode_AddData(UART_HandleType*UARTx, UINT8_T *pVal, UINT16_T length)
{
	return  UARTLib_FillMode_AddData(UARTx, pVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 UARTTask_FillMode_SetResultFlag(UART_HandleType* UARTx, UINT8_T val)
{
	return UARTLib_FillMode_SetResultFlag(UARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_FillMode_AddIndexW(UART_HandleType* UARTx, UINT16_T val)
{
	return UARTLib_FillMode_AddIndexW(UARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_CRCTask_Read(UART_HandleType*UARTx)
{
	return UARTLib_CRCTask_Read(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_CRCTask_Write(UART_HandleType*UARTx)
{
	return UARTLib_CRCTask_Write(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：字节模式发送
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_FillMode_WriteByteSTART(UART_HandleType*UARTx, UINT8_T isNeedID)
{
	return UARTLib_FillMode_WriteByteSTART(UARTx, isNeedID);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：数据模式发送数据
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_FillMode_WriteArraySTART(UART_HandleType* UARTx, UINT8_T* pArrayVal, UINT16_T length)
{
	return UARTLib_FillMode_WriteArraySTART(UARTx, pArrayVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：填充模式发送数据
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T  UARTTask_FillMode_WriteSTART(UART_HandleType* UARTx, UINT16_T length)
{
	return UARTLib_FillMode_WriteSTART(UARTx, length);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_PollMode_WriteByte(UART_HandleType*UARTx, UINT8_T  val)
{
	return UARTLib_PollMode_WriteByte(UARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_PollMode_WriteData(UART_HandleType*UARTx, char *pVal)
{
	return  UARTLib_PollMode_WriteData(UARTx, pVal);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void UARTTask_PrintfClockFreq(UART_HandleType*UARTx)
{
	UARTLib_PrintfClockFreq(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void UARTTask_PrintfLog(UART_HandleType* UARTx, char* fmt, va_list args)
{
	UARTLib_PrintfLog(UARTx, fmt, args);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void UARTTask_Printf(UART_HandleType* UARTx, char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	UARTTask_PrintfLog(UARTx, fmt, args);
	va_end(args);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_IT_TCTask(UART_HandleType* UARTx)
{
	return UARTLib_IT_TCTask(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：校验发送状态空闲
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 UARTTask_Write_CheckIdle(UART_HandleType* UARTx)
{
	return UARTLib_Write_CheckIdle(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明： 校验设备的ID信息
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_DeviceID(UART_HandleType*UARTx)
{
	return UARTLib_DeviceID(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：中断处理函数
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void UARTTask_IRQTask(UART_HandleType* UARTx)
{
	UARTLib_IRQTask(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void UARTTask_Read_DMA_IRQTask(UART_HandleType* UARTx)
{
	UARTLib_Read_DMA_IRQTask(UARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void UARTTask_Write_DMA_IRQTask(UART_HandleType* UARTx)
{
	UARTLib_Write_DMA_IRQTask(UARTx);
}

UINT16_T UARTDebugCount=0;

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_FuncTask(UART_HandleType*UARTx, UINT8_T(*pFuncTask)(UINT8_T *, UINT8_T *))
{
	UINT16_T length = 0;
	if (UARTx != NULL)
	{
		//---判断接收是否完成
		if (UARTTask_GetState(&(UARTx->msgRxdHandle)) == 1)
		{
			//---CRC的校验
			if ((UARTTask_CRCTask_Read(UARTx) == OK_0) && (UARTTask_DeviceID(UARTx) == OK_0))
			{
				//---数据接收完成
				if (pFuncTask != NULL)
				{
					pFuncTask(UARTx->msgRxdHandle.pMsgVal, UARTx->msgTxdHandle.pMsgVal);
				}
				else
				{
					UARTTask_FillMode_AddData(UARTx, UARTx->msgRxdHandle.pMsgVal, UARTx->msgRxdHandle.msgCount);
					//---启动数据发送
					UARTTask_FillMode_WriteByteSTART(UARTx, 0);
					UARTDebugCount++;
					UARTTask_Printf(pUart1, "TEST Count:%d\r\n", UARTDebugCount);
				}
			}
			else
			{
				//---发生CRC校验错误
				UARTTask_Printf(UARTx, (void*)"=>>SP%d:CRC Check Error<<=\r\n", (UARTx->msgIndex - 1));
			}
			return UARTTask_Read_Init(UARTx);
		}
		return UARTTask_TimeTask_OverFlow(UARTx);
	}
	return ERROR_2;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_DebugPollFuncTask(UART_HandleType*UARTx, UINT8_T(*pFuncTask)(UINT8_T *, UINT8_T *))
{
	//UINT16_T length = 0;
	UINT32_T freqVal = 0;
	if (UARTx != NULL)
	{
		//---判断接收是否完成
		if (UARTTask_GetState(&(UARTx->msgRxdHandle)) == 1)
		{
			//---CRC的校验
			if ((UARTTask_CRCTask_Read(UARTx) == OK_0) && (UARTTask_DeviceID(UARTx) == OK_0))
			{
				if (UARTx->msgRxdHandle.pMsgVal[UART1_CMD_INDEX]==0xA4)
				{
					//---获取时钟频率
					TimerTask_CalcFreq_Task(0);
					//---计算频率
					freqVal = (UINT32_T)(pCalcFreq->msgFreqKHz[pCalcFreq->msgChannel] * 100);
				}

				UARTTask_FillMode_Init(UARTx,0);
				//UARTTask_FillMode_AddByte(UARTx, 0xA4);
				UARTTask_FillMode_AddByte(UARTx, 0x00);
				UARTTask_FillMode_AddByte(UARTx, (UINT8_T)(freqVal >> 24));
				UARTTask_FillMode_AddByte(UARTx, (UINT8_T)(freqVal >> 16));
				UARTTask_FillMode_AddByte(UARTx, (UINT8_T)(freqVal >> 8));
				UARTTask_FillMode_AddByte(UARTx, (UINT8_T)(freqVal ));

				UARTTask_FillMode_WriteByteSTART(UARTx, 0);
			}
			else
			{
				//---发生CRC校验错误
				UARTTask_Printf(UARTx, "=>>SP%d:CRC Check Error<<=\r\n", (UARTx->msgIndex - 1));
			}
			return UARTTask_Read_Init(UARTx);
		}
		return UARTTask_TimeTask_OverFlow(UARTx);
	}
	return ERROR_2;
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：频率测试函数
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T UARTTask_DebugFreqTask(UART_HandleType* UARTx, UINT8_T(*pFuncTask)(UINT8_T*, UINT8_T*))
{
	//UINT16_T length = 0;
	UINT32_T freqVal = 0;
	UINT8_T _return=0;
	if (UARTx != NULL)
	{
		//---判断接收是否完成
		if (UARTTask_GetState(&(UARTx->msgRxdHandle)) == 1)
		{
			//---CRC的校验
			if ((UARTTask_CRCTask_Read(UARTx) == OK_0) && (UARTTask_DeviceID(UARTx) == OK_0))
			{
				if (UARTx->msgRxdHandle.pMsgVal[UART1_CMD_INDEX] == 0xA4)
				{
					//---是否重新上电
					if (UARTx->msgRxdHandle.pMsgVal[UART1_CMD_INDEX + 1] != 0)
					{
						LM317_POWER_OFF;
						freqVal= UARTx->msgRxdHandle.pMsgVal[UART1_CMD_INDEX + 2];
						freqVal = (freqVal<<8)+UARTx->msgRxdHandle.pMsgVal[UART1_CMD_INDEX + 3];
						//---初始化LM317做的可调电源
						LM317Task_Init(0, freqVal);
						LM317_POWER_ON;
					}
					#ifdef STM32_USE_F407VET6
						//---发送脉冲信号
						GPIO_OUT_0(TRIG_PULSE_PORT, TRIG_PULSE_BIT);
						DelayTask_us(500);
						GPIO_OUT_1(TRIG_PULSE_PORT, TRIG_PULSE_BIT);
						DelayTask_us(500);
						//---延时100ms，读取频率值
						DelayTask_ms(100);
						//---读取校准字
						_return=DataBus_Read();
					#endif
					//---获取时钟频率
					TimerTask_CalcFreq_Task(0);
					//---计算频率
					freqVal = (UINT32_T)(pCalcFreq->msgFreqKHz[pCalcFreq->msgChannel] * 100);
				}
				//UARTTask_FillMode_AddByte(UARTx, 0xA4);
				UARTTask_FillMode_Init(UARTx, 0);
				UARTTask_FillMode_AddByte(UARTx, 0x00);
				//---读取校准字
				UARTTask_FillMode_AddByte(UARTx, _return);
				UARTTask_FillMode_AddByte(UARTx, (UINT8_T)(freqVal >> 24));
				UARTTask_FillMode_AddByte(UARTx, (UINT8_T)(freqVal >> 16));
				UARTTask_FillMode_AddByte(UARTx, (UINT8_T)(freqVal >> 8));
				UARTTask_FillMode_AddByte(UARTx, (UINT8_T)(freqVal));
				//---启动数据发送
				UARTTask_FillMode_WriteByteSTART(UARTx, 0);
			}
			else
			{
				//---发生CRC校验错误
				UARTTask_Printf(UARTx, "=>>SP%d:CRC Check Error<<=\r\n", (UARTx->msgIndex - 1));
			}
			return UARTTask_Read_Init(UARTx);
		}
		return UARTTask_TimeTask_OverFlow(UARTx);
	}
	return ERROR_2;
}
