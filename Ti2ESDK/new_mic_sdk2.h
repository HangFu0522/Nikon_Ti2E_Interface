/**
 * @file	new_mic_sdk2.h
 * @brief	Copyright(c) 2016	Nikon Corporation - All rights reserved.
 * @author	Nikon
 * @note	
 */
// -----------------------------------------------------------------------------
// VERSION 1.0
//
// -----------------------------------------------------------------------------

#ifndef  __NEW_MIC_SDK2_H_INCLUDED__
#define  __NEW_MIC_SDK2_H_INCLUDED__

#include <memory.h>
#define DLLEXPORT __declspec(dllexport)
#define DLLIMPORT __declspec(dllimport)

#ifdef __cplusplus
#  define EXTERN extern "C"
#else
#  define EXTERN extern
#endif

#ifdef MICROSCOPEDRIVER_EXPORTS
#  define MIC_SDK_API EXTERN DLLEXPORT
#else
#  define MIC_SDK_API EXTERN DLLIMPORT
#endif


// -----------------------------------------------------------------------------
#ifndef LX_OK
   #define LX_OK				 0
#endif
#ifndef LX_ERR_UNEXPECTED
   #define LX_ERR_UNEXPECTED	 -1
#endif
#ifndef LX_ERR_NOTIMPL
   #define LX_ERR_NOTIMPL		 -2
#endif
#ifndef LX_ERR_OUTOFMEMORY
   #define LX_ERR_OUTOFMEMORY	 -3
#endif
#ifndef LX_ERR_INVALIDARG
   #define LX_ERR_INVALIDARG	 -4
#endif
#ifndef LX_ERR_NOINTERFACE
   #define LX_ERR_NOINTERFACE	 -5
#endif
#ifndef LX_ERR_POINTER
   #define LX_ERR_POINTER		 -6
#endif
#ifndef LX_ERR_HANDLE
   #define LX_ERR_HANDLE		 -7
#endif
#ifndef LX_ERR_ABORT
   #define LX_ERR_ABORT 		 -8
#endif
#ifndef LX_ERR_FAIL
   #define LX_ERR_FAIL			 -9
#endif
#ifndef LX_ERR_ACCESSDENIED
   #define LX_ERR_ACCESSDENIED	 -10
#endif

// ------------------------------------------
typedef char			   lx_char8;
typedef unsigned char	   lx_uchar8;

#if !defined(VC2008)
typedef unsigned short	   lx_wchar;
#else
typedef wchar_t 		   lx_wchar;
#endif

typedef int 			   lx_int32;
typedef unsigned int	   lx_uint32;
typedef __int32 		   lx_result;
typedef __int64 		   lx_int64;
typedef unsigned __int64   lx_uint64;

#if defined (WIN64) || defined (_WIN64) || defined (__WIN64)
	typedef __int64 		 lx_int3264;
	typedef unsigned __int64 lx_uint3264;
	typedef size_t			 lx_size;
#else
	typedef int 			 lx_int3264;
	typedef unsigned int	 lx_uint3264;
	typedef size_t			 lx_size;
#endif

// -----------------------------------------------------------------------------
//
// data = X, Y, Z positions, obj.position, ...
//
// -----------------------------------------------------------------------------
#define MIC_DATA_MASK_FULL								0xffffffffffffffff
#define MIC_DATA_MASK_ZPOSITION 						0x0000000000000001
#define MIC_DATA_MASK_XPOSITION 						0x0000000000000002
#define MIC_DATA_MASK_YPOSITION 						0x0000000000000004
#define MIC_DATA_MASK_NOSEPIECE 						0x0000000000000008
#define MIC_DATA_MASK_TURRET1POS						0x0000000000000010
#define MIC_DATA_MASK_TURRET1SHUTTER					0x0000000000000020
#define MIC_DATA_MASK_TURRET2POS						0x0000000000000040
#define MIC_DATA_MASK_TURRET2SHUTTER					0x0000000000000080
#define MIC_DATA_MASK_CONDENSER 						0x0000000000000100
#define MIC_DATA_MASK_LIGHTPATH 						0x0000000000000200
#define MIC_DATA_MASK_SHUTTER_EPI						0x0000000000000400
#define MIC_DATA_MASK_SHUTTER_DIA						0x0000000000000800
#define MIC_DATA_MASK_SHUTTER_AUX						0x0000000000001000
#define MIC_DATA_MASK_INTENSILIGHT_POS					0x0000000000002000
#define MIC_DATA_MASK_INTENSILIGHT_SHUTTER				0x0000000000004000
#define MIC_DATA_MASK_INTENSILIGHT_SWITCH				0x0000000000008000	// [ read-only]
#define MIC_DATA_MASK_PFS_SWITCH						0x0000000000010000
#define MIC_DATA_MASK_PFS_OFFSET						0x0000000000020000
#define MIC_DATA_MASK_PFS_STATUS						0x0000000000040000	// [ read-only ]
#define MIC_DATA_MASK_PFS_DM							0x0000000000080000
#define MIC_DATA_MASK_OPT_ZOOM							0x0000000000200000
#define MIC_DATA_MASK_ZESCAPE							0x0000000000400000
#define MIC_DATA_MASK_FILTERWHEEL_BARRIER1				0x0000000001000000
#define MIC_DATA_MASK_FILTERWHEEL_BARRIER2				0x0000000002000000
#define MIC_DATA_MASK_DIALAMP_SWITCH 					0x0000000004000000
#define MIC_DATA_MASK_DIALAMP_POS						0x0000000008000000
#define MIC_DATA_MASK_EYEPIECE_TUBEBASE_CAMPORT			0x0000000010000000	// [ read-only ]
#define MIC_DATA_MASK_EYEPIECE_TUBEBASE_TURRET			0x0000000020000000
#define MIC_DATA_MASK_CORRECTION_COLLAR 				0x0000000040000000
#define MIC_DATA_MASK_LAPP_MAIN_BRANCH1					0x0000000080000000
#define MIC_DATA_MASK_LAPP_MAIN_BRANCH2					0x0000000100000000
#define MIC_DATA_MASK_LAPP_SUB_BRANCH					0x0000000200000000
#define MIC_DATA_MASK_DIC_PRISM							0x0000000400000000	// [ read-only ]
#define MIC_DATA_MASK_DIC_POLARIZER						0x0000000800000000	// [ read-only ]
#define MIC_DATA_MASK_ANALYZER_SLOT						0x0000001000000000	// [ read-only ]
#define MIC_DATA_MASK_ANALYZER_POS						0x0000002000000000
#define MIC_DATA_MASK_EPILED_UNIT						0x0000004000000000
#define MIC_DATA_MASK_EPILED_POS						0x0000008000000000
#define MIC_DATA_MASK_EPILED_SWITCH						0x0000010000000000
#define MIC_DATA_MASK_BERTRAND_LENS 					0x0000020000000000	// [ read-only ]
#define MIC_DATA_MASK_CAMERA 							0x0001000000000000
#define MIC_DATA_MASK_ZRESET	 						0x0002000000000000	// [ read-only ]
#define MIC_DATA_MASK_XRESET	 						0x0004000000000000	// [ read-only ]
#define MIC_DATA_MASK_YRESET	 						0x0008000000000000	// [ read-only ]
#define MIC_DATA_MASK_ZLIMIT							0x0010000000000000	// [ read-only ]
#define MIC_DATA_MASK_XLIMIT							0x0020000000000000	// [ read-only ]
#define MIC_DATA_MASK_YLIMIT							0x0040000000000000	// [ read-only ]
#define MIC_DATA_MASK_CORRECTION_COLLAR_LIMIT			0x0080000000000000	// [ read-only ]
#define MIC_DATA_MASK_PWSS_SWITCH						0x0100000000000000
#define MIC_DATA_MASK_PWSA_SWITCH						0x0400000000000000


// -----------------------------------------------------------------------------
//
// metadata = objective assignement, filter assignment, ...
//
// -----------------------------------------------------------------------------
#define MIC_METADATA_MASK_FULL						0xffffffffffffffff	//
#define MIC_METADATA_MASK_NosepieceObjective		0x0000000000000001
#define MIC_METADATA_MASK_Turret1Filter				0x0000000000000002
#define MIC_METADATA_MASK_Turret2Filter				0x0000000000000004
#define MIC_METADATA_MASK_Condenser					0x0000000000000008
#define MIC_METADATA_MASK_PFS						0x0000000000000010
#define MIC_METADATA_MASK_Bar1FilterWheel			0x0000000000000020
#define MIC_METADATA_MASK_Bar2FilterWheel			0x0000000000000040
#define MIC_METADATA_MASK_LightPath_Prism			0x0000000000000080
#define MIC_METADATA_MASK_Eyepiece_TubeBase			0x0000000000000100
#define MIC_METADATA_MASK_Lapp_MainBranch1			0x0000000000000200
#define MIC_METADATA_MASK_Lapp_MainBranch2			0x0000000000000400
#define MIC_METADATA_MASK_DIC_Prism					0x0000000000000800
#define MIC_METADATA_MASK_OPT_Zoom					0x0000000000001000
#define MIC_METADATA_MASK_DSC						0x0000000000002000
#define MIC_METADATA_MASK_EPI_LED					0x0000000000004000
#define MIC_METADATA_MASK_MICEquipment				0x0000000000100000
#define MIC_METADATA_MASK_XYStage_XRangeLog			0x0000000010000000
#define MIC_METADATA_MASK_XYStage_YRangeLog			0x0000000020000000
#define MIC_METADATA_MASK_ZDrive_RangeLog			0x0000000040000000
#define MIC_METADATA_MASK_Range_Physical			0x0000000080000000


// -----------------------------------------------------------------------------
//
// returned by MIC_Open()
//
// -----------------------------------------------------------------------------
#define MIC_ACCESSORY_MASK_FULL							0xffffffffffffffff	//
#define MIC_ACCESSORY_MASK_ZSTAGE				 		0x0000000000000001
#define MIC_ACCESSORY_MASK_XYSTAGE			 			0x0000000000000002
#define MIC_ACCESSORY_MASK_NOSEPIECE					0x0000000000000004
#define MIC_ACCESSORY_MASK_CONDENSER					0x0000000000000008
#define MIC_ACCESSORY_MASK_TURRET1						0x0000000000000010
#define MIC_ACCESSORY_MASK_TURRET1SHUTTER				0x0000000000000020
#define MIC_ACCESSORY_MASK_TURRET2						0x0000000000000040
#define MIC_ACCESSORY_MASK_TURRET2SHUTTER				0x0000000000000080
#define MIC_ACCESSORY_MASK_LIGHTPATH					0x0000000000000100
#define MIC_ACCESSORY_MASK_PFS							0x0000000000000200
#define MIC_ACCESSORY_MASK_SHUTTER_EPI					0x0000000000000400
#define MIC_ACCESSORY_MASK_SHUTTER_DIA					0x0000000000000800
#define MIC_ACCESSORY_MASK_SHUTTER_AUX					0x0000000000001000
#define MIC_ACCESSORY_MASK_INTENSILIGHT 				0x0000000000008000
#define MIC_ACCESSORY_MASK_OPTZOOM						0x0000000000010000
#define MIC_ACCESSORY_MASK_JOY							0x0000000000020000
#define MIC_ACCESSORY_MASK_MAIN 						0x0000000000040000
#define MIC_ACCESSORY_MASK_FILTERWHEEL_BARRIER1 		0x0000000000080000
#define MIC_ACCESSORY_MASK_FILTERWHEEL_BARRIER2 		0x0000000000100000
#define MIC_ACCESSORY_MASK_DIA_LAMP						0x0000000000200000
#define MIC_ACCESSORY_MASK_EYEPIECE_CAMERAPORT 			0x0000000000400000
#define MIC_ACCESSORY_MASK_EYEPIECE_TUBEBASE 			0x0000000000800000
#define MIC_ACCESSORY_MASK_CORRECTION_COLLAR			0x0000000001000000
#define MIC_ACCESSORY_MASK_LAPP_MAIN_BRANCH1			0x0000000002000000
#define MIC_ACCESSORY_MASK_LAPP_MAIN_BRANCH2			0x0000000004000000
#define MIC_ACCESSORY_MASK_LAPP_SUB_BRANCH 				0x0000000008000000
#define MIC_ACCESSORY_MASK_DIC_PRISM					0x0000000010000000
#define MIC_ACCESSORY_MASK_DIC_POLARIZER				0x0000000020000000
#define MIC_ACCESSORY_MASK_ANALYZER_SLOT				0x0000000040000000
#define MIC_ACCESSORY_MASK_EPI_LED						0x0000000080000000
#define MIC_ACCESSORY_MASK_EXTENSION_BOX				0x0000000100000000
#define MIC_ACCESSORY_MASK_BERTRAND_LENS				0x0000000200000000
#define MIC_ACCESSORY_MASK_ASSIST_CAMERA				0x0000000800000000
#define MIC_ACCESSORY_MASK_PWSS							0x0000001000000000
#define MIC_ACCESSORY_MASK_PWSA							0x0000002000000000

// -----------------------------------------------------------------------------
enum EMicObjective_PFS
{
	eObjective_PFS_UnKnown			= 0,
	eObjective_PFS_Disable			= 1,
	eObjective_PFS_Enable			= 2,
};

enum EMicObjective_ObservationMask
{
	eObjective_ObservationMask_BF	= 0x0001,
	eObjective_ObservationMask_FL	= 0x0002,
	eObjective_ObservationMask_PH	= 0x0004,
	eObjective_ObservationMask_DIC	= 0x0008,
	eObjective_ObservationMask_NAMC	= 0x0010,
	eObjective_ObservationMask_IMSI	= 0x0020,
	eObjective_ObservationMask_TIRF	= 0x0040,
	eObjective_ObservationMask_EXPH	= 0x0080,
	eObjective_ObservationMask_DF	= 0x0100,
};

enum EMicObjective_DFModule
{
	eObjective_DFModule_None		= 0,
	eObjective_DFModule_Dry			= 1,
	eObjective_DFModule_Oil			= 2,
	eObjective_DFModule_DryOil		= 3,
};

struct MIC_Objective
{
	lx_wchar	wszOrderNumber[8];						//
	double		dMagnification;							//
	double		dNumericalAperture;						//
	lx_int32	iIsPFSEnabled;							// 1:Disable 2:Enable
	lx_wchar	wszObjectiveModel[14];					//
	lx_wchar	wszWorkingDistance[4];					//
	lx_wchar	wszUsage[4];							//
	lx_wchar	wszObjectiveType[4];					//
	lx_wchar	wszWDType[5];							// Reserve
	lx_int32    iPWS;									//

	lx_int32	iCorrectionCollar;						// 0:None, 1:Manual,  2:Auto
	lx_int32	iObservationMask;						// see EMicObjective_ObservationMask
	lx_wchar	wszPH_Module[7];						//
	lx_wchar	wszExPH_Module[4];						//
	lx_wchar	wszDIC_Module[2];						//
	lx_wchar	wszDIC_Slider[8];						//
	lx_wchar	wszDIC_ModuleHR[2];						//
	lx_wchar	wszDIC_SliderHR[10];					//
	lx_int32	iDF_Module;								// see EMicObjective_DFModule
	lx_wchar	wszNAMC_Module[3];						//
};


// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
struct MIC_OpticsParts
{
	lx_wchar wsLongName[30];
	lx_wchar wsShortName[10];
};


// -----------------------------------------------------------------------------
// MIC_EQUIPMENT_MASK
// -----------------------------------------------------------------------------
#define MIC_EQUIPMENT_MASK_FULL							0xffffffffffffffff
#define MIC_EQUIPMENT_MASK_Nosepiece					0x0000000000000001
#define MIC_EQUIPMENT_MASK_Condenser					0x0000000000000002
#define MIC_EQUIPMENT_MASK_CondenserLens				0x0000000000000004
#define MIC_EQUIPMENT_MASK_Turret1						0x0000000000000008
#define MIC_EQUIPMENT_MASK_Turret1Shutter				0x0000000000000010
#define MIC_EQUIPMENT_MASK_Turret2						0x0000000000000020
#define MIC_EQUIPMENT_MASK_Turret2Shutter				0x0000000000000040
#define MIC_EQUIPMENT_MASK_LappMainBranch1				0x0000000000001000
#define MIC_EQUIPMENT_MASK_LappMainBranch2				0x0000000000002000
#define MIC_EQUIPMENT_MASK_LappSubBranch				0x0000000000004000
#define MIC_EQUIPMENT_MASK_Lapp1Branch1					0x0000000000008000
#define MIC_EQUIPMENT_MASK_Lapp1Branch2					0x0000000000010000
#define MIC_EQUIPMENT_MASK_Lapp1Module1					0x0000000000020000
#define MIC_EQUIPMENT_MASK_Lapp1Module2					0x0000000000040000
#define MIC_EQUIPMENT_MASK_Lapp1Module3					0x0000000000080000
#define MIC_EQUIPMENT_MASK_Lapp1Module1Illumination		0x0000000000100000
#define MIC_EQUIPMENT_MASK_Lapp1Module2Illumination		0x0000000000200000
#define MIC_EQUIPMENT_MASK_Lapp1Module3Illumination		0x0000000000400000
#define MIC_EQUIPMENT_MASK_Lapp1FieldStop				0x0000000000800000
#define MIC_EQUIPMENT_MASK_Lapp2Branch1					0x0000000001000000
#define MIC_EQUIPMENT_MASK_Lapp2Branch2					0x0000000002000000
#define MIC_EQUIPMENT_MASK_Lapp2Module1					0x0000000004000000
#define MIC_EQUIPMENT_MASK_Lapp2Module2					0x0000000008000000
#define MIC_EQUIPMENT_MASK_Lapp2Module3					0x0000000010000000
#define MIC_EQUIPMENT_MASK_Lapp2Module1Illumination		0x0000000020000000
#define MIC_EQUIPMENT_MASK_Lapp2Module2Illumination		0x0000000040000000
#define MIC_EQUIPMENT_MASK_Lapp2Module3Illumination		0x0000000080000000
#define MIC_EQUIPMENT_MASK_Lapp2FieldStop				0x0000000100000000
#define MIC_EQUIPMENT_MASK_DiaIllumination				0x0000001000000000
#define MIC_EQUIPMENT_MASK_LightShield					0x0000002000000000
#define MIC_EQUIPMENT_MASK_Polarizer					0x0000004000000000
#define MIC_EQUIPMENT_MASK_Stage						0x0000008000000000
#define MIC_EQUIPMENT_MASK_BA1							0x0000010000000000
#define MIC_EQUIPMENT_MASK_BA2							0x0000020000000000
#define MIC_EQUIPMENT_MASK_EyepieceCameraPort			0x0000040000000000
#define MIC_EQUIPMENT_MASK_Eyepiece						0x0000080000000000
#define MIC_EQUIPMENT_MASK_EyepieceTubebase				0x0000100000000000
#define MIC_EQUIPMENT_MASK_AnalyzerSlot					0x0000200000000000
#define MIC_EQUIPMENT_MASK_Unit1						0x0001000000000000
#define MIC_EQUIPMENT_MASK_Unit2						0x0002000000000000
#define MIC_EQUIPMENT_MASK_Unit3						0x0004000000000000

// -----------------------------------------------------------------------------
// MIC_OBJECTIVE
// -----------------------------------------------------------------------------
#define MIC_OBJECTIVE_OBSERVATION_MASK_BF				0x0001
#define MIC_OBJECTIVE_OBSERVATION_MASK_FL				0x0002
#define MIC_OBJECTIVE_OBSERVATION_MASK_PH				0x0004
#define MIC_OBJECTIVE_OBSERVATION_MASK_DIC				0x0008
#define MIC_OBJECTIVE_OBSERVATION_MASK_NAMC				0x0010
#define MIC_OBJECTIVE_OBSERVATION_MASK_IMSI				0x0020
#define MIC_OBJECTIVE_OBSERVATION_MASK_TIRF				0x0040
#define MIC_OBJECTIVE_OBSERVATION_MASK_EXPH				0x0080
#define MIC_OBJECTIVE_OBSERVATION_MASK_DF				0x0100

#define MIC_OBJECTIVE_DF_MODULE_NONE					0x00
#define MIC_OBJECTIVE_DF_MODULE_DRY						0x01
#define MIC_OBJECTIVE_DF_MODULE_OIL						0x02
#define MIC_OBJECTIVE_DF_MODULE_DRY_OIL					0x03


struct MIC_Equipment
{
	lx_wchar wszOrderNumber[8];
	lx_wchar wszReserve[1];
};

struct MIC_EquipmentControl
{
	MIC_EquipmentControl()
	{
		memset(this, 0,  sizeof(MIC_EquipmentControl));
	}
	// ----------- members:
	lx_uint64		uiEquipmentUsageMask;	// see MIC_EQUIPMENT_MASK_...

	lx_int32 iNosepieceControl;				// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
	lx_int32 iCondenserControl;				// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual

	lx_int32 iTurret1Control;				// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
	lx_int32 iTurret1ShutterControl;		// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
	lx_int32 iTurret2Control;				// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
	lx_int32 iTurret2ShutterControl;		// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual

	lx_int32 iAnalyzerSlotControl;			// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual

	lx_int32 iLappMainBranch1Control;		// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
	lx_int32 iLappMainBranch2Control;		// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
	lx_int32 iLappSubBranchControl;			// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual

	lx_int32 iPolarizerControl;				// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
	lx_int32 iStageControl;					// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual

	lx_int32 iEyepieceCameraPortControl;	// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual

	lx_int32 iUnit1Control;					// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
	lx_int32 iUnit2Control;					// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
	lx_int32 iUnit3Control;					// -1:UnMounted, 0:Intelligent , 1:Motorized , 2:Manual
};

struct MIC_Equipments
{
	MIC_Equipments()
	{
		memset(this, 0,  sizeof(MIC_Equipments));
	}

	// ----------- members:
	lx_uint64		uiEquipmentUsageMask;	// see MIC_EQUIPMENT_MASK_...

	MIC_Equipment	sNosepiece;
	MIC_Equipment	sCondenser;
	MIC_Equipment	sCondenserLens;

	MIC_Equipment	sTurret1;
	MIC_Equipment	sTurret2;

	MIC_Equipment	sLapp1Branch1;
	MIC_Equipment	sLapp1Branch2;
	MIC_Equipment	sLapp1Module1;
	MIC_Equipment	sLapp1Module2;
	MIC_Equipment	sLapp1Module3;
	MIC_Equipment	sLapp1Module1Illumination;
	MIC_Equipment	sLapp1Module2Illumination;
	MIC_Equipment	sLapp1Module3Illumination;
	MIC_Equipment	sLapp1FieldStop;

	MIC_Equipment	sLapp2Branch1;
	MIC_Equipment	sLapp2Branch2;
	MIC_Equipment	sLapp2Module1;
	MIC_Equipment	sLapp2Module2;
	MIC_Equipment	sLapp2Module3;
	MIC_Equipment	sLapp2Module1Illumination;
	MIC_Equipment	sLapp2Module2Illumination;
	MIC_Equipment	sLapp2Module3Illumination;
	MIC_Equipment	sLapp2FieldStop;

	MIC_Equipment	sDiaIllumination;
	MIC_Equipment	sLightShield;

	MIC_Equipment	sPolarizer;
	MIC_Equipment	sStage;

	MIC_Equipment	sBA1;
	MIC_Equipment	sBA2;

	MIC_Equipment	sEyepiece;
	MIC_Equipment	sEyepieceTubebase;
	MIC_Equipment	sAnalyzerSlot;

	MIC_Equipment	sUnit1;
	MIC_Equipment	sUnit2;
	MIC_Equipment	sUnit3;
};

// -----------------------------------------------------------------------------
struct MIC_MetaData
{
   // ----------- methods:
   // constructor is needed to initialize the structure
   MIC_MetaData()
   {
		memset(this, 0,  sizeof(MIC_MetaData));
   }

   // ----------- members:
   lx_uint64		uiMetaDataUsageMask;						// see MIC_METADATA_MASK_...

	MIC_Objective	sNosepieceObjective[8];						//
	MIC_OpticsParts	sCondenser[8];								//
	MIC_OpticsParts	sTurret1Filter[8];							//
	MIC_OpticsParts	sTurret2Filter[8];							//
	MIC_OpticsParts	sBar1FilterWheel[8];						//
	MIC_OpticsParts	sBar2FilterWheel[8];						//
	MIC_OpticsParts sLightPath_Prism[8];						//
	MIC_OpticsParts sExternalPH_Ring[8];						//
	MIC_OpticsParts	sLapp_MainBranch1[8];						//
	MIC_OpticsParts	sLapp_MainBranch2[8];						//
	MIC_OpticsParts	sDIC_Prism[8];								//
	MIC_OpticsParts	sOPT_Zoom[8];								//
	MIC_OpticsParts	sDSC[8];									//
	lx_int32		nEPI_LEDWavelength[4];						//

	// physical ranges
	lx_int32	iXYStage_XRangePhys[2];							// ReadOnly
	lx_int32	iXYStage_YRangePhys[2];							// ReadOnly
	lx_int32	iZDrive_RangePhys[2];							// ReadOnly
	lx_int32	iNosepiece_RangePhys[2];						// ReadOnly
	lx_int32	iCondenser_RangePhys[2];						// ReadOnly
	lx_int32	iDICPrism_RangePhys[2];							// ReadOnly
	lx_int32	iDICPolarizer_RangePhys[2];						// ReadOnly
	lx_int32	iTurret1_RangePhys[2];							// ReadOnly
	lx_int32	iTurret1Shutter_RangePhys[2];					// ReadOnly
	lx_int32	iTurret2_RangePhys[2];							// ReadOnly
	lx_int32	iTurret2Shutter_RangePhys[2];					// ReadOnly
	lx_int32	iBar1_RangePhys[2];								// ReadOnly
	lx_int32	iBar2_RangePhys[2];								// ReadOnly
	lx_int32	iLightpath_RangePhys[2];						// ReadOnly
	lx_int32	iPfsSwitch_RangePhys[2];						// ReadOnly
	lx_int32	iPfsOffset_RangePhys[2];						// ReadOnly
	lx_int32	iPfsDM_RangePhys[2];							// ReadOnly
	lx_int32	iShutterEpi_RangePhys[2];						// ReadOnly
	lx_int32	iShutterDia_RangePhys[2];						// ReadOnly
	lx_int32	iShutterAux_RangePhys[2];						// ReadOnly
	lx_int32	iDiaLampSwitch_RangePhys[2];					// ReadOnly
	lx_int32	iDiaLampPos_RangePhys[2];						// ReadOnly
	lx_int32	iIntensilightShutter_RangePhys[2];				// ReadOnly
	lx_int32	iIntensilightPosition_RangePhys[2];				// ReadOnly
	lx_int32	iIntensilightSwitch_RangePhys[2];				// ReadOnly
	lx_int32	iEpiLEDUnit_RangePhys[2];						// ReadOnly
	lx_int32	iEpiLEDSwitch_RangePhys[2];						// ReadOnly
	lx_int32	iEpiLEDPos_RangePhys[2];						// ReadOnly
	lx_int32	iEyepiece_TubeBasePort_RangePhys[2];			// ReadOnly
	lx_int32	iEyepiece_TubeBaseTurret_RangePhys[2];			// ReadOnly
	lx_int32	iLappMainBranch1_RangePhys[2];					// ReadOnly
	lx_int32	iLappMainBranch2_RangePhys[2];					// ReadOnly
	lx_int32	iLappSubBranch_RangePhys[2];					// ReadOnly
	lx_int32	iCorrectionCollar_RangePhys[2];					// ReadOnly
	lx_int32	iOptZoom_RangePhys[2];							// ReadOnly
	lx_int32	iAnalyzerSlot_RangePhys[2];						// ReadOnly
	lx_int32	iAnalyzerPos_RangePhys[2];						// ReadOnly
	
	lx_int32	iPWSS_Switch_RangePhys[2];						// ReadOnly
	lx_int32	iPWSA_Switch_RangePhys[2];						// ReadOnly

	// logical ranges											// subset of the phys.range[0:Lower,1:Upper]
	lx_int32	iXYStage_XRangeLog[2];							// [0:-570000~-10000(-57.0mm~-1mm)], [1:+10000~+570000(+1mm~+57.0mm)]
	lx_int32	iXYStage_YRangeLog[2];							// [0:-375000~-10000(-37.5mm~-1mm)], [1:+10000~+375000(+1mm~+37.5mm)]
	lx_int32	iZDrive_RangeLog[2];							// [0:-------]                     , [1:+100000~+1000000(+1mm~+10mm)]

	// Equipment
	MIC_EquipmentControl	sEquipmentControl;	
	MIC_Equipments			sEquipmentOrder;
};



// -----------------------------------------------------------------------------
//
//
// -----------------------------------------------------------------------------
struct MIC_Data
{
	// constructor is needed to initialize the structure
	MIC_Data()
	{
		memset(this, 0,  sizeof(MIC_Data));
		// Tolerance and Speed: use the previous value
		iXPOSITIONTolerance = -1;
		iYPOSITIONTolerance = -1;
		iZPOSITIONTolerance = -1;
		iZPOSITIONSpeed = -1;
		iXPOSITIONSpeed = -1;
		iYPOSITIONSpeed = -1;
	}

	// ----------- members:
	lx_uint64   uiDataUsageMask;					// see MIC_DATA_MASK_...
	lx_uint64	uiMicOperationCounter;				// 0:Immidiately, 1...n, Mic receive 1...n times of Trigger
	lx_uint64	uiIOforTrigger;						// [ 0-7:Control_box, 8-23: External_IO ]

	lx_int32	iZPOSITION;							// [ 0 ~ 1,000,000 ]  Z position -> one value, metadata described meaning
													//   (obj.z drive = negative close to sample, stage z drive = positive close to sample)
	lx_int32	iZPOSITIONSpeed;					// [ 1 ~ 19 ]	1:2.50mm/sec,   2:2.25mm/sec	3:2.00mm/sec,   4:1.70mm/sec
													//				5:1.50mm/sec,   6:1.25mm/sec	7:1.00mm/sec,   8:0.75mm/sec
													//				9:0.50mm/sec
													//				10~19: Custom --> See 'TI2_DEDICATED_SET_Z_CUSTOM_SPEED'
	lx_int32	iZPOSITIONTolerance;				// [ 0 ~  9 ]   accuracy 0: 0.000um,  1: 0.020um,  2: 0.040um,  3: 0.060um
													//						 4: 0.080um,  5: 0.100um,  6: 0.120um,  7: 0.140um
													//						 8: 0.160um,  9: Open
	lx_int32	iXPOSITION;							// [ -570,000 ~ 570,000 ]
	lx_int32	iXPOSITIONSpeed;					// [ 1 ~ 19 ]	1:25.00mm/sec,  2:22.00mm/sec	3:17.00mm/sec,  4:12.00mm/sec
													//				5: 5.00mm/sec,  6: 2.50mm/sec	7: 1.00mm/sec,  8: 0.50mm/sec
													//				9: 0.25mm/sec
													//				10~19: Custom --> See 'TI2_DEDICATED_SET_X_CUSTOM_SPEED'
	lx_int32	iXPOSITIONTolerance;				// [ 0 ~  9 ]   accuracy 0: 0.00um,  1: 0.10um,  2: 0.20um,  3: 0.30um
													//						 4: 0.40um,  5: 0.50um,  6: 0.60um,  7: 0.70um
													//						 8: 0.80um,  9:Open
	lx_int32	iYPOSITION;							// [ -375,000 ~ 375,000 ]
	lx_int32	iYPOSITIONSpeed;					// [ 1 ~ 19 ]	1:25.00mm/sec,  2:22.00mm/sec	3:17.00mm/sec,  4:12.00mm/sec
													//				5: 5.00mm/sec,  6: 2.50mm/sec	7: 1.00mm/sec,  8: 0.50mm/sec
													//				9: 0.25mm/sec
													//				10~19: Custom --> See 'TI2_DEDICATED_SET_Y_CUSTOM_SPEED'
	lx_int32	iYPOSITIONTolerance;				// [ 0 ~  9 ]   accuracy 0: 0.00um,  1: 0.10um,  2: 0.20um,  3: 0.30um
													//						 4: 0.40um,  5: 0.50um,  6: 0.60um,  7: 0.70um
													//						 8: 0.80um,  9:Open
	lx_int32	iNOSEPIECE;							// [ 1 ~ 6 ]
	lx_int32	iTURRET1POS;						// [ 1 ~ 6 ]
	lx_int32    iTURRET1SHUTTER;					// [ 0:Close  1:Open ]
	lx_int32    iTURRET2POS;						// [ 1 ~ 6 ]
	lx_int32    iTURRET2SHUTTER;					// [ 0:Close  1:Open ]
	lx_int32	iCONDENSER;							// [ 1 ~ 7 ]

	lx_int32	iFILTERWHEEL_BARRIER1;				// [ 1 ~ 7 ]
	lx_int32	iFILTERWHEEL_BARRIER2;				// [ 1 ~ 7 ]

	lx_int32	iLIGHTPATH;							// 1:E100、2:R100、3:B100/L80/AUX、4:L100

	lx_int32	iSHUTTER_EPI;						// [ 0:Close  1:Open ]
	lx_int32	iSHUTTER_DIA;						// [ 0:Close  1:Open ]
	lx_int32	iSHUTTER_AUX;						// [ 0:Close  1:Open ]

	lx_int32	iDIA_LAMP_Switch;					// [ 0:Off  1:On ]
	lx_int32	iDIA_LAMP_Pos;						// [ 0 ~ 2100    ]

	lx_int32    iINTENSILIGHT_POS;					// [ 1:ND1, 2:ND2, 3:ND4, 4:ND8, 5:ND16, 6:ND32 ]
	lx_int32    iINTENSILIGHT_SHUTTER;				// [ 0:Close  1:Open ]
	lx_int32    iINTENSILIGHT_SWITCH;				// [ 0:Off, 1:On     ]

	lx_int32	iEPI_LEDPos[4];						// [ 1:10%, 2:20%, 3:40%, 4:60%, 5:80%, 6:100% ]
	lx_int32	iEPI_LEDUnit;						// [ 1~4 ]
	lx_int32	iEPI_LEDSwitch[4];					// [ 0:Close  1:Open ]

	lx_int32	iPFS_SWITCH;						// [ 0:Off  1:On ]
	lx_int32	iPFS_OFFSET;						// [ -1:Default , 0 ~ 40,000 ]
	lx_int32	iPFS_DM;							// [ 1:OUT, 2:IN ]
	lx_int32    iPFS_STATUS;						// read only, when changed see eEventType_PFSStatusChanged
													// Bit 0: PFS4_Run         [ 0:Normal, 1:PFS is running             ]
													// Bit 1: PFS4_JP          [ 0:Normal, 1:PFS is just a position     ]
													// Bit 2: PFS4_FB_OL       [ 0:Normal, 1:Feedback by PFS offset     ]
													// Bit 3: PFS4_FB_Z        [ 0:Normal, 1:Feedback by ZDrive         ]
													// Bit 4: PFS4_Disable     [ 0:Normal, 1:PFS is Disable             ]
													// Bit 5: PFS4_OBJ_ERR     [ 0:Normal, 1:PFS is objective error     ]
													// Bit 6: ---
													// Bit 7: ---
													// Bit 8: PFS4_STS_FCS_IN  [ 0:Out of focus, 1:On focus             ]
													// Bit 9: PFS4_STS_PFS_ON  [ 0:Pfs Off,      1:Pfs On               ]
													// Bit10: PFS4_STS_LED_ON  [ 0:IR LED Off,   1:IR LED On            ]
													// Bit11: PFS4_STS_DM_OUT  [ 0:Pfs DM In,    1:Pfs DM Out           ]
													// Bit12: PFS4_LED_OVER    [ 0:Normal,       1:Over                 ]
													// Bit13: PFS4_LED_UNDER   [ 0:Normal,       1:Under                ]
													// Bit14: ---		
													// Bit15: PFS4_ERR         [ 0:Normal,       1:Pfs is error         ]
	lx_int32	iEYEPIECE_TUBEBASECamPort;			// --		
	lx_int32	iEYEPIECE_TUBEBASETurret;			// [ 1 ~ 4 ]

	lx_int32	iLAPP_MAINBranch1;					// [ 1:OUT, 2:IN ]
	lx_int32	iLAPP_MAINBranch2;					// [ 1:OUT, 2:IN ]
	lx_int32	iLAPP_SUBBranch;					// [ 1:OUT, 2:IN ]

	lx_int32	iCORRECTION_COLLAR;					// Apo60x：[ -6,280 ~ 6,280 ]    TiRF100x：[ -4,960 ~ 13,280 ]

	lx_int32	iDIC_PRISM;							// [ 0:OUT, 1:IN ]
	lx_int32	iDIC_POLARIZER;						// [ 0:OUT, 1:IN ]
	lx_int32    iOPTZOOM;							// [ 1:1x,  2:1.5x ]

	lx_int32	iZEscape;							// [ 0:Normal(Refocus) , 1:Escape ]

	lx_int32	iANALYZER_SLOT;						// [ 0:OUT, 1:IN ]
	lx_int32	iANALYZER_POS;						// [ 0:OUT, 1:IN ]

	lx_int32	iBertrandLens;						// 0:OUT、1:IN
	lx_int32	iCamera;							// Power 0:OFF、1:ON

	lx_int32	iCORRECTION_COLLAR_Limit;			// Normal 0, Upper 1, Lower 2
	lx_int32	iZLimit;							// Normal 0, Upper 1, Lower 2
	lx_int32	iXLimit;							// Normal 0, Upper 1, Lower 2
	lx_int32	iYLimit;							// Normal 0, Upper 1, Lower 2
	lx_int32	iMirrorSwitch;						// TBD
	lx_int32	iZReset;							// read only
	lx_int32	iXReset;							// read only
	lx_int32	iYReset;							// read only

	lx_int32	iPWSS_Switch;						// 0:Stop	1:Start		2:Reverse
	lx_int32	iPWSS_Speed;						// 1~20

	lx_int32	iPWSA_Switch;						// 0:Stop	1:Start
	lx_int32	iPWSA_Speed;						// 1~75
};


// -----------------------------------------------------------------------------
//
// init/close
//
// -----------------------------------------------------------------------------
// Enumerates the list of devices that are connected(exclude simulator).
// uiDeviceCount - device count. all connected micusb device.
// ppiDeviceTypeList - device type
//	  1: TiE + Hub-A
//	  2: TiE + Hub-B
//	  3: TiE(B) + Hub-A
//	  4: TiE(B) + Hub-B
//	  5: TiE
//	  6: TiE(B)
//    7: Hub-A
//	  8: Hub-B
//   11: Ti2E
//   12: Ti2EB
//   13: Ti2A
//	101: Ni-E
//	102: Ni-CTLB
//	103: Ci-E
//	104: EX_SHT
//	201: SMZ
enum EMicDeviceType
{
	eDeviceType_UnKnown = -1,
	eDeviceType_TI2_E	= 11,
	eDeviceType_TI2_EB	= 12,
	eDeviceType_TI2_A	= 13,
	eDeviceType_TI2_U	= 14,
};

MIC_SDK_API lx_result MIC_GetDeviceList(lx_uint32& uiDeviceCount, lx_int32** ppiDeviceTypeList);

// iDeviceIndex - microscope device index (1..n:device index, Else:first valid device)
// uiConnectedAccessoryMask - filled with connected accesories
// pwszErrMsg - filled with human readable error description
MIC_SDK_API lx_result MIC_Open(const lx_int32 iDeviceIndex, lx_uint64& uiConnectedAccessoryMask,
							   const lx_uint32 uiErrMsgMaxSize, lx_wchar* pwszErrMsg);

// iDeviceType - simulator device type.
// Ref.MIC_GetDeviceList. 0:currently set simulator.
MIC_SDK_API lx_result MIC_SimulatorOpen(const lx_int32 iDeviceType, lx_uint64& uiConnectedAccessoryMask,
										const lx_uint32 uiErrMsgMaxSize, lx_wchar* pwszErrMsg);

// MIC_Open and MIC_SimulatorOpen in common usage
MIC_SDK_API lx_result MIC_Close();



// -----------------------------------------------------------------------------
//
// metadata get/set
//
// -----------------------------------------------------------------------------
MIC_SDK_API lx_result MIC_MetadataSet(const MIC_MetaData& sMetaData);
MIC_SDK_API lx_result MIC_MetadataGet(MIC_MetaData& sMetaData);


// -----------------------------------------------------------------------------
// data get/set
//
// - this function is SYNCHRONOUS - it returns when all the requests are finished
// - some data (like lamp volatge in rem.ctrl mode) are read only (set is ignored)
// - sDataIn   : device input params (e.g. request for XY pos [1500, 1300])
// - sDataOut  : device output params (e.g. actual XY pos after the request is processed, XY pos [1499, 1301])
// - bCallbackRequired : true if callback required, see eEventType_DataSet_PositionChanged
// -----------------------------------------------------------------------------
MIC_SDK_API lx_result MIC_DataSet(const MIC_Data& sDataIn, MIC_Data& sDataOut, bool bCallbackRequired);

// - this function can be called from any thread also during the MIC_DataSet() execution (e.g.during XY movement)
MIC_SDK_API lx_result MIC_DataGet(MIC_Data& sData);

// MIC_DataSetPrepare:
//  You can set "sDataIn" for the data which you want to send to the microscope.
//  SDK will send "sDataIn" to the microscope when SDK receives the trigger, "uiIOforTrigger" which you set.
// 
//  - this function is ASYNCHRONOUS - It returns without waiting for a response.
//                                    When SDK receives the trigger, "uiIOforTrigger", SDK sends "sDataIn" to the microscope.
//                                    When the microscope completes the action which is described in "sDataIn", 
//									  SDK notifies "eEventType_DataSetReady" as its callback.
//                                    you can set up to 9,999 data into "sDataIn".
// - sDataIn		: device input params.
// - uiIOforTrigger : Specify the type of trigger.(0-7:Control_box, 8-23: External_IO)
// - uiCounter	    : input trigger ounter.(0:Immidiately, 1...n, Mic receive 1...n times of Trigger)
MIC_SDK_API lx_result MIC_DataSetPrepare(const MIC_Data& sDataIn, lx_uint64 uiIOforTrigger, lx_uint64 uiCounter);


// -----------------------------------------------------------------------------
//
// -----------------------------------------------------------------------------
struct MIC_Command
{
   // constructor is needed to initialize the structure
   MIC_Command()
   {
		memset(this, 0,  sizeof(MIC_Command));
   }

   // commands supported:
   // see 'new_mic_sdk2_DedicatedCommand.h'
   lx_wchar wszCommandString[256];
   void*	pCommandData;
};

// -----------------------------------------------------------------------------
// For DedicatedProperty
// reserved for the future use/tests
MIC_SDK_API lx_result MIC_DedicatedCommand(const MIC_Command& sCommand, void* pUserOutParam);
// -----------------------------------------------------------------------------


// -----------------------------------------------------------------------------
//
// Callbacks / Events
//  - MIC_MetaDataCallback
//  - MIC_GeneralCallback
//  - MIC_DedicatedCallback
//
// -----------------------------------------------------------------------------
// 'meta data event' is triggered from driver when rem.ctrl.is operated (or iControl) etc.
typedef void (*FMIC_MetaDataCallback)( MIC_MetaData& sMetaData );
MIC_SDK_API lx_result MIC_MetaDataCallbackSet(FMIC_MetaDataCallback fMIC_MetaDataCallback);


// callback for async microscope events
enum EMicGeneralCallbackEventType
{
	eEventType_DataSet_PositionChanged = 0,			// position changed as the result of MIC_DataSet function call
													// 'sDataChanged' member is filled
	eEventType_RemCtrl_PositionChanged = 1,			// 'data event' is triggered from driver when rem.ctrl.is operated (or iControl) etc.
													// 'sDataChanged' member is filled
	eEventType_XYStageLogicalLimitsReached	= 3,	// TODO : possible, but neccessary? and split X limit and Y limit?
	eEventType_ZDriveLogicalLimitsReached	= 4,	// TODO : possible, but neccessary? and split X limit and Y limit?
	eEventType_PFSStatusChanged			= 5,		// this event is triggered by MIC_DataSet() operation (e.g.PFS ON/OFF, obj.pos.change) or by manual user operation
													// 'sDataChanged' member is filled
	eEventType_HelpButtonClicked		= 6,		// Help button on rem.ctrl is clicked
	eEventType_JyoButtonChanged			= 10,		// 
	eEventType_DataSetReady				= 20,		// 
};

typedef void (*FMIC_GeneralCallback)(EMicGeneralCallbackEventType eEventType, const MIC_Data& sDataChanged);
MIC_SDK_API lx_result MIC_GeneralCallbackSet(FMIC_GeneralCallback fMIC_GeneralCallback);

// callback for dedicated microscope events
enum EMicDedicateCallbackEventType
{
	eDedicatedEventType_Shutter_Mount_PositionChanged	= 8,	// pUserOutParam: null
	eDedicatedEventType_AccessoryMask_Changed			= 10,	// pUserOutParam: lx_uint64[1]= { new AccessoryMask }
	eDedicatedEventType_Analyzer_Mount_PositionChanged	= 11,	// pUserOutParam: null
	eDedicatedEventType_FilterTurret_TopBottomChanged   = 14,	// pUserOutParam: lx_int32[2] = { FL1, FL2 }					FL1/FL2[ 1:Top, 2:Bottom ]
	eDedicatedEventType_IsAvailable					    = 15,	// pUserOutParam: lx_int32[1] = { 0:FALSE, 1:TRUE }					IsAvailable[ 0:FALSE / 1:TRUE ]
	eDedicatedEventType_LAPPMainBranch_TopBottomChanged = 20,	// pUserOutParam: lx_int32[3] = { MainBranch1, MainBranch2, SubBranchPos }
																							   // MainBranch1/MainBranch2[ 1:Top, 2:Bottom ] SubBranchPos[0:UnMounted,1:MainBranch1,2:MainBranch2]
	eDedicatedEventType_AF_IsRunning					= 21,	// pUserOutParam: lx_int32[1] = { 0:Disable, 1:Enable }
	eDedicatedEventType_KeepZDrive_Changed				= 22,	// pUserOutParam: lx_int32[1] = { 0:Idle/1:ActiveWait/2:retry/3:ZSetWait/4:Run }
	eDedicatedEventType_Ti2_IsBusy						= 25,	// pUserOutParam: lx_int32[1] = { 0:Normal 1:Busy }
	eDedicatedEventType_IOSignal						= 30,	// pUserOutParam: lx_int32[2] = { RisingEdge  0-7:Control_box, 8-23: External_IO,
																//								  FallingEdge 0-7:Control_box, 8-23: External_IO }	signalized trigger port
	eDedicatedEventType_Sensor_Changed					= 31,	// pUserOutParam: lx_int32[1] = { 0:Disable, 1:Enable }
	eDedicatedEventType_Programmable_Switch_Changed		= 32,	// pUserOutParam: null

	eDedicatedEventType_XStageLogicalLimitsEnabled		= 40,	// pUserOutParam: lx_int32[1] = { 0:Disable, 1:Enable }
	eDedicatedEventType_YStageLogicalLimitsEnabled		= 41,	// pUserOutParam: lx_int32[1] = { 0:Disable, 1:Enable }
	eDedicatedEventType_ZDriveLogicalLimitsEnabled		= 42,	// pUserOutParam: lx_int32[1] = { 0:Disable, 1:Enable }

	eDedicatedEventType_ObservationRevolverLinkage_Enable = 51,	// pUserOutParam: lx_int32[1] = { 0:Disable, 1:Enable }
	eDedicatedEventType_ObservationTurretShutter_Enable   = 52,	// pUserOutParam: lx_int32[1] = { 0:Disable, 1:Enable }

	eDedicatedEventType_FuncButtonClicked				= 90,	// pUserOutParam: lx_int32[1] = { Bit0:Ti2-FnL, Bit1:FnR, Bit2-7:Joy Func1-6 }
};

typedef void (*FMIC_DedicatedCallback)(lx_int32 iEventCode, void* pUserOutParam);
MIC_SDK_API lx_result MIC_DedicatedCallbackSet(FMIC_DedicatedCallback fMIC_DedicatedCallback);


// -----------------------------------------------------------------------------
MIC_SDK_API lx_result MIC_Convert_GetParams(const lx_uint64 uiDataUsageMask, // see MIC_DATA_MASK_...
										    double& dDev2PhysCoeff,const lx_uint32 uiUnitMaxSize, lx_wchar* pwszUnit);
//pulse to um etc, No check limitation
// example: MIC_Convert_Dev2Phys(MIC_DATA_MASK_ZPOSITION, iDevZposition, dPhysZpositionUM);
//Change arguments
MIC_SDK_API lx_result MIC_Convert_Dev2Phys(const lx_uint64 uiDataUsageMask, // see MIC_DATA_MASK_...
										   const lx_int32 iDevValue, double& dPhysValue);

//Change Pointer position &dPhysValue -> dPhysValue, iDevValue -> &iDevValue
MIC_SDK_API lx_result MIC_Convert_Phys2Dev(const lx_uint64 uiDataUsageMask, // see MIC_DATA_MASK_...
										   const double dPhysValue, lx_int32 &iDevValue);


#endif	 __NEW_MIC_SDK2_H_INCLUDED__
