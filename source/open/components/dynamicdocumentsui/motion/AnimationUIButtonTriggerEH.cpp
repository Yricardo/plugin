//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/dynamicdocumentsui/motion/AnimationUIButtonTriggerEH.cpp $
//  
//  Owner: Frits Habermann
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
//  distribution of it requires the prior written permission of Adobe..
//  
//  
//  
//========================================================================================

#include "VCPluginHeaders.h"

// ----- Interfaces -----

#include "IApplication.h"
#include "ISession.h"
#include "IControlView.h"
#include "ITrackerFactory.h"
#include "ITracker.h"
#include "ILayoutUIUtils.h"

// ----- Includes -----

#include "DVStdButtonEH.h"
#include "DynamicDocumentsUIID.h"

class AnimationUIButtonTriggerEH : public DVStdButtonEH 
{
	typedef DVStdButtonEH  inherited;
public:
	AnimationUIButtonTriggerEH (IPMUnknown* boss) : DVStdButtonEH(boss) {}
	virtual ~AnimationUIButtonTriggerEH () {}

	virtual bool16 LButtonDn(IEvent* e)
	{
		InterfacePtr<IControlView> iFrontView(Utils<ILayoutUIUtils>()->QueryFrontView()); 
		 
		InterfacePtr<ITrackerFactory> iTrackFactory (GetExecutionContextSession(), UseDefaultIID()); 
		ITracker* theTracker = iTrackFactory->QueryTracker (kAnimationUIButtonTriggerWidgetBoss, kAnimationUIButtonTriggerWidgetBoss);
		
		if (theTracker && iFrontView)
		{
			//	CTrackerEventHandler handles tracker release in its LButtonUp method.
			theTracker->SetupTracker(iFrontView); 
			theTracker->BeginTracking(e); 
		} 
		return kTrue;
	}
};

CREATE_PMINTERFACE(AnimationUIButtonTriggerEH, kAnimationUIButtonTriggerEHImpl)
