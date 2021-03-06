//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/widgetbin/dialogs/AbstractDialogObserver.cpp $
//  
//  Owner: Michael Burbidge
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

#include "VCWidgetHeaders.h"

#include "AbstractDialogObserver.h"

// ----- Interface Includes -----
#include "IPanelControlData.h"
#include "ISubject.h"

// ----- Implementation Includes -----
#ifdef DEBUG
#include "DebugClassUtils.h"
#endif

//========================================================================================
// CLASS AbstractDialogObserver
//========================================================================================

AbstractDialogObserver::AbstractDialogObserver(IPMUnknown *boss) :
	CObserver(boss)
{
}

AbstractDialogObserver::~AbstractDialogObserver()
{
}

void AbstractDialogObserver::AttachToWidget(const WidgetID& widgetId, const PMIID& iidOfDataToObserve, IPanelControlData* panel)
{
	ASSERT(widgetId != kInvalidWidgetID);
	ASSERT(panel != nil);

	IControlView * view = panel->FindWidget(widgetId);
	if (view)
	{
		InterfacePtr<ISubject> subject(view, IID_ISUBJECT);
		if (subject && !subject->IsAttached(this, iidOfDataToObserve))
		{
			subject->AttachObserver(this, iidOfDataToObserve);
		}
	}
}

void AbstractDialogObserver::DetachFromWidget(const WidgetID& widgetId, const PMIID& iidOfDataToUnobserve, IPanelControlData* panel)
{
	ASSERT(widgetId != kInvalidWidgetID);
	ASSERT(panel != nil);

	IControlView * view = panel->FindWidget(widgetId);
	if (view)
	{
		InterfacePtr<ISubject> subject(view, IID_ISUBJECT);
		if (subject && subject->IsAttached(this, iidOfDataToUnobserve))
		{
			subject->DetachObserver(this, iidOfDataToUnobserve);
		}
	}
}
