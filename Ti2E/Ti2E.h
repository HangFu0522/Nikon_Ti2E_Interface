#pragma once

#include<Ti2ESDK/new_mic_sdk2.h>
#include<Ti2ESDK/new_mic_sdk2_DedicatedCommand.h>
#include<cstdint>
extern "C"
{
	__declspec(dllexport)  int32_t init_dev(void);
	__declspec(dllexport)  int32_t ControlXYStageMoveto(double X, double Y);
	__declspec(dllexport)  int32_t ControlZStageMoveto(double Z);


	__declspec(dllexport)  int32_t getXYStagePosition(double *_X, double *_Y);
	__declspec(dllexport)  int32_t getZStagePosition(double *_Z);

	__declspec(dllexport)  int32_t closedev();

	//__declspec(dllexport)  int init_dev(void);
	//__declspec(dllexport)  int ControlXYStageMoveto(double X, double Y);
	//__declspec(dllexport)  int ControlZStageMoveto(double Z);
	//__declspec(dllexport)  int getXYStagePosition(double &X, double &Y);
	//__declspec(dllexport)  int getZStagePosition(double &Z);
}