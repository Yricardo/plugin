//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextVariableChangeData.h $
//  
//  Owner: dwaterfa
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
#ifndef __ITextVariableChangeData__
#define __ITextVariableChangeData__

#include "IPMUnknown.h"
#include "TextID.h"

class ChangeVariableInfo;

/** An object associated with the change variable commands which holds the change information.
	@see kChangeTextVariableCmdBoss and kChangeTextVariableInstanceCmdBoss, ChangeVariableInfo
*/
class ITextVariableChangeData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTVARIABLECHANGEDATA };

	/** */
	virtual void Get(ChangeVariableInfo& info) const = 0;
	/** */
	virtual void Set(const ChangeVariableInfo& info) = 0;
};


#endif	// __ITextVariableChangeData__
