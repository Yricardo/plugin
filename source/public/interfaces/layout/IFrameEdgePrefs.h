//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IFrameEdgePrefs.h $
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
#ifndef __IFRAMEEDGEPREFS__
#define __IFRAMEEDGEPREFS__

#include "IPMUnknown.h"

class IFrameEdgePrefs : public IPMUnknown
{
public:	
	// Are frame edges shown or hidden by default
	virtual void SetFrameEdgeShown(const bool16 bShown) = 0;
	virtual const bool16 GetFrameEdgeShown() = 0;
};

#endif
