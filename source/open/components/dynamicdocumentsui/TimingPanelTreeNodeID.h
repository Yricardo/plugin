//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/dynamicdocumentsui/TimingPanelTreeNodeID.h $
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
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __TimingPanelTreeNodeID__
#define __TimingPanelTreeNodeID__

#include "NodeID.h"
#include "DynamicDocumentsUIID.h"

//========================================================================================
// class TimingPanelTreeNodeID 
//========================================================================================
class TimingPanelTreeNodeID : public NodeIDClass
{
	public:
		enum { kNodeType = kTimingPanelTreeNodeID }; 
		
		virtual ~TimingPanelTreeNodeID();
		
		virtual	NodeType		GetNodeType() const { return kNodeType; }
		virtual int32			Compare(const NodeIDClass* NodeID) const;
		virtual NodeIDClass*	Clone() const;
		virtual void			Read(IPMStream*	stream);
		virtual void			Write(IPMStream*	stream) const;
		
		UID						GetUID() const;
		bool16					IsGroupItem() const;
		bool16					IsFirstItemInGroup() const;
		bool16					IsLastItemInGroup() const;
		uint32					GetRole() const;
		uint32					GetAction() const;

		static	NodeID_rv		Create(UID const &itemUID, bool16 const &isGroupItem, 
			                           bool16 const &isFirstItemInGroup, bool16 const &isLastItemInGroup, 
									   uint32 const &role, uint32 const &action) 
				{ return new TimingPanelTreeNodeID(itemUID, isGroupItem, isFirstItemInGroup, isLastItemInGroup, role, action); }

	private:
		TimingPanelTreeNodeID(UID const &itemUID, bool16 const &isGroupItem, bool16 const &isFirstItemInGroup, bool16 const &isLastItemInGroup,
			                  uint32 const &role, uint32 const &action);
		TimingPanelTreeNodeID();
		TimingPanelTreeNodeID(const TimingPanelTreeNodeID& copy);

		UID		 fUID;	// UID could be UID of page item or action ID of a button.
		bool16	 fIsGroupItem;
		bool16	 fIsFirstItemInGroup;
		bool16   fIsLastItemInGroup;
		uint32   fRole;
		uint32   fAction;
};

#endif
