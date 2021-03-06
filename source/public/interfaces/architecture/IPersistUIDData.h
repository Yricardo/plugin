//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IPersistUIDData.h $
//  
//  Owner: jargast
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
#ifndef __IPersistUIDData__
#define __IPersistUIDData__

#include "ShuksanID.h"
#include "IPMUnknown.h"

/** A UID data interface that holds a reference to an object by UID only. Useful for storing 
	a UID reference persistently, or if you already know the database. There is another 
	interface called IUIDData that can store both a UID and a database pointer.  Use that 
	interface if you don't need to store the information persistantly.
	@see IUIDData
	@ingroup arch_coredata
*/
class IPersistUIDData : public IPMUnknown
{
public:
	enum {kDefaultIID = IID_IPERSISTUIDDATA};

	/** Set the value.
		@param id UID of the object
	*/
	virtual void SetUID (const UID& id) = 0;
	
	/** Get the value.
		@return UID the UID of the object.
	*/
	virtual UID GetUID () const = 0;
};


#endif
