//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IActionIDData.h $
//  
//  Owner: Roey Horns
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
//  
//  Purpose:	Interface for storing an ActionID.
//  
//========================================================================================

#pragma once
#ifndef __IACTIONIDDATA__
#define __IACTIONIDDATA__

#include "ShuksanID.h"
#include "IPMUnknown.h"

/**
   This is a data interface to allow clients to get/set an action id.
*/
class IActionIDData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IACTIONIDDATA };
		

		/**	Set the action id.
			@param id, the ActionID to be set.
		 */
		virtual void Set(ActionID id) = 0;


		/**	Get the stored action id.
			@param none
			@return ActionID value stored in the interface. 
		 */
		virtual ActionID GetActionID() const = 0;
};

#endif //__IACTIONIDDATA__