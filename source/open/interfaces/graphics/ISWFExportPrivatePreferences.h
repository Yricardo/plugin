//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/interfaces/graphics/ISWFExportPrivatePreferences.h $
//  
//  Owner: Yeming Liu
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

#ifndef __ISWFExportPrivatePreferences__
#define __ISWFExportPrivatePreferences__

#include "DynamicDocumentsID.h"

/** Data interface for storing booleans.
	@ingroup arch_coredata 
*/
class ISWFExportPrivatePreferences : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISWFEXPORTPRIVATEPREFERENCES };

	/** 
	 Sets the preview mode indicates whether the generated swf is for InDesign local preview. 
	 
	 @param	 The preview mode. kTrue means Yes; otherwise kFalse.
	 */
	virtual void SetPreviewMode(bool previewMode) = 0;
	
	/**
	 Gets the preview mode flag that indicates whether the generated swf is for InDesign local preview. 
	 
	 @return the preview mode flag. 
	 */
	virtual bool GetPreviewMode() const = 0;
	
};


#endif // __IBoolData__
