//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/ISysFileData.h $
//  
//  Owner: Robin_Briggs
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
//  Purpose of Interface:
//  A non-persistent data interface that holds a file.
//  
//========================================================================================

#pragma once
#ifndef __ISysFileData__
#define __ISysFileData__

#include "IPMUnknown.h"
#include "DocumentID.h"

/**
 Container interface used to hold a file object.
 @see IDFile
 */
class ISysFileData : public IPMUnknown {
public:
	enum { kDefaultIID = IID_ISYSFILEDATA };

	/**
	Sets the file object.
	@param theFile	IN A file object.
	*/
	virtual void Set(const IDFile& theFile) = 0;

	/**
	Returns the file object.
	@return Reference to the file object.
	*/
	virtual const IDFile& GetSysFile() const = 0;
};


#endif // __ISysFileData__
