//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/layerpanel/LayerNameTextValidation.cpp $
//  
//  Owner: Matt joss
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

#include "CTextDataValidation.h"


#include "ITextControlData.h"
#include "IPanelControlData.h"
#include "LayerTreeUIDNodeID.h"
#include "LayerPanelUtils.h"
#include "IDocumentLayer.h"
#include "IDocument.h"

#include "LayerPanelID.h"

//----------------------------------------------------------------------------------------
// LayerNameTextValidation constructor
//----------------------------------------------------------------------------------------
class LayerNameTextValidation : public CTextDataValidation
{
public:
	LayerNameTextValidation(IPMUnknown *boss);
	~LayerNameTextValidation();
	
	virtual bool16		IsEntryLegal( );
	virtual PMString	GetErrorString( );

};


CREATE_PERSIST_PMINTERFACE(LayerNameTextValidation, kLayerNameTextValidationImpl)


//----------------------------------------------------------------------------------------
// LayerNameTextValidation constructor 
//----------------------------------------------------------------------------------------
LayerNameTextValidation::LayerNameTextValidation(IPMUnknown *boss) :
	CTextDataValidation(boss)
{
}

//----------------------------------------------------------------------------------------
// LayerNameTextValidation::~LayerNameTextValidation: 
//----------------------------------------------------------------------------------------
LayerNameTextValidation::~LayerNameTextValidation()
{
}

//----------------------------------------------------------------------------------------
// LayerNameTextValidation::IsEntryLegal
//----------------------------------------------------------------------------------------
bool16 LayerNameTextValidation::IsEntryLegal( )
{
	InterfacePtr<const IPanelControlData>	iPanelData(this, UseDefaultIID());
	const IControlView * iEditView = iPanelData->FindWidget(kInLineEditEditingWidgetID);

	InterfacePtr<const ITextControlData> textData(iEditView,UseDefaultIID());
	PMString newName = textData->GetString();
	PMString	errorString;

	NodeID treeNode(LayerPanelUtils::GetLayerTreeNodeFromSubwidget(this)); // this looks like it could be combined with the next line, but doing so creates a memory leak.
	TreeNodePtr<const LayerTreeUIDNodeID>	layerNode(treeNode);
	ASSERT_MSG(layerNode->IsLayerEntry(),"Wrong type of node - should be a layer");
	IDataBase * db = LayerPanelUtils::GetCurrentLayerPanelDB(this);
	InterfacePtr<const IDocumentLayer> layerToRename(db,layerNode->GetUID(),UseDefaultIID());

	return LayerPanelUtils::ValidateNewLayerName(db,layerToRename, newName, errorString);
}



//----------------------------------------------------------------------------------------
// LayerNameTextValidation::GetErrorString
//----------------------------------------------------------------------------------------
PMString LayerNameTextValidation::GetErrorString(  )
{
	InterfacePtr<const IPanelControlData>	iPanelData(this, UseDefaultIID());
	const IControlView * iEditView = iPanelData->FindWidget(kInLineEditEditingWidgetID);

	InterfacePtr<const ITextControlData> textData(iEditView,UseDefaultIID());
	PMString newName = textData->GetString();
	PMString	errorString;

	NodeID treeNode(LayerPanelUtils::GetLayerTreeNodeFromSubwidget(this)); // this looks like it could be combined with the next line, but doing so creates a memory leak.
	TreeNodePtr<const LayerTreeUIDNodeID>	layerNode(treeNode);
	ASSERT_MSG(layerNode->IsLayerEntry(),"Wrong type of node - should be a layer");
	IDataBase * db = LayerPanelUtils::GetCurrentLayerPanelDB(this);
	InterfacePtr<const IDocumentLayer> layerToRename(db,layerNode->GetUID(),UseDefaultIID());
	

	LayerPanelUtils::ValidateNewLayerName(db,layerToRename, newName, errorString);
	return errorString;
}

