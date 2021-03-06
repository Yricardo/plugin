//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IBoolListData.h $
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
#ifndef __IBoolListData__
#define __IBoolListData__

#include "IPMUnknown.h"
#include "K2Vector.h"

/**  Data interface for storing a list of boolean values
	@ingroup arch_coredata 
*/
class IBoolListData : public IPMUnknown 
{
public:
	virtual void Set(const K2Vector<bool16>& boolList) = 0;
	virtual const K2Vector<bool16>& Get() const = 0;
};


#endif // __IBoolListData__
