//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IDataLinkAction.h $
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
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __IDataLinkAction__
#define __IDataLinkAction__

#include "IPMUnknown.h"
#include "LinksID.h"

/**
	An interface used by UI or scripting for datalink related actions.
	Clients who implement custom datalink and want to disable or 
	change these actions should implement this interface.
*/
class IDataLinkAction : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IDATALINKACTION };
	
	/** 
		Shows the page where the link is on.
		@param errorString OUT, error message if failed
		 pass in nil if error message is not needed
		@return error code of the operation
	*/
	virtual ErrorCode		GotoLink( PMString *errorString ) = 0;
	/** 
		Returns whether the go to link is allowd.
		@return kTrue if the action is allowed, kFalse otherwise.
	*/
	virtual bool16		EnableGotoLink() = 0;
};

#endif
