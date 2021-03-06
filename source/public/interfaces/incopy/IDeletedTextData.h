//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/incopy/IDeletedTextData.h $
//  
//  Owner: Kevin Van Wiel
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
#ifndef __IDELETEDTEXTDATA__
#define __IDELETEDTEXTDATA__

#include "IPMUnknown.h"

#include "InCopySharedID.h"


/**  Interface to contain information specific to deleted text owned item/story thread.
*/
class IDeletedTextData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IDELETEDTEXTDATA };

		/**	Get the uid of the story that contains the deleted text owned item.
			@return UID containing story uid.
		*/
		virtual UID GetStoryUID() const = 0;
		
		/**	Set the uid of the story that contains the deleted text owned item.
			@param storyUID the containing story uid.
		*/
		virtual void SetStoryUID(const UID storyUID) = 0;
};

#endif 		// __IDELETEDTEXTDATA__