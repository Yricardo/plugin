//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/layerpanel/LayerProxyDEHandler.cpp $
//  
//  Owner: Paul Sorrick
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
//  
//  Implementation for a simple layer proxy exchange handler
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "LayerPanelID.h"

#include "CDataExchangeHandlerFor.h"

//========================================================================
// Class LayerProxyDEHandler
//========================================================================

class LayerProxyDEHandler : public CDataExchangeHandlerFor
{
	public:
		LayerProxyDEHandler(IPMUnknown *boss) : CDataExchangeHandlerFor(boss) {}
		virtual	~LayerProxyDEHandler() {}

		virtual	PMFlavor 	GetFlavor() const { return kPMLayerProxyFlavor; }
};

CREATE_PMINTERFACE(LayerProxyDEHandler, kLayerProxyDEHandlerImpl)
