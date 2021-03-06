//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/inxerrorlogging/INXErrLogID.h $
//  
//  Owner: Adobe Developer Technologies
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

#ifndef __INXErrLogID_h__
#define __INXErrLogID_h__

#include "SDKDef.h"

// Company:
#define kINXErrLogCompanyKey	kSDKDefPlugInCompanyKey		// Company name used internally for menu paths and the like. Must be globally unique, only A-Z, 0-9, space and "_".
#define kINXErrLogCompanyValue	kSDKDefPlugInCompanyValue	// Company name displayed externally.

// Plug-in:
#define kINXErrLogPluginName	"INXErrorLogging"			// Name of this plug-in.
#define kINXErrLogPrefixNumber	0x113100 		// Unique prefix number for this plug-in(*Must* be obtained from Adobe Developer Support).
#define kINXErrLogVersion		kSDKDefPluginVersionString						// Version of this plug-in (for the About Box).
#define kINXErrLogAuthor		"Adobe Developer Technologies"					// Author of this plug-in (for the About Box).

// Plug-in Prefix: (please change kINXErrLogPrefixNumber above to modify the prefix.)
#define kINXErrLogPrefix		RezLong(kINXErrLogPrefixNumber)				// The unique numeric prefix for all object model IDs for this plug-in.
#define kINXErrLogStringPrefix	SDK_DEF_STRINGIZE(kINXErrLogPrefixNumber)	// The string equivalent of the unique prefix number for  this plug-in.

// Missing plug-in: (see ExtraPluginInfo resource)
#define kINXErrLogMissingPluginURLValue		kSDKDefPartnersStandardValue_enUS // URL displayed in Missing Plug-in dialog
#define kINXErrLogMissingPluginAlertValue	kSDKDefMissingPluginAlertValue // Message displayed in Missing Plug-in dialog - provide a string that instructs user how to solve their missing plug-in problem

// PluginID:
DECLARE_PMID(kPlugInIDSpace, kINXErrLogPluginID, kINXErrLogPrefix + 0)

// ClassIDs:
DECLARE_PMID(kClassIDSpace, kSDKINXErrorHandlerBoss, kINXErrLogPrefix + 0)
DECLARE_PMID(kClassIDSpace, kINXErrLogScriptProviderBoss, kINXErrLogPrefix + 1)


// InterfaceIDs:
DECLARE_PMID(kInterfaceIDSpace, IID_INXERRORPATHGDATA, kINXErrLogPrefix + 0)
DECLARE_PMID(kInterfaceIDSpace, IID_INXERRLOGFACADE, kINXErrLogPrefix + 1)


// ImplementationIDs:
DECLARE_PMID(kImplementationIDSpace, kSDKINXErrorHandlerImpl, kINXErrLogPrefix + 0)
DECLARE_PMID(kImplementationIDSpace, kINXErrLogScriptProviderImpl, kINXErrLogPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kINXErrLogFacadeImpl, kINXErrLogPrefix + 2)

// ScriptInfoIDs:
DECLARE_PMID(kScriptInfoIDSpace, kINXErrLogOnOffElement,			kINXErrLogPrefix + 0)
DECLARE_PMID(kScriptInfoIDSpace, kINXErrLogPathElement,			kINXErrLogPrefix + 1)


// Other StringKeys:
#define kINXErrLogAboutBoxStringKey	kINXErrLogStringPrefix "kINXErrLogAboutBoxStringKey"
#define kINXErrLogTargetMenuPath kINXErrLogPluginsMenuPath

// Initial data format version numbers
#define kINXErrLogFirstMajorFormatNumber  RezLong(1)
#define kINXErrLogFirstMinorFormatNumber  RezLong(0)

// Data format version numbers for the PluginVersion resource 
#define kINXErrLogCurrentMajorFormatNumber kINXErrLogFirstMajorFormatNumber
#define kINXErrLogCurrentMinorFormatNumber kINXErrLogFirstMinorFormatNumber

#endif // __INXErrLogID_h__

//  Code generated by DollyXs code generator
