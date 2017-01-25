//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/dynamicdocumentsui/TimingPanelTreeNodeView.cpp $
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
//========================================================================================

#include "VCPlugInHeaders.h"
#include "TreeNodeControlView.h"
#include "DynamicDocumentsUIID.h"

class TimingPanelTreeNodeView : public TreeNodeControlView
{
	typedef TreeNodeControlView inherited;

public:
	TimingPanelTreeNodeView(IPMUnknown *boss); 
	virtual ~TimingPanelTreeNodeView() { ; } 
	
};

#pragma mark TimingPanelTreeNodeView implementation

CREATE_PERSIST_PMINTERFACE(TimingPanelTreeNodeView, kTimingPanelTreeNodeViewImpl)


TimingPanelTreeNodeView::TimingPanelTreeNodeView(IPMUnknown *boss) 
: inherited(boss) 
{ 
	SetDrawNodeSeparatorOnOff(kFalse); 
}