//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/ILibraryItemButtonData.h $
//  
//  Owner: Mark VerMurlen
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
#ifndef __ILibraryViewButtonData__
#define __ILibraryViewButtonData__

#include "LibraryPanelID.h"

class ILibraryAssetProxy;
class IControlView;


//========================================================================================
// CLASS LibraryThumbnailButton
//========================================================================================
/** This class controls access to proxy data for a library asset on behalf of the Library Panel.
*/
class ILibraryItemButtonData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ILIBRARYITEMBUTTONDATA };

	/** Set the pointer to the library asset proxy.
		@param assetProxy IN interface pointer to ILibraryAssetProxy
	*/
	virtual void					SetLibraryAssetProxy(ILibraryAssetProxy* assetProxy) = 0;
	
	/** Get the pointer to the library asset proxy.
		@return interface pointer to the ILibraryAssetProxy
	*/
	virtual ILibraryAssetProxy*		GetLibraryAssetProxy() = 0;

};



#endif
