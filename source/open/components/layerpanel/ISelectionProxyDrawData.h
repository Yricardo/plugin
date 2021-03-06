//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/layerpanel/ISelectionProxyDrawData.h $
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

#pragma once
#ifndef __ISelectionProxyDrawData__
#define __ISelectionProxyDrawData__

#include "LayerPanelID.h"

class ISelectionProxyDrawData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISELECTIONPROXYDRAWDATA };

	typedef enum { kNoDropAllowed = 0, kDropOK, kUnselected, kChildSelected, kSelected} ProxyDrawType;
	
	virtual void SetDrawingMode(ProxyDrawType type) = 0;
	virtual ProxyDrawType GetDrawingMode() const = 0;
};

#endif
