//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IXPSetVignetteCmdData.h $
//  
//  Owner: Matt Phillips
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
#ifndef __IXPSetVignetteCmdData__
#define __IXPSetVignetteCmdData__

#include "IPMUnknown.h"
#include "XPID.h"

#include "GraphicTypes.h"

class VignetteData
{
public:
	VignetteData() : 
			fMode (kVTMNone),
			fWidth (36.),
			fInnerOpacity (100.),
			fOuterOpacity (0.),
			fCorners (kVTCSharp),
			fNoise (0.)
			{}
	
	PMVignetteMode		fMode;
	PMReal				fWidth;
	PMReal				fInnerOpacity;
	PMReal				fOuterOpacity;
	PMVignetteCorners	fCorners;
	PMReal				fNoise;
};

class IXPSetVignetteCmdData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IXPSETVIGNETTECMDDATA };
		
		VignetteData	fData;
		int32			fSetMode,
						fSetWidth,
						fSetInnerOpacity,
						fSetOuterOpacity,
						fSetCorners,
						fSetNoise;
};

#endif