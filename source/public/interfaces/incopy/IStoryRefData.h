//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/incopy/IStoryRefData.h $
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
#ifndef __IStoryRefData__
#define __IStoryRefData__

#include "IPMUnknown.h"

#include "WritingModeUIID2.h"
#include "UIDRef.h"

/** 
	An interface used to store a story reference. Could and probably should use IUIDData instead.
*/
class IStoryRefData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ISTORYREFDATA };

		/**
			Retrieve a stored text story uid reference
			@return story reference stored
		**/
		virtual UIDRef GetStoryRef() const = 0;
		
		/**
			Store a story uid reference
			@param storyRef - uid reference to store
			@return none
		**/		
		virtual void SetStoryRef_(UIDRef storyRef) = 0;
};

#endif 		// __IStoryRefData__