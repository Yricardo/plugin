//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITOPFrameData.h $
//  
//  Owner: Michel Hutinel
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
#ifndef __ITOPFrameData__
#define __ITOPFrameData__

#include "IPMUnknown.h"
#include "IInlineData.h"
#include "TextOnPathID.h"

/** This interface lives on kTOPFrameItemBoss.
	@ingroup text_onpath
*/
class ITOPFrameData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITOPFRAMEDATA };

		/** Get the UID of spline item that is a grandparent of the text on path frame item. 
			The query hierarchy works as follows: kTOPFrameItemBoss->kMulticolumnItemBoss->kTOPSplineItemboss.
			@return the UID of the spline item.
		*/
		virtual UID GetMainSplineItemUID() const = 0;
} ;

#endif //__ITOPFrameData__
