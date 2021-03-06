//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/layerpanel/LayersPanelTreeViewController.cpp $
//  
//  Owner: lance bushore
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
#include "CTreeViewController.h"
#include "ITreeNodeIDData.h"

#include "LayerTreeUIDNodeID.h"
#include "LayerPanelID.h"
#include "K2Vector.tpp"

class  LayersPanelTreeViewController : public CTreeViewController
{
public:
	LayersPanelTreeViewController(IPMUnknown *boss);
	~LayersPanelTreeViewController();

	void ProcessSelectionRules(IEvent* event, UID nodeWidgetUID, bool16 notifyOfChange);

};


CREATE_PERSIST_PMINTERFACE(LayersPanelTreeViewController, kLayersPanelTreeViewControllerImpl)

LayersPanelTreeViewController::LayersPanelTreeViewController(IPMUnknown *boss)
: CTreeViewController(boss)
{
}

LayersPanelTreeViewController::~LayersPanelTreeViewController()
{
}

// we're allowed to have multiple items selected, but they all must be of the same type(i.e. all layer rows, or all page item rows)
// so we override this method to deselect anything that's not the same type as the new item
void LayersPanelTreeViewController::ProcessSelectionRules(IEvent* event, UID nodeWidgetUID, bool16 notifyOfChange)
{
	CTreeViewController::ProcessSelectionRules(event, nodeWidgetUID,kFalse);

	InterfacePtr<const IControlView>	nodeView( ::GetDataBase(this), nodeWidgetUID, UseDefaultIID());
	InterfacePtr<const ITreeNodeIDData>	data( nodeView, UseDefaultIID() );
	NodeID selectNode =  data->Get();

	if(IsSelected(selectNode))
	{
		TreeNodePtr<const LayerTreeUIDNodeID>	newlySelectedLayerTreeNode(selectNode);
			
		NodeIDList selectedItems;
		this->GetSelectedItems(selectedItems);
		for(int32 i = selectedItems.Length() - 1; i >=0; --i)
		{
			TreeNodePtr<const LayerTreeUIDNodeID>	treeNode(selectedItems[i]);
			if(newlySelectedLayerTreeNode->IsLayerEntry() != treeNode->IsLayerEntry())
				Deselect(selectedItems[i],kFalse);
		}
	}

	if(notifyOfChange)
		NotifyOfChange( notifyOfChange, kListSelectionChangedMessage );
	
}
