//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/conditionaltextui/ConditionTagColorSwatchView.cpp $
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
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"

// ----- Interfaces -----

#include "IConditionTag.h"
#include "ITreeNodeIDData.h"
#include "IUIDData.h"
#include "IWidgetParent.h"

// ----- Includes -----

#include "DVControlView.h"
#include "UIDNodeID.h"

// ----- Utility files -----

#include "IConditionalTextFacade.h"
#include "iuicolorutils.h"
#include "DVPublicUtilities.h"

// ----- ID.h files -----

#include "ConditionalTextUIID.h"


class ConditionTagColorSwatchView : public DVControlView
{
	typedef DVControlView inherited;
public:
	ConditionTagColorSwatchView(IPMUnknown *boss);
	virtual ~ConditionTagColorSwatchView();
	
protected:	
	virtual void 	DV_Draw(dvaui::drawbot::Drawbot* drawbotP) const; 
};

// =============================================================================
// *** ConditionTagColorSwatchView impl ***
// -----------------------------------------------------------------------------

CREATE_PERSIST_PMINTERFACE(ConditionTagColorSwatchView, kConditionTagColorSwatchViewImpl)

ConditionTagColorSwatchView::ConditionTagColorSwatchView(IPMUnknown *boss) :
	inherited(boss)
{
} // end constructor

ConditionTagColorSwatchView::~ConditionTagColorSwatchView()
{
} // end destructor

// -----------------------------------------------------------------------------

void ConditionTagColorSwatchView::DV_Draw(dvaui::drawbot::Drawbot* drawbotP) const
{
	InterfacePtr<IWidgetParent>	forParent(this, UseDefaultIID());
	InterfacePtr<ITreeNodeIDData>	nodeID((ITreeNodeIDData*)forParent->QueryParentFor(IID_ITREENODEIDDATA));
	if (!nodeID) return; 
	
	InterfacePtr<IUIDData>	forDB((IUIDData*)forParent->QueryParentFor(IID_IUIDDATA));
	IDataBase* db = forDB ? forDB->GetItemDataBase() : nil;
	if (!db) return; 

	TreeNodePtr<UIDNodeID> tagNode(nodeID->Get());
	InterfacePtr<IConditionTag> tag(db, tagNode->GetUID(), UseDefaultIID());
	UID colorUID = tag != nil ? tag->GetColor() : kInvalidUID;
	ColorArray color = colorUID != kInvalidUID ? Utils<IUIColorUtils>()->GetRGBColorValue(db, colorUID) : Utils<IUIColorUtils>()->GetStockUIColorRGBValue(IUIColorUtils::kStockUIBlack);
	ColorArray stroke = Utils<IUIColorUtils>()->GetStockUIColorRGBValue(IUIColorUtils::kStockUIBlack);
				
	PMRect swatchRt = GetFrame();
	swatchRt.MoveTo(0, 0);						// get into local coordinates

	PMPoint midPoint(::Floor(swatchRt.GetHCenter()), ::Floor(swatchRt.GetVCenter()));
	PMRect drawRect(midPoint, midPoint);
	drawRect.Inset(-4, -4);

	RealAGMColor fillColor(::ToFloat(color[IUIColorUtils::kRed]),
						::ToFloat(color[IUIColorUtils::kGreen]), 
						::ToFloat(color[IUIColorUtils::kBlue]));
	dv_utils::DVFillRect(drawbotP, fillColor, drawRect);

	RealAGMColor strokeColor(::ToFloat(stroke[IUIColorUtils::kRed]),
						::ToFloat(stroke[IUIColorUtils::kGreen]),
						::ToFloat(stroke[IUIColorUtils::kBlue]));
	dv_utils::DVStrokeRect(drawbotP, strokeColor, drawRect, 1.0f);
		
} // end Draw()
