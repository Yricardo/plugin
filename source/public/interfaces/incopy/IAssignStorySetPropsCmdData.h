//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/incopy/IAssignStorySetPropsCmdData.h $
//  
//  Owner: Jon Pugh
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
#ifndef __IASSIGNSTORYSETPROPSCMDDATA__
#define __IASSIGNSTORYSETPROPSCMDDATA__

#include "IPMUnknown.h"
#include "CommandID.h"

class IAssignedDocument;

class IAssignStorySetPropsCmdData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IASSIGNSTORYSETPROPSCMDDATA };
		
		/**
			Sets up data for AssignStorySetPropsCmd.
			@param uidref - The page item uid which contains the assigned story.
			@param file - The exported story path (datalink path) for the assigned story.
			@param name - The display name of the assigned story.
		*/
		virtual void Set(const UIDRef& uidref, const PMString& file, const PMString& name) = 0;

		/**
			Get the page item uid.
			@return - A reference to the page item UIDRef.
		*/
		virtual const UIDRef& GetUIDRef() = 0;

		/**
			Get the assigned story name.
			@return - A reference to the assigned story's name.
		*/
		virtual const PMString& GetName() = 0;

		/**
			Get the assigned story file path.
			@return - A reference to the file's path.
		*/
		virtual const PMString& GetFile() = 0;
};

typedef InterfacePtr<IAssignStorySetPropsCmdData> IAssignStorySetPropsCmdDataPtr;

#endif	// __IASSIGNSTORYSETPROPSCMDDATA__
