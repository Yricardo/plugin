//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/interfaces/layout/ISnapToInvalHandlerHelper.h $
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
//========================================================================================

#pragma once
#ifndef __ISNAPTOINVALHANDLERHELPER__
#define __ISNAPTOINVALHANDLERHELPER__

#include "IPMUnknown.h"
#include "LayoutUIID.h"

//========================================================================================
// CLASS ISnapToInvalHandlerHelper
//========================================================================================

/**
	Helper routine to accessing SnapToInvalHandler from multiple plug-ins.
	This interface is installed on kLayoutWidgetBoss.

*/
class ISnapToInvalHandlerHelper : public IPMUnknown
{
// ----- Helper methods
public:
	enum { kDefaultIID = IID_ISNAPTOINVALHANDLERHELPER };

	virtual void SnapToCacheChanged() = 0;
	
};

#endif	// __ISNAPTOINVALHANDLERHELPER__


