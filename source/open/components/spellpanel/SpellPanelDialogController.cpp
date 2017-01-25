//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/spellpanel/SpellPanelDialogController.cpp $
//  
//  Owner: Cindy Chen
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

#include "SpellPanelDialogController.h"

#include "IPanelControlData.h"
#include "ISession.h"
#include "IDialog.h"
#include "IWidgetParent.h"
#include "INoteFindChangeSpelling.h"

#ifdef OSX_HACK
static bool16 gOSXAquaInterface = kFalse;
#endif
 

CREATE_PMINTERFACE(SpellPanelDialogController, kSpellPanelDialogControllerImpl)

//========================================================================================
// SpellPanelDialogController::SpellPanelDialogController
//========================================================================================
SpellPanelDialogController::SpellPanelDialogController(IPMUnknown* boss)
: CDialogController(boss)
 {
}

//========================================================================================
// SpellPanelDialogController::~SpellPanelDialogController
//========================================================================================
SpellPanelDialogController::~SpellPanelDialogController()
{
}


// Should be overriden to initialize each widget in the dialog
// with its default value.
void  SpellPanelDialogController::InitializeDialogFields(IActiveContext* context)
{
	CDialogController::InitializeDialogFields(context);
}

//========================================================================================
// SpellPanelDialogController::ClosingDialog
//========================================================================================
void SpellPanelDialogController::ClosingDialog(IActiveContext* lastChanceToUseMyContext)
{	
	// InCopy, turn off flag
	InterfacePtr<INoteFindChangeSpelling> fcs(GetExecutionContextSession(), UseDefaultIID());
	ASSERT(fcs != nil);
	fcs->SetSpellingWarningSkipTables(false);
}

// End, SpellPanelDialogController.cpp.
