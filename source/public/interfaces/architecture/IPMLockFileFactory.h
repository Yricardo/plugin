//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IPMLockFileFactory.h $
//  
//  Owner: Gang Xiao
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

#ifndef __IPMLockFileFactory_h__
#define __IPMLockFileFactory_h__

#include "IPMUnknown.h"
#include "DocFrameworkID.h"

class IPMLockFile;

//========================================================================================
// INTERFACE ILockFileFactory
//========================================================================================

/**
	This interface is responsible for create IPMLockFile object.

	@see IPMLockFile
*/
class IPMLockFileFactory : public IPMUnknown
{
public:	
	enum { kDefaultIID = IID_IPMLOCKFILEFACTORY };

	/**	
		Create lock file object.

		@return	IPMLockFile object
	*/
	virtual IPMLockFile* CreatePMLockFileObject() = 0;
};

#endif // __ILockFileFactory_h__
