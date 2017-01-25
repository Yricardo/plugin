//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/hiddentexteditor/HidTxtEdNoStrip.cpp $
//  
//  Owner: Adobe Developer Technologies
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

#include "InterfaceFactory.h"

extern bool16 gFalse;

/** DontDeadStrip
	references all implementations to stop the compiler dead stripping them from the executable image.
	
*/
void DontDeadStrip();

void DontDeadStrip()
{
	if (gFalse)
	{
#include "HidTxtEdFactoryList.h"		
	}
}

//  Generated by Dolly build 17: template "IfPanelMenu".
// End, HidTxtEdNoStrip.cpp.


