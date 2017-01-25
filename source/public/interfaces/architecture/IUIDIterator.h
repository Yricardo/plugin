//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IUIDIterator.h $
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
//========================================================================================

#pragma once
#ifndef __IUIDIterator__
#define __IUIDIterator__

class IDataBase;

class IUIDIterator	INHERITFROM
{
	public:
		virtual ~IUIDIterator(){};
	virtual UID Current() = 0;
	
	virtual UID	First() = 0;
		// Next will fail if you delete the current uid!
	virtual UID	Next() = 0;
	
	virtual UID	Last() = 0;
		// Previous will fail if you delete the current uid!
	virtual UID	Previous() = 0;
	
	virtual IDataBase *GetDataBase() = 0;
};

#endif //__IUIDIterator__
