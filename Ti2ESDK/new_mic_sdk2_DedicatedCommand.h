/**
 * @file	new_mic_sdk2_DedicatedCommand.h
 * @brief	Copyright(c) 2015	Nikon Corporation - All rights reserved.
 * @date	2015/09/02
 * @author	Nikon
 * @note	
 */

#ifndef  __NEW_MIC_SDK2_DEDICATEDCOMMAND_H_INCLUDED__
#define  __NEW_MIC_SDK2_DEDICATEDCOMMAND_H_INCLUDED__

// [InParam] lx_int32 Val1(hParent), Val2(0:Hide, 1:Show)		[OutParam] None
#define TI2_DEDICATED_SHOW_SIMULATION_WINDOW	L"SHOW_SIMULATION_WINDOW"
// [InParam] None		[OutParam] lx_int32
#define TI2_DEDICATED_GET_IS_SIMULATION	  		L"GET_IS_SIMULATION"

// [InParam] None      [OutParam] lx_int32[1] = { eDeviceType_TI2_E/eDeviceType_TI2_EB/eDeviceType_TI2_A }
#define TI2_DEDICATED_GET_SYSTEM_TYPE			L"GET_SYSTEM_TYPE"

// [InParam] lx_int32 Val1(0:Main, 8:Joy, 9:Out Process, 10:In Process)
//					  Val2(0/1:CPU1, 0x11:FPGA-CTL, 0x12:FPGA-HNK)
// [OutParam] lx_wchar* 
// [GET_VERSION]                                  [GET_CHECKSUM]
//       Val1                                           Val1
//      +----+---------+---------+---------+           +----+---------+---------+---------+
// Val2 | -- |CPU(0/1) |CTL(0x11)|HNK(0x12)|      Val2 | -- |CPU(0/1) |CTL(0x11)|HNK(0x12)|
//      +----+---------+---------+---------+           +----+---------+---------+---------+
//      |  0 |   OK    |   OK    |   OK    |           |  0 |   OK    |   OK    |   OK    |
//      +----+---------+---------+---------+           +----+---------+---------+---------+
//      |  8 |   OK    | Err(-9) | Err(-9) |           |  8 |   OK    | Err(-9) | Err(-9) |
//      +----+---------+---------+---------+           +----+---------+---------+---------+
//      |  9 |   OK    |   OK    |   OK    |           |  9 | Err(-9) | Err(-9) | Err(-9) |
//      +----+---------+---------+---------+           +----+---------+---------+---------+
//      | 10 |   OK    |   OK    |   OK    |           | 10 | Err(-9) | Err(-9) | Err(-9) |
//      +----+---------+---------+---------+           +----+---------+---------+---------+
//
// [GET_PROGRAMNAME]
//       Val1
//      +----+---------+---------+---------+
// Val2 | -- |CPU(0/1) |CTL(0x11)|HNK(0x12)|
//      +----+---------+---------+---------+
//      |  0 |   OK    |   OK    |   OK    |
//      +----+---------+---------+---------+
//      |  8 |   OK    | Err(-9) | Err(-9) |
//      +----+---------+---------+---------+
//      |  9 |   OK    |   OK    |   OK    |
//      +----+---------+---------+---------+
//      | 10 |   OK    |   OK    |   OK    |
//      +----+---------+---------+---------+
#define TI2_DEDICATED_GET_VERSION				L"GET_VERSION"
#define TI2_DEDICATED_GET_CHECKSUM				L"GET_CHECKSUM"
#define TI2_DEDICATED_GET_PROGRAMNAME			L"GET_PROGRAMNAME"

// [InParam] wchar* Val[1] = { cmd }			[OutParam] None
#define TI2_DEDICATED_SET_USER_COMMAND	  		L"SET_USER_COMMAND"
#define TI2_DEDICATED_GET_USER_COMMAND	  		L"GET_USER_COMMAND"

// [InParam] lx_int32 val[1] = {0:FL1,1:FL2}		[OutParam] lx_int32 val[1] = { 1:Top/2:Bottom }
#define TI2_DEDICATED_GET_FILTERTURRET_MOUNTED_POS			L"GET_FILTERTURRET_MOUNTED_POS"
// [InParam] lx_int32 val[1] = {0:LAPP1,1:LAPP2}	[OutParam] lx_int32 val[2] = { MainBranch 1:Top/2:Bottom, SubBranch 0:UnMounted/1:Mounted  }
#define TI2_DEDICATED_GET_LAPPMAINBRANCH_MOUNTED_POS		L"GET_LAPPMAINBRANCH_MOUNTED_POS"

// [InParam] None		[OutParam] lx_int32 val[1] = { 1:Top/2:Bottom }
#define TI2_DEDICATED_GET_FILTERTURRET1_MOUNTED_POS			L"GET_FILTERTURRET1_MOUNTED_POS"
#define TI2_DEDICATED_GET_FILTERTURRET2_MOUNTED_POS			L"GET_FILTERTURRET2_MOUNTED_POS"
// [InParam] None		[OutParam] lx_int32 val[2] = { MainBranch 1:Top/2:Bottom, SubBranch 0:UnMounted/1:Mounted  }
#define TI2_DEDICATED_GET_LAPPMAINBRANCH1_MOUNTED_POS		L"GET_LAPPMAINBRANCH1_MOUNTED_POS"
#define TI2_DEDICATED_GET_LAPPMAINBRANCH2_MOUNTED_POS		L"GET_LAPPMAINBRANCH2_MOUNTED_POS"

// [InParam] None		[OutParam] lx_int32 val[1] = { 0:UnMount/1:Mount }
#define TI2_DEDICATED_GET_HALOGEN_MOUNTED					L"GET_HALOGEN_MOUNTED"
// [InParam] lx_int32 val[1] = { 0:UnMount/1:Mount }		[OutParam] None
#define TI2_DEDICATED_SET_HALOGEN_MOUNTED					L"SET_HALOGEN_MOUNTED"
// [InParam] None		[OutParam] lx_int32 val[1] = { 1:EPI/2:DIA/3:AUX }
#define TI2_DEDICATED_GET_SHUTTER1_PORT						L"GET_SHUTTER1_PORT"
#define TI2_DEDICATED_GET_SHUTTER2_PORT						L"GET_SHUTTER2_PORT"
// [InParam] lx_int32 val[1] = { 1:EPI/2:DIA/3:AUX }		[OutParam] None
#define TI2_DEDICATED_SET_SHUTTER1_PORT						L"SET_SHUTTER1_PORT"
#define TI2_DEDICATED_SET_SHUTTER2_PORT						L"SET_SHUTTER2_PORT"

// [InParam] None      [OutParam] None
#define TI2_DEDICATED_RUN_FILTERTURRET_TOPBOTTOM_EXCAHNGE	L"RUN_FILTERTURRET_TOPBOTTOM_EXCAHNGE"
#define TI2_DEDICATED_RUN_LAPPMAINBRANCH_TOPBOTTOM_EXCAHNGE	L"RUN_LAPPMAINBRANCH_TOPBOTTOM_EXCAHNGE"

// [InParam] lx_int32 val[1] = { StopLevel 0(Default)~99 }	[OutParam] None
#define TI2_DEDICATED_RUN_PFS_SEARCH_OFFSET					L"RUN_PFS_SEARCH_OFFSET"

// [InParam] None											[OutParam] None
#define TI2_DEDICATED_CLEAR_XY_SOFTLIMIT					L"CLEAR_XY_SOFTLIMIT"
#define TI2_DEDICATED_CLEAR_Z_SOFTLIMIT 					L"CLEAR_Z_SOFTLIMIT"

// [InParam] None		[OutParam] lx_int32 val[2] = { 0:Rotary/1:Return/2:Special, Rotation is disable[0 or 1] }
#define TI2_DEDICATED_GET_NOSEPIECE_LIMITED					L"GET_NOSEPIECE_LIMITED"
// [InParam] lx_int32 val[2] = { 0:Rotary/1:Return/2:Special, Rotation is disable[0 or 1] }		[OutParam] None
#define TI2_DEDICATED_SET_NOSEPIECE_LIMITED					L"SET_NOSEPIECE_LIMITED"

// [InParam] None		[OutParam] lx_int32 val[1] = { 0:Disable/1:Toggle1/2:Toggle2 }
#define TI2_DEDICATED_GET_NOSEPIECE_TOGGLE_ENABLE			L"GET_NOSEPIECE_TOGGLE_ENABLE"
// [InParam] lx_int32 val[1] = { 0:Disable/1:Toggle1/2:Toggle2 }		[OutParam] None
#define TI2_DEDICATED_SET_NOSEPIECE_TOGGLE_ENABLE			L"SET_NOSEPIECE_TOGGLE_ENABLE"

// [InParam] lx_int32 val[1] = { 1:Toggle1/2:Toggle2 }		[OutParam] lx_int32 val[3] = { 1:Toggle1/2:Toggle2, 1:Addr1/.../6:Addr6, 1:Addr1/.../6:Addr6 }
#define TI2_DEDICATED_GET_NOSEPIECE_TOGGLE_POS				L"GET_NOSEPIECE_TOGGLE_POS"
// [InParam] lx_int32 val[3] = { 1:Toggle1/2:Toggle2, 1:Addr1/.../6:Addr6, 1:Addr1/.../6:Addr6 }		[OutParam] None
#define TI2_DEDICATED_SET_NOSEPIECE_TOGGLE_POS				L"SET_NOSEPIECE_TOGGLE_POS"
// [InParam] None		[OutParam] lx_int32 val[1] = { 0:LinearScale/1:None }
#define TI2_DEDICATED_GET_ZDRIVE_FB_MODE					L"GET_ZDRIVE_FB_MODE"
// [InParam] lx_int32 val[1] = { 0:LinearScale/1:None }		[OutParam] None
#define TI2_DEDICATED_SET_ZDRIVE_FB_MODE					L"SET_ZDRIVE_FB_MODE"

// [InParam] None							[OutParam] lx_int32 val[1] = { 0:Off  /1:On }
#define TI2_DEDICATED_GET_SENSOR					L"GET_SENSOR"
// [InParam] val[1] = {  0:Off  /1:On  }	[OutParam] None 
#define TI2_DEDICATED_SET_SENSOR					L"SET_SENSOR"

// [InParam] None		[OutParam] lx_int32 val[1] = { 0:Prohibition/1:Permit }
#define TI2_DEDICATED_GET_NOSEPIECE_SKIP					L"GET_NOSEPIECE_SKIP"
#define TI2_DEDICATED_GET_CONDENSER_SKIP					L"GET_CONDENSER_SKIP"
#define TI2_DEDICATED_GET_TURRET1_SKIP						L"GET_TURRET1_SKIP"
#define TI2_DEDICATED_GET_TURRET2_SKIP						L"GET_TURRET2_SKIP"

// [InParam] lx_int32 val[1] = { 0:Prohibition/1:Permit }		[OutParam] None
#define TI2_DEDICATED_SET_NOSEPIECE_SKIP					L"SET_NOSEPIECE_SKIP"
#define TI2_DEDICATED_SET_CONDENSER_SKIP					L"SET_CONDENSER_SKIP"
#define TI2_DEDICATED_SET_TURRET1_SKIP						L"SET_TURRET1_SKIP"	
#define TI2_DEDICATED_SET_TURRET2_SKIP						L"SET_TURRET2_SKIP"	

// [InParam] None		[OutParam] lx_int32 val[1] = { 0~4095 }
#define TI2_DEDICATED_GET_PFS_LED							L"GET_PFS_LED"
// [InParam] lx_int32 val[1] = { 0~4095 }		[OutParam] None
#define TI2_DEDICATED_SET_PFS_LED							L"SET_PFS_LED"
// [InParam] None		[OutParam] lx_int32 val[1] = { 0:B-PFS/1:A-PFS }
#define TI2_DEDICATED_GET_PFS_CONTROL						L"GET_PFS_CONTROL"
// [InParam] lx_int32 val[1] = { 0:B-PFS/1:A-PFS }		[OutParam] None
#define TI2_DEDICATED_SET_PFS_CONTROL						L"SET_PFS_CONTROL"
// [InParam] None		[OutParam] lx_int32 val[1] = { 0:Glass/1:Plastic }
#define TI2_DEDICATED_GET_PFS_DISH							L"GET_PFS_DISH"
// [InParam] lx_int32 val[1] = { 0:Glass/1:Plastic }		[OutParam] None
#define TI2_DEDICATED_SET_PFS_DISH							L"SET_PFS_DISH"	


// --------------------------------------------------
// How to use AF functions
//   a. Set IO port			       : Change the IO port to input.
//   b. Select IO-input edge.	   : Change the IO signal to risingedge.
//   c. RUN_AF                     : Set a input I/O number of exposure signal.
//   d. RUN_AF_ZPRINT              : Set a search range of Z-drive, And start AF-ZPRINT.
//   e. Enter a signal(Live etc.)  : Enter a signal to I/O.
//   f. STOP_AF_ZPRIN              : Stop AF-ZPRINT.
//   g. GET_AF_ZPRINT			   : Get a Z-Pos of the number of 1-5000.
//                                   (Determine the number of contrast is the maximum value.)
//   h. MOVE_AF_ZPRINT_POS         : Move to the number
//   i. STOP_AF			           : Stop AF
//
// 
// [InParam] lx_int32 IO(Bit1~8:ControlBox, 9~25:Extension box)  [OutParam] None
#define TI2_DEDICATED_RUN_AF								L"RUN_AF"
// [InParam] None  [OutParam] None
#define TI2_DEDICATED_STOP_AF								L"STOP_AF"
#define TI2_DEDICATED_STOP_AF_ZPRIN							L"STOP_AF_ZPRIN"
// [InParam] lx_int32 val[3]={No:1~5000,Speed,Tolerance}	[OutParam] None
#define TI2_DEDICATED_MOVE_AF_ZPRINT_POS					L"MOVE_AF_ZPRINT_POS"
// [InParam] lx_int32 val[2]={Pos,Speed}			[OutParam] None
#define TI2_DEDICATED_RUN_AF_ZPRINT							L"RUN_AF_ZPRINT"
// [InParam] lx_int32 val={No:1~5000}				[OutParam] lx_int32 [2] = {No:1~5000,Pos:Linear scale of value}
#define TI2_DEDICATED_GET_AF_ZPRINT							L"GET_AF_ZPRINT"

// [InParam] lx_int32 nVal[4](X:-1/0/+1,XSpeed, Y:-1/0/+1, YSpeed)		[OutParam] None
#define TI2_DEDICATED_RUN_XY_VECTORIAL_TRANSFER				L"RUN_XY_VECTORIAL_TRANSFER"

// [InParam] lx_uint64 MIC_ACCESSORY				[OutParam] None
#define TI2_DEDICATED_RUN_INITIALIZE_UNIT					L"RUN_INITIALIZE_UNIT"
// [InParam] None									[OutParam] None
#define TI2_DEDICATED_FACTORY_RESET							L"FACTORY_RESET"

// [InParam] lx_int32 nVal = {TimeOut/ms}			[OutParam] lx_int32 nVal[2] = { Pfs Offset, Pfs Status }
#define TI2_DEDICATED_WAIT_FOR_PFS							L"WaitForPFS"

// [InParam] None									[OutParam] lx_int32 nVal[3] = {0:Idle/1:ActiveWait/2:retry/3:ZSetWait/4:Runn , Slippage, Interval }
#define TI2_DEDICATED_GET_ZDRIVE_KEEP_POS					L"GET_ZDRIVE_KEEP_POS"
// [InParam] lx_int32 nVal[3] = {0:Stop/1:Run , Slippage, Interval }			[OutParam] None
#define TI2_DEDICATED_SET_ZDRIVE_KEEP_POS					L"SET_ZDRIVE_KEEP_POS"

// [InParam] None																[OutParam] None
#define TI2_DEDICATED_CANCEL_ZDRIVE_ESCAPE					L"CANCEL_ZDRIVE_ESCAPE"

// [InParam] lx_uint32 val[1] = { ControlBox D1...D8, ExtensionBox D1...D16 }		[OutParam] None
#define TI2_DEDICATED_RUN_XDRIVE_TTL						L"RUN_XDRIVE_TTL"
#define TI2_DEDICATED_RUN_YDRIVE_TTL						L"RUN_YDRIVE_TTL"
#define TI2_DEDICATED_RUN_ZDRIVE_TTL						L"RUN_ZDRIVE_TTL"

// [InParam] lx_int32 nVal[1] = { 1~5000(*2um) }			[OutParam] None
#define TI2_DEDICATED_SET_ZDRIVE_TTL						L"SET_ZDRIVE_TTL"
// [InParam] lx_int32 nVal[1] = { 1Å`200000(*0.1um) }		[OutParam] None
#define TI2_DEDICATED_SET_XDRIVE_TTL						L"SET_XDRIVE_TTL"
#define TI2_DEDICATED_SET_YDRIVE_TTL						L"SET_YDRIVE_TTL"
// [InParam] None											[OutParam] lx_int32 nVal[1] = { 1~5000(*2um) }
#define TI2_DEDICATED_GET_ZDRIVE_TTL						L"GET_ZDRIVE_TTL"
// [InParam] None											[OutParam] lx_int32 nVal[1] = { 1Å`200000(*0.1um) }
#define TI2_DEDICATED_GET_XDRIVE_TTL						L"GET_XDRIVE_TTL"
#define TI2_DEDICATED_GET_YDRIVE_TTL						L"GET_YDRIVE_TTL"


// [InParam] None		[OutParam] lx_uint32 val[4] = { Addr, Addr, Addr, Addr }
#define TI2_DEDICATED_GET_LAN_IP_ADDRESS					L"GET_LAN_IP_ADDRESS"
#define TI2_DEDICATED_GET_LAN_SUBNET_MASK					L"GET_LAN_SUBNET_MASK"
#define TI2_DEDICATED_GET_LAN_GATEWAY_ADDRESS				L"GET_LAN_GATEWAY_ADDRESS"
// [InParam] None		[OutParam] lx_uint32 val[6] = { Addr, Addr, Addr, Addr, Addr, Addr }
#define TI2_DEDICATED_GET_LAN_MAC_ADDRESS					L"GET_LAN_MAC_ADDRESS"
// [InParam] None		[OutParam] lx_uint32 val[8] = { Addr, Addr, Addr, Addr, Addr, Addr, Addr, Addr }
#define TI2_DEDICATED_GET_LAN_IPV6_ADDRESS					L"GET_LAN_IPV6_ADDRESS"
// [InParam] None		[OutParam] lx_uint32 val[1] = { Addr }
#define TI2_DEDICATED_GET_LAN_IPV6_PREFIX					L"GET_LAN_IPV6_PREFIX"
// [InParam] None		[OutParam] lx_wchar val[13] = { BoardDrawings }
#define TI2_DEDICATED_GET_LAN_BOARD_NO						L"GET_LAN_BOARD_NO"
// [InParam] None		[OutParam] lx_uint32 val[6] = { Addr, Addr, Addr, Addr, Addr, Addr }
#define TI2_DEDICATED_GET_CAMERA_MAC_ADDRESS				L"GET_CAMERA_MAC_ADDRESS"

// [InParam] lx_uint32 val[4] = { Addr, Addr, Addr, Addr }		[OutParam] None
#define TI2_DEDICATED_SET_LAN_IP_ADDRESS					L"SET_LAN_IP_ADDRESS"
#define TI2_DEDICATED_SET_LAN_SUBNET_MASK					L"SET_LAN_SUBNET_MASK"
#define TI2_DEDICATED_SET_LAN_GATEWAY_ADDRESS				L"SET_LAN_GATEWAY_ADDRESS"

// [InParam] lx_uint32 val[8] = { Addr, Addr, Addr, Addr, Addr, Addr, Addr, Addr }		[OutParam] None
#define TI2_DEDICATED_SET_LAN_IPV6_ADDRESS					L"SET_LAN_IPV6_ADDRESS"
// [InParam] lx_uint32 val[1] = { Addr }		[OutParam] None
#define TI2_DEDICATED_SET_LAN_IPV6_PREFIX					L"SET_LAN_IPV6_PREFIX"

// [InParam] None		[OutParam] lx_uint32 val[6] = { 0~2100, 0~2100, 0~2100, 0~2100, 0~2100, 0~2100 }
#define TI2_DEDICATED_GET_DIA_LAMP_VOL						L"GET_DIA_LAMP_VOL"
// [InParam] lx_uint32 val[2] = { 1~6, 0~2100 }		[OutParam] None
#define TI2_DEDICATED_SET_DIA_LAMP_VOL						L"SET_DIA_LAMP_VOL"

// [InParam] None		[OutParam] lx_uint32 val[6] = { 0:OFF/1:ON, 0:OFF/1:ON, 0:OFF/1:ON, 0:OFF/1:ON, 0:OFF/1:ON, 0:OFF/1:ON }
#define TI2_DEDICATED_GET_ZESCAPE_SETTING					L"GET_ZESCAPE_SETTING"
// [InParam] lx_uint32 val[6] = { 0:OFF/1:ON, 0:OFF/1:ON, 0:OFF/1:ON, 0:OFF/1:ON, 0:OFF/1:ON, 0:OFF/1:ON }		[OutParam] None
#define TI2_DEDICATED_SET_ZESCAPE_SETTING					L"SET_ZESCAPE_SETTING"
// [InParam] None		[OutParam] lx_uint32 val[1] = { 0:+500um/1~9:1~9mmLower }
#define TI2_DEDICATED_GET_ZESCAPE_POS						L"GET_ZESCAPE_POS"
// [InParam] lx_uint32 val[1] = { 0:+500um/1~9:1~9mmLower }		[OutParam] None
#define TI2_DEDICATED_SET_ZESCAPE_POS						L"SET_ZESCAPE_POS"			
// [InParam] None		[OutParam] lx_uint32 val[1] = { 1~7 }
#define TI2_DEDICATED_GET_CONDENSER_SHUTTER_POS				L"GET_CONDENSER_SHUTTER_POS"
// [InParam] lx_uint32 val[1] = { 1~7 }		[OutParam] None
#define TI2_DEDICATED_SET_CONDENSER_SHUTTER_POS				L"SET_CONDENSER_SHUTTER_POS"

// -----------------------------------------------------------------------------
// Custom speed
// [InParam] lx_uint32 val[7] = {No:0~9(=10~19), FH:pps(=[um/sec]*10), 0 , 0  , 0  , 0  , 0           }	[OutParam] None
// Or
// [InParam] lx_uint32 val[7] = {No:0~9(=10~19), FH:pps(=[um/sec]*10), FL:pps, RUR, RDR, Mag, TimeOut }	[OutParam] None
#define TI2_DEDICATED_SET_X_CUSTOM_SPEED					L"SET_X_CUSTOM_SPEED"
#define TI2_DEDICATED_SET_Y_CUSTOM_SPEED					L"SET_Y_CUSTOM_SPEED"

// [InParam] lx_uint32 val[7] = {No:0~9(=10~19), FH:pps(=[um/sec]*100), 0 , 0  , 0  , 0  , 0           }	[OutParam] None
// Or
// [InParam] lx_uint32 val[7] = {No:0~9(=10~19), FH:pps(=[um/sec]*100), FL:pps, RUR, RDR, Mag, TimeOut }	[OutParam] None
#define TI2_DEDICATED_SET_Z_CUSTOM_SPEED					L"SET_Z_CUSTOM_SPEED"


// [InParam] lx_uint32 val={No:0~9(=10~19)}		[OutParam] lx_uint32 val[7] = {No:0~9(=10~19), FH:pps(=[um/sec]*10) , FL:pps, RUR, RDR, Mag, TimeOut }
#define TI2_DEDICATED_GET_X_CUSTOM_SPEED					L"GET_X_CUSTOM_SPEED"
#define TI2_DEDICATED_GET_Y_CUSTOM_SPEED					L"GET_Y_CUSTOM_SPEED"

// [InParam] lx_uint32 val={No:0~9(=10~19)}		[OutParam] lx_uint32 val[7] = {No:0~9(=10~19), FH:pps(=[um/sec]*100), FL:pps, RUR, RDR, Mag, TimeOut }
#define TI2_DEDICATED_GET_Z_CUSTOM_SPEED					L"GET_Z_CUSTOM_SPEED"
// -----------------------------------------------------------------------------


// [InParam] None											[OutParam] lx_uint32 val = {Enable}
#define TI2_DEDICATED_GET_COAXIAL_CORRECTION_ENABLE			L"GET_COAXIAL_CORRECTION_ENABLE"
// [InParam] lx_uint32 val = {Enable}						[OutParam] None
#define TI2_DEDICATED_SET_COAXIAL_CORRECTION_ENABLE			L"SET_COAXIAL_CORRECTION_ENABLE"
// [InParam] None											[OutParam] lx_uint32 val[6] = {Pos1,Pos2,Pos3,Pos4,Pos5,Pos6}
#define TI2_DEDICATED_GET_COAXIAL_CORRECTION_POS			L"GET_COAXIAL_CORRECTION_POS"
// [InParam] lx_uint32 val = {0:Reset,1:Set,9:All Reset}	[OutParam] None
#define TI2_DEDICATED_SET_COAXIAL_CORRECTION_POS			L"SET_COAXIAL_CORRECTION_POS"	

// [InParam] None		[OutParam] lx_int32 val[1] = { 0:Prohibition/1:Permit }
#define TI2_DEDICATED_GET_FOCUS_CORRECTION_ENABLE			L"GET_FOCUS_CORRECTION_ENABLE"
// [InParam] lx_int32 val[1] = { 0:Prohibition/1:Permit }		[OutParam] None
#define TI2_DEDICATED_SET_FOCUS_CORRECTION_ENABLE			L"SET_FOCUS_CORRECTION_ENABLE"

// [InParam] None		[OutParam] lx_int32 val[6] = { 0:Unset/1:Set }
#define TI2_DEDICATED_GET_FOCUS_CORRECTION					L"GET_FOCUS_CORRECTION"
// [InParam] lx_int32 val[1] = { 0:Reset/1:Current pos/9:AllReset }		[OutParam] None
#define TI2_DEDICATED_SET_FOCUS_CORRECTION					L"SET_FOCUS_CORRECTION"

// [InParam] lx_int32 val[1] = { 0:Normal/1:LowSpeed }		[OutParam] None
#define TI2_DEDICATED_SET_TURRET1_TORQUE					L"SET_TURRET1_TORQUE"
#define TI2_DEDICATED_SET_TURRET2_TORQUE					L"SET_TURRET2_TORQUE"
// [InParam] None		[OutParam] lx_int32 val[1] = { 0:Normal/1:LowSpeed }
#define TI2_DEDICATED_GET_TURRET1_TORQUE					L"GET_TURRET1_TORQUE"
#define TI2_DEDICATED_GET_TURRET2_TORQUE					L"GET_TURRET2_TORQUE"

// [InParam] None		[OutParam] lx_int32 val[1] = { 0:Disable/1:Enable }
#define TI2_DEDICATED_GET_KNOB_Z_ENABLE						L"GET_KNOB_Z_ENABLE"
#define TI2_DEDICATED_GET_KNOB_X_ENABLE						L"GET_KNOB_X_ENABLE"
#define TI2_DEDICATED_GET_KNOB_Y_ENABLE						L"GET_KNOB_Y_ENABLE"

// [InParam] None		[OutParam] lx_uint32 val[1] = { 1:Coarse/2:Fine }
#define TI2_DEDICATED_GET_KNOB_Z_SPEED						L"GET_KNOB_Z_SPEED"
// [InParam] None		[OutParam] lx_uint32 val[1] = { 1:Coarse/2:Fine/3:XY ExFine }
#define TI2_DEDICATED_GET_KNOB_X_SPEED						L"GET_KNOB_X_SPEED"
#define TI2_DEDICATED_GET_KNOB_Y_SPEED						L"GET_KNOB_Y_SPEED"

#define TI2_DEDICATED_SET_XYNOB_SPEED_REVOLVER_INTERLOCK_ENABLE	L"SET_XYNOB_SPEED_REVOLVER_INTERLOCK_ENABLE"
#define TI2_DEDICATED_GET_XYNOB_SPEED_REVOLVER_INTERLOCK_ENABLE	L"GET_XYNOB_SPEED_REVOLVER_INTERLOCK_ENABLE"

// [InParam] lx_uint32 val[0:Disable,1:Enable]				[OutParam] None
#define TI2_DEDICATED_SET_KNOB_Z_ENABLE						L"SET_KNOB_Z_ENABLE"
#define TI2_DEDICATED_SET_KNOB_X_ENABLE						L"SET_KNOB_X_ENABLE"
#define TI2_DEDICATED_SET_KNOB_Y_ENABLE						L"SET_KNOB_Y_ENABLE"

// [InParam] lx_uint32 val[1:Coarse, 2:Fine]				[OutParam] None
#define TI2_DEDICATED_SET_KNOB_Z_SPEED						L"SET_KNOB_Z_SPEED"
// [InParam] lx_uint32 val[1:Coarse, 2:Fine, 3:XY_ExFine Enable, 0:XY_ExFine Disable]	[OutParam] None
#define TI2_DEDICATED_SET_KNOB_X_SPEED						L"SET_KNOB_X_SPEED"
#define TI2_DEDICATED_SET_KNOB_Y_SPEED						L"SET_KNOB_Y_SPEED"

// [InParam] lx_uint32 val[1] = { D1(0:In/1:Out), ..., D8(0:In/1:Out) }		[OutParam] None
#define TI2_DEDICATED_SET_IO_CONTROL_BOX					L"SET_IO_CONTROL_BOX"
// [InParam] None		[OutParam] lx_uint32 val[1] = { D1(0:In/1:Out) ... D8(0:In/1:Out) }
#define TI2_DEDICATED_GET_IO_CONTROL_BOX					L"GET_IO_CONTROL_BOX"
// [InParam] lx_uint32 val[1] = { D1(0:In/1:Out), ..., D16(0:In/1:Out) }		[OutParam] None
#define TI2_DEDICATED_SET_IO_EXTENSION_BOX					L"SET_IO_EXTENSION_BOX"
// [InParam] None		[OutParam] lx_uint32 val[1] = { D1(0:In/1:Out) ... D16(0:In/1:Out) }
#define TI2_DEDICATED_GET_IO_EXTENSION_BOX					L"GET_IO_EXTENSION_BOX"

// [InParam] lx_uint32 Val[1] = { 1~8 }		[OutParam] lx_uint32 val[3] = { 1~8, 0:Positive/1:Negative, pulse(0~255) }
#define TI2_DEDICATED_GET_IO_CONTROL_BOX_WAVEFORM				L"GET_IO_CONTROL_BOX_WAVEFORM"
// [InParam] lx_uint32 val[3] = { 1~8, 0:Positive/1:Negative, pulse(0~255) }		[OutParam] None
#define TI2_DEDICATED_SET_IO_CONTROL_BOX_WAVEFORM				L"SET_IO_CONTROL_BOX_WAVEFORM"
// [InParam] lx_uint32 Val[1] = { 1~16 }		[OutParam] lx_uint32 val[3] = { 1~16, 0:Positive/1:Negative, pulse(0~255) }
#define TI2_DEDICATED_GET_IO_EXTENSION_BOX_WAVEFORM				L"GET_IO_EXTENSION_BOX_WAVEFORM"
// [InParam] lx_uint32 val[3] = { 1~16, 0:Positive/1:Negative, pulse(0~255) }		[OutParam] None
#define TI2_DEDICATED_SET_IO_EXTENSION_BOX_WAVEFORM				L"SET_IO_EXTENSION_BOX_WAVEFORM"

// [InParam] lx_uint32 val[2] = { Src in 1~8, Bypass out D1(0:Disable/1:Enable) ... D8(0:Disable/1:Enable) }		[OutParam] None
#define TI2_DEDICATED_SET_IO_CONTROLBOX_WIRE_CONNECTION			L"SET_IO_CONTROLBOX_WIRE_CONNECTION"
// [InParam] lx_uint32 val[1] = { 1~8 }		[OutParam] lx_uint32 val[2] = { 1~8, Bypass out D1(0:Disable/1:Enable) ... D8(0:Disable/1:Enable) }
#define TI2_DEDICATED_GET_IO_CONTROLBOX_WIRE_CONNECTION			L"GET_IO_CONTROLBOX_WIRE_CONNECTION"
// [InParam] lx_uint32 val[2] = { Src in 1~16, Bypass out D1(0:Disable/1:Enable) ... D16(0:Disable/1:Enable) }		[OutParam] None
#define TI2_DEDICATED_SET_IO_EXTENSIONBOX_WIRE_CONNECTION		L"SET_IO_EXTENSIONBOX_WIRE_CONNECTION"
// [InParam] lx_uint32 val[1] = { 1~16 }		[OutParam] lx_uint32 val[2] = { 1~16, Bypass out D1(0:Disable/1:Enable) ... D16(0:Disable/1:Enable) }
#define TI2_DEDICATED_GET_IO_EXTENSIONBOX_WIRE_CONNECTION		L"GET_IO_EXTENSIONBOX_WIRE_CONNECTION"

// [InParam] None		[OutParam] lx_uint32 val[2] = { D1...D8, JobID }
#define TI2_DEDICATED_GET_IO_CONTROLBOX_FUNCTION_BUTTON			L"GET_IO_CONTROLBOX_FUNCTION_BUTTON"
// [InParam] lx_uint32 val[2] = { D1...D8, JobID }		[OutParam] None
#define TI2_DEDICATED_SET_IO_CONTROLBOX_FUNCTION_BUTTON			L"SET_IO_CONTROLBOX_FUNCTION_BUTTON"
// [InParam] None		[OutParam] lx_uint32 val[2] = { D1...D16, JobID }
#define TI2_DEDICATED_GET_IO_EXTENSIONBOX_FUNCTION_BUTTON		L"GET_IO_EXTENSIONBOX_FUNCTION_BUTTON"
// [InParam] lx_uint32 val[2] = { D1...D16, JobID }		[OutParam] None
#define TI2_DEDICATED_SET_IO_EXTENSIONBOX_FUNCTION_BUTTON		L"SET_IO_EXTENSIONBOX_FUNCTION_BUTTON"

// [InParam] None
// [OutParam] lx_uint32 val[1] = { Bit0 D1(1:RisingEdge  / 0:Ignore)...Bit7  D8(1:RisingEdge  / 0:Ignore)
//                                 Bit8 D1(1:FallingEdge / 0:Ignore)...Bit16 D8(1:FallingEdge / 0:Ignore) }
#define TI2_DEDICATED_GET_IO_CONTROLBOX_TRIGGER_EDGE			L"GET_IO_CONTROLBOX_TRIGGER_EDGE"
// [InParam] lx_uint32 val[1] = {  Bit0 D1(1:RisingEdge  / 0:Ignore)...Bit7  D8(1:RisingEdge  / 0:Ignore)
//                                 Bit8 D1(1:FallingEdge / 0:Ignore)...Bit16 D8(1:FallingEdge / 0:Ignore) }
// [OutParam] None
#define TI2_DEDICATED_SET_IO_CONTROLBOX_TRIGGER_EDGE			L"SET_IO_CONTROLBOX_TRIGGER_EDGE"
// [InParam] None
// [OutParam] lx_uint32 val[1] = { Bit0  D1(1:RisingEdge  / 0:Ignore)...Bit15 D16(1:RisingEdge  / 0:Ignore)
//                                 Bit16 D1(1:FallingEdge / 0:Ignore)...Bit31 D16(1:FallingEdge / 0:Ignore) }
#define TI2_DEDICATED_GET_IO_EXTENSIONBOX_TRIGGER_EDGE			L"GET_IO_EXTENSIONBOX_TRIGGER_EDGE"
// [InParam] lx_uint32 val[1] = { Bit0  D1(1:RisingEdge  / 0:Ignore)...Bit15 D16(1:RisingEdge  / 0:Ignore)
//                                Bit16 D1(1:FallingEdge / 0:Ignore)...Bit31 D16(1:FallingEdge / 0:Ignore)  }
// [OutParam] None
#define TI2_DEDICATED_SET_IO_EXTENSIONBOX_TRIGGER_EDGE			L"SET_IO_EXTENSIONBOX_TRIGGER_EDGE"


// [InParam] lx_uint32 val[1] = { D1...D8 }
// [OutParam] lx_uint32 val[1] = { 0:None / 1:Signal / 2:Motorized-Status 
//                                 3:Pfs JP / 4:PFS Vicinity-JP / 5:PFS UpDown-JP / 6:PFS Surface }
#define TI2_DEDICATED_GET_IO_CONTROLBOX_OUT_TYPE				L"GET_IO_CONTROLBOX_OUT_TYPE"
// [InParam] lx_uint32 val[2] = { D1...D8, { 0:None / 1:Signal / 2:Motorized-Status 
//                                           3:Pfs JP / 4:PFS Vicinity-JP / 5:PFS UpDown-JP / 6:PFS Surface }
// [OutParam] None
#define TI2_DEDICATED_SET_IO_CONTROLBOX_OUT_TYPE				L"SET_IO_CONTROLBOX_OUT_TYPE"
// [InParam] lx_uint32 val[1] = { D1...D16 }
// [OutParam] lx_uint32 val[1] = { 0:None / 1:Signal / 2:Motorized-Status 
//                                 3:Pfs JP / 4:PFS Vicinity-JP / 5:PFS UpDown-JP / 6:PFS Surface }
#define TI2_DEDICATED_GET_IO_EXTENSIONBOX_OUT_TYPE				L"GET_IO_EXTENSIONBOX_OUT_TYPE"
// [InParam] lx_uint32 val[2] = { D1...D16, 0:None / 1:Signal / 2:Motorized-Status 
//                                          3:Pfs JP / 4:PFS Vicinity-JP / 5:PFS UpDown-JP / 6:PFS Surface }
// [OutParam] None
#define TI2_DEDICATED_SET_IO_EXTENSIONBOX_OUT_TYPE				L"SET_IO_EXTENSIONBOX_OUT_TYPE"


// [InParam] None [OutParam] lx_uint32 val[2] = { Control D1(1: High[Pulse] / 0: Low[None])...D8, Extension D1~D16 }
#define TI2_DEDICATED_GET_IO_OUT_SIGNAL							L"GET_IO_OUT_SIGNAL"
// [InParam] lx_uint32 val[2] = { Control D1(1: High[Pulse] / 0: Low[None])...D8, Extension D1~D16 }		[OutParam] None
#define TI2_DEDICATED_SET_IO_OUT_SIGNAL							L"SET_IO_OUT_SIGNAL"
// [InParam] None [OutParam] lx_uint32 val[2] = { Control D1(1: High[Pulse] / 0: Low[None])...D8, Extension D1~D16 }
#define TI2_DEDICATED_GET_IO_OUT_PULSE							L"GET_IO_OUT_PULSE"
// [InParam] lx_uint32 val[2] = { Control D1(1: High[Pulse] / 0: Low[None])...D8, Extension D1~D16 }		[OutParam] None
#define TI2_DEDICATED_SET_IO_OUT_PULSE							L"SET_IO_OUT_PULSE"


// [InParam] None		[OutParam] None
#define TI2_DEDICATED_RUN_MODE_PRESET							L"RUN_MODE_PRESET"
#define TI2_DEDICATED_SET_MODE_PRESET_ENABLE					L"SET_MODE_PRESET_ENABLE"
#define TI2_DEDICATED_GET_MODE_PRESET_ENABLE					L"GET_MODE_PRESET_ENABLE"
#define TI2_DEDICATED_SET_MODE_PRESET_NAME						L"SET_MODE_PRESET_NAME"
#define TI2_DEDICATED_GET_MODE_PRESET_NAME						L"GET_MODE_PRESET_NAME"
#define TI2_DEDICATED_SET_MODE_PRESET_ADDRESS					L"SET_MODE_PRESET_ADDRESS"
#define TI2_DEDICATED_GET_MODE_PRESET_ADDRESS					L"GET_MODE_PRESET_ADDRESS"

// [InParam] lx_uint32 val[1] = { 0:Disable/1:Enable }		[OutParam] None
#define TI2_DEDICATED_SET_OBSERVATION_NOSEPIECE_ENABLE			L"SET_OBSERVATION_NOSEPIECE_ENABLE"
// [InParam] None		[OutParam] lx_uint32 val[1] = { 0:Disable/1:Enable }
#define TI2_DEDICATED_GET_OBSERVATION_NOSEPIECE_ENABLE			L"GET_OBSERVATION_NOSEPIECE_ENABLE"
// [InParam] lx_uint32 val[1] = { 0:Disable/1:Enable }		[OutParam] None
#define TI2_DEDICATED_SET_OBSERVATION_TURRET_SHUTTER_ENABLE		L"SET_OBSERVATION_TURRET_SHUTTER_ENABLE"
// [InParam] None		[OutParam] lx_uint32 val[1] = { 0:Disable/1:Enable }
#define TI2_DEDICATED_GET_OBSERVATION_TURRET_SHUTTER_ENABLE		L"GET_OBSERVATION_TURRET_SHUTTER_ENABLE"
// [InParam] lx_uint32 val[8] = { 1~6, 0:Disable/1:Enable, ..., 0:Disable/1:Enable }		[OutParam] None
#define TI2_DEDICATED_SET_OBSERVATION_OPTICAL_ELEMENT_ENABLE	L"SET_OBSERVATION_OPTICAL_ELEMENT_ENABLE"
// [InParam] lx_uint32 val[8] = { 1~6 }		[OutParam] lx_uint32 val[8] = { 1~6, 0:Disable/1:Enable, ..., 0:Disable/1:Enable }
#define TI2_DEDICATED_GET_OBSERVATION_OPTICAL_ELEMENT_ENABLE	L"GET_OBSERVATION_OPTICAL_ELEMENT_ENABLE"
// [InParam] lx_uint32 val[8] = { 1~6, 1~7, 1~6, 1~6, 0~1, 0~1, 1~7, 1~7 }		[OutParam] None
#define TI2_DEDICATED_SET_OBSERVATION_OPTICAL_ELEMENT_POS		L"SET_OBSERVATION_OPTICAL_ELEMENT_POS"	
// [InParam] lx_uint32 val[8] = { 1~6 }		[OutParam] lx_uint32 val[8] = { 1~6, 1~7, 1~6, 1~6, 0~1, 0~1, 1~7, 1~7 }
#define TI2_DEDICATED_GET_OBSERVATION_OPTICAL_ELEMENT_POS		L"GET_OBSERVATION_OPTICAL_ELEMENT_POS"

// [InParam] lx_uint32 val[1] = { 1:Upper/2:Bottom }			[OutParam] lx_uint32 val[2] = { 1:Upper/2:Bottom, 1:FL1/2:FL2/3:BA1/4:BA2 }
#define TI2_DEDICATED_GET_LR_SHUTTLE_SWITCH						L"GET_LR_SHUTTLE_SWITCH"
// [InParam] lx_uint32 val[2] = { 1:Upper/2:Bottom, 1:FL1/2:FL2/3:BA1/4:BA2 }		[OutParam] None
#define TI2_DEDICATED_SET_LR_SHUTTLE_SWITCH						L"SET_LR_SHUTTLE_SWITCH"
// [InParam] lx_uint32 val[1] = { 1:LeftPGB/2:RightPGB/3~8:JoinStickPGB1~6 }		[OutParam] lx_uint32 val[2] = { 1:LeftPGB/2:RightPGB/3Å`8:JoinStickPGB1Å`6, JobID }
#define TI2_DEDICATED_GET_PROGRAMMABLE_SWITCH					L"GET_PROGRAMMABLE_SWITCH"
// [InParam] lx_uint32 val[2] = { 1:LeftPGB/2:RightPGB/3Å`8:JoinStickPGB1Å`6, JobID }		[OutParam] None
#define TI2_DEDICATED_SET_PROGRAMMABLE_SWITCH					L"SET_PROGRAMMABLE_SWITCH"
// [InParam] None		[OutParam] lx_uint32 val[1] = { 0:Prohibition/1:Permit }
#define TI2_DEDICATED_GET_JOY_SWITCH_ENABLE						L"GET_JOY_SWITCH_ENABLE"
// [InParam] lx_uint32 val[1] = { 0:Prohibition/1:Permit }		[OutParam] None
#define TI2_DEDICATED_SET_JOY_SWITCH_ENABLE						L"SET_JOY_SWITCH_ENABLE"
// [InParam] lx_uint32 val[1] = { 1:Front/2:Lef/3:Right/4:Z }	[OutParam] lx_uint32 val[2] = { 1:Front/2:Left/3:Right/4:Z, 0:Prohibition/1:Permit }
#define TI2_DEDICATED_GET_BODY_SWITCH_ENABLE					L"GET_BODY_SWITCH_ENABLE"
// [InParam] lx_uint32 val[2] = { 1:Front/2:Left/3:Right/4:Z, 0:Prohibition/1:Permit }		[OutParam] None
#define TI2_DEDICATED_SET_BODY_SWITCH_ENABLE					L"SET_BODY_SWITCH_ENABLE"

// [InParam] lx_uint32 val[1] = { 1:Top,2:Right,3:Bottom,4:Left }							[OutParam] lx_wchar* pName;
#define TI2_DEDICATED_GET_LIGHTPATH_NAME						L"GET_LIGHTPATH_NAME"

// [InParam] None												[OutParam] lx_uint32 val[1] = { 0:UnMounted/5:5Pos 6:6Pos }
#define TI2_DEDICATED_GET_NOSEPIECE_TYPE						L"GET_NOSEPIECE_TYPE"
// [InParam] None												[OutParam] lx_uint32 val[1] = { 0:UnMounted/1:Standard 2:MP 3:Correction Collar }
#define TI2_DEDICATED_GET_PFS_TYPE								L"GET_PFS_TYPE"

// [InParam] None				[OutParam] None
#define TI2_DEDICATED_SAVE_METADATAS							L"SaveMetadatas"

// [InParam] None				[OutParam] lx_uint32 val
#define TI2_DEDICATED_GET_OBJECTIVES_LIST_SIZE					L"GET_OBJECTIVES_LIST_SIZE"
// [InParam] None				[OutParam] MIC_Objective* pArry
#define TI2_DEDICATED_GET_OBJECTIVES_LIST						L"GET_OBJECTIVES_LIST"

// [InParam] None				[OutParam] lx_uint64 val = { MIC_ACCESSORY_MASK_xx }
#define TI2_DEDICATED_GET_ACCESSORYMASK							L"GET_ACCESSORYMASK"

// [InParam] None				[OutParam] lx_uint64 val = { MIC_DATA_MASK_xx }
#define TI2_DEDICATED_GET_ERRORMASK								L"GET_ERRORMASK"

// [InParam] None				[OutParam] lx_uint32 val = {0:Normal 1:Busy}
#define TI2_DEDICATED_GET_TI2_BUSY								L"GET_TI2_BUSY"
// [InParam] lx_uint32 val[1] = { 0:Normal/1:Busy }		[OutParam] None
#define TI2_DEDICATED_SET_TI2_BUSY								L"SET_TI2_BUSY"

// [InParam] [OutParam] None	lx_uint32 val[1] = { 0:Buzzer Off/1:Buzzer On }
#define TI2_DEDICATED_GET_TI2_BUZZER							L"GET_TI2_BUZZER"
// [InParam] lx_uint32 val[1] = { 0:Buzzer Off/1:Buzzer On }		[OutParam] None
#define TI2_DEDICATED_SET_TI2_BUZZER							L"SET_TI2_BUZZER"
// ---------------------------------------------------------+---------------------
// JobID										  JoinStick | left/light
//													PGB1Å`6	| PGB
// ---------------------------------------------------------+---------------------
// All of the job ID can be set in the DEDICATED command.
// *OK ... It can be set from the joystick.
// ---------------------------------------------------------+---------------------
#define TI2_IO_JOBID_Key_NONE				  0	//		*OK	|	*OK	|
#define TI2_IO_JOBID_Key_REVO_SHIFT			 10	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_REVO_1				 11	//		*OK	|	OK	| Nosepiece pos1
#define TI2_IO_JOBID_Key_REVO_2				 12	//		OK	|	OK	| Nosepiece pos2
#define TI2_IO_JOBID_Key_REVO_3				 13	//		OK	|	OK	| Nosepiece pos3
#define TI2_IO_JOBID_Key_REVO_4				 14	//		OK	|	OK	| Nosepiece pos4
#define TI2_IO_JOBID_Key_REVO_5				 15	//		OK	|	OK	| Nosepiece pos5
#define TI2_IO_JOBID_Key_REVO_6				 16	//		OK	|	OK	| Nosepiece pos6
#define TI2_IO_JOBID_Key_REVO_CW			 18	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_REVO_CCW			 19	//		*OK	|	OK	|
#define TI2_IO_JOBID_Key_COND_SHIFT			 20	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_COND_1				 21	//		OK	|	OK	| Condenser pos1
#define TI2_IO_JOBID_Key_COND_2				 22	//		OK	|	OK	| Condenser pos2
#define TI2_IO_JOBID_Key_COND_3				 23	//		OK	|	OK	| Condenser pos3
#define TI2_IO_JOBID_Key_COND_4				 24	//		OK	|	OK	| Condenser pos4
#define TI2_IO_JOBID_Key_COND_5				 25	//		OK	|	OK	| Condenser pos5
#define TI2_IO_JOBID_Key_COND_6				 26	//		OK	|	OK	| Condenser pos6
#define TI2_IO_JOBID_Key_COND_7				 27	//		OK	|	OK	| Condenser pos7
#define TI2_IO_JOBID_Key_COND_CW			 28	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_COND_CCW			 29	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_FL1_SHIFT			 30	//		*OK	|	OK	|
#define TI2_IO_JOBID_Key_FL1_1				 31	//		OK	|	OK	| Turret1 Filter pos1
#define TI2_IO_JOBID_Key_FL1_2				 32	//		OK	|	OK	| Turret1 Filter pos2
#define TI2_IO_JOBID_Key_FL1_3				 33	//		OK	|	OK	| Turret1 Filter pos3
#define TI2_IO_JOBID_Key_FL1_4				 34	//		OK	|	OK	| Turret1 Filter pos4
#define TI2_IO_JOBID_Key_FL1_5				 35	//		OK	|	OK	| Turret1 Filter pos5
#define TI2_IO_JOBID_Key_FL1_6				 36	//		OK	|	OK	| Turret1 Filter pos6
#define TI2_IO_JOBID_Key_FL1_CW				 38	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_FL1_CCW			 39	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_FL2_SHIFT			 40	//		*OK	|	OK	|
#define TI2_IO_JOBID_Key_FL2_1				 41	//		OK	|	OK	| Turret2 Filter pos1
#define TI2_IO_JOBID_Key_FL2_2				 42	//		OK	|	OK	| Turret2 Filter pos2
#define TI2_IO_JOBID_Key_FL2_3				 43	//		OK	|	OK	| Turret2 Filter pos3
#define TI2_IO_JOBID_Key_FL2_4				 44	//		OK	|	OK	| Turret2 Filter pos4
#define TI2_IO_JOBID_Key_FL2_5				 45	//		OK	|	OK	| Turret2 Filter pos5
#define TI2_IO_JOBID_Key_FL2_6				 46	//		OK	|	OK	| Turret2 Filter pos6
#define TI2_IO_JOBID_Key_FL2_CW				 48	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_FL2_CCW			 49	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_BA1_SHIFT			 50	//		*OK	|	OK	|
#define TI2_IO_JOBID_Key_BA1_1				 51	//		OK	|	OK	| Bar1FilterWheel pos1
#define TI2_IO_JOBID_Key_BA1_2				 52	//		OK	|	OK	| Bar1FilterWheel pos2
#define TI2_IO_JOBID_Key_BA1_3				 53	//		OK	|	OK	| Bar1FilterWheel pos3
#define TI2_IO_JOBID_Key_BA1_4				 54	//		OK	|	OK	| Bar1FilterWheel pos4
#define TI2_IO_JOBID_Key_BA1_5				 55	//		OK	|	OK	| Bar1FilterWheel pos5
#define TI2_IO_JOBID_Key_BA1_6				 56	//		OK	|	OK	| Bar1FilterWheel pos6
#define TI2_IO_JOBID_Key_BA1_7				 57	//		OK	|	OK	| Bar1FilterWheel pos7
#define TI2_IO_JOBID_Key_BA1_CW				 58	//		OK	|	*OK	|
#define TI2_IO_JOBID_Key_BA1_CCW			 59	//		OK	|	*OK	|
#define TI2_IO_JOBID_Key_BA2_SHIFT			 60	//		*OK	|	OK	|
#define TI2_IO_JOBID_Key_BA2_1				 61	//		OK	|	OK	| Bar2FilterWheel pos1
#define TI2_IO_JOBID_Key_BA2_2				 62	//		OK	|	OK	| Bar2FilterWheel pos2
#define TI2_IO_JOBID_Key_BA2_3				 63	//		OK	|	OK	| Bar2FilterWheel pos3
#define TI2_IO_JOBID_Key_BA2_4				 64	//		OK	|	OK	| Bar2FilterWheel pos4
#define TI2_IO_JOBID_Key_BA2_5				 65	//		OK	|	OK	| Bar2FilterWheel pos5
#define TI2_IO_JOBID_Key_BA2_6				 66	//		OK	|	OK	| Bar2FilterWheel pos6
#define TI2_IO_JOBID_Key_BA2_7				 67	//		OK	|	OK	| Bar2FilterWheel pos7
#define TI2_IO_JOBID_Key_BA2_CW				 68	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_BA2_CCW			 69	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_PATH_SHIFT			 70	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_EYE				 71	//		OK	|	OK	| LightPath
#define TI2_IO_JOBID_Key_R100				 72	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_L100				 73	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_L80				 74	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_EYE_R100			 75	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_EYE_L100			 76	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_EYE_L80			 77	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_R100_L100			 78	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_R100_L80			 79	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_L100_L80			 80	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_PATH				 81	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_Z_BDASH			 91	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_Z_ZERO				 92	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_Z_ESC_RET			 93	//		*OK	|	OK	| ZDrive Refocus
#define TI2_IO_JOBID_Key_Z_ESC				 94	//		OK	|	OK	| ZDrive Escape
#define TI2_IO_JOBID_Key_Z_RET				 95	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_Z_LIMIT			 96	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_XY_BDASH			101	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_X_ZERO				102	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_Y_ZERO				103	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_XY_ZERO			104	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_XY_JOYSPEED		105	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_SH1				111	//		*OK	|	*OK	| Shutter1
#define TI2_IO_JOBID_Key_SH2				112	//		*OK	|	*OK	| Shutter2
#define TI2_IO_JOBID_Key_SH_FL1				113	//		*OK	|	OK	| FL Shutter1
#define TI2_IO_JOBID_Key_SH_FL2				114	//		*OK	|	OK	| FL Shutter2
#define TI2_IO_JOBID_Key_SH_COND			115	//		*OK	|	OK	| Condenser Shutter pos
#define TI2_IO_JOBID_Key_LED_SHIFT			120	//		*OK	|	OK	| Dia LED
#define TI2_IO_JOBID_Key_LED_ONOFF			121	//		*OK	|	OK	|
#define TI2_IO_JOBID_Key_LED_UP				122	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_LED_DOWN			123	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_HALO_SHIFT			124	//		*OK	|	OK	| Halogen lamp
#define TI2_IO_JOBID_Key_HALO_ONOFF			125	//		*OK	|	OK	|
#define TI2_IO_JOBID_Key_HALO_UP			126	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_HALO_DOWN			127	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_PFS_ONOFF			131	//		OK	|	OK	| Pfs
#define TI2_IO_JOBID_Key_PFS_DM				132	//		*OK	|	OK	| Pfs DM
#define TI2_IO_JOBID_Key_OL_ZERO			133	//		OK	|	*OK	| Pfs offset
#define TI2_IO_JOBID_Key_PLED_OFF			134	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_PFS_OL_BDASH		137	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_TB_SHIFT			140	//		*OK	|	OK	| Eyepiece tubebase turret
#define TI2_IO_JOBID_Key_TB_1				141	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_TB_2				142	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_TB_3				143	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_TB_4				144	//		OK	|	OK	|
#define TI2_IO_JOBID_Key_TB_CW				148	//		OK	|	*OK	|
#define TI2_IO_JOBID_Key_TB_CCW				149	//		OK	|	*OK	|
#define TI2_IO_JOBID_Key_MB1				151	//		*OK	|	*OK	| Lapp1 Main branch
#define TI2_IO_JOBID_Key_MB2				152	//		*OK	|	*OK	| Lapp2 Main branch
#define TI2_IO_JOBID_Key_SB					153	//		*OK	|	*OK	| Lapp  Sub  branch
#define TI2_IO_JOBID_Key_LEDFI_LED1			161	//		OK	|	OK	| EPI LED Unit1
#define TI2_IO_JOBID_Key_LEDFI_LED2			162	//		OK	|	OK	| EPI LED Unit2
#define TI2_IO_JOBID_Key_LEDFI_LED3			163	//		OK	|	OK	| EPI LED Unit3
#define TI2_IO_JOBID_Key_LEDFI_LED4			164	//		OK	|	OK	| EPI LED Unit4
#define TI2_IO_JOBID_Key_LEDFI_LED			165	//		OK	|	OK	| 
#define TI2_IO_JOBID_Key_LEDFI_UP			166	//		OK	|	OK	| 
#define TI2_IO_JOBID_Key_LEDFI_DOWN			167	//		OK	|	OK	| 
#define TI2_IO_JOBID_Key_LEDFI_ONOFF		168	//		OK	|	OK	| 
#define TI2_IO_JOBID_Key_INTSL_CW			171	//		OK	|	OK	| Intensilight
#define TI2_IO_JOBID_Key_INTSL_CCW			172	//		OK	|	OK	| 
#define TI2_IO_JOBID_Key_SH_INTSL			173	//		OK	|	OK	| 
#define TI2_IO_JOBID_key_CORCOL_SHIFT		180	//		*OK	|	OK	| Correction Collar
#define TI2_IO_JOBID_key_MODE_1				191	//		OK	|	OK	| Mode1 Memory
#define TI2_IO_JOBID_key_MODE_2				192	//		OK	|	OK	| Mode2 Memory
#define TI2_IO_JOBID_key_MODE_3				193	//		OK	|	OK	| Mode3 Memory
#define TI2_IO_JOBID_key_MODE_4				194	//		OK	|	OK	| Mode4 Memory
#define TI2_IO_JOBID_key_MODE_5				195	//		OK	|	OK	| Mode5 Memory
#define TI2_IO_JOBID_key_MODE_6				196	//		OK	|	OK	| Mode6 Memory
#define TI2_IO_JOBID_key_MODE_7				197	//		OK	|	OK	| Mode7 Memory
#define TI2_IO_JOBID_key_MODE_8				198	//		OK	|	OK	| Mode8 Memory
#define TI2_IO_JOBID_key_RECALL_1			201	//		OK	|	OK	| Mode1 Recall
#define TI2_IO_JOBID_key_RECALL_2			202	//		OK	|	OK	| Mode2 Recall 
#define TI2_IO_JOBID_key_RECALL_3			203	//		OK	|	OK	| Mode3 Recall
#define TI2_IO_JOBID_key_RECALL_4			204	//		OK	|	OK	| Mode4 Recall
#define TI2_IO_JOBID_key_RECALL_5			205	//		OK	|	OK	| Mode5 Recall
#define TI2_IO_JOBID_key_RECALL_6			206	//		OK	|	OK	| Mode6 Recall
#define TI2_IO_JOBID_key_RECALL_7			207	//		OK	|	OK	| Mode7 Recall
#define TI2_IO_JOBID_key_RECALL_8			208	//		OK	|	OK	| Mode8 Recall
#define TI2_IO_JOBID_key_MODE_RECALL1		211	//		*OK	|	*OK	| Mode1 Recall(Short press) / Memory(Press and hold)
#define TI2_IO_JOBID_key_MODE_RECALL2		212	//		*OK	|	*OK	| Mode2 Recall(Short press) / Memory(Press and hold)
#define TI2_IO_JOBID_key_MODE_RECALL3		213	//		*OK	|	*OK	| Mode3 Recall(Short press) / Memory(Press and hold)
#define TI2_IO_JOBID_key_MODE_RECALL4		214	//		*OK	|	*OK	| Mode4 Recall(Short press) / Memory(Press and hold)
#define TI2_IO_JOBID_key_MODE_RECALL5		215	//		OK	|	OK	| Mode5 Recall(Short press) / Memory(Press and hold)
#define TI2_IO_JOBID_key_MODE_RECALL6		216	//		OK	|	OK	| Mode6 Recall(Short press) / Memory(Press and hold)
#define TI2_IO_JOBID_key_MODE_RECALL7		217	//		OK	|	OK	| Mode7 Recall(Short press) / Memory(Press and hold)
#define TI2_IO_JOBID_key_MODE_RECALL8		218	//		OK	|	OK	| Mode8 Recall(Short press) / Memory(Press and hold)
#define TI2_IO_JOBID_key_Ctl_IO1			221	//		*OK	|	*OK	| Control Box I/O1 output signal
#define TI2_IO_JOBID_key_Ctl_IO2			222	//		*OK	|	*OK	| Control Box I/O2 output signal
#define TI2_IO_JOBID_key_Ctl_IO3			223	//		OK	|	OK	| Control Box I/O3 output signal
#define TI2_IO_JOBID_key_Ctl_IO4			224	//		OK	|	OK	| Control Box I/O4 output signal
#define TI2_IO_JOBID_key_Ctl_IO5			225	//		OK	|	OK	| Control Box I/O5 output signal
#define TI2_IO_JOBID_key_Ctl_IO6			226	//		OK	|	OK	| Control Box I/O6 output signal
#define TI2_IO_JOBID_key_Ctl_IO7			227	//		OK	|	OK	| Control Box I/O7 output signal
#define TI2_IO_JOBID_key_Ctl_IO8			228	//		OK	|	OK	| Control Box I/O8 output signal 
#define TI2_IO_JOBID_key_Ctrl_IO1_2			231	//		*OK	|	*OK	| Control Box I/O1 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ctrl_IO2_2			232	//		*OK	|	*OK	| Control Box I/O2 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ctrl_IO3_2			233	//		OK	|	OK	| Control Box I/O3 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ctrl_IO4_2			234	//		OK	|	OK	| Control Box I/O4 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ctrl_IO5_2			235	//		OK	|	OK	| Control Box I/O5 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ctrl_IO6_2			236	//		OK	|	OK	| Control Box I/O6 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ctrl_IO7_2			237	//		OK	|	OK	| Control Box I/O7 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ctrl_IO8_2			238	//		OK	|	OK	| Control Box I/O8 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ctrl_IO1_3			241	//		*OK	|	*OK	| Control Box I/O1 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ctrl_IO2_3			242	//		*OK	|	*OK	| Control Box I/O2 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ctrl_IO3_3			243	//		OK	|	OK	| Control Box I/O3 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ctrl_IO4_3			244	//		OK	|	OK	| Control Box I/O4 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ctrl_IO5_3			245	//		OK	|	OK	| Control Box I/O5 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ctrl_IO6_3			246	//		OK	|	OK	| Control Box I/O6 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ctrl_IO7_3			247	//		OK	|	OK	| Control Box I/O7 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ctrl_IO8_3			248	//		OK	|	OK	| Control Box I/O8 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO1				251	//		OK	|	OK	| Extension box I/O  1 output signal
#define TI2_IO_JOBID_key_Ex_IO2				252	//		OK	|	OK	| Extension box I/O  2 output signal
#define TI2_IO_JOBID_key_Ex_IO3				253	//		OK	|	OK	| Extension box I/O  3 output signal
#define TI2_IO_JOBID_key_Ex_IO4				254	//		OK	|	OK	| Extension box I/O  4 output signal
#define TI2_IO_JOBID_key_Ex_IO5				255	//		OK	|	OK	| Extension box I/O  5 output signal
#define TI2_IO_JOBID_key_Ex_IO6				256	//		OK	|	OK	| Extension box I/O  6 output signal
#define TI2_IO_JOBID_key_Ex_IO7				257	//		OK	|	OK	| Extension box I/O  7 output signal
#define TI2_IO_JOBID_key_Ex_IO8				258	//		OK	|	OK	| Extension box I/O  8 output signal
#define TI2_IO_JOBID_key_Ex_IO9				259	//		OK	|	OK	| Extension box I/O  9 output signal
#define TI2_IO_JOBID_key_Ex_IO10			260	//		OK	|	OK	| Extension box I/O 10 output signal
#define TI2_IO_JOBID_key_Ex_IO11			261	//		OK	|	OK	| Extension box I/O 11 output signal
#define TI2_IO_JOBID_key_Ex_IO12			262	//		OK	|	OK	| Extension box I/O 12 output signal
#define TI2_IO_JOBID_key_Ex_IO13			263	//		OK	|	OK	| Extension box I/O 13 output signal
#define TI2_IO_JOBID_key_Ex_IO14			264	//		OK	|	OK	| Extension box I/O 14 output signal
#define TI2_IO_JOBID_key_Ex_IO15			265	//		OK	|	OK	| Extension box I/O 15 output signal
#define TI2_IO_JOBID_key_Ex_IO16			266	//		OK	|	OK	| Extension box I/O 16 output signal
#define TI2_IO_JOBID_key_Ex_IO1_2			271	//		OK	|	OK	| Extension box I/O  1 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO2_2			272	//		OK	|	OK	| Extension box I/O  2 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO3_2			273	//		OK	|	OK	| Extension box I/O  3 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO4_2			274	//		OK	|	OK	| Extension box I/O  4 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO5_2			275	//		OK	|	OK	| Extension box I/O  5 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO6_2			276	//		OK	|	OK	| Extension box I/O  6 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO7_2			277	//		OK	|	OK	| Extension box I/O  7 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO8_2			278	//		OK	|	OK	| Extension box I/O  8 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO9_2			279	//		OK	|	OK	| Extension box I/O  9 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO10_2			280	//		OK	|	OK	| Extension box I/O 10 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO11_2			281	//		OK	|	OK	| Extension box I/O 11 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO12_2			282	//		OK	|	OK	| Extension box I/O 12 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO13_2			283	//		OK	|	OK	| Extension box I/O 13 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO14_2			284	//		OK	|	OK	| Extension box I/O 14 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO15_2			285	//		OK	|	OK	| Extension box I/O 15 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO16_2			286	//		OK	|	OK	| Extension box I/O 16 output signal (Hi<-->Low  )
#define TI2_IO_JOBID_key_Ex_IO1_3			291	//		OK	|	OK	| Extension box I/O  1 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO2_3			292	//		OK	|	OK	| Extension box I/O  2 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO3_3			293	//		OK	|	OK	| Extension box I/O  3 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO4_3			294	//		OK	|	OK	| Extension box I/O  4 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO5_3			295	//		OK	|	OK	| Extension box I/O  5 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO6_3			296	//		OK	|	OK	| Extension box I/O  6 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO7_3			297	//		OK	|	OK	| Extension box I/O  7 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO8_3			298	//		OK	|	OK	| Extension box I/O  8 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO9_3			299	//		OK	|	OK	| Extension box I/O  9 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO10_3			300	//		OK	|	OK	| Extension box I/O 10 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO11_3			301	//		OK	|	OK	| Extension box I/O 11 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO12_3			302	//		OK	|	OK	| Extension box I/O 12 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO13_3			303	//		OK	|	OK	| Extension box I/O 13 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO14_3			304	//		OK	|	OK	| Extension box I/O 14 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO15_3			305	//		OK	|	OK	| Extension box I/O 15 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_Ex_IO16_3			306	//		OK	|	OK	| Extension box I/O 16 output signal (Press -> Hi)
#define TI2_IO_JOBID_key_DispLED			311	//		*OK	|	*OK	| Front panel LED
#define TI2_IO_JOBID_key_OBJCMB				312	//		OK	|	OK	| 

#define TI2_IO_JOBID_key_SH_FL1_RISING		320	//		OK	|	OK	| FL1 Shtter rising			FL1 Shtter Open
#define TI2_IO_JOBID_key_SH_FL1_FALLING		321	//		OK	|	OK	| FL1 Shtter falling		FL1 Shtter Close
#define TI2_IO_JOBID_key_SH_FL2_RISING		322	//		OK	|	OK	| FL2 Shtter rising			FL2 Shtter Open
#define TI2_IO_JOBID_key_SH_FL2_FALLING		323	//		OK	|	OK	| FL2 Shtter falling		FL2 Shtter Close
#define TI2_IO_JOBID_key_SH1_RISING			324	//		OK	|	OK	| Shutter1 rising			Shtter1 Open
#define TI2_IO_JOBID_key_SH1_FALLING		325	//		OK	|	OK	| Shutter1 falling			Shtter1 Close
#define TI2_IO_JOBID_key_SH2_RISING			326	//		OK	|	OK	| Shutter2 rising			Shtter2 Open
#define TI2_IO_JOBID_key_SH2_FALLING		327	//		OK	|	OK	| Shutter2 falling			Shtter2 Close
#define TI2_IO_JOBID_key_LED_ON_RISING		328	//		OK	|	OK	| LED ON rising				LED ON
#define TI2_IO_JOBID_key_LED_ON_FALLING		329	//		OK	|	OK	| LED ON falling			LED OFF
#define TI2_IO_JOBID_key_MB1_RISING			330	//		OK	|	OK	| LAPP Main Branch1 rising	LAPP MB1 IN
#define TI2_IO_JOBID_key_MB1_FALLING		331	//		OK	|	OK	| LAPP Main Branch1 falling	LAPP MB1 OUT
#define TI2_IO_JOBID_key_MB2_RISING			332	//		OK	|	OK	| LAPP Main Branch2 rising	LAPP MB2 IN
#define TI2_IO_JOBID_key_MB2_FALLING		333	//		OK	|	OK	| LAPP Main Branch2 falling	LAPP MB2 OUT
#define TI2_IO_JOBID_key_SB__RISING			334	//		OK	|	OK	| LAPP Sub Branch rising	LAPP SB  IN
#define TI2_IO_JOBID_key_SB__FALLING		335	//		OK	|	OK	| LAPP Sub Branch falling	LAPP SB  OUT



#endif	 __NEW_MIC_SDK2_DEDICATEDCOMMAND_H_INCLUDED__

