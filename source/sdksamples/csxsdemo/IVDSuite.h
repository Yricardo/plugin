//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/csxsdemo/IVDSuite.h $
//  
//  Owner: Adobe Developer Technologies
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2014/06/13 15:26:03 $
//  
//  $Revision: #2 $
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

#ifndef __IVDSUITE__
#define __IVDSUITE__

#include "IPMUnknown.h"

class IVDSuite : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IVDSUITE };
		virtual ErrorCode GetTextFromSelectedFrame(const UIDRef &frameUIDRef, PMString &result) = 0;
};	

#endif 