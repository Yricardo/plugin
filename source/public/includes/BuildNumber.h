//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/BuildNumber.h $
//  
//  Owner: Peter Boctor
//  
//  $Author: gmatthew $
//  
//  $DateTime: 2015/06/16 09:39:26 $
//  
//  $Revision: #110 $
//  
//  $Change: 914168 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __BUILDNUMBER__ 
#define __BUILDNUMBER__

#include "CrossPlatformTypes.h"

//----------------------------------------------------------------------------------------
// Only use spaces as separators (no tabs) in these defines to make automated parsing
// and extraction of the build and change numbers easier.
//----------------------------------------------------------------------------------------
#define kBuildNumber 72
#define kBuildNumberStr "72"
#define kChangeNumberStr "913411"


//----------------------------------------------------------------------------------------
// Create a new file and add it to the end of the list for each new InDesign product version.
//----------------------------------------------------------------------------------------
#include "K2BuildNumber.h"
#include "SherpaBuildNumber.h"
#include "HotakaBuildNumber.h"
#include "AnnaBuildNumber.h"
#include "DragontailBuildNumber.h"
#include "FiredrakeBuildNumber.h"
#include "CobaltBuildNumber.h"
#include "BasilBuildNumber.h"
#include "RocketBuildNumber.h"
#include "OdinBuildNumber.h"
#include "AthosBuildNumber.h"
#include "CitiusBuildNumber.h"
//#include "CitiusR0BuildNumber.h"
//#include "CitiusR1BuildNumber.h"
#include "SiriusBuildNumber.h"
#include "SiriusR3BuildNumber.h"
#include "SiriusR4BuildNumber.h"
#include "R5BuildNumber.h"

//----------------------------------------------------------------------------------------
// Now, build the overall definitions from the most recently included file.
//----------------------------------------------------------------------------------------

#define kVersionNumber					kR5VersionNumber
#define kVersionNumberStr				kR5VersionNumberStr
#define kVersionNumberForResourceStr	kR5VersionNumberForResourceStr
#define kUIVersionStr					kR5UIVersionStr
#define kCCVersionYearBasedHandleStr	kR5CCVersionYearBasedHandleStr
#define kCCVersionYearBasedFullHandleStr	kR5CCVersionYearBasedFullHandleStr
#define kMajorVersionNumber				kR5MajorVersionNumber
#define kMinorVersionNumber				kR5MinorVersionNumber
#define kDotVersionNumber				kR5DotVersionNumber
#define kMajorVersionNumberForResource	kR5MajorVersionNumberForResource
#define kMinorVersionNumberForResource	kR5MinorVersionNumberForResource
#define kDotVersionNumberForResource	kR5DotVersionNumberForResource
#define kVersionCopyRightStr			kR5VersionCopyRightStr
#ifdef WINDOWS
#define kShortCopyRightStr				kR5ShortCopyRightStr
#endif
#ifdef DEBUG
#define kAUMComponentVersionStr			kR5AUMComponentVersionStr kBuildNumberStr "D"
#else
#define kAUMComponentVersionStr			kR5AUMComponentVersionStr kBuildNumberStr
#endif
#ifdef MACINTOSH
#define kApplicationCFBundleVersionStr	kR5CFBundleVersionStr
#endif

//used for reporting version to crash reporter
#define kCRAdobeProductBuild            "Adobe Product Build"
#define kCRAdobeProductVersion          "Adobe Product Version"
#define kCRAdobeProductVersionStr       kR5CRAdobeProductVersionStr

// Update this if scripting DOM changes in feature bearing updates as well.
#define kMajorScriptVersionNumber		kR5MajorScriptVersionNumber
#define kMinorScriptVersionNumber		kR5MinorScriptVersionNumber

// Used for the application registry key (version number sub-key) on windows.
// HKLM\Software\Adobe\<Application>\<version number>
//
// NOTE: This should be revisited at the time of next major release.
//
#define kAppVersionNumberKeyStr			kR5VersionNumberStr

// Used in ESInit::GetXPEPSpecifier, it specifies the indesign version number used to
// (i)  Read Bridge CC startup scripts 
// (ii) For incoming bridge talk messages.
// 
// NOTE: This should be revisited at the time of next major release.
// 
#define kXPEPSpecifierVersionNumberStr	kR5VersionNumberStr

// Used in IDDroverApp::GetAppInternalVersion, it specifies the folder name for drover app preferences
// NOTE: This should be revisited at the time of next major release.
#define kDroverAppInternalVersionNumberStr			kR5VersionNumberStr

// Specifies the feature branch name for prerelease builds
#define kFeatureBranchStr			"Mainline"

// Strings for FeatureSet preferences
#define kFeatureSetStr "Feature Set Locale Setting"

#ifdef MACINTOSH
	#ifdef PRERELEASE
			#define kDevelopmentStage development
	#else		
			#define kDevelopmentStage release
	#endif
#endif

#endif
