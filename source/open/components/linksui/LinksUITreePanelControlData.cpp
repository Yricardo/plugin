//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/linksui/LinksUITreePanelControlData.cpp $
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

#include "VCPluginHeaders.h"
#include "DVPanelControlData.h"

// ----- Interface Includes -----

#include "IControlView.h"
#include "IWidgetUtils.h"
#include "IWidgetParent.h"
#include "IWindow.h"

// ----- Implementation Includes -----

#include "LinksUIID.h"

//========================================================================================
// CLASS LinksUITreePanelControlData
//========================================================================================

class LinksUITreePanelControlData : public DVPanelControlData
{
	typedef DVPanelControlData inherited;
public:
	// ----- Initialization -----
	
	LinksUITreePanelControlData(IPMUnknown *boss);
	virtual ~LinksUITreePanelControlData();

	// ----- Maintenance -----
	
	virtual void			WidgetAttributeChanged(IControlView* view, const WidgetAttributeID& id);
};

//========================================================================================
// METHODS LinksUITreePanelControlData
//========================================================================================

CREATE_PERSIST_PMINTERFACE(LinksUITreePanelControlData, kLinksUITreePanelControlDataImpl)

LinksUITreePanelControlData::LinksUITreePanelControlData(IPMUnknown *boss)  :
	inherited(boss)
{
}

LinksUITreePanelControlData::~LinksUITreePanelControlData()
{
}

void LinksUITreePanelControlData::WidgetAttributeChanged(IControlView* view, const WidgetAttributeID& id)
{
	inherited::WidgetAttributeChanged(view,id);
	if(id == kWidgetPosition && view->GetWidgetID() == kTreeScrollerWidgetID)
	{
		PMRect newTreeFrame = view->GetFrame();
		InterfacePtr<IControlView> headerWidget((IControlView*)Utils<IWidgetUtils>()->QueryRelatedWidget(this,kLinksUIColumnHeaderRowWidgetID,IID_ICONTROLVIEW));
				
		PMRect olderHeaderFrame = headerWidget->GetFrame();
		if(olderHeaderFrame.Left() != newTreeFrame.Left())
		{
			headerWidget->MoveTo(PMPoint(newTreeFrame.Left(),olderHeaderFrame.Top()));
					
			// now we want to force this area of the window to redraw.		
			headerWidget->ForceRedraw();

		}
	}
}
