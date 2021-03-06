//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/InDesignExportID.h $
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

#ifndef __InDesignExportID_h__
#define __InDesignExportID_h__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kInDesignExportPrefix	 			RezLong(0x12100)

// <Start IDC>
// PluginID
#define kInDesignExportPluginName 			"InDesign Export"
DECLARE_PMID(kPlugInIDSpace, kInDesignExportPluginID, kInDesignExportPrefix + 1)

// <Class ID>
// ClassIDs

//gap
DECLARE_PMID(kClassIDSpace, kInDesignExportServiceBoss, kInDesignExportPrefix + 2)

// <Interface ID>
// Interface IDs

// <Implementation ID>
// Implementation IDs

DECLARE_PMID(kImplementationIDSpace, kInDesignExportProviderImpl, kInDesignExportPrefix + 1)

// <Widget ID>
// ----- Widget IDs -----

//DECLARE_PMID(kWidgetIDSpace, kHAlignLeftWidgetID, kAlignPanelPrefix + 1)

// <Action ID>
//DECLARE_PMID(kActionIDSpace, kAlignPanelActionID, kAlignPanelPrefix + 1)

#endif // __InDesignExportID_h__
