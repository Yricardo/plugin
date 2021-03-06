//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ISmartTextPrefs.h $
//  
//  Owner: Heath Horton
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

#ifndef __ISmartTextPrefs__
#define __ISmartTextPrefs__

#include "IPMUnknown.h"
#include "TextID.h"


/** 
	@ingroup text_layout
*/
class ISmartTextPrefs : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISMARTTEXTPREFS };

				/**  GetPreferStyledTextWhenPasting returns whether or not styled text should be pasted
					from the external clipboard if available.
					@return kTrue if styled text should be pasted when available.
				*/
	virtual bool16 GetSmartCutAndPaste() const = 0;
	
				/**  SetSmartCutAndPasteis used to set whether or not whitespace text should be
					
					@param smartCutAndPasteIN kTrue if this behavior.
				*/
	virtual void SetSmartCutAndPaste(bool16 smartCutAndPaste) = 0;
};

#endif
