//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IPageSizeList.h $
//  
//  Owner: sheridan
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
//  Data interface for storing a list of page sizes.
//  
//========================================================================================

#pragma once
#ifndef __IPageSizeList__
#define __IPageSizeList__

#include "IPMUnknown.h"
#include "SpreadID.h"
#include "K2Vector.h"
#include "PMPageSize.h"


class IPageSizeList : public IPMUnknown 
{
public:
	enum { kDefaultIID = IID_IPAGESIZELIST };

	virtual void SetPageSizeList(const K2Vector<PMPageSize>& sizes) = 0;
	virtual const K2Vector<PMPageSize>& GetPageSizeList() const = 0;
};


#endif // __IPageSizeList__
