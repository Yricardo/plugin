//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextSelectionData.h $
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
#ifndef __ITEXTSELECTIONDATA__
#define __ITEXTSELECTIONDATA__

#include "IPMUnknown.h"
#include "TextEditorID.h"

/** 
	@ingroup text_select
*/
class ITextSelectionData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITEXTSELECTIONDATA };
	virtual void 			TempSetFrameList(const UIDRef& frameList) = 0; //EditorToFrame only caller
	virtual const UIDRef& 	GetFrameList() const = 0;
};

#endif
