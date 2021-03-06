//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/ISnapToPrefs.h $
//  
//  Owner: psorrick
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
#ifndef __ISnapToPrefs__
#define __ISnapToPrefs__

// Min and Max values in pixels
#define kMinSnapZone	1
#define kMaxSnapZone	36

#ifndef __ODFRC__	// when used for core resource compilation, provide just the parameter range constants

#include "IPMUnknown.h"
#include "PMReal.h"

class ISnapToPrefs : public IPMUnknown
{
public:	
	////
	//// SnapTo Preferences
	////
	
	// Is SnapTo guides on or off by default
	virtual void SetSnapToGuides(bool16 bSnapTo) = 0;
	virtual bool16 GetSnapToGuides() = 0;

	// Is SnapTo grid on or off by default
	virtual void SetSnapToGrid(bool16 bSnapTo) = 0;
	virtual bool16 GetSnapToGrid() = 0;

	// Default snap zone (in pixels)
	virtual void SetSnapToZone(const PMReal& zone) = 0;
	virtual PMReal GetSnapToZone() = 0;

};

#endif
#endif
