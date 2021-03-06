//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/wrccomposer/WRCParagraphComposerServiceProvider.cpp $
//  
//  Owner: Prashant Dahiya
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

// General includes:
#include "CServiceProvider.h"	// for IK2ServiceProvider
#include "CPMUnknown.h"
#include "TextID.h"
#include "K2Vector.h"

// Project includes:
#include "wrcID.h"


class WRCParagraphComposerServiceProvider : public CServiceProvider
{
public:
	WRCParagraphComposerServiceProvider(IPMUnknown * boss) : CServiceProvider(boss)
	{
	}

	virtual void GetName(PMString* pName)
	{
		pName->SetKey(kWRCParagraphComposerNameStringKey);
	}

	virtual ServiceID GetServiceID(void)
	{
		return kTextEngineService;
	}

	virtual bool16 HasMultipleIDs(void) const
	{
		return kFalse;
	}

	virtual void GetServiceIDs(K2Vector<ServiceID>& serviceIDs)
	{
		serviceIDs.push_back(kTextEngineService);
	}

	/** @return kFalse, the composer is not the default IParagraphComposer service.
	*/
	virtual bool16 IsDefaultServiceProvider(void)
	{
		return kFalse;
	}

	/** @return kInstancePerSession.
	*/
	virtual IK2ServiceProvider::InstancePerX GetInstantiationPolicy(void)
	{
		return IK2ServiceProvider::kInstancePerSession;
	}

	virtual IPlugIn::ThreadingPolicy GetThreadingPolicy() const 
	{ 
		return IPlugIn::kMultipleThreads; 
	}
};

/* CREATE_PMINTERFACE
 Binds the C++ implementation class onto its ImplementationID making the C++ code callable by the application.
*/
CREATE_PMINTERFACE(WRCParagraphComposerServiceProvider, kWRCParagraphComposerServiceProviderImpl)

// End of WRCParagraphComposerServiceProvider.cpp

	
