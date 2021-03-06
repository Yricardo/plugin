//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IAlignCmdData.h $
//  
//  Owner: psorrick
//  
//  $Author: gmatthew $
//  
//  $DateTime: 2013/06/18 15:15:50 $
//  
//  $Revision: #1 $
//  
//  $Change: 853167 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __ALIGNCMDDATA__
#define __ALIGNCMDDATA__

typedef enum
{
	kFirstAlignStandard = 0,
	kHAlignLeft		= kFirstAlignStandard,
	kHAlignCenter	= 1,
	kHAlignRight	= 2,
	kVAlignTop		= 3,
	kVAlignCenter	= 4,
	kVAlignBottom	= 5,
	kLastAlignStandard = kVAlignBottom,
	
	kFirstKeyObjectAlign	= 6,
	kHAlignKeyObjectLeft	= kFirstKeyObjectAlign,
	kHAlignKeyObjectCenter	= 7,
	kHAlignKeyObjectRight	= 8,
	kVAlignKeyObjectTop		= 9,
	kVAlignKeyObjectCenter	= 10,
	kVAlignKeyObjectBottom	= 11,
	kLastKeyObjectAlign		= kVAlignKeyObjectBottom,

	kFirstAlignRect = 12,
	kHPageAlignLeft 	= kFirstAlignRect,
	kHPageAlignCenter	= 13,
	kHPageAlignRight	= 14,
	kVPageAlignTop		= 15,
	kVPageAlignCenter	= 16,
	kVPageAlignBottom	= 17,
	
	kHSpreadAlignLeft 	= 18,
	kHSpreadAlignCenter	= 19,
	kHSpreadAlignRight	= 20,
	kVSpreadAlignTop	= 21,
	kVSpreadAlignCenter	= 22,
	kVSpreadAlignBottom	= 23,
	
	kHMarginAlignLeft 	= 24,
	kHMarginAlignCenter	= 25,
	kHMarginAlignRight	= 26,
	kVMarginAlignTop	= 27,
	kVMarginAlignCenter	= 28,
	kVMarginAlignBottom	= 29,	
	kLastAlignRect	= kVMarginAlignBottom

} AlignType; 

#endif	// __ALIGNCMDDATA__
