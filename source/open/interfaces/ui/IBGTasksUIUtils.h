//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/interfaces/ui/IBGTasksUIUtils.h $
//  
//  Owner: Bernd Paradies
//  
//  $Author: gmatthew $
//  
//  $DateTime: 2013/06/18 15:15:50 $
//  
//  $Revision: #1 $
//  
//  $Change: 853167 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and may be covered by U.S. and Foreign Patents,
//  patents in process, and are protected by trade secret or copyright law.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//========================================================================================

#pragma once
#ifndef __IBGTasksUIUtils__
#define __IBGTasksUIUtils__

#include "AppUIID.h"
#include "IPMUnknown.h"
#include "PMString.h"
#include "UIDRef.h"
/** This provides some utility routines commonly used by menu code.
		i.e. Utils<IBGTasksUIUtils>()->ShowDocActionWarningAboutBGTasks( ... , kCloseActionID, ) ;
*/

class IBGTasksUIUtils : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IBGTASKSUIUTILS};


	typedef enum
	{
		kProcessCmd = 0,
		kAbortCmd
	}UserBGAction;

	virtual UserBGAction ShowDocActionWarningAboutBGTasks(const UIDRef& item, const ActionID& action, UIFlags uiFlags) = 0;
	virtual UserBGAction  ShowCloseAllAndQuitWarningAboutBGTasks(UIFlags uiFlags) = 0;
};

#endif	// __IBGTasksUIUtils__
