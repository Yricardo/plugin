//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/common/IFieldsTreeViewAdapter.h $
//  
//  Owner: Michael Brubidge
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
#ifndef __IFieldsTreeViewAdapter_h__
#define __IFieldsTreeViewAdapter_h__

#include "IShowHideFieldActionData.h"
#include "ITreeViewHierarchyAdapter.h"
#include "BehaviorTypes.h"
#include "K2Vector.h"
#include "K2Pair.h"

//========================================================================================
// CLASS IFieldsTreeViewAdapter
//========================================================================================

class IFieldsTreeViewAdapter : public ITreeViewHierarchyAdapter
{
public:
	virtual void		Set(IDataBase* db, const K2Vector< K2Pair<UID, IShowHideFieldActionData::Action> >& fields) = 0;
	virtual K2Vector< K2Pair<UID, IShowHideFieldActionData::Action> > Get() const = 0;
	
	virtual IDataBase* GetDataBase() const = 0;
	
	virtual PMString 	GetFieldName(const NodeID& node) const = 0;
	
	virtual void		SetAction(const NodeID& node, const IShowHideFieldActionData::Action& action) = 0;
	virtual IShowHideFieldActionData::Action GetAction(const NodeID& node) const = 0;
};

#endif // __IFieldsTreeViewAdapter_h__
