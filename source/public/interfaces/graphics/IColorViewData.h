//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IColorViewData.h $
//  
//  Owner: Michael Burbidge
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
#ifndef __IColorViewData__
#define __IColorViewData__

#include "IPMUnknown.h"
#include "widgetid.h"

class IControlView;

/**
 Data interface used to store a UIDRef, typically for a swatch or rendering object
 */
class IColorViewData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ICOLORVIEWDATA };

	/**
	 Sets the UIDRef stored by this interface
	 
	 @param color		The UIDRef to be stored
	 */
	virtual void Set(const UIDRef& color) = 0;
	
	/**
	 @return The UIDRef stored by this interface
	 */
	virtual UIDRef GetColor() const = 0;
};

#endif

