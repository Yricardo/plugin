//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/dynamicdocumentsui/TimingPanelEventDDListTips.cpp $
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
//  Contains the main implementation of the ITip interface for widgets
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// ----- Interfaces -----

#include "IDropDownListController.h"
#include "IStringListControlData.h"
#include "AbstractTip.h"

// ----- Includes -----

#include "PMString.h"

// ----- Utility files -----

// ----- ID.h files -----

#include "DynamicDocumentsUIID.h"

class TimingPanelEventDDListTips : public AbstractTip
{			
	public:
		TimingPanelEventDDListTips( IPMUnknown *boss ); 
		virtual ~TimingPanelEventDDListTips();

		virtual PMString  GetTipText(const PMPoint& mouseLocation);
};

CREATE_PMINTERFACE(TimingPanelEventDDListTips, kTimingPanelEventDDListTipsImpl)

TimingPanelEventDDListTips::TimingPanelEventDDListTips(IPMUnknown *boss) :
	AbstractTip(boss)
{
}

TimingPanelEventDDListTips::~TimingPanelEventDDListTips()
{
}

PMString TimingPanelEventDDListTips::GetTipText(const PMPoint& mouseLocation)
{
	PMString activeTip = "";

	//
	// Shows tool tips when trigger type is On Page Click
	//
	InterfacePtr<IDropDownListController> iEventDDListController(this, UseDefaultIID());
	if (iEventDDListController)
	{
		int32 selectedIndex = iEventDDListController->GetSelected();
		if (selectedIndex >= 0)
		{
			InterfacePtr<IStringListControlData> iEventDropDownStringData(this, UseDefaultIID());
			PMString selectedTriggerType = iEventDropDownStringData->GetString(selectedIndex);
			if (selectedTriggerType == PMString("kOnPageClickEvent"))
				activeTip = PMString("kTimingPanelEventDropDownTip");
		}
	}

	return activeTip;
} 

