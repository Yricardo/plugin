//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/linksui/LinksUIConversionID.h $
//  
//  Owner: lance bushore
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

#ifndef __LinksUIConversionID__
#define __LinksUIConversionID__

#include "FormatNumber.h"

// Format Numbers

// Basil
#define kLinksUIInitialMajorVersion				kBasilMajorFormatNumber
#define kLinksUIInitialMinorVersion				kBasilInitialMinorFormatNumber
#define kLinksUIPrefGoneVersion					kLinksUIInitialMinorVersion + 1	

#define kLinksUILastBasilFormatChange			kLinksUIPrefGoneVersion

// Most recent overall
#define kLinksUILastMajorFormatNumber			kBasilMajorFormatNumber
#define kLinksUILastMinorFormatNumber			kLinksUILastBasilFormatChange

#endif