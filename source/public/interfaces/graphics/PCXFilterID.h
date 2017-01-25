//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/PCXFilterID.h $
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
//  Contains IDs used by the PCX format filter
//  
//========================================================================================

#ifndef __PCXFilterID__
#define __PCXFilterID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kPCXFilterPrefix	RezLong(0x3d00)

// <Start IDC>
// PluginID
//#define kPCXFilterPluginName 			"PCX Import Filter"
//DECLARE_PMID(kPlugInIDSpace, kPCXFilterPluginID, kPCXFilterPrefix + 1)

// <Class ID>
// ClassIDs
DECLARE_PMID(kClassIDSpace, kPCXImageReadFormatBoss, kPCXFilterPrefix + 1)
//gap
DECLARE_PMID(kClassIDSpace, kPCXFilterConversionProviderBoss, kPCXFilterPrefix + 3)

// <Implementation ID>
// ImplementationIDs
DECLARE_PMID(kImplementationIDSpace, kPCXImageReadFormatServiceImpl, kPCXFilterPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kPCXImageReadFormatInfoImpl, kPCXFilterPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kPCXImageReadFormatImpl, kPCXFilterPrefix + 3)

#endif // __PCXFilterID__

// End, PCXFilterID.h.
