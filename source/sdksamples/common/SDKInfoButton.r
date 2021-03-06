//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/common/SDKInfoButton.r $
//  
//  Owner: Adobe Developer Technologies
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2014/03/11 10:35:53 $
//  
//  $Revision: #2 $
//  
//  $Change: 871398 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//  
//  This is the resource file that provides the Rez declarations for the Adobe
//  info button icon. 
//  
//========================================================================================

#include "SDKDef.h"

#ifdef MACINTOSH
// Macintosh specific resources: ---------------------------------------------------------

	#include <CoreServices/CoreServices.r>

	data 'ics#' (kSDKDefIconInfoResourceID, "iconInfo")
	{
		$"0FE0 1C78 301C 600C C186 C006 C786 C186"            /* .�.x0.`.���.ǆ�� */
		$"C186 C186 618C 701C 3FF8 0FE0 0000 0000"            /* ����a�p.?�.�.... */
		$"0FE0 1FF8 3FFC 7FFC FFFE FFFE FFFE FFFE"            /* .�.�?�.��������� */
		$"FFFE FFFE 7FFC 7FFC 3FF8 0FE0 0000 0000"            /* ����.�.�?�.�.... */
	};

	data 'icm#' (kSDKDefIconInfoResourceID, "iconinfo")
	{
		$"0FE0 1C78 301C 600C C186 C006 C786 C186"            /* .�.x0.`.���.ǆ�� */
		$"C186 C186 618C 701C 0FE0 1FF8 3FFC 7FFC"            /* ����a�p..�.�?�.� */
		$"FFFE FFFE FFFE FFFE FFFE FFFE 7FFC 7FFC"            /* ������������.�.� */
	};

	data 'icm4' (kSDKDefIconInfoResourceID, "iconinfo")
	{
		$"CCCD EEFF FEED CCC0 CCDE EEDD DEEF ECC0"            /* ���������������� */
		$"CDEE DCCC CCDE FEC0 DEED CCCD CCCD EFD0"            /* ���������������� */
		$"EEDC CCCF ECCC DFE0 FEDC CCCD CCCC DEF0"            /* ���������������� */
		$"FEDC CEFF ECCC DEF0 FEDC CCDF ECCC DEF0"            /* ���������������� */
		$"FEDC CCDF ECCC DEF0 EEDD CCDF ECCD DEE0"            /* ���������������� */
		$"DEED DCDF ECDD EFD0 CEEE DDDD DDDE FEC0"            /* ���������������� */
	};

	data 'icm8' (kSDKDefIconInfoResourceID, "iconinfo")
	{
		$"2B2B 2B56 FBFB FFFF FFFF FB56 2B2B 2B00"            /* +++V�������V+++. */
		$"2B2B F9FB FFFB F9F9 F9FB FBFF FB2B 2B00"            /* ++�����������++. */
		$"2BF9 FFFB 562B 2B2B 2B2B 56FB FFFB 2B00"            /* +���V+++++V���+. */
		$"56FB FB56 2B2B 2BF9 F82B 2B56 FBFF 5600"            /* V��V+++��++V��V. */
		$"FBFF F92B 2B2B F8FF FB2B 2B2B F9FF FB00"            /* ���+++���+++���. */
		$"FFFB F92B 2B2B 2B56 F82B 2B2B F9FB FF00"            /* ���++++V�+++���. */
		$"FFFB 562B 2BFB FFFF FB2B 2B2B 56FB FF00"            /* ��V++����+++V��. */
		$"FFFB 562B 2B2B 56FF FB2B 2B2B 56FB FF00"            /* ��V+++V��+++V��. */
		$"FFFB F92B 2B2B 56FF FB2B 2B2B F9FB FF00"            /* ���+++V��+++���. */
		$"FBFB F956 2B2B 56FF FB2B 2B56 F9FF FB00"            /* ���V++V��++V���. */
		$"56FF FBF9 562B 56FF FB2B 56F9 FBFF 5600"            /* V���V+V��+V���V. */
		$"2BFB FFFB F956 5656 5656 F9FB FFFB 2B00"            /* +����VVVVV����+. */
	};

	data 'ics4' (kSDKDefIconInfoResourceID, "iconinfo")
	{
		$"000D EEFF FEED 0000 00DE EEDD DEEF E000"            /* .�����...������. */
		$"0DEE DCCC CCDE FE00 DEED CCCD CCCD EFD0"            /* �������.�������� */
		$"EEDC CCCF ECCC DFE0 FEDC CCCD CCCC DEF0"            /* ���������������� */
		$"FEDC CEFF ECCC DEF0 FEDC CCDF ECCC DEF0"            /* ���������������� */
		$"FEDC CCDF ECCC DEF0 EEDD CCDF ECCD DFE0"            /* ���������������� */
		$"DEED DCDF ECDD EFD0 0EEE DDDD DDDE FE00"            /* ��������.������. */
		$"00EE EEEE EEEF E000 000D EEFF FFED 0000"            /* .������..�����.. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
	};

	data 'ics8' (kSDKDefIconInfoResourceID, "iconinfo")
	{
		$"0000 0056 FBFB FFFF FFFB FB56 0000 0000"            /* ...V�������V.... */
		$"0000 F9FB FBFB F9F9 F9FB FBFF FB00 0000"            /* ..�����������... */
		$"00F9 FBFB 562B 2B2B 2B2B 56FB FFFB 0000"            /* .���V+++++V���.. */
		$"56FB FB56 2B2B 2BF9 F62B 2B56 FBFF 5600"            /* V��V+++��++V��V. */
		$"FBFB F92B 2B2B F8FF FB2B 2B2B F9FF FB00"            /* ���+++���+++���. */
		$"FFFB F92B 2B2B 2B56 F82B 2B2B F9FB FF00"            /* ���++++V�+++���. */
		$"FFFB 562B 2BFB FFFF FB2B 2B2B 56FB FF00"            /* ��V++����+++V��. */
		$"FFFB 562B 2B2B 56FF FB2B 2B2B 56FB FF00"            /* ��V+++V��+++V��. */
		$"FFFB F92B 2B2B 56FF FB2B 2B2B F9FB FF00"            /* ���+++V��+++���. */
		$"FBFB F956 2B2B 56FF FB2B 2B56 F9FF FB00"            /* ���V++V��++V���. */
		$"56FB FBF9 562B 56FF FB2B 56F9 FBFF 5600"            /* V���V+V��+V���V. */
		$"00FB FBFB F956 5656 5656 F9FB FFFB 0000"            /* .����VVVVV����.. */
		$"0000 FBFB FBFB FBFB FBFB FBFF FB00 0000"            /* ..�����������... */
		$"0000 0056 FBFB FFFF FFFF FB56 0000 0000"            /* ...V�������V.... */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
	};

	data 'icl8' (kSDKDefIconInfoResourceID, "iconinfo")
	{
		$"2B2B 2B56 FBFF FFFF FFFF FB56 2B2B 2B00"            /* +++V�������V+++. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"2B2B 56FF FBFB F9F9 F9FB FBFF 562B 2B00"            /* ++V���������V++. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"2B56 FFFB 562B 2BF8 F62B 56FB FF56 2B00"            /* +V��V++��+V��V+. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"56FF FB56 2B2B F8FF FB2B 2B56 FBFF 5600"            /* V��V++���++V��V. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"FBFF F92B 2B2B 2B56 F82B 2B2B F9FF FB00"            /* ���++++V�+++���. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"FFFB F92B 2BFB FFFF FB2B 2B2B F9FB FF00"            /* ���++����+++���. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"FFFB 562B 2B2B 56FF FB2B 2B2B 56FB FF00"            /* ��V+++V��+++V��. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"FFFB 562B 2B2B 56FF FB2B 2B2B 56FB FF00"            /* ��V+++V��+++V��. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"FFFB F92B 2B2B 56FF FB2B 2B2B F9FB FF00"            /* ���+++V��+++���. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"FBFF F956 2B2B 56FF FB2B 2B56 F9FF FB00"            /* ���V++V��++V���. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"56FF FBF9 562B 2B2B 2B2B 56F9 FBFF 5600"            /* V���V+++++V���V. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"2B56 FFFB F956 5656 5656 F9FB FF56 2B00"            /* +V���VVVVV���V+. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"2B2B 56FF FBFB FBFB FBFB FBFF 562B 2B00"            /* ++V���������V++. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"2B2B 2B56 FBFF FFFF FFFF FB56 2B2B 2B00"            /* +++V�������V+++. */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
	};

	data 'icl4' (kSDKDefIconInfoResourceID, "iconinfo")
	{
		$"CCCD EFFF FFED CCC0 0000 0000 0000 0000"            /* ��������........ */
		$"CCDF EEDD DEEF DCC0 0000 0000 0000 0000"            /* ��������........ */
		$"CDFE DCCC CCDE FDC0 0000 0000 0000 0000"            /* ��������........ */
		$"DFED CCCF ECCD EFD0 0000 0000 0000 0000"            /* ��������........ */
		$"EFDC CCCD CCCC DFE0 0000 0000 0000 0000"            /* ��������........ */
		$"FEDC CEFF ECCC DEF0 0000 0000 0000 0000"            /* ��������........ */
		$"FEDC CCDF ECCC DEF0 0000 0000 0000 0000"            /* ��������........ */
		$"FEDC CCDF ECCC DEF0 0000 0000 0000 0000"            /* ��������........ */
		$"FEDC CCDF ECCC DEF0 0000 0000 0000 0000"            /* ��������........ */
		$"EFDD CCDF ECCD DFE0 0000 0000 0000 0000"            /* ��������........ */
		$"DFED DCCC CCDD EFD0 0000 0000 0000 0000"            /* ��������........ */
		$"CDFE DDDD DDDE FDC0 0000 0000 0000 0000"            /* ��������........ */
		$"CCDF EEEE EEEF DCC0 0000 0000 0000 0000"            /* ��������........ */
		$"CCCD EFFF FFED CCC0 0000 0000 0000 0000"            /* ��������........ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
	};

	data 'ICN#' (kSDKDefIconInfoResourceID, "iconinfo")
	{
		$"0FE0 0000 1C70 0000 3018 0000 618C 0000"            /* .�...p..0...a�.. */
		$"C006 0000 C786 0000 C186 0000 C186 0000"            /* �...ǆ..��..��.. */
		$"C186 0000 C186 0000 600C 0000 3018 0000"            /* ��..��..`...0... */
		$"1FF0 0000 0FE0 0000 0000 0000 0000 0000"            /* .�...�.......... */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"1FF0 0000 3FF8 0000 7FFC 0000 FFFE 0000"            /* .�..?�...�..��.. */
		$"FFFE 0000 FFFE 0000 FFFE 0000 FFFE 0000"            /* ��..��..��..��.. */
		$"FFFE 0000 FFFE 0000 FFFE 0000 7FFC 0000"            /* ��..��..��...�.. */
		$"3FF8 0000 1FF0 0000 0000 0000 0000 0000"            /* ?�...�.......... */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
		$"0000 0000 0000 0000 0000 0000 0000 0000"            /* ................ */
	};

#endif // else MACINTOSH

// End, Info.r.

