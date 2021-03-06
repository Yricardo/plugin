//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/incopy/IStoryXMPInfoSuite.h $
//  
//  Owner: ???
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
#ifndef __IStoryXMPInfoSuite__
#define __IStoryXMPInfoSuite__

#include "IPMUnknown.h"
#include "InCopyCoreUIID.h"
#include "ISelectionManager.h"

/** InCopy only. Suite interface to get XMP data of the InCopy story file
*/
class IStoryXMPInfoSuite : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ISTORYXMPINFOSUITE };


/**	Can get the XMP information
	@param none
	@return bool16 
 */
	virtual bool16 CanStoryXMPInfo() const = 0;

/**	Access the story information XMP dialog
	@param none
 */
	virtual void DoStoryXMPInfo() = 0;
};

#endif // _IStoryXMPInfoSuite_
