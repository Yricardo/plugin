//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/cjk/IIMEPrefs.h $
//  
//  Owner: Patrick Lau
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
#ifndef __IIMEPrefs__
#define __IIMEPrefs__

#include "IPMUnknown.h"
#include "IMEID.h"

/** 
	Interface for getting and setting preferences of Japanese 
	Inline input and IME (Input Method Editor) support
*/
class IIMEPrefs : public IPMUnknown
{
public:	

	/** interface ID enum */
 	enum { kDefaultIID = IID_IIMEPREFERENCES };
 
	/** 
		Set the flag for using the floating input window
		@param useFloatInput		true = useWindow, false = useInline
	*/
	virtual void SetUseFloatingInputWindow(const bool16 useFloatInput) = 0;
	
	/** 
		Get the flag to use the floating input window 
		@return Whether to use the floating input window 
	*/
	virtual const bool16 GetUseFloatingInputWindow() = 0;

	/** 
		OBSOLETE METHOD
		@param useFakeInput		Whether to use fake input window
	*/
	virtual void SetUseFakeInputWindow(const bool16 useFakeInput) = 0;
	
	/** 
		OBSOLETE METHOD
		@return Whether to use fake input window 
	*/
	virtual const bool16 GetUseFakeInputWindow() = 0;
};

#endif //__IIMEPrefs__
