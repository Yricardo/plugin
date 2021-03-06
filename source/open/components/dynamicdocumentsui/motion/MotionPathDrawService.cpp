//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/dynamicdocumentsui/motion/MotionPathDrawService.cpp $
//  
//  Owner: Richard Rodseth
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

#include "DynamicDocumentsUIID.h"			// for constants
#include "GraphicsID.h"						// for kDrawEventService
#include "CServiceProvider.h"				// for IK2ServiceProvider

//========================================================================================
// Class MotionPathDrawService
//========================================================================================

class MotionPathDrawService : public CServiceProvider
{
public:
	MotionPathDrawService(IPMUnknown *boss) : CServiceProvider (boss) {}
	virtual ~MotionPathDrawService() {}

	virtual void GetName(PMString * pName)
	{
		pName->SetCString("MotionPathDrawService\0");
	}
	virtual ServiceID GetServiceID()
	{
		return kDrawEventService;
	}
	virtual bool16 IsDefaultServiceProvider()
	{
		return kFalse;
	}
	virtual InstancePerX GetInstantiationPolicy()
	{
		return IK2ServiceProvider::kInstancePerSession;
	}
	virtual IPlugIn::ThreadingPolicy GetThreadingPolicy() const 
		{ return IPlugIn::kMultipleThreads; }
};

CREATE_PMINTERFACE(MotionPathDrawService, kMotionPathDrawServiceImpl)
