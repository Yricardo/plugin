//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/dynamicdocumentsui/TimingPanelDataExchangeHandler.cpp $
//  
//  Owner: Yeming Liu
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
//  
//  Comments: Implementation for object style z-order exchange handler
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// ----- Interface files -----

// ----- Include files -----

#include "CDataExchangeHandlerFor.h"

// ----- Utilitity files -----

// ----- ID files -----

#include "DynamicDocumentsUIID.h"

//========================================================================
// Class TimingPanelDataExchangeHandler
//========================================================================

class TimingPanelDataExchangeHandler : public CDataExchangeHandlerFor
{
	public:
				TimingPanelDataExchangeHandler(IPMUnknown *boss) : CDataExchangeHandlerFor(boss) {}
		virtual	~TimingPanelDataExchangeHandler() {}

		virtual	PMFlavor 	GetFlavor() const { return kPMTimingPanelDragDropFlavor; }
};

CREATE_PMINTERFACE(TimingPanelDataExchangeHandler, kTimingPanelDataExchangeHandlerImpl)
