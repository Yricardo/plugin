//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/incopy/IChangeInfoSuite.h $
//  
//  Owner: Matt Ramme
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
#ifndef _IChangesInfoSuite_
#define _IChangesInfoSuite_

#include "TrackChangesUIID.h"
	
/**  This is a class for the track change info: username, creation date, change type.
*/
class ChangeInfo
{
public:
	ChangeInfo() {};
	

	PMString fUser;
	PMString fDate;
	PMString fType;

};

/**	IChangeInfoSuite

	This is a suite to get change information.
*/
class IChangeInfoSuite : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ICHANGEINFOSUITE };

	/**  Gets changeinfo for the current track change.
		@return ChangeInfo contains the username, creation date, and change type.
	*/
	virtual ChangeInfo GetChangeInfo() = 0;
};

#endif //_IChangesInfoSuite_