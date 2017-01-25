//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/gotolasttextedit/IGTTxtEdtUtils.h $
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

#ifndef _IGTTxtEdtUtils_
#define _IGTTxtEdtUtils_
#include "GTTxtEdtID.h"

class ISelectionManager;

/** Utility interface for the GoToText plugin

	@ingroup gotolasttextedit
*/
class IGTTxtEdtUtils : public IPMUnknown
{
	public:
		/** kDefaultIID */
		enum { kDefaultIID = IID_IGTTXTEDTUTILS };

		/**
			Activates the specified story, placing the text caret at the specified edit point.
			@param pSelectionManager IN the selection manager.
			@param storyUIDRef IN the story to be activated.
			@param storyIndex IN the index at which the story is to be activated.
		*/
		virtual void ActivateStory(ISelectionManager* pSelectionManager, UIDRef storyUIDRef, int32 storyIndex=0) = 0;

};

#endif // _IGTTxtEdtUtils_
