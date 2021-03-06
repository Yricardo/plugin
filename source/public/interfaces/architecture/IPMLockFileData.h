//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IPMLockFileData.h $
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

#pragma once
#ifndef __IPMLockFileData_h__
#define __IPMLockFileData_h__

#include "IPMUnknown.h"
#include "DocFrameworkID.h"

class IPMLockFile;

//========================================================================================
// INTERFACE ILockFileData
//========================================================================================

/**
 Container interface used to hold a document lock file.
 @see IPMLockFile
 */
class IPMLockFileData : public IPMUnknown
{
public:	
	enum { kDefaultIID = IID_IPMLOCKFILEDATA };

	/**
	 Sets the document lock file.
	 @param thePMLockFile	IN Pointer to the document lock file.
	 */
	virtual void SetPMLockFile(IPMLockFile* thePMLockFile) = 0;

	/**
	 Returns the document lock file.
	 @return Pointer to the document lock file.
	 */
	virtual IPMLockFile* GetPMLockFile()  const = 0;
};

#endif // __ILockFile_h__
