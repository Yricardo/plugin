//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/ui/PerformanceUIID.h $
//  
//  Owner: Dave Stephens
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
//  Description: IDs for the performance UI plugin.
//  
//========================================================================================

#ifndef __PERFORMANCEUIID__
#define __PERFORMANCEUIID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kPerformanceUIPrefix	 		RezLong(0x13200)		//Refer also to AdobePrefix.h

// <Start IDC>
// PluginID
#define kPerformanceUIPluginName 							"Performance UI"
DECLARE_PMID(kPlugInIDSpace, kPerformanceUIPluginID, (kPerformanceUIPrefix + 1))

// <Class ID>
// ClassIDs (i.e. bosses)
//gap
DECLARE_PMID(kClassIDSpace, kPerformanceUIDialogBoss, kPerformanceUIPrefix + 5)
DECLARE_PMID(kClassIDSpace, kRasterSliderCntrlViewBoss, kPerformanceUIPrefix + 6)
DECLARE_PMID(kClassIDSpace, kVectorSliderCntrlViewBoss, kPerformanceUIPrefix + 7)
DECLARE_PMID(kClassIDSpace, kTransparencySliderCntrlViewBoss, kPerformanceUIPrefix + 8)
// DECLARE_PMID(kClassIDSpace, kCMSSliderCntrlViewBoss, kPerformanceUIPrefix + 9)
DECLARE_PMID(kClassIDSpace, kPerformanceTrackersRegisterBoss, kPerformanceUIPrefix + 10)
DECLARE_PMID(kClassIDSpace, kPerformanceUIMenuActionBoss, kPerformanceUIPrefix + 11)
DECLARE_PMID(kClassIDSpace, kPerformanceSliderTrackerBoss, kPerformanceUIPrefix + 12)
DECLARE_PMID(kClassIDSpace, kDisplayOptionsMenuActionBoss, kPerformanceUIPrefix + 16)
// gap
DECLARE_PMID(kClassIDSpace, kDisplayOverridesLayoutActionBoss, kPerformanceUIPrefix + 18)
// gap
DECLARE_PMID(kClassIDSpace, kDisplaySettingScriptBoss, kPerformanceUIPrefix + 22)
DECLARE_PMID(kClassIDSpace, kDisplaySettingScriptProviderBoss, kPerformanceUIPrefix + 23)
DECLARE_PMID(kClassIDSpace, kDisplaySettingPrefScriptProviderBoss, kPerformanceUIPrefix + 24)
// gap
DECLARE_PMID(kClassIDSpace, kHandSliderCntrlViewBoss, kPerformanceUIPrefix + 26)

// <Interface ID>
// IIDs
// gap
DECLARE_PMID(kInterfaceIDSpace, IID_IDRAWOPTIONSLAYOUTOBSERVER, kPerformanceUIPrefix + 3)
DECLARE_PMID(kInterfaceIDSpace, IID_IDISPLAYPERFORMANCESUITE, kPerformanceUIPrefix + 4)

// <Implementation ID>
// Implementation IIDs (i.e. C++ classes)
DECLARE_PMID(kImplementationIDSpace, kPerformanceUIMenuActionImpl, kPerformanceUIPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kPerformanceDialogControllerImpl, kPerformanceUIPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kPerformanceSliderCntrlViewImpl, kPerformanceUIPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kPerformanceUIPanelCreatorImpl, kPerformanceUIPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kPerformanceTrackersRegisterImpl, kPerformanceUIPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kPerformanceSliderTrackerImpl, kPerformanceUIPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kRasterSliderObserverImpl, kPerformanceUIPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kVectorSliderObserverImpl, kPerformanceUIPrefix + 8)
DECLARE_PMID(kImplementationIDSpace, kXPSliderObserverImpl, kPerformanceUIPrefix + 9)
DECLARE_PMID(kImplementationIDSpace, kPerformanceUIDlgObserverImpl, kPerformanceUIPrefix + 10)
DECLARE_PMID(kImplementationIDSpace, kDisplayOptionsMenuActionImpl, kPerformanceUIPrefix + 11)
DECLARE_PMID(kImplementationIDSpace, kDrawOptionOverridesImpl_Obsolete, kPerformanceUIPrefix + 12)
// gap
DECLARE_PMID(kImplementationIDSpace, kHandSliderObserverImpl, kPerformanceUIPrefix + 14)
DECLARE_PMID(kImplementationIDSpace, kDisplayOverridesLayoutActionImpl, kPerformanceUIPrefix + 15)
DECLARE_PMID(kImplementationIDSpace, kSetDisplayOverridesObserverImpl, kPerformanceUIPrefix + 16)
//gap
DECLARE_PMID(kImplementationIDSpace, kDisplaySettingScriptImpl, kPerformanceUIPrefix + 20)
//gap
DECLARE_PMID(kImplementationIDSpace, kDisplaySettingScriptProviderImpl, kPerformanceUIPrefix + 22)
DECLARE_PMID(kImplementationIDSpace, kDisplaySettingPrefScriptProviderImpl, kPerformanceUIPrefix + 23)
//gap
DECLARE_PMID(kImplementationIDSpace, kDisplayPerformanceSuiteASBImpl, kPerformanceUIPrefix + 25)
DECLARE_PMID(kImplementationIDSpace, kDisplayPerformanceSuiteLayoutImpl, kPerformanceUIPrefix + 26)

// <Service ID>
//	Service IDs

// <Widget ID>
// Widget IDs
DECLARE_PMID(kWidgetIDSpace, kPerformanceUIPanelWidgetId, kPerformanceUIPrefix + 1)
DECLARE_PMID(kWidgetIDSpace, kOptimizedGroupWidgetID, kPerformanceUIPrefix + 2)
DECLARE_PMID(kWidgetIDSpace, kTypicalGroupWidgetID, kPerformanceUIPrefix + 3)
DECLARE_PMID(kWidgetIDSpace, kHighQualityGroupWidgetID, kPerformanceUIPrefix + 4)
DECLARE_PMID(kWidgetIDSpace, kGroupSettingsBorderWID, kPerformanceUIPrefix + 5)
DECLARE_PMID(kWidgetIDSpace, kRasterStaticWID, kPerformanceUIPrefix + 6)
DECLARE_PMID(kWidgetIDSpace, kRasterSliderWID, kPerformanceUIPrefix + 7)
DECLARE_PMID(kWidgetIDSpace, kVectorStaticWID, kPerformanceUIPrefix + 8)
DECLARE_PMID(kWidgetIDSpace, kVectorSliderWID, kPerformanceUIPrefix + 9)
DECLARE_PMID(kWidgetIDSpace, kTransparencyStaticWID, kPerformanceUIPrefix + 10)
DECLARE_PMID(kWidgetIDSpace, kTransparencySliderWID, kPerformanceUIPrefix + 11)
DECLARE_PMID(kWidgetIDSpace, kCMSStaticWID, kPerformanceUIPrefix + 12)
DECLARE_PMID(kWidgetIDSpace, kCMSSliderWID, kPerformanceUIPrefix + 13)
DECLARE_PMID(kWidgetIDSpace, kPerformanceClusterGroupWidgetID, kPerformanceUIPrefix + 14)
DECLARE_PMID(kWidgetIDSpace, kGroupSettingsBorderTitleWID, kPerformanceUIPrefix + 15)
// removed from UI
//DECLARE_PMID(kWidgetIDSpace, kIgnoreOverridesWidgetID, kPerformanceUIPrefix + 16)
DECLARE_PMID(kWidgetIDSpace, kGreekBelowWidgetID, kPerformanceUIPrefix + 17)
DECLARE_PMID(kWidgetIDSpace, kGreekBelowTitleWidgetID, kPerformanceUIPrefix + 18)
DECLARE_PMID(kWidgetIDSpace, kAntiAliasWidgetID, kPerformanceUIPrefix + 19)
//DECLARE_PMID(kWidgetIDSpace, kDefaultViewWidgetID, kPerformanceUIPrefix + 20)
DECLARE_PMID(kWidgetIDSpace, kRasterStatusWID, kPerformanceUIPrefix + 21)
DECLARE_PMID(kWidgetIDSpace, kVectorStatusWID, kPerformanceUIPrefix + 22)
DECLARE_PMID(kWidgetIDSpace, kXPStatusWID, kPerformanceUIPrefix + 23)
DECLARE_PMID(kWidgetIDSpace, kCMSStatusWID, kPerformanceUIPrefix + 24)
DECLARE_PMID(kWidgetIDSpace, kRasterLowerStaticWID, kPerformanceUIPrefix + 25)
DECLARE_PMID(kWidgetIDSpace, kRasterHigherStaticWID, kPerformanceUIPrefix + 26)
DECLARE_PMID(kWidgetIDSpace, kVectorLowerStaticWID, kPerformanceUIPrefix + 27)
DECLARE_PMID(kWidgetIDSpace, kVectorHigherStaticWID, kPerformanceUIPrefix + 28)
DECLARE_PMID(kWidgetIDSpace, kTransparencyLowerStaticWID, kPerformanceUIPrefix + 29)
DECLARE_PMID(kWidgetIDSpace, kTransparencyHigherStaticWID, kPerformanceUIPrefix + 30)
// gap
DECLARE_PMID(kWidgetIDSpace, kUseDefaultButtonWID, kPerformanceUIPrefix + 33)
DECLARE_PMID(kWidgetIDSpace, kDefaultGroupSettingsBorderWID, kPerformanceUIPrefix + 34)
DECLARE_PMID(kWidgetIDSpace, kDefaultViewTitleWidgetId, kPerformanceUIPrefix + 35)
DECLARE_PMID(kWidgetIDSpace, kDefaultViewPopupWidgetId, kPerformanceUIPrefix + 36)
DECLARE_PMID(kWidgetIDSpace, kSaveLocalOverridesWidgetId, kPerformanceUIPrefix + 37)
DECLARE_PMID(kWidgetIDSpace, kDefaultViewGroupWidgetId, kPerformanceUIPrefix + 38)
// gap
DECLARE_PMID(kWidgetIDSpace, kViewDefinitionDropDownWID, kPerformanceUIPrefix + 44)

// <Action ID>
// Action IDs
DECLARE_PMID(kActionIDSpace, kPerformanceUIPrefsMAID, kPerformanceUIPrefix + 1)
DECLARE_PMID(kActionIDSpace, kHighQualityActionID, kPerformanceUIPrefix + 2)
DECLARE_PMID(kActionIDSpace, kTypicalActionID, kPerformanceUIPrefix + 3)
DECLARE_PMID(kActionIDSpace, kOptimizedActionID, kPerformanceUIPrefix + 4)
DECLARE_PMID(kActionIDSpace, kClearOverrideActionID, kPerformanceUIPrefix + 5)
DECLARE_PMID(kActionIDSpace, kPerfViewSepActionID, kPerformanceUIPrefix + 6)
DECLARE_PMID(kActionIDSpace, kPerfObjSepActionID, kPerformanceUIPrefix + 7)
DECLARE_PMID(kActionIDSpace, kForceHighQualityActionID, kPerformanceUIPrefix + 8)
DECLARE_PMID(kActionIDSpace, kForceTypicalActionID, kPerformanceUIPrefix + 9)
DECLARE_PMID(kActionIDSpace, kForceOptimizedActionID, kPerformanceUIPrefix + 10)
DECLARE_PMID(kActionIDSpace, kClearDocOverridesActionID, kPerformanceUIPrefix + 11)
// Context menu
DECLARE_PMID(kActionIDSpace, kContextHighQualityActionID, kPerformanceUIPrefix + 12)
DECLARE_PMID(kActionIDSpace, kContextTypicalActionID, kPerformanceUIPrefix + 13)
DECLARE_PMID(kActionIDSpace, kContextOptimizedActionID, kPerformanceUIPrefix + 14)
DECLARE_PMID(kActionIDSpace, kContextClearDocOverridesActionID, kPerformanceUIPrefix + 15)
DECLARE_PMID(kActionIDSpace, kContextAllowDocOverridesActionID, kPerformanceUIPrefix + 16)
DECLARE_PMID(kActionIDSpace, kContextInterruptDrawActionID, kPerformanceUIPrefix + 17)

DECLARE_PMID(kActionIDSpace, kPerformanceUIPrefsSepMAID, kPerformanceUIPrefix + 18)
DECLARE_PMID(kActionIDSpace, kHighResSubMenuSepActionID, kPerformanceUIPrefix + 19)
DECLARE_PMID(kActionIDSpace, kPerfViewSep2ActionID, kPerformanceUIPrefix + 20)


//
//Script Element IDs
//

//Suites

//Objects
DECLARE_PMID(kScriptInfoIDSpace, kDisplayPerformancePreferenceObjectScriptElement,		kPerformanceUIPrefix + 40)
DECLARE_PMID(kScriptInfoIDSpace, kDisplaySettingObjectScriptElement,					kPerformanceUIPrefix + 41)

//Events

//Properties
DECLARE_PMID(kScriptInfoIDSpace, kDefaultDisplaySettingsPropertyScriptElement,			kPerformanceUIPrefix + 160)
DECLARE_PMID(kScriptInfoIDSpace, kIgnoreLocalSettingsPropertyScriptElement,				kPerformanceUIPrefix + 161)
DECLARE_PMID(kScriptInfoIDSpace, kDisplayPerformancePreferencesPropertyScriptElement,	kPerformanceUIPrefix + 162)
DECLARE_PMID(kScriptInfoIDSpace, kRasterPropertyScriptElement,							kPerformanceUIPrefix + 163)
DECLARE_PMID(kScriptInfoIDSpace, kVectorPropertyScriptElement,							kPerformanceUIPrefix + 164)
DECLARE_PMID(kScriptInfoIDSpace, kTransparencyPropertyScriptElement,					kPerformanceUIPrefix + 165)
DECLARE_PMID(kScriptInfoIDSpace, kAntiAliasPropertyScriptElement,						kPerformanceUIPrefix + 166)
DECLARE_PMID(kScriptInfoIDSpace, kGreekBelowPropertyScriptElement,						kPerformanceUIPrefix + 167)
DECLARE_PMID(kScriptInfoIDSpace, kSaveLocalSettingsPropertyScriptElement,				kPerformanceUIPrefix + 168)

//Enums
DECLARE_PMID(kScriptInfoIDSpace, kTagTransparencyEnumScriptElement,						kPerformanceUIPrefix + 220)
DECLARE_PMID(kScriptInfoIDSpace, kTagVectorEnumScriptElement,							kPerformanceUIPrefix + 221)
DECLARE_PMID(kScriptInfoIDSpace, kTagRasterEnumScriptElement,							kPerformanceUIPrefix + 222)

#endif // __PERFORMANCEUIID__
