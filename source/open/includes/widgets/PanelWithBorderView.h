//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/PanelWithBorderView.h $
//  
//  Owner: Frits
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

#pragma once
#ifndef __PanelWithBorderView__
#define __PanelWithBorderView__

#include "DVPanelView.h"

#ifdef WIDGET_BUILD
#pragma export on
#endif

class WIDGET_DECL PanelWithBorderView : public AGMDrawnPanelView
{
	public:
		// ----- Initialization -----
		PanelWithBorderView(IPMUnknown *boss);
		virtual ~PanelWithBorderView();
			
		virtual void 	Draw(IViewPort* viewPort, SysRgn updateRgn);

	protected:
	
};

#pragma export off

#endif
