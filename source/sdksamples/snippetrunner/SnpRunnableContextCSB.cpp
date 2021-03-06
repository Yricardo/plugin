//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/snippetrunner/SnpRunnableContextCSB.cpp $
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

// Interface includes:
#include "ISession.h"
#include "IActiveContext.h"

// General includes:
#include "CPMUnknown.h"

// Project includes:
#include "SnipRunID.h"
#include "ISnpRunnableContext.h"

/** Implementation of ISnpRunnableContext.

	@ingroup snippetrunner
	
	@see ISnpRunnableContext
	@see IActiveContext
 */
class SnpRunnableContextSuiteCSB : public CPMUnknown<ISnpRunnableContext>
{
	public:
		/** Constructor.
		*/
		SnpRunnableContextSuiteCSB(IPMUnknown* boss);

		/** Destructor.
		*/
		virtual ~SnpRunnableContextSuiteCSB();	

	public:
		/** See ISnpRunnableContext::GetActiveContext.
		*/
		virtual IActiveContext* GetActiveContext() const;
};

/*
*/
CREATE_PMINTERFACE(SnpRunnableContextSuiteCSB, kSnpRunnableContextCSBImpl)

/*
*/
SnpRunnableContextSuiteCSB::SnpRunnableContextSuiteCSB(IPMUnknown* boss) : 
	CPMUnknown<ISnpRunnableContext>(boss)
{
}

/*
*/
SnpRunnableContextSuiteCSB::~SnpRunnableContextSuiteCSB()
{
}

/*
*/
IActiveContext* SnpRunnableContextSuiteCSB::GetActiveContext() const
{
	return GetExecutionContextSession()->GetActiveContext();
}

// End, SnpRunnableContextSuiteCSB.cpp.





