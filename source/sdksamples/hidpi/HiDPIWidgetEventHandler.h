//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/hidpi/HiDPIWidgetEventHandler.h $
//  
//  Owner: Neelabh Sunny
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2014/06/13 15:26:03 $
//  
//  $Revision: #1 $
//  
//  $Change: 879733 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//  
//  Each C++ implementation class in the plug-in and its corresponding ImplementationID
//  should be registered in this file.
//  
//========================================================================================

#ifndef __HiDPIWidgetEventHandler_h__
#define __HiDPIWidgetEventHandler_h__

#pragma once

#include "CEventHandler.h"

class HiDPIWidgetEventHandler : public CEventHandler
{
public:

	HiDPIWidgetEventHandler(IPMUnknown* iBossP) : CEventHandler(iBossP){}
	
	/** Called when Mouse's left button is down */
	virtual bool16 LButtonDn (IEvent* iEventP);
};

#endif