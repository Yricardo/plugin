//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/ISWFPreviewSuite.h $
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
#ifndef __ISWFPreviewSuite__
#define __ISWFPreviewSuite__

#include "ISelectionMessages.h"

#include "DynamicDocumentsID.h"

class ISWFPreviewSuite : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ISWFPREVIEWSUITE };

	public:
		/** Generate a temp swf file for current selection.
		    @param destFile [IN]: the file exported to.
			@param iSWFExportPrefs [IN]: export settings.
			@param bValidationFailure [OUT]: flag for validatin error like missing links.
			return ErrorCode : kSuccess or kCancel or kFailure.
		*/
		virtual ErrorCode GenerateSWFPreview(IDFile const &destFile, ISWFExportPreferences* iSWFExportPrefs, bool &bValidationFailure) = 0;
};



#endif	// __ISWFPreviewSuite__

