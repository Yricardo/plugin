//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/actiondatapanels/showhide/ShowHideFieldsDataPanel.cpp $
//  
//  $Owner: Michael Burbidge $
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

// ----- Interface Includes -----

#include "IBehaviorDataPanel.h"
#include "ISession.h"
#include "IControlView.h"

// ----- Implementation Includes -----

#include "BehaviorUIID.h"
#include "BehaviorUIDefs.h"
#include "FormFieldUIID.h"
#include "CPMUnknown.h"
#include "CreateObject.h"
#include "CoreResTypes.h"
#include "DVUtilities.h"
#include "RsrcSpec.h"

//========================================================================================
// CLASS ShowHideFieldsDataPanel
//========================================================================================

class ShowHideFieldsDataPanel : public CPMUnknown<IBehaviorDataPanel>
{
public:
	ShowHideFieldsDataPanel(IPMUnknown *boss);
	virtual ~ShowHideFieldsDataPanel();

	virtual IPMUnknown* CreatePanel(const PMLocaleId& localeId, const PMIID& iid) const;
};	

//========================================================================================
// METHODS ShowHideFieldsDataPanel
//========================================================================================

CREATE_PMINTERFACE(ShowHideFieldsDataPanel, kShowHideFieldsDataPanelImpl)

//----------------------------------------------------------------------------------------
// ShowHideFieldsDataPanel::ShowHideFieldsDataPanel
//----------------------------------------------------------------------------------------

ShowHideFieldsDataPanel::ShowHideFieldsDataPanel(IPMUnknown *boss) :
	CPMUnknown<IBehaviorDataPanel>(boss)
{
}

//----------------------------------------------------------------------------------------
// ShowHideFieldsDataPanel::~ShowHideFieldsDataPanel
//----------------------------------------------------------------------------------------

ShowHideFieldsDataPanel::~ShowHideFieldsDataPanel()
{
}

//----------------------------------------------------------------------------------------
// ShowHideFieldsDataPanel::CreatePanel
//----------------------------------------------------------------------------------------

IPMUnknown* ShowHideFieldsDataPanel::CreatePanel(const PMLocaleId& localeId, const PMIID& iid) const
{
	/* degupta - CreateObject is creating the controlview and also calling the DoPostCreate(), breaking this into 
	 * CreateObjectNoInit() and DoPostCreate() so that theme can be set on the view before DoPostCreate() is called.
	 */
	IPMUnknown *returnVal = ::CreateObjectNoInit (::GetDataBase(GetExecutionContextSession()),
		RsrcSpec(localeId, kFormFieldUIPluginID, kViewRsrcType, kShowHideFieldsPanelRsrcID),
		IID_ICONTROLVIEW,
		GetObjectModelInstance());
	ASSERT_MSG(returnVal, "Cannot create the appropriate control view.");
	IControlView* panel = InterfacePtr<IControlView>(returnVal, UseDefaultIID());
	ASSERT_MSG(panel, "Cannot create the appropriate control view.");
	// Set the drover theme on the Panel View and call the DoPostCreate()
	if(panel)
	{
		dv_utils::SetThemeForView(panel, dv_utils::kIDPanelTheme);
		panel->DoPostCreate();
	}
	return panel;
}
