//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/LibraryProviderDefs.h $
//  
//  Owner: Hardeep
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/03/13 15:57:09 $
//  
//  $Revision: #2 $
//  
//  $Change: 905372 $
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
#ifndef __LibraryProviderDefs__
#define __LibraryProviderDefs__

#define kLibraryProviderStringsRsrcID			1008
#define kLibraryProviderRsrcID					1009

#ifndef kErrorStringTableID
#define kErrorStringTableID 1000
#endif

//Library property names
#define kNamePropertyString					"[Lib]Asset Name Property"
#define kFilePathPropertyString				"[Lib]Asset FilePath Property"
#define kTypePropertyString					"[Lib]Asset Type Property"
#define kDescriptionPropertyString			"[Lib]Asset Keywords Property"
#define kModificationDatePropertyString		"[Lib]Asset Modification Date Property"
#define kAssetPositionPropertyString		"[Lib]Asset Position"
#define kThumbnailDataPropertyString		"[Lib]Asset Thumbnail"

#define kViewPrefKey				PMString("View Preference")
#define kViewPrefThumnailValue		PMString("Thumbnail View")
#define kViewPrefLargeThumnailValue		PMString("Large Thumbnail View")
#define kViewPrefListValue			PMString("List View")

#define kSortOrderPrefKey			PMString("Sort Order Preference")
#define kSortOrderPrefByNameValue	PMString("Sort By Name")
#define kSortOrderPrefByNewestValue	PMString("Sort By Assending Date")
#define kSortOrderPrefByOldestValue	PMString("Sort By Descending Date")
#define kSortOrderPrefByKindValue	PMString("Sort By Kind")

#define kLibraryWidth	64  // NOTE: Changing these values might change the catalog format 
#define kLibraryHeight	64  // NOTE: Changing these values might change the catalog format

#define	kMinAssetLibWidth		271
#define	kMaxAssetLibWidth		10000
#define	kMinAssetLibHeight		75
#define	kMaxAssetLibHeight		10000

#define kListViewCellHeight		21.0

#endif // __LibraryProviderDefs__
