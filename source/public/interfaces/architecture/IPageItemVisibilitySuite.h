//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IPageItemVisibilitySuite.h $
//  
//  Owner: Bob Freeman
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
//  Note:
//  
//========================================================================================

#pragma once
	#ifndef _IPageItemVisibilitySuite_
	#define _IPageItemVisibilitySuite_

#include "GenericID.h"


/**
 hide page item suite interface
  
*/
class IPageItemVisibilitySuite : public IPMUnknown
	{
	public:
		enum { kDefaultIID = IID_IPAGEITEMVISIBILITYSUITE };

	public:

		/**	Description: Can hide any selected page items?
			@param none
			@return bool16 true if object can be hidden
		 */
		virtual bool16 CanHide		(void) const = 0;	
	
		/**	Description: Lock selected page items
			@param none
			@return ErrorCode 
		 */
		virtual ErrorCode Hide() = 0;
	};

#endif // _IPageItemVisibilitySuite_