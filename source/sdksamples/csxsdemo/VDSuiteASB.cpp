//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/csxsdemo/VDSuiteASB.cpp $
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
#include "ISelectionManager.h" // required by selection templates.
#include "ICommandSequence.h"

// General includes:
#include "CPMUnknown.h"
#include "SelectionASBTemplates.tpp"
#include "K2Vector.h"

// Project includes:
#include "VDID.h"
#include "IVDSuite.h"

class VDSuiteASB : public CPMUnknown<IVDSuite>
{
	public:
		VDSuiteASB(IPMUnknown* boss);
		virtual ~VDSuiteASB();	
		virtual ErrorCode GetTextFromSelectedFrame(const UIDRef &frameUIDRef, PMString &result);
};

CREATE_PMINTERFACE(VDSuiteASB, kVDSuiteASBImpl)

VDSuiteASB::VDSuiteASB(IPMUnknown* boss) : CPMUnknown<IVDSuite>(boss)
{
}

VDSuiteASB::~VDSuiteASB()
{
}

ErrorCode VDSuiteASB::GetTextFromSelectedFrame(const UIDRef &frameUIDRef, PMString &result)
{
	return (Process(make_functor(&IVDSuite::GetTextFromSelectedFrame, frameUIDRef, result), this));
}