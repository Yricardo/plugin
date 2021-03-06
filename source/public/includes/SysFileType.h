//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/SysFileType.h $
//  
//  Owner: Steve Pellegrin
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
#ifndef __SYSFILETYPE__
#define __SYSFILETYPE__

// Enumerate all of the different types of files used by InDesign.
enum SysFileType
{
	kUnknownFileType = 0,
	kPubFileType,
	kTplFileType,
	kBookFileType,
	kAssetLibraryType,
	kDefaultsFileType,
	kDictionaryType,
	kKBSCFileType,
	kAdobePluginType,
	kAdobeRequiredType,
	k3rdPartyPluginType,
	kUserDictionaryType,
	kLockFileType,
	kInCopyFileType,		// .incd
	kXMLFileType,
	kInCopyInterchangeFileType,		// .incx
	kInCopyTemplateFileType,
	kJobOptionsFileType,
	kPDFStyleFileType,
	kJobBagFileType,
	kJobBagPackageFileType,
	kAssignmentPackageFileType,
	kINXAltPackageFileType,
	kInCopyMarkupFileType		// .icml
};

#endif // __SYSFILETYPE__

