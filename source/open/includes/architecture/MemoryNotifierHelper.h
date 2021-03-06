//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/architecture/MemoryNotifierHelper.h $
//  
//  Owner: Roey Horns
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
//  Purpose:	helper class that automatically unregisters memory notification functions
//  
//========================================================================================

#pragma once
#ifndef __MemoryNotifier__
#define __MemoryNotifier__

#include "IMemoryManager.h"

#pragma export on

class PUBLIC_DECL MemoryNotifierHelper
{
	public:
	
		MemoryNotifierHelper();
		~MemoryNotifierHelper();
		
		bool8 Register(MemoryNotificationFunction func, void *refPtr);		
		void Unregister();
	
	private:
		bool8						fRegistered;
		MemoryNotificationFunction 	fFunc;
		void 						*fRefPtr;
};

#pragma export off

#endif // MemoryNotifierHelper.h
