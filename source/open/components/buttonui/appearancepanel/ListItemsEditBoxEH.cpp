//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/appearancepanel/ListItemsEditBoxEH.cpp $
//  
//  Owner: Reena Agrawal
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

// ----- Interfaces -----

#include "IBoolData.h"
#include "IControlView.h"
#include "IEvent.h"
#include "ITreeViewController.h"
#include "IWidgetUtils.h"

// ----- Includes -----

#include "KeyboardDefs.h"
#include "CIDEditBoxEventHandler.h"
#include "Utils.h"

// ----- ID.h files -----

#include "FormFieldUIID.h"


class ListItemsEditBoxEH : public CIDEditBoxEventHandler
{
	typedef CIDEditBoxEventHandler Inherited;
public:

	ListItemsEditBoxEH(IPMUnknown *boss) : Inherited(boss) {}
	virtual ~ListItemsEditBoxEH() {}

	virtual bool16 KeyDown(IEvent* e);
};

// =============================================================================
// *** ListItemsEditBoxEH impl ***
// -----------------------------------------------------------------------------

CREATE_PMINTERFACE (ListItemsEditBoxEH, kListItemsEditBoxEHImpl)

// =============================================================================
// *** ListItemsEditBoxEH::KeyDown ***
// -----------------------------------------------------------------------------

bool16 ListItemsEditBoxEH::KeyDown(IEvent* e)
{
	bool16 isEnterKeyDown = kFalse;

	const VirtualKey vKey = e->GetVirtualKey();
	if( vKey == kVirtualReturnKey || vKey == kVirtualEnterKey)
		isEnterKeyDown = kTrue;

	InterfacePtr<IBoolData> iEnterKeyDown( this, IID_IBOOLDATA );
	iEnterKeyDown->Set(isEnterKeyDown);

	return Inherited::KeyDown(e);
}
