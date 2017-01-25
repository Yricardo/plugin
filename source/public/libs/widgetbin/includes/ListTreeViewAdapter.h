//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/widgetbin/includes/ListTreeViewAdapter.h $
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
#ifndef __ListTreeViewAdapter__
#define __ListTreeViewAdapter__

#include "ITreeViewHierarchyAdapter.h"
#include "CPMUnknown.h"
#include "HelperInterface.h"


#pragma export on

//----------------------------------------------------------------------------------------
// ListTreeViewAdapter constructor
//----------------------------------------------------------------------------------------
class WIDGET_DECL ListTreeViewAdapter : public ITreeViewHierarchyAdapter
{
public:
	ListTreeViewAdapter(IPMUnknown *boss);
	~ListTreeViewAdapter();
	
	virtual NodeID_rv	GetRootNode() const;
	virtual NodeID_rv	GetParentNode(const NodeID& node) const;
	virtual int32		GetNumChildren(const NodeID& node) const;
	virtual NodeID_rv	GetNthChild(const NodeID& node, const int32& nth) const;
	virtual int32		GetChildIndex(const NodeID& parent, const NodeID& child) const;
	virtual NodeID_rv	GetGenericNodeID() const;
	virtual bool16		ShouldAddNthChild( const NodeID& node, const int32& nth ) const { return kTrue; }

protected:
	virtual int32		GetNumListItems() const;
	virtual NodeID_rv	GetNthListItem(const int32& nth) const;

DECLARE_HELPER_METHODS()
};

#pragma export off

#endif
