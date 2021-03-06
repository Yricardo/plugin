//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/DIBFilterID.h $
//  
//  Owner: SusanCL
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
//  Contains IDs used by the Windows bitmap format filter
//  
//========================================================================================

#ifndef __DIBFilterID__
#define __DIBFilterID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"
#include "FormatNumber.h"

#define kDIBFilterPrefix	RezLong(0x3c00)


// PluginID
//#define kDIBFilterPluginName 			"DIB Import Filter"
//DECLARE_PMID(kPlugInIDSpace, kDIBFilterPluginID, kDIBFilterPrefix + 1)

// ClassIDs
DECLARE_PMID(kClassIDSpace, kDIBImageReadFormatBoss, kDIBFilterPrefix + 1)
//gap
DECLARE_PMID(kClassIDSpace, kDIBFilterConversionProviderBoss, kDIBFilterPrefix + 3)


// ImplementationIDs
DECLARE_PMID(kImplementationIDSpace, kDIBImageReadFormatServiceImpl, kDIBFilterPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kDIBImageReadFormatInfoImpl, kDIBFilterPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kDIBImageReadFormatImpl, kDIBFilterPrefix + 3)

#endif // __DIBFilterID__




