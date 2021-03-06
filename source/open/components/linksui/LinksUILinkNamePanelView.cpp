//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/linksui/LinksUILinkNamePanelView.cpp $
//  
//  Owner: Deepak Gupta
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

#include "DVPanelView.h"
#include "LinksUIID.h"

class LinksUILinkNamePanelView : public DVPanelView
{
	typedef DVPanelView inherited;
public:
	LinksUILinkNamePanelView(IPMUnknown* boss);
	virtual ~LinksUILinkNamePanelView();
};

CREATE_PERSIST_PMINTERFACE(LinksUILinkNamePanelView, kLinksUILinkNamePanelViewImpl)


LinksUILinkNamePanelView::LinksUILinkNamePanelView(IPMUnknown *boss) :
	inherited(boss)
{
	SetClipToSelfEnabled(kTrue);
}

LinksUILinkNamePanelView::~LinksUILinkNamePanelView() 
{ 
}
