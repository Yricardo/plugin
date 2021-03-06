//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/actiondatapanels/gotoanchor/Templates_AnchorData.cpp $
//  
//  Owner: Steve Dowd
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

#include "ShuksanID.h"
#include "TemplateDefs.h"
#include "K2Vector.tpp"
#include "IAnchorFileListData.h"
#include "IAnchorTypeListData.h"

#ifdef WINDOWS
#pragma warning(disable:4660)
#endif

TEMPLATE K2Vector<IAnchorFileListData::AnchorFileData>;
TEMPLATE K2Vector<IAnchorTypeListData::AnchorTypeData>;

#ifdef WINDOWS
#pragma warning(default:4660)
#endif
