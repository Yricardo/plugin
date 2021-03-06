//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/incopy/IAssignmentUISelectionSuite.h $
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
#ifndef __IASSIGNMENTUISELECTIONSUITE__
#define __IASSIGNMENTUISELECTIONSUITE__

#include "AssignmentUIID.h"

#include "IPMUnknown.h"
#include "ITreeViewController.h"

class IAssignmentUISelectionSuite : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IASSIGNMENTUISELECTIONSUITE };

	/**
		Updates the story list panel to the current user selection.
	*/
	virtual void Update(ITreeViewController* controller) = 0;
};


#endif	// __IASSIGNMENTUISELECTIONSUITE__


