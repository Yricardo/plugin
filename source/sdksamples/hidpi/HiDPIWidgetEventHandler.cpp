//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/hidpi/HiDPIWidgetEventHandler.cpp $
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


#include "VCPlugInHeaders.h"
#include "HiDPIWidgetEventHandler.h"
#include "CAlert.h"
#include "HiDPIID.h"

/** Called when Mouse's left button is down */
bool16 HiDPIWidgetEventHandler::LButtonDn (IEvent* iEventP)
{
	CAlert::InformationAlert(kHiDPIMouseMoveStringKey);
	return kTrue;
}

CREATE_PMINTERFACE(HiDPIWidgetEventHandler, kHiDPIWidgetEventHandlerImpl);
