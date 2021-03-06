//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/incopy/IRedlineChangeData.h $
//  
//  Owner: Eric Menninga
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
#ifndef __IRedlineChangeData__
#define __IRedlineChangeData__

#include "IPMUnknown.h"
#include "InCopySharedID.h"

class VOSRedlineChange;

/** Command data interface to specify Redline Change information.
*/
class IRedlineChangeData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IREDLINECHANGEDATA };

		/**	Sets the change record.
			@param change a change that specifies type, user, creation date.
		*/
		virtual void Set(const VOSRedlineChange& change) = 0;

		/**	Gets the change record.
			@return VOSRedlineChange a change that specifies type, user, creation date.
		*/
		virtual const VOSRedlineChange& Get() const = 0;
};

#endif
		// __IRedlineChangeData__
