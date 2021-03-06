//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IAlignContentInFrameCmdData.h $
//  
//  Owner: Lonnie Millett
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
#ifndef __IALIGNCONTENTINFRAMECMDDATA__
#define __IALIGNCONTENTINFRAMECMDDATA__

#include "IPMUnknown.h"
#include "GenericID.h"
#include "PMRect.h"

class IAlignContentInFrameCmdData : public IPMUnknown
{
	public:
		enum {kAlignLeftTop = 0, 
			kAlignTopCenter, 
			kAlignRightTop, 
			kAlignLeftCenter,
			kAlignCenter,
			kAlignRightCenter,
			kAlignLeftBottom,
			kAlignBottomCenter,
			kAlignRightBottom};
		
		virtual void Set(int32 alignment, const PMRect& cropAmts = kZeroRect) = 0;
		virtual int32 GetAlignment() const = 0;
		virtual void GetCropAmounts(PMRect& cropAmts) = 0;
};


#endif

