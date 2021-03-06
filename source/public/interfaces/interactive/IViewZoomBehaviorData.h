//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/interactive/IViewZoomBehaviorData.h $
//  
//  Owner: Steve Dowd
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
#ifndef __IViewZoomBehaviorData_h__
#define __IViewZoomBehaviorData_h__

#include "IViewZoomBehaviorData.h"
#include "IBehaviorData.h"
#include "BehaviorID.h"

class IDocument;

//========================================================================================
// CLASS IViewZoomBehaviorData
//========================================================================================

/** Data interface for View Zoom Behavior */
class IViewZoomBehaviorData : public IBehaviorData
{
public:
	typedef int32 ViewZoom;
	enum ViewZoomConstants {	kFullScreen = 0,
							kZoomViewIn,
							kZoomViewOut,
							kFitInWindow,
							kActualSize,
							kFitWidth,
							kFitVisible,
							kReflow_deprecated,
							kSinglePage,
							kContinuous,
							kContinuousFacing,
							kRotateClockwise_deprecated,
							kRotateCounterClockwise_deprecated
						};

	virtual void		SetViewZoom(const ViewZoom& viewZoom) = 0;
	virtual ViewZoom	GetViewZoom() const = 0;
};

#endif // __IViewZoomBehaviorData_h__
