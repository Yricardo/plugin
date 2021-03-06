//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IItemThumbnailFacade.h $
//  
//  Owner: Rich Gartland
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
#ifndef __IItemThumbnailFacade__
#define __IItemThumbnailFacade__

#include "IPMUnknown.h"
#include "SnapshotUtils.h"
class SnapshotUtils;

namespace Facade
{
	class IItemThumbnailFacade : public IPMUnknown
	{
	public:
		enum { kDefaultIID = IID_IITEMTHUMBNAILFACADE };
		
		/**	Create a thumbnail from a UIDList
			@param item - the items make a thumbnail of
			@return pointer to the SnapshotUtils for the thumbnail 
		 */
		virtual SnapshotUtils* CreateThumbnail( const UIDList& items ) const = 0;


	};
}
#endif // __IItemThumbnailFacade__
