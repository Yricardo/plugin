//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/cellpanel/CelPnlActionComponent.cpp $
//  
//  Owner: Adobe Developer Technologies
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

// Interface includes:
// none

// General includes:
#include "CActionComponent.h"
#include "CAlert.h"

// Project includes:
#include "CelPnlID.h"

/** CelPnlActionComponent
	implements the actions that are executed when the plug-in's
	menu items are selected.

	kCelPnlActionComponentImpl implements IActionComponent based on
	the partial implementation CActionComponent.

	@ingroup cellpanel
	
*/
class CelPnlActionComponent : public CActionComponent
{
	public:
		/**
			Constructor.
			@param boss interface ptr from boss object on which this interface is aggregated.
		*/
		CelPnlActionComponent(IPMUnknown *boss);
	
		/** The action component should do the requested action. Note this will never be called 
			except when the action is enabled. This method should be overridden by subclasses.

			@param actionID identifies which action this action component should perform
			@param mousePoint contains the global mouse location at time of event causing action (e.g. context menus). kInvalidMousePoint if not relevant.
			@param widget contains the widget that invoked this action. May be nil. 
		*/
		virtual void	DoAction(IActiveContext* ac, ActionID actionID, GSysPoint mousePoint, IPMUnknown* widget);

	private:
		/** Encapsulates functionality for the about menu item. */
		void DoAbout();

};

/* CREATE_PMINTERFACE
 Binds the C++ implementation class onto its
 ImplementationID making the C++ code callable by the
 application.
*/
CREATE_PMINTERFACE(CelPnlActionComponent, kCelPnlActionComponentImpl)

/* CelPnlActionComponent
*/
CelPnlActionComponent::CelPnlActionComponent(IPMUnknown *Boss)
: CActionComponent(Boss)
{
}

/* DoAction
*/
void CelPnlActionComponent::DoAction(IActiveContext* ac, ActionID actionID, GSysPoint mousePoint, IPMUnknown* widget)
{	
	switch (actionID.Get())
	{
		case kCelPnlAboutActionID:
		case kCelPnlAboutThisActionID:
		{
			this->DoAbout();
			break;
		}			
				
		default:
		{
			// It is possible to get here and not have a valid command, so just
			// pass it on:
			break;
		}
	}
}

/* DoAbout
*/
void CelPnlActionComponent::DoAbout()
{
	CAlert::ModalAlert
	(
		kCelPnlAboutBoxStringKey,			// Alert string
		kOKString, 						// OK button
		kNullString, 						// No second button
		kNullString, 						// No third button
		1,							// Set OK button to default
		CAlert::eInformationIcon				// Information icon.
	);
}

// End, CelPnlActionComponent.cpp.


