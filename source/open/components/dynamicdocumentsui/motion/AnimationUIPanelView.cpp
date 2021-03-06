//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/dynamicdocumentsui/motion/AnimationUIPanelView.cpp $
//  
//  Owner: SusanCL
//  
//  $Author: gmatthew $
//  
//  $DateTime: 2013/06/18 15:15:50 $
//  
//  $Revision: #1 $
//  
//  $Change: 853167 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "DVPalettePanelView.h"
#include "DynamicDocumentsUIDefs.h"

#include "DynamicDocumentsUIID.h"

class AnimationUIPanelView : public DVPalettePanelView
{
public:
	AnimationUIPanelView(IPMUnknown *boss) : DVPalettePanelView (boss) {}
	~AnimationUIPanelView() {}

protected:
	virtual PMPoint ConstrainDimensions(const PMPoint& dimensions) const
	{
		PMPoint constrainedDim(dimensions);

		if(constrainedDim.X() < kAnimationUIPanelMinWidth  )
			constrainedDim.X(kAnimationUIPanelMinWidth);

		if (constrainedDim.Y() < kAnimationUIPanelMinHeight)
			constrainedDim.Y(kAnimationUIPanelMinHeight);

		return constrainedDim;
	}
};

CREATE_PERSIST_PMINTERFACE (AnimationUIPanelView, kAnimationUIPanelViewImpl)


