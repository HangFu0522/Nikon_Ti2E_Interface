#include "pch.h"
#include<Ti2E/Ti2E.h>

int32_t init_dev(void)
{
	lx_uint32 uiDeviceCount = 0;
	lx_int32* ppiDeviceTypeList = NULL;
	lx_result hRet = MIC_GetDeviceList(uiDeviceCount, &ppiDeviceTypeList);
	if (hRet != LX_OK) {
		// Failure to MIC_GetDeviceList.;
		return -1;

	}
	lx_uint64 uiConnectedAccessoryMask = 0;
	lx_uint32 uiErrMsgMaxSize = 255;
	lx_wchar  pwszErrMsg[256] = { 0 };
	if (uiDeviceCount == 0) {
		// Connect to Simulator.
		hRet = MIC_SimulatorOpen(0, uiConnectedAccessoryMask, uiErrMsgMaxSize, pwszErrMsg);
	}
	else {
		// Connect to Ti2."
		hRet = MIC_Open(uiDeviceCount - 1, uiConnectedAccessoryMask, uiErrMsgMaxSize, pwszErrMsg);

	}
	if (hRet != LX_OK) {
		// Failure;
		return -1;
	}

}

int32_t ControlXYStageMoveto(double X, double Y)
{
	MIC_Data sInData, sOutData;
	sInData.uiDataUsageMask = MIC_DATA_MASK_XPOSITION | MIC_DATA_MASK_YPOSITION;
	// X Pos ---> 100um
	MIC_Convert_Phys2Dev(MIC_DATA_MASK_XPOSITION, X, sInData.iXPOSITION);
	sInData.iXPOSITIONSpeed = 1;
	sInData.iXPOSITIONTolerance = 9;
	// Y Pos ---> 100um
	MIC_Convert_Phys2Dev(MIC_DATA_MASK_YPOSITION, Y, sInData.iYPOSITION);
	sInData.iYPOSITIONSpeed = 1;
	sInData.iYPOSITIONTolerance = 9;
	lx_result hRet = MIC_DataSet(sInData, sOutData, true);
	if (hRet != LX_OK) {
		return -1;

	}

	return 0;
}

int32_t ControlZStageMoveto(double Z)
{
	MIC_Data sInData, sOutData;
	sInData.uiDataUsageMask = MIC_DATA_MASK_ZPOSITION;
	MIC_Convert_Phys2Dev(MIC_DATA_MASK_ZPOSITION, Z, sInData.iZPOSITION);
	sInData.iZPOSITIONSpeed = 1;
	sInData.iZPOSITIONTolerance = 1;

	lx_result hRet = MIC_DataSet(sInData, sOutData, true);
	if (hRet != LX_OK) {
		return -1;

	}

	return 0;
}

int32_t getXYStagePosition(double *_X, double *_Y)
{
	MIC_Data sOutData;
	sOutData.uiDataUsageMask = MIC_DATA_MASK_XPOSITION | MIC_DATA_MASK_YPOSITION;
	lx_result hRet = MIC_DataGet(sOutData);
	if (hRet != LX_OK) {
		return -1;
	}
	MIC_Convert_Dev2Phys(MIC_DATA_MASK_XPOSITION, sOutData.iXPOSITION, *_X);
	MIC_Convert_Dev2Phys(MIC_DATA_MASK_YPOSITION, sOutData.iYPOSITION, *_Y);
	return 0;
}

int getZStagePosition(double *_Z)
{
	MIC_Data sOutData;
	sOutData.uiDataUsageMask = MIC_DATA_MASK_ZPOSITION;
	lx_result hRet = MIC_DataGet(sOutData);
	if (hRet != LX_OK) {
		return -1;

	}
	MIC_Convert_Dev2Phys(MIC_DATA_MASK_ZPOSITION, sOutData.iZPOSITION, *_Z);
	return 0;
}

int32_t closedev()
{
	lx_result re = MIC_Close();
	return int32_t(re);
}
