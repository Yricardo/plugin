//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/dynamicdocumentsui/SWFPreviewButtonWidgetTip.cpp $
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

#include "VCPlugInHeaders.h"

// ----- Interfaces -----

#include "IStringData.h"
#include "AbstractTip.h"

// ----- Includes -----

#include "PMString.h"

// ----- Utils -----

#include "IMenuUtils.h"

// ----- ID.h files -----

#include "DynamicDocumentsUIID.h"

class SWFPreviewButtonWidgetTip : public AbstractTip
{			
	public:
		SWFPreviewButtonWidgetTip( IPMUnknown *boss ) : AbstractTip( boss ) { }
		virtual ~SWFPreviewButtonWidgetTip() { }

		virtual PMString  GetTipText(const PMPoint& mouseLocation);
};

CREATE_PMINTERFACE(SWFPreviewButtonWidgetTip, kSWFPreviewButtonWidgetTipImpl)

PMString SWFPreviewButtonWidgetTip::GetTipText(const PMPoint& mouseLocation)
{
	PMString tipString("");

#ifdef WINDOWS
	tipString = PMString("kSWFPreviewPlayButtonTipWin");
#else
	tipString = PMString("kSWFPreviewPlayButtonTipMac");
#endif

	return tipString;
} 
