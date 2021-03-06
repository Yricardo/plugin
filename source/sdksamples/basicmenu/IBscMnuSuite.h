//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/basicmenu/IBscMnuSuite.h $
//  
//  Owner: Adobe Developer Technologies
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

#ifndef _IBscMnuSuite_
#define _IBscMnuSuite_

//	INCLUDES
#include "ShuksanID.h"
#include "BscMnuID.h"

class IPMUnknown;

//	CLASS DECLARATION

/** From SDK sample; provides an dummy interface to get to the current selection.

	@ingroup basicmenu
	
*/
class IBscMnuSuite : public IPMUnknown
{
//	Data Types
public:
	enum { kDefaultIID = IID_IBSCMNU_ISUITE };

//	Member functions
public:
	/**
		@return kTrue if the user can apply BscMnu (in this sample, doing nothing but pops a dialog) 
		with the current selection, kFalse otherwise
	*/
	virtual bool16			CanApplyBscMnu(void) = 0;
};

#endif // _IBscMnuSuite_


