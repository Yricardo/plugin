//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/msopanel/MSOPanelStateDNDHandler.cpp $
//  
//  Owner: Michele Stutzman
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

// ----- Interfaces -----


// ----- Includes -----

#include "CDataExchangeHandlerFor.h"
#include "PMFlavorTypes.h"

// ----- Utility files -----


// ----- ID.h files -----

#include "FormFieldUIID.h"


class MSOPanelStateDNDHandler : public CDataExchangeHandlerFor
{
public:
	MSOPanelStateDNDHandler(IPMUnknown *boss) : CDataExchangeHandlerFor(boss) {}
	virtual	~MSOPanelStateDNDHandler() {}

	virtual	PMFlavor 	GetFlavor() const { return kMSOStateDragDropFlavor; }
};

// =============================================================================
// *** MSOPanelStateDNDHandler impl ***
// -----------------------------------------------------------------------------

CREATE_PMINTERFACE(MSOPanelStateDNDHandler, kMSOPanelStateDNDHandlerImpl)