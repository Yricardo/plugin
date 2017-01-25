//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/ApplDefs.h $
//  
//  Owner: Michael Burbidge
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/05/07 23:35:46 $
//  
//  $Revision: #5 $
//  
//  $Change: 911606 $
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
#ifndef __ApplDefs__
#define __ApplDefs__

#include "IconRsrcDefs.h"



#define kAppInfoDialogRsrcID 					100  
#define kSavePaletteWorkspacePanelRsrcID 		150
#define kDeletePaletteWorkspacePanelRsrcID	 	200

#define kUICustMenusDialogRsrcID 				500
#define kUICustMenuNodeRsrcID 					600
#define kUICustomizationHiddenEyeballIcon 		650
#define kApplErrorStringTableRsrcID				698
#define kPlatformErrorStringTableRsrcID			699	//must be identical to definition in ErrorTableTypes.h
#define kUICustomizationSaveAsDialogRsrcID		700

#define kInterfaceEquivalentsRsrcID				750
#define kSettingsInCloudFirstLaunchDialogRsrcID 900

#define kSettingsMigrationDialogRsrcID 			901

// ----- String resources
#define kApplStringsRsrcID					10000
#define kBootStrapStringsRsrcID				10100
#define kApplStringsNoTransRsrcID			10200
#define kApplStringsLocalizedRsrcID			10300
#define kBootStrapStringsNoTransRsrcID		10400
#define kBootStrapStringsLocalizedRsrcID	10500
#define kAppUIStringsRsrcID					10600
#define kAppUIStringsNoTransRsrcID			10700


#define kDocErrorStringTableRsrcID			10800
#define kDBErrorStringTableRsrcID			10900
#define kAppUIErrorStringTableRsrcID		11000

//========================================================================================
// ----- Action/Menu IDs -----
//========================================================================================

#define kApplActionResID							1400
#define kApplFileActionResID						1450
#define kApplMenusRsrcID							1500
#define kApplMenusPreviewRsrcID						1550
#define kUserInterfacePrefsDialogCreatorRsrcID		1600
#define kUserInterfacePrefsDialogRsrcID				1700
#ifdef WINDOWS 
#define kWinUIScalingPrefsDialogCreatorRsrcID		1950
#define kWinUIScalingPrefsDialogRsrcID				2000
#endif	
#define kSettingsInCloudPrefsPanelCreatorRsrcID 	2100
#define kSettingsInCloudPrefsPanelRsrcID 			2200
#define kExperimentalFeaturesPrefsDialogCreatorRsrcID	2250
#define kExperimentalFeaturesPrefsDialogRsrcID		2300 

// ----- Application icon resources

#define kMediumWarningSignRsrcID		kWarningMediumIcon
#define kLargeWarningSignRsrcID			kWarningBigIcon

#define kLargeStopSignRsrcID			kStopSignBigIcon

// pict/bitmap rsrc ids
#ifndef TRIAL
#define kStartupScreenRsrcID 1800  // ditl/dialog id
#else
#define kStartupScreenRsrcID 1850  // ditl/dialog id - trial version
#endif

#define kMenuDashBitmapRsrcID 200 // bitmap for dash on windows for mixed state menus

// OWL App Bar resources
#define kAppBarADAMRsrcID							8000

#define kAppBarEVERsrcID							8100
#define kAppBarLayoutViewOptionsEVERsrcID			8110
#define kAppBarStoryViewOptionsEVERsrcID			8120
#define kAppBarScreenModeEVERsrcID					8130
#define kAppBarLayoutWidgetEVERsrcID				8140
#define kAppBarSearchForHelpDummyEVERsrcID			8150


#endif // __ApplDefs__

