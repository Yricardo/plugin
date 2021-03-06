//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/IFrameData.h $
//  
//  Owner: robin briggs
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
#ifndef __IFrameData__
#define __IFrameData__

#include "IPMUnknown.h"
#include "TextID.h"

/** 
	@ingroup text_layout
*/
class IFrameData : public IPMUnknown
{
	public:
		enum {kDefaultIID = IID_IFRAMEDATA};
	
		virtual void Set(UIDRef frameList, UID frame, int32 position = -1) = 0;
		virtual UIDRef GetFrameList() const = 0;
		virtual UID GetFrame() const = 0;
		virtual int32 GetPosition() const = 0;
};


#endif // __IFrameData__
