//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IStringData.h $
//  
//  Owner: robin briggs
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
#ifndef __IStringData__
#define __IStringData__

#include "IPMUnknown.h"
#include "CommandID.h"

class PMString;

/**  Data interface for storing strings (PMString).
	@ingroup arch_coredata 
*/
class IStringData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISTRINGDATA };

	/** Set the string value
		@param newString - new value of the string
	*/
	virtual void Set(const PMString& newString) = 0;

	/** Return the string value.
		@return value of the string
	*/
	virtual const PMString& GetString() const = 0;
	
	/** Return the string value.
		@return value of the string.
	*/
	const PMString& Get() const
		{ return const_cast<IStringData*>(this)->GetString(); }
};



#endif // __IStringData__
