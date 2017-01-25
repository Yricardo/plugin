//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/hidpi/HiDPINoStrip.cpp $
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
//========================================================================================

#include "VCPlugInHeaders.h"
#include "InterfaceFactory.h"

extern bool16 gFalse;

/** DontDeadStrip references all implementations to stop the compiler dead stripping them from the executable image. */
void DontDeadStrip();

void DontDeadStrip()
{
	if (gFalse)
	{
#include "HiDPIFactoryList.h"		
	}
}