//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/widgetbin/includes/CIDEditBoxEventHandler.h $
//  
//  Owner: Dave Burnard
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
#ifndef __CIDEditBoxEventHandler__
#define __CIDEditBoxEventHandler__

/** class CIDEditBoxEventHandler

		Concrete implementation of the IEventHandler interface for edit boxes.  
		
		This is the default implementation used in InDesign EditBox widgets, kEditBoxTextControlDataImpl
		Clients seeking to modify default editbox behaviors should derive from this class.
		
		This file replaces PlatformEditBoxEG.h, which is now obsolete.
*/

#include "DVEditBoxEventHandler.h"
typedef DVEditBoxEventHandler CIDEditBoxEventHandler_Base;

class WIDGET_DECL CIDEditBoxEventHandler : public CIDEditBoxEventHandler_Base
{
	typedef CIDEditBoxEventHandler_Base inherited;

public:
	CIDEditBoxEventHandler(IPMUnknown *boss);
	virtual ~CIDEditBoxEventHandler();
};

#endif // __CIDEditBoxEventHandler__
