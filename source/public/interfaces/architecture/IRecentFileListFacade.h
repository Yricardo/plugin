//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IRecentFileListFacade.h $
//  
//  Owner: Michael Easter
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2013/08/14 23:37:12 $
//  
//  $Revision: #1 $
//  
//  $Change: 856419 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//  
//  Description:
//  
//  
//========================================================================================

#pragma once
#ifndef __IRecentFileListFacade__
#define __IRecentFileListFacade__

// ----- Includes -----
#include "IPMUnknown.h"
#include "DocFrameworkID.h"

/**
 Interface used to maintain a list of the most recently used document files. 
 @see IDFile
 */
namespace Facade
{
	class IRecentFileListFacade : public IPMUnknown
	{
	public:
		enum { kDefaultIID = IID_IRECENTFILELISTFACADE };

		enum { kInvalidResult = -1 } FileListError;

		/**
	 	Returns the maximum number of document files the list can hold.
	 	@return Maximum number of document files the list can hold.
	 	*/
		virtual int32 GetFileMax() const = 0;

		/**
		 Sets the number of document files to keep track of.
		 @param newDocCount	IN Number of document files to keep track of.
		 @return ErrorCode
		 */
		virtual ErrorCode SetFileMax(int32 newDocCount) const = 0;

		/**
		 Returns the number of document files in the list.
		 @return Number of document files in the list.
		 */
		virtual int32 GetFileCount() const = 0;

		/**
		 Returns the n'th document file in the list.
		 @param n	IN Index of the document file to return from the list.
		 @return Pointer to the n'th document file in the list.
		 */
		virtual const IDFile* GetNthFile(int32 n) const = 0;

		/**
		 Returns the n'th document file in the list as a path string.
		 @param n	IN Index of the document file whose path to return from the list.
		 @return Pointer to the n'th document file's path string.\\
				 On the Mac, the returned path is an HFS path.
		 */
		virtual const PMString* GetNthPathName(int32 n) const = 0;

		/**
		 Adds a document file to the list.
		 @param addThis	IN Document file to add to the list.
		 @return ErrorCode
		 */
		virtual ErrorCode AddFile(const IDFile *addThis) const = 0;

		/**
		 Removes the document file matching the given file from the list.
		 @param removeThis	IN Matching document file to remove from the list.
		 @return ErrorCode
		 */
		virtual ErrorCode RemoveFile(const IDFile *removeThis) const = 0;

		/**
		 Does the system policy prohibit a MRU list.
		 @return true or false
		 */
		virtual bool16 SystemPolicyProhibitsList() const = 0;
	};
}
#endif // __IRecentFileListFacade__
