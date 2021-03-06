//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/actiondatapanels/mso/MSOStateOwnerDrawDDItem.cpp $
//  
//  Owner: Michele Stutzman
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

#include "IAppearanceItemFacade.h"
#include "IIntData.h"
#include "IPanelControlData.h"
#include "IUIDData.h"
#include "IWidgetParent.h"
#include "IWindow.h"
#include "CIDOwnerDrawDDItem.h"
#include "DrawStringUtils.h"
#include "Utils.h"
#include "FormFieldUIDefs.h"
#include "FormFieldUIID.h"

// ----- Constants -----

const uint16 kLeftMargin  = 2;
const uint16 kIconTextGap = 4;
const uint16 kRightMargin = 2;

class MSOStateOwnerDrawDDItem : public CIDOwnerDrawDDItem
{
	typedef CIDOwnerDrawDDItem inherited;

public:
	MSOStateOwnerDrawDDItem(IPMUnknown* boss) : inherited(boss) { ; }
	virtual ~MSOStateOwnerDrawDDItem() { ; }
	
	virtual void MeasureItem(int32 itemID,  uint16& itemWidth, uint16& itemHeight);
	virtual void MeasureItemHeight(int32 itemID, uint16& itemHeight);
};

#pragma mark MSOStateOwnerDrawDDItem implementation

CREATE_PMINTERFACE(MSOStateOwnerDrawDDItem, kMSOStateOwnerDrawDDItemImpl)

void MSOStateOwnerDrawDDItem::MeasureItem(int32 itemID,  uint16& itemWidth, uint16& itemHeight)
{
	inherited::MeasureItem(itemID, itemWidth, itemHeight);  
	
	InterfacePtr<IPanelControlData const> panelData(this, UseDefaultIID());
	IControlView * nthWidget = panelData->GetWidget(itemID);

	if (nthWidget != nil)
	{
		InterfacePtr<IUIDData> msoData(nthWidget, UseDefaultIID());
		InterfacePtr<IIntData> stateData(nthWidget, UseDefaultIID());
		if (msoData && stateData)
		{
			PMString stateName(Utils<Facade::IAppearanceItemFacade>()->GetStateName(msoData->GetRef(), stateData->Get()));

			// Get the font to use
			InterfacePtr<const IWidgetParent> wp(nthWidget,UseDefaultIID());
			InterfacePtr<const IWindow> window((IWindow*) wp->QueryParentFor(IID_IWINDOW));
			const InterfaceFontInfo& fontInfo = window->GetFont();

			uint16 length = 0;
			PMPoint size = StringUtils::PMMeasureString(stateName, fontInfo, kFalse);
			length = kLeftMargin + kMSOStateMediumRowHeight + kIconTextGap + ::ToUInt16(size.X()) + kRightMargin + 1;

			if (length > itemWidth)
				itemWidth = length;
		}
	}

	// Height should be the thumbnail frame size
	itemHeight = kMSOStateMediumRowHeight;
} 

// -----------------------------------------------------------------------------

void MSOStateOwnerDrawDDItem::MeasureItemHeight(int32 itemID, uint16& itemHeight)
{
	// Height should be the thumbnail frame size
	itemHeight = kMSOStateMediumRowHeight;
} 
