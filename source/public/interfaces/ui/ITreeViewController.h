//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/ui/ITreeViewController.h $
//  
//  Owner: Matt Joss
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

#pragma once
#ifndef __ITreeViewController__
#define __ITreeViewController__

#include "IPMUnknown.h"
#include "IControlView.h"
#include "UIDList.h"
#include "IEvent.h"
#include "NodeID.h"		// for NodeIDList

/** Interface to manipulate and process tree-view selections. Overridden only under exceptional conditions,
	e.g. within the XML structure view.
*/
class ITreeViewController : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITREEVIEWCONTROLLER };
	typedef enum { eSuccess, eNoSelectionAllowed, eSingleItemAlreadySelected, eSingleParentOnly, eDiscontiguousNotAllowed, eCantSelectHiddenRootNode  } SelectCode;
	// ----- Item selection -----

	/** Handles a click on the given node to determine how it affects the selection.

		@param event encapsulates event generated by end-user
		@param node refers to node clicked
	*/
	virtual void				ProcessSelectionRules(IEvent* event, UID node, bool16 notifyOfChange = kTrue) = 0;
									 

	/** Deselect all elements.
		@param notifyOfChange kTrue if the change in state should be broadcast to registered observers, kFalse otherwise
		@param changeHilite kTrue if the hilite state should reflect the change
	*/
	virtual void				DeselectAll( bool16 notifyOfChange = kTrue, bool16 changeHilite = kTrue ) = 0;
									 

	/** Select the element at the given position in the list.
		@param itemToSelect
		@param notifyOfChange kTrue if the change in state should be broadcast to registered observers, kFalse otherwise
		@param changeHilite kTrue if the hilite state should reflect the change
		@return result of the selection
	*/
	virtual SelectCode			Select( const NodeID&	itemToSelect, bool16 notifyOfChange = kTrue, bool16 changeHilite = kTrue  ) = 0;
									 
	/** Deselect the element specified by the given node.
		@param itemToDeselect
		@param notifyOfChange kTrue if the change in state should be broadcast to registered observers, kFalse otherwise
		@param changeHilite kTrue if the hilite state should reflect the change
	*/
	virtual void 				Deselect( const NodeID&	itemToDeselect, bool16 notifyOfChange = kTrue, bool16 changeHilite = kTrue ) = 0;
								 

	/** Determine if given node is selected
		@return kTrue if the item specified is selected, kFalse otherwise
	*/
	virtual bool16				IsSelected( const NodeID&	item ) const = 0;
									

	/** Determine the items selected within the tree control.
		@param selectedItems OUT parameter, is a sorted array arranged in NodeID order

	*/
	virtual	void				GetSelectedItems( NodeIDList&  selectedItems) const = 0;
								
	/** Determine the items selected within the tree control.
		@param selectedItems OUT parameter, is a sorted array arranged in display order.

	*/
	virtual	void				GetSelectedItemsDisplayOrder( NodeIDList&  selectedItems) const = 0;
								

	/** Does this tree allow nodes to be selected.
		@return kTrue if this tree allows nodes to be selected, kFalse if no nodes are selectable

	*/
	virtual bool16 				AllowsSelection( ) const = 0;

	/** Returns the NodeID of the first item selected.
		@return NodeID of the first item selected.
	*/
	virtual NodeID				GetMasterItem() const = 0;

};

#endif
