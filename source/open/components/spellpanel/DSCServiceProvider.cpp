//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/spellpanel/DSCServiceProvider.cpp $
//  
//  Owner: Heath Horton
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
//  
//  Proj:	Spelling Panel.�
//  
//========================================================================================

#include "VCPlugInHeaders.h"		// must be the first header file to include

#include "IObserver.h"

#include "CServiceProvider.h"
#include "SpellPanelID.h"
#include "ILayoutUIUtils.h"
#include "Trace.h"

//----------------------------------------------------------------------------------------
// Class DynamicSpellCheckServiceProvider
//----------------------------------------------------------------------------------------
class DynamicSpellCheckServiceProvider : public CServiceProvider
{
public:
    DynamicSpellCheckServiceProvider(IPMUnknown * boss);

	virtual	void 		GetName(PMString * pName);
    virtual	ServiceID 	GetServiceID();
	virtual	bool16 		IsDefaultServiceProvider();
	virtual	IK2ServiceProvider::InstancePerX GetInstantiationPolicy();
};

CREATE_PMINTERFACE(DynamicSpellCheckServiceProvider, kDynamicSpellCheckServiceProviderImpl)


DynamicSpellCheckServiceProvider::DynamicSpellCheckServiceProvider(IPMUnknown *boss) :
   CServiceProvider(boss)
{}

IK2ServiceProvider::InstancePerX DynamicSpellCheckServiceProvider::GetInstantiationPolicy()
{
   return IK2ServiceProvider::kInstancePerSessionPreload;
}

bool16 DynamicSpellCheckServiceProvider::IsDefaultServiceProvider()
{
   return kFalse;
}

void DynamicSpellCheckServiceProvider::GetName(PMString* pName)
{
   pName->SetCString("DynamicSpellCheckStartupShutdownService\0");
}

ServiceID DynamicSpellCheckServiceProvider::GetServiceID()
{
   return kAppLazyStartupShutdownService;
}

