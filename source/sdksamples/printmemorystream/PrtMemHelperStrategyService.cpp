//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/printmemorystream/PrtMemHelperStrategyService.cpp $
//  
//  Owner: Adobe Developer Technologies
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

// Implementation includes:
#include "CServiceProvider.h"
#include "PrintID.h"

// Project includes:
#include "PrtMemID.h"


/** Registers a service provider supporting kPrintDataHelperStrategyService.
 * 	@ingroup printmemorystream
*/
class PrtMemHelperStrategyService : public CServiceProvider
{
public:
	/** Constructor
	 * 	@param boss interface ptr from boss object on which this interface is aggregated.
	*/
	PrtMemHelperStrategyService(IPMUnknown * boss)
	: CServiceProvider(boss){}

	/**	See IK2ServiceProvider::GetName
	 */
	virtual void GetName(PMString* pName)
	{
		if (pName)
		{
			pName->SetKey(kPrtMemPluginName":PrintDataHelperStrategyService");
		}
	}

	/**	See IK2ServiceProvider::GetServiceID)
	 */
	virtual ServiceID GetServiceID(void)
	{
		return kPrintDataHelperStrategyService;
	}

	/**	See IK2ServiceProvider::IsDefaultServiceProvider
	 */
	virtual bool16 IsDefaultServiceProvider(void)
	{
		return kFalse;
	}
};


// CREATE_PMINTERFACE
//	Binds the C++ implementation class onto its ImplementationID 
// 	making the C++ code callable by the application.
CREATE_PMINTERFACE(PrtMemHelperStrategyService, kPrtMemHelperStrategyServiceImpl)

// End, PrtMemHelperStrategyService.cpp.
