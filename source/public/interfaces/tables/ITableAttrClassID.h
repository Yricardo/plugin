//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/tables/ITableAttrClassID.h $
//  
//  Owner: Joe Shankar
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

#ifndef __ITableAttrClassID__
#define __ITableAttrClassID__

#include "IPMUnknown.h"
#include "TablesID.h"

/** Data interface for table attribute represented by a ClassID. Example is
	cell-content type attribute. */
class ITableAttrClassID : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITABLEATTRCLASSID };
		
		/** Mutator for the value represented.
			@param classID new ClassID to store
		*/
		virtual void Set(ClassID classID) = 0;

		/** Accessor.
			@return the ClassID stored
		*/
		virtual ClassID Get() const = 0;
};

#endif		// __ITableAttrClassID__
