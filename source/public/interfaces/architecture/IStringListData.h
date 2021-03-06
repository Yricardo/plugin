//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IStringListData.h $
//  
//  Owner: Yeming Liu
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
#ifndef __ISTRINGLISTDATA__
#define __ISTRINGLISTDATA__

#include "IPMUnknown.h"
#include "CommandID.h"
#include "K2Vector.h"

class PMString;

/**  Data interface for storing a list of strings.
	@ingroup arch_coredata 
*/
class IStringListData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ISTRINGLISTDATA };

		/** Set the value of the list of strings.
			@param newList - the list of strings that will be the new value
		*/
		virtual void SetStringList(const K2Vector<PMString>& newList) = 0;

		/** Return the value of the list.
			@return the list of strings 
		*/
		virtual const K2Vector<PMString>& GetStringList() = 0;
};

#endif // __ISTRINGLISTDATA__
