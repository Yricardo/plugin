//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/linksui/AddDeleteCaptionRowButtonObserver.cpp $
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

// ----- Interfaces -----
#include "ISubject.h"
#include "IControlView.h"
#include "IWidgetParent.h"
#include "IDialogController.h"
#include "IPanelControlData.h"
#include "ILinksUIUtils.h"
#include "IEveUtils.h"
#include "IDropDownListController.h"

// ----- Includes -----

#include "CObserver.h"
#include "LocaleSetting.h"
#include "RsrcSpec.h"
#include "CoreResTypes.h"
#include "LinksUIResDefs.h"

// ----- Utility files -----
#include "Utils.h"

// ----- ID.h files -----

#include "LinksUIID.h"
#include "LinksID.h"

class AddDeleteCaptionRowButtonObserver : public CObserver
{
	public:
		AddDeleteCaptionRowButtonObserver(IPMUnknown *boss);
		virtual ~AddDeleteCaptionRowButtonObserver();
		
		virtual void Update(const ClassID& theChange, ISubject* theSubject, const PMIID& protocol, void* changedBy);
		
		virtual void AutoAttach();
		virtual void AutoDetach();
};


CREATE_PMINTERFACE(AddDeleteCaptionRowButtonObserver, kAddDeleteCaptionRowButtonObserverImpl)

AddDeleteCaptionRowButtonObserver::AddDeleteCaptionRowButtonObserver(IPMUnknown *boss) :
	CObserver(boss)
{
}

AddDeleteCaptionRowButtonObserver::~AddDeleteCaptionRowButtonObserver()
{
}

void AddDeleteCaptionRowButtonObserver::AutoAttach()
{
	InterfacePtr<ISubject> subject(this, UseDefaultIID());
	if (subject)
		subject->AttachObserver(this, IID_ITRISTATECONTROLDATA);

}

void AddDeleteCaptionRowButtonObserver::AutoDetach()
{
	InterfacePtr<ISubject> subject(this, UseDefaultIID());
	if (subject)
		subject->DetachObserver(this, IID_ITRISTATECONTROLDATA);
	
}

void AddDeleteCaptionRowButtonObserver::Update(const ClassID& theChange, ISubject* theSubject, const PMIID& protocol, void* changedBy)
{
	#pragma unused(changedBy)
	if (protocol == IID_ITRISTATECONTROLDATA && theChange == kTrueStateMessage)
	{
		InterfacePtr<const IControlView> buttonView(theSubject,UseDefaultIID());
		ASSERT_MSG(buttonView->GetWidgetID() == kCaptionDeleteRowWidgetID || buttonView->GetWidgetID() == kCaptionAddRowWidgetID,"Unexpected widget notification");
		bool addingRow = (buttonView->GetWidgetID() == kCaptionAddRowWidgetID);

		InterfacePtr<const IWidgetParent> wp(this,UseDefaultIID());
		InterfacePtr<const IDialogController> dialogControl((IDialogController*)wp->QueryParentFor(IID_IDIALOGCONTROLLER));

		if(addingRow)
		{
			InterfacePtr<const IControlView> rowView((IControlView*)wp->QueryParentFor(IID_ICONTROLVIEW));
			ASSERT_MSG(rowView->GetWidgetID() == kDynamicCaptionRowWidgetID,"unexpected parent ID. did someone rearrange stuff in the view file?");

			InterfacePtr<const IPanelControlData> dialogPanelData(dialogControl,UseDefaultIID());
			
			IControlView* rowContainer = dialogPanelData->FindWidget(kSelectCaptionRowsPanelWidgetID);
			InterfacePtr<IPanelControlData> rowContainerPanelData(rowContainer,UseDefaultIID());
			int32 currentRowIndex = rowContainerPanelData->GetIndex(rowView);
			
			// create new row widget, init the data
			InterfacePtr<IControlView> newRowView ((IControlView*)::CreateObject(::GetDataBase(rowContainerPanelData),RsrcSpec(LocaleSetting::GetLocale(), kLinksUIPluginID, kViewRsrcType, kDynamicCaptionRowResID),IID_ICONTROLVIEW));
			int32 newRowIndex = currentRowIndex == rowContainerPanelData->Length() ? -1 : currentRowIndex + 1;
			rowContainerPanelData->AddWidget(newRowView,newRowIndex,kFalse);
			Utils<ILinksUIUtils>()->SetupCaptionRowWidget(newRowView,"","","");
			InterfacePtr<const IPanelControlData> newRowPanelData(newRowView,UseDefaultIID());
			InterfacePtr<IDropDownListController> ddController(newRowPanelData->FindWidget(kCaptionMetadataDropDownWidgetID),UseDefaultIID());
			ddController->Select(rowContainerPanelData->Length(),kFalse);
			
		}
		else
		{
			
			InterfacePtr<IControlView> rowView((IControlView*)wp->QueryParentFor(IID_ICONTROLVIEW));
			ASSERT_MSG(rowView->GetWidgetID() == kDynamicCaptionRowWidgetID,"unexpected parent ID. did someone rearrange stuff in the view file?");
			InterfacePtr<const IWidgetParent> parentWP(rowView,UseDefaultIID());
			InterfacePtr<IPanelControlData> rowsContainer((IPanelControlData*)parentWP->QueryParentFor(IID_IPANELCONTROLDATA));
#ifdef DEBUG
			InterfacePtr<IControlView> rowsContainerView(rowsContainer,UseDefaultIID());
			ASSERT_MSG(rowsContainerView->GetWidgetID() == kSelectCaptionRowsPanelWidgetID,"unexpected grandparent ID. did someone rearrange stuff in the view file?");
#endif
			if(rowsContainer->Length() > 1)
				rowsContainer->RemoveWidget(rowView,kTrue,kTrue);

		}
			// now force the dialog to re-layout.
		InterfacePtr<IControlView> dialogView(dialogControl,UseDefaultIID());
		Utils<IEVEUtils>()->ApplyEveLayout(dialogView);
	
	}
}

