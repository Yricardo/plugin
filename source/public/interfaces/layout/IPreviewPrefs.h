//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IPreviewPrefs.h $
//  
//  Owner: Paul Sorrick
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
//  Description:
//  Interface that provides setting for Preview mode.
//  There are currently four values: kPreviewOff, kPreviewToPage, kPreviewToBleed, kPreviewToSlug
//  
//========================================================================================

#pragma once
#ifndef __IPreviewPrefs__
#define __IPreviewPrefs__

#include "IPMUnknown.h"
#include "LayoutID.h"

class IPreviewPrefs : public IPMUnknown
{
public:	
 	enum { kDefaultIID = IID_IPREVIEWPREFS };
 
	// Preview mode values
	enum PreviewMode { 
		kPreviewOff = 0,	// Regular drawing mode
		kPreviewToPage,		// "Hide everything off the page" mode
		kPreviewToBleed,	// "Hide everything beyond the bleed" mode
		kPreviewToSlug		// "Hide everything beyond the slug" mode
	};

	virtual void SetPreviewMode(const PreviewMode preview) = 0;
	virtual const PreviewMode GetPreviewMode() const = 0;
	virtual bool IsPreviewOn() const = 0;
};

#endif
