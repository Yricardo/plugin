//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/appearancepanel/ListItemsDDSource.cpp $
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
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"
#include "K2Vector.tpp"

// ----- Interfaces -----

#include "IIntData.h"
#include "ITreeViewController.h"
#include "IWidgetParent.h"

// ----- Includes -----

#include "CDragDropSource.h"
#include "IntNodeID.h"

// ----- Utility files -----


// ----- ID.h files -----

#include "FormFieldUIID.h"


class ListItemsDDSource : public CDragDropSource
{
public:
	ListItemsDDSource(IPMUnknown *boss);
	virtual ~ListItemsDDSource();

	virtual bool16                DoAddDragContent(IDragDropController*);
};

// =============================================================================
// *** ListItemsDDSource impl ***
// -----------------------------------------------------------------------------

CREATE_PMINTERFACE(ListItemsDDSource, kListItemsDDSourceImpl)

ListItemsDDSource::ListItemsDDSource(IPMUnknown *boss)  :
CDragDropSource(boss)
{
} // end constructor

ListItemsDDSource::~ListItemsDDSource()
{
} // end destructor

// -----------------------------------------------------------------------------

bool16 ListItemsDDSource::DoAddDragContent(IDragDropController* controller)
{
	// Obtain a handler for our internal data flavor
	InterfacePtr<IDataExchangeHandler> ourHandler(controller->QueryHandler(kListItemsDragDropFlavor));

	// Don't promise anything if we couldn't get a handler
	if (!ourHandler)
		return kFalse;

	// Place the appropriate data into the handler
	InterfacePtr<IIntData> iIntData (ourHandler, IID_IINTDATA);
	if (iIntData)
	{
		//        Only allowing one selection at a time.
		InterfacePtr<IWidgetParent>	parent(this, UseDefaultIID());
		InterfacePtr<ITreeViewController> tvController((ITreeViewController*) parent->QueryParentFor(IID_ITREEVIEWCONTROLLER));

		NodeIDList selNodes;
		tvController->GetSelectedItems(selNodes);
		ASSERT(selNodes.size() == 1);

		TreeNodePtr<IntNodeID> selNodeID(selNodes[0]);  
		iIntData->Set(selNodeID->Get());
	}

	// Install our handler so we can fulfill promises we make below
	controller->SetSourceHandler(ourHandler);

	// Add a data item and promise the appropriate data flavors
	//        Note that in this case we promise only one since the internal flavor and external flavor are the same.
	InterfacePtr<IPMDataObject> item(controller->AddDragItem(1));
	PMFlavorFlags flavorFlags = 0;
	item->PromiseFlavor(kListItemsDragDropFlavor, flavorFlags);

	return kTrue;

}