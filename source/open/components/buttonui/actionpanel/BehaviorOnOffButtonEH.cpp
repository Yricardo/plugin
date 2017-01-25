//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/actionpanel/BehaviorOnOffButtonEH.cpp $
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

#include "VCPlugInHeaders.h"

#include "BehaviorUIID.h"
#include "DVTriStateControlEH.h"

//========================================================================================
// CLASS BehaviorOnOffButtonEventHandler
//========================================================================================

class BehaviorOnOffButtonEventHandler : public DVTriStateControlEH
{
public:
	typedef DVTriStateControlEH inherited;

	BehaviorOnOffButtonEventHandler(IPMUnknown *boss);
	virtual ~BehaviorOnOffButtonEventHandler();

	virtual bool16 CanHaveKeyFocus() const { return kFalse; }
};

//========================================================================================
// IMPLEMENTATION BehaviorOnOffButtonEventHandler
//========================================================================================

CREATE_PMINTERFACE(BehaviorOnOffButtonEventHandler, kBehaviorOnOffButtonEventHandlerImpl)

BehaviorOnOffButtonEventHandler::BehaviorOnOffButtonEventHandler(IPMUnknown *boss) :
	inherited(boss)
{
}

BehaviorOnOffButtonEventHandler::~BehaviorOnOffButtonEventHandler()
{
}