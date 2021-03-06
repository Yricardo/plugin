//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/spellpanel/SpellPanelDialogController.h $
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

#include "CDialogController.h"

#include "SpellPanelID.h"
//========================================================================================
// CLASS SpellPanelDialogController
//========================================================================================

class SpellPanelDialogController : public CDialogController
{
public:
	
	SpellPanelDialogController(IPMUnknown* boss);	
	virtual	~SpellPanelDialogController();

    virtual void  InitializeDialogFields(IActiveContext* context);
                                    // Should be overriden to initialize each widget in the dialog
                                    // with its default value.
	virtual void ClosingDialog(IActiveContext* lastChanceToUseMyContext);
};

// End, SpellPanelDialogController.h.
