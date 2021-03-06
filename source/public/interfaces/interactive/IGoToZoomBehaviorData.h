//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/interactive/IGoToZoomBehaviorData.h $
//  
//  Owner: Michael Brubidge
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
#ifndef __IGoToZoomBehaviorData_h__
#define __IGoToZoomBehaviorData_h__

#include "IBehaviorData.h"

//========================================================================================
// CLASS IGoToZoomBehaviorData
//========================================================================================

/** Data interface for Go To Zoom Behavior */
class IGoToZoomBehaviorData : public IBehaviorData
{
public:
	typedef int32 Zoom;
	enum ZoomConstants { kInherit = 0, kActualSize, kFitInWindow, kFitWidth, kFitVisible };
	
	/** Set the zoom type ( kInherit , kActualSize, kFitInWindow, kFitWidth, or kFitVisible ) */
	virtual void		SetZoom(const Zoom& view) = 0;

	/** Get the zoom type ( kInherit , kActualSize, kFitInWindow, kFitWidth, or kFitVisible ) */
	virtual Zoom		GetZoom() const = 0;
};

#endif // __IGoToZoomBehaviorData_h__
