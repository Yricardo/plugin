//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/typekitinspector/TKINoStrip.cpp $
//  
//  Owner: Timothy Brand-Spencer
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/03/13 15:57:09 $
//  
//  $Revision: #1 $
//  
//  $Change: 905372 $
//  
//  Copyright 1997-2012 Adobe Systems Incorporated. All rights reserved.
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

/** References all implementations to stop the compiler dead stripping them from the executable image.
*/
void DontDeadStrip();

void DontDeadStrip()
{
	if (gFalse)
	{
#include "TKIFactoryList.h"
	}
}