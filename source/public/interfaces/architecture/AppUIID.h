//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/AppUIID.h $
//  
//  Owner: Bernd Paradies
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/04/27 23:40:40 $
//  
//  $Revision: #15 $
//  
//  $Change: 910020 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __AppUIID__
#define __AppUIID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kAppUIPrefix	 RezLong(0x16400)		// see AdobePrefix.h
#define kAppUIPrefix2	RezLong(0x21800)

// PluginID
#define kAppUIPluginName 	"AppUI"
DECLARE_PMID(kPlugInIDSpace, kAppUIPluginID, kAppUIPrefix + 1)

// <Class ID>
// ClassIDs
DECLARE_PMID(kClassIDSpace, kSelectionScriptProviderBoss, kAppUIPrefix + 1)	//jwb 4/30/02 moved from ScriptingID.h
DECLARE_PMID(kClassIDSpace, kAbstractLayoutDocumentSelectionBoss, kAppUIPrefix + 2)
DECLARE_PMID(kClassIDSpace, kAbstractWorkspaceSelectionBoss, kAppUIPrefix + 3)
DECLARE_PMID(kClassIDSpace, kAbstractNoteTextSelectionBoss, kAppUIPrefix + 4)
DECLARE_PMID(kClassIDSpace, kAbstractGalleyDocumentSelectionBoss, kAppUIPrefix + 5)
DECLARE_PMID(kClassIDSpace, kAbstractStoryEditorSelectionBoss, kAppUIPrefix + 6)
DECLARE_PMID(kClassIDSpace, kOWLMenuActionComponentBoss, kAppUIPrefix + 7)
DECLARE_PMID(kClassIDSpace, kAbstractXMLSelectionBoss, kAppUIPrefix + 8)
DECLARE_PMID(kClassIDSpace, kUserInterfacePrefsMenuActionBoss, kAppUIPrefix + 9)
DECLARE_PMID(kClassIDSpace, kUserInterfacePrefsDialogBoss, kAppUIPrefix + 10)
DECLARE_PMID(kClassIDSpace, kShowFullMenusCmdBoss, kAppUIPrefix + 11)
DECLARE_PMID(kClassIDSpace, kDynamicPauseTimerBoss, kAppUIPrefix + 12)
DECLARE_PMID(kClassIDSpace, kTablessPaletteFactoryBoss, kAppUIPrefix + 13)
DECLARE_PMID(kClassIDSpace, kFullScreenShortcutContextBoss, kAppUIPrefix + 14)
//gap
DECLARE_PMID(kClassIDSpace, kCustomizeKitComponentBoss, kAppUIPrefix + 23)
DECLARE_PMID(kClassIDSpace, kControlSetPopupMenuButtonBoss, kAppUIPrefix + 24)
DECLARE_PMID(kClassIDSpace, kControlSetTreeListWidgetBoss, kAppUIPrefix + 25)
DECLARE_PMID(kClassIDSpace, kMenuSetSAXHandlerBoss, kAppUIPrefix + 26)
DECLARE_PMID(kClassIDSpace, kPaletteWorkspaceActionComponentBoss, kAppUIPrefix + 27)
DECLARE_PMID(kClassIDSpace, kSavePaletteWorkspaceDialogBoss, kAppUIPrefix + 28)
DECLARE_PMID(kClassIDSpace, kDeletePaletteWorkspaceDialogBoss, kAppUIPrefix + 29)
DECLARE_PMID(kClassIDSpace, kWorkspaceFilenameTextComboBoxWidgetBoss, kAppUIPrefix + 30)
DECLARE_PMID(kClassIDSpace, kRemoveWindowMessage, kAppUIPrefix + 31)
DECLARE_PMID(kClassIDSpace, kWindowAddedMessage, kAppUIPrefix + 32)
DECLARE_PMID(kClassIDSpace, kGeneralUIPrefsScriptProviderBoss, kAppUIPrefix + 33)
DECLARE_PMID(kClassIDSpace, kLoadUserWorkspaceCmdBoss, kAppUIPrefix + 36)
DECLARE_PMID(kClassIDSpace, kPWDefaultSAXHandlerBoss, kAppUIPrefix + 37)
DECLARE_PMID(kClassIDSpace, kPanelMgrMenuBoss, kAppUIPrefix + 38)
DECLARE_PMID(kClassIDSpace, kToolInitializerBoss, kAppUIPrefix + 39)
DECLARE_PMID(kClassIDSpace, kUndoRedoDynamicMenuBoss, kAppUIPrefix + 40)
// these next 2 are 'message ids' note they still conflict with class ids, so don't be tempted to pull them out of this id space...
DECLARE_PMID(kMessageIDSpace, kPaletteWorkspaceSavedMsg, kAppUIPrefix + 41)
DECLARE_PMID(kMessageIDSpace, kPaletteWorkspaceDeletedMsg, kAppUIPrefix + 42)
DECLARE_PMID(kMessageIDSpace, kPaletteWorkspaceLoadedMsg, kAppUIPrefix + 43)
DECLARE_PMID(kMessageIDSpace, kPaletteWorkspaceLoadingDynamicPanelMsg, kAppUIPrefix + 44)
DECLARE_PMID(kClassIDSpace, kUICustomizationSaveEditboxBoss, kAppUIPrefix + 45)
DECLARE_PMID(kClassIDSpace, kApplyAllAlertDialogBoss, kAppUIPrefix + 46)
DECLARE_PMID(kClassIDSpace, kSuppressedUISAXHandlerBoss, kAppUIPrefix + 47)
DECLARE_PMID(kClassIDSpace, kSuppressedUIResetMsg, kAppUIPrefix + 48)
DECLARE_PMID(kClassIDSpace, kSuppressedUIXMLReadMsg, kAppUIPrefix + 49)
DECLARE_PMID(kClassIDSpace, kWindowScriptProviderBoss,				kAppUIPrefix + 50)
DECLARE_PMID(kClassIDSpace, kDocFrameworkTestMenuBoss,				kAppUIPrefix + 51)
DECLARE_PMID(kClassIDSpace, kAppUIErrorStringServiceBoss,			kAppUIPrefix + 52)
DECLARE_PMID(kClassIDSpace, kMenuSetSaveAsButtonBoss,			kAppUIPrefix + 53)
// gap
DECLARE_PMID(kClassIDSpace, kWindowScriptEventResponderServiceBoss,	 kAppUIPrefix + 55)
DECLARE_PMID(kClassIDSpace, kPanelScriptBoss,	 		kAppUIPrefix + 56)
DECLARE_PMID(kClassIDSpace, kSetActiveWorkspaceCmdBoss,	kAppUIPrefix + 57)
DECLARE_PMID(kClassIDSpace, kPanelScriptProviderBoss,	kAppUIPrefix + 58)
DECLARE_PMID(kClassIDSpace, kMenuSetDropDownBoss,	kAppUIPrefix + 59)
DECLARE_PMID(kClassIDSpace, kMenuColorInLineEditContainerWidgetBoss, kAppUIPrefix + 60)
DECLARE_PMID(kClassIDSpace, kSetMenuCustomizationPrefsCmdBoss, kAppUIPrefix + 61)
DECLARE_PMID(kClassIDSpace, kMenuSetSaveButtonBoss,			kAppUIPrefix + 62)
DECLARE_PMID(kClassIDSpace, kMenuSetInfoChangedMessageID,		kAppUIPrefix + 63) // not a real boss, just a message
DECLARE_PMID(kClassIDSpace, kMenuSetDeleteButtonBoss,			kAppUIPrefix + 64)
DECLARE_PMID(kClassIDSpace, kUICustomizationSaveDialogBoss,		kAppUIPrefix + 65)
DECLARE_PMID(kClassIDSpace, kAppUIConversionProviderBoss,		kAppUIPrefix + 66)
DECLARE_PMID(kClassIDSpace, kMenuSetResetMessageID,				kAppUIPrefix + 67) // not a real boss, just a message
DECLARE_PMID(kClassIDSpace, kClosePresentationCmdBoss, kAppUIPrefix + 68)
DECLARE_PMID(kClassIDSpace, kSetAppFrameBoundsPrefCmdBoss, kAppUIPrefix + 69)
DECLARE_PMID(kClassIDSpace, kUICustomizationActionComponentBoss, kAppUIPrefix + 70)
DECLARE_PMID(kClassIDSpace, kAppBarUpdateDataModelCmdBoss, kAppUIPrefix + 71)
DECLARE_PMID(kClassIDSpace, kUICustomizationMenusDialogBoss, kAppUIPrefix + 72)
//gap
DECLARE_PMID(kClassIDSpace, kUICustomizationMenusTreeWidgetBoss, kAppUIPrefix + 74)
DECLARE_PMID(kClassIDSpace, kUICustomizationMenuFilterBoss, kAppUIPrefix + 75)
DECLARE_PMID(kClassIDSpace, kCachedMenuTreeStructureBoss, kAppUIPrefix + 76)
DECLARE_PMID(kClassIDSpace, kUICustomizationEyeballBoss, kAppUIPrefix + 77)
DECLARE_PMID(kClassIDSpace, kWorkspaceValidatorSAXHandlerBoss, kAppUIPrefix + 78)
DECLARE_PMID(kClassIDSpace, kAMTUIStartupShutdownBoss, kAppUIPrefix + 79)
DECLARE_PMID(kClassIDSpace, kAMTUIOnLaunchCmdBoss, kAppUIPrefix + 80)
DECLARE_PMID(kClassIDSpace, kAMTUIIdleTaskBoss, kAppUIPrefix + 81)
DECLARE_PMID(kClassIDSpace, kAMTUIComponentBoss, kAppUIPrefix + 82)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsTipsCmdBoss, kAppUIPrefix + 83)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsToolboxCmdBoss, kAppUIPrefix + 84)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsDrawersCmdBoss, kAppUIPrefix + 85)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsThumbnailsCmdBoss, kAppUIPrefix + 86)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsOpenRecentCmdBoss, kAppUIPrefix + 87)
DECLARE_PMID(kClassIDSpace, kSetUserInterfaceShowDimensionsCursorCmdBoss, kAppUIPrefix + 88)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsAutoRevealCmdBoss, kAppUIPrefix + 89)
DECLARE_PMID(kClassIDSpace, kOWLHostedPanelWrapperBoss, kAppUIPrefix + 90)
DECLARE_PMID(kClassIDSpace, kOWLHostedTabAwarePalettePanelWrapperBoss, kAppUIPrefix + 91)
DECLARE_PMID(kClassIDSpace, kDock_PaletteFactoryBoss, kAppUIPrefix + 92)
DECLARE_PMID(kClassIDSpace, kPaletteLeaf_PaletteFactoryBoss, kAppUIPrefix + 93)
DECLARE_PMID(kClassIDSpace, kOWLFlashPlayerWidgetBoss, kAppUIPrefix + 94)
//gap
DECLARE_PMID(kClassIDSpace, kOWLHostedDocumentPresentationBoss, kAppUIPrefix + 96)
DECLARE_PMID(kClassIDSpace, kDocumentPresentationBoss, kAppUIPrefix + 97)  // OWL2_CS4: replaces kDocumentWindowBoss
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsShowAppBarCmdBoss, kAppUIPrefix + 98)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsEnableFloatingPresentationDockingCmdBoss, kAppUIPrefix + 99)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsUseApplicationFrameCmdBoss, kAppUIPrefix + 100)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsOpenNewDocumentsInTabsCmdBoss, kAppUIPrefix + 101)
//gap
DECLARE_PMID(kClassIDSpace, kSetUserInterfaceShowContentGrabberCmdBoss, kAppUIPrefix + 103)
DECLARE_PMID(kClassIDSpace, kSetUserInterfaceShowLiveCornersCmdBoss, kAppUIPrefix + 104)

DECLARE_PMID(kClassIDSpace, kSetUserInterfaceShowAnchorAdornmentCmdBoss, kAppUIPrefix + 105)
DECLARE_PMID(kClassIDSpace, kSetAutoAddSwatchToCCLibrariesPreferenceCmdBoss, kAppUIPrefix + 106)
DECLARE_PMID(kClassIDSpace, kSetAutoAddCharStyleToCCLibrariesPreferenceCmdBoss, kAppUIPrefix + 107)
DECLARE_PMID(kClassIDSpace, kSetAutoAddParaStyleToCCLibrariesPreferenceCmdBoss, kAppUIPrefix + 108)
// gap
DECLARE_PMID(kClassIDSpace, kModifiedDocumentCheckThreadBoss, kAppUIPrefix + 113)
DECLARE_PMID(kClassIDSpace, kWarningWithCancelDialogBoss, kAppUIPrefix + 114 )
//gap
// Background UI Bosses
DECLARE_PMID(kClassIDSpace, kBGUIPanelBoss, kAppUIPrefix + 117 )
DECLARE_PMID(kClassIDSpace, kBGTaskMonitorThreadBoss, kAppUIPrefix + 118 )
DECLARE_PMID(kClassIDSpace, kAlertBackgroundTaskDialogBoss, kAppUIPrefix + 119 )
DECLARE_PMID(kClassIDSpace, kBackgroundTaskAlertsTreeViewWidgetBoss, kAppUIPrefix + 120) 
DECLARE_PMID(kClassIDSpace, kBackgroundTaskAlertsNodeGroupWidgetBoss, kAppUIPrefix + 121) 
DECLARE_PMID(kClassIDSpace, kBackgroundTaskAlertsStaticTextWidgetBoss, kAppUIPrefix + 122) 

DECLARE_PMID(kClassIDSpace, kPageSizePresetInfoDialogBoss, kAppUIPrefix + 123)
DECLARE_PMID(kClassIDSpace, kPageSizePresetItemListBoxBoss, kAppUIPrefix + 124)
DECLARE_PMID(kClassIDSpace, kPageSizePresetDropdownListWidgetBoss, kAppUIPrefix + 125)
DECLARE_PMID(kClassIDSpace, kSetShowMasterPageOverlayPrefCmdBoss, kAppUIPrefix + 126)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsEnableMultiTouchGesturesCmdBoss, kAppUIPrefix + 127)
DECLARE_PMID(kClassIDSpace, kSetPreventSelectingLockedItemsPrefCmdBoss, kAppUIPrefix + 128)
DECLARE_PMID(kClassIDSpace, kBackgroundTaskMultiLineTextWidgetBoss, kAppUIPrefix + 129)
DECLARE_PMID(kClassIDSpace, kSetWhatsNewDialogStartupPreferenceCmdBoss, kAppUIPrefix + 130)
DECLARE_PMID(kClassIDSpace, kSetObjectsMoveWithPagePrefCmdBoss, kAppUIPrefix + 131)
DECLARE_PMID(kClassIDSpace, kPageSizeNameEditBoxWidgetBoss, kAppUIPrefix + 132 )
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsObjectFrameHighlightingCmdBoss, kAppUIPrefix + 133)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsScrollAllWindowsCmdBoss, kAppUIPrefix + 134)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsZoomAllWindowsCmdBoss, kAppUIPrefix + 135)
DECLARE_PMID(kClassIDSpace, kSetEnableDrawProxyOnDragCmdBoss, kAppUIPrefix + 136)
DECLARE_PMID(kClassIDSpace, kSetUserInterfaceShowRibbonCmdBoss, kAppUIPrefix + 137)
DECLARE_PMID(kClassIDSpace, kSetUserInterfaceEnableCreateLinksCmdBoss, kAppUIPrefix + 138)
DECLARE_PMID(kClassIDSpace, kSetUserInterfaceEnableMapStylesCmdBoss, kAppUIPrefix + 139)
DECLARE_PMID(kClassIDSpace, kSetUserInterfaceUseCustomMonitorResolutionCmdBoss,	kAppUIPrefix + 140)
DECLARE_PMID(kClassIDSpace, kSetUserInterfaceSetCustomMonitorResolutionCmdBoss,	kAppUIPrefix + 141)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsUIBrightnessCmdBoss,			kAppUIPrefix + 142)
DECLARE_PMID(kClassIDSpace, kSetUserInterfacePrefsPasteboardColorCmdBoss,		kAppUIPrefix + 143)

// Settings in cloud
DECLARE_PMID(kClassIDSpace, kSettingsInCloudActionComponentBoss, kAppUIPrefix + 144)
DECLARE_PMID(kClassIDSpace, kSettingsInCloudPanelWidgetBoss, kAppUIPrefix + 145)
DECLARE_PMID(kClassIDSpace, kSettingsInCloudDialogBoss, kAppUIPrefix + 146)
DECLARE_PMID(kClassIDSpace, kSettingsInCloudPrefsDialogBoss, kAppUIPrefix + 147)
DECLARE_PMID(kClassIDSpace, kSettingsInCloudPrefsActionComponentBoss, kAppUIPrefix + 148)
DECLARE_PMID(kClassIDSpace, kSettingsInCloudMenuActionComponentBoss, kAppUIPrefix + 150)
DECLARE_PMID(kClassIDSpace, kSettingsInCloudLaunch1stDialogCmdBoss, kAppUIPrefix + 151)
DECLARE_PMID(kClassIDSpace, kSettingsInCloudLaunchPrefDialogCmdBoss, kAppUIPrefix + 152)
DECLARE_PMID(kClassIDSpace, kSettingsInCloudNewDocResponderBoss, kAppUIPrefix + 153)
DECLARE_PMID(kClassIDSpace, kSettingsInCloudOpenDocResponderBoss, kAppUIPrefix + 154)
DECLARE_PMID(kClassIDSpace, kBGUIPanelTreeElementWidgetBoss, kAppUIPrefix + 155)
DECLARE_PMID(kClassIDSpace, kBGUIPanelTreeWidgetBoss, kAppUIPrefix + 156)
DECLARE_PMID(kClassIDSpace, kWorkspaceSettingsMigrationBoss, kAppUIPrefix + 157)
DECLARE_PMID(kClassIDSpace, kMenuSetSettingsMigrationBoss, kAppUIPrefix + 158)
DECLARE_PMID(kClassIDSpace, kSettingsMigrationLazyStartupShutdownBoss, kAppUIPrefix + 159)
DECLARE_PMID(kClassIDSpace, kSettingsMigrationDialogBoss, kAppUIPrefix + 160)
DECLARE_PMID(kClassIDSpace, kValidateRetrySettingsMigrationCmdBoss, kAppUIPrefix + 161)
DECLARE_PMID(kClassIDSpace, kSettingsMigrationMenuActionComponentBoss, kAppUIPrefix + 162)

DECLARE_PMID(kClassIDSpace, kBGTaskSpinIconCursorProviderBoss, kAppUIPrefix + 163)
DECLARE_PMID(kClassIDSpace, kAddonsStartupShutdownBoss, kAppUIPrefix + 164)
//gap
#ifdef WINDOWS 
DECLARE_PMID(kClassIDSpace, kWinUIScalingPrefsBoss, kAppUIPrefix + 166)
DECLARE_PMID(kClassIDSpace, kWinUIScalingPrefsDialogBoss, kAppUIPrefix + 167)
DECLARE_PMID(kClassIDSpace, kSetWinUIScalingPrefsCmdBoss, kAppUIPrefix + 168)
#endif	
DECLARE_PMID(kClassIDSpace, kExperimentalFeaturesPrefsActionComponentBoss, kAppUIPrefix + 169)
DECLARE_PMID(kClassIDSpace, kExperimentalFeaturesPrefsDialogBoss, kAppUIPrefix + 170) 
DECLARE_PMID(kClassIDSpace, kSetExperimentalFeaturesPrefsCmdBoss, kAppUIPrefix + 171)
DECLARE_PMID(kClassIDSpace, kUserInterfacePrefsNewWSResponderBoss, kAppUIPrefix + 172)
DECLARE_PMID(kClassIDSpace, kUserInterfacePrefsPhase2ConverterBoss, kAppUIPrefix + 173)


// <Message ID> - Bear in mind that there's no such thing as a message id space really,
// since some ClassIDs are used to signal observers.
// These ID's conflict with ClassIDs. Try to make sure they don't overlap.
DECLARE_PMID(kMessageIDSpace, kDockedPaletteAreaChangedMsg, kAppUIPrefix + 120)
DECLARE_PMID(kMessageIDSpace, kDockedPaletteAreaChangedByUserMsg, kAppUIPrefix + 121)
DECLARE_PMID(kMessageIDSpace, kDisplayChangeMsg, kAppUIPrefix + 122)
DECLARE_PMID(kMessageIDSpace, kClickWhichDidntGenerateMouseDownMsg, kAppUIPrefix + 123)
DECLARE_PMID(kMessageIDSpace, kAboutToClosePaletteMsg, kAppUIPrefix + 124)
DECLARE_PMID(kMessageIDSpace, kMDIClientClickedMsg, kAppUIPrefix + 125)
DECLARE_PMID(kMessageIDSpace, kAppFrameResizeMsg, kAppUIPrefix + 126)
DECLARE_PMID(kMessageIDSpace, kPanelMgrAboutToStartupMsg, kAppUIPrefix + 127)
DECLARE_PMID(kMessageIDSpace, kPanelMgrHasStartedMsg, kAppUIPrefix + 128)
DECLARE_PMID(kMessageIDSpace, kPanelMgrAboutToShutdownMsg, kAppUIPrefix + 129)
DECLARE_PMID(kMessageIDSpace, kPanelMgrHasShutdownMsg, kAppUIPrefix + 130)
DECLARE_PMID(kMessageIDSpace, kAppFrameRestoreMsg, kAppUIPrefix + 131)

DECLARE_PMID(kMessageIDSpace, kPresentationOpenedMessage, kAppUIPrefix + 132 )
DECLARE_PMID(kMessageIDSpace, kPresentationClosedMessage, kAppUIPrefix + 133 )
DECLARE_PMID(kMessageIDSpace, kBGTaskThreadUpdateMessage, kAppUIPrefix + 134 )
DECLARE_PMID(kMessageIDSpace, kBrightnessPrefsChangedMsg, kAppUIPrefix + 135 )
DECLARE_PMID(kMessageIDSpace, kBGAddTaskMessage, kAppUIPrefix + 136 )
DECLARE_PMID(kMessageIDSpace, kBGRemoveTaskMessage, kAppUIPrefix + 137 )
DECLARE_PMID(kMessageIDSpace, kPaletteVisibilityChangedMessage, kAppUIPrefix + 138)



// <Interface ID>
// IIDs
DECLARE_PMID(kInterfaceIDSpace, IID_ILOCALEIDCONVERSION, kAppUIPrefix + 1)
DECLARE_PMID(kInterfaceIDSpace, IID_IPRIMARYCSB, kAppUIPrefix + 2)
DECLARE_PMID(kInterfaceIDSpace, IID_IUICUSTOMIZATIONUTILS, kAppUIPrefix + 3)
DECLARE_PMID(kInterfaceIDSpace, IID_ICURSORUTILS, kAppUIPrefix + 4)
DECLARE_PMID(kInterfaceIDSpace, IID_IPRIVATEOWLUTILS, kAppUIPrefix + 5)
DECLARE_PMID(kInterfaceIDSpace, IID_IOWLWORKSPACEMENUOBSERVER, kAppUIPrefix + 6)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSETSTATESDATA, kAppUIPrefix + 7)
DECLARE_PMID(kInterfaceIDSpace, IID_IDOCUMENTWINDOW, kAppUIPrefix + 8)
DECLARE_PMID(kInterfaceIDSpace, IID_ICACHEDMENUTREESTRUCTURE, kAppUIPrefix + 9)
DECLARE_PMID(kInterfaceIDSpace, IID_IPALETTEWORKSPACE, kAppUIPrefix + 10)
DECLARE_PMID(kInterfaceIDSpace, IID_ISECTIONRESIZESTATE, kAppUIPrefix + 11)
DECLARE_PMID(kInterfaceIDSpace, IID_ITABLABELJUSTIFICATIONDATA, kAppUIPrefix + 12)
DECLARE_PMID(kInterfaceIDSpace, IID_IENABLETREEVIEWVALIDATIONBOOLDATA, kAppUIPrefix + 13)
DECLARE_PMID(kInterfaceIDSpace, IID_IGENERATINGDEFAULTPWBOOLDATA, kAppUIPrefix + 14)
DECLARE_PMID(kInterfaceIDSpace, IID_IPALETTEPANELSCRIPTUTILS, kAppUIPrefix + 15)
DECLARE_PMID(kInterfaceIDSpace, IID_ISYSCONTROLDATA, kAppUIPrefix + 16)	
DECLARE_PMID(kInterfaceIDSpace, IID_IPALETTEUTILS, kAppUIPrefix + 17)	
DECLARE_PMID(kInterfaceIDSpace, IID_IUSERINTERFACEPREFERENCES, kAppUIPrefix + 18)
DECLARE_PMID(kInterfaceIDSpace, IID_IUSERINTERFACEPREFERENCESFACADE, kAppUIPrefix + 19)
DECLARE_PMID(kInterfaceIDSpace, IID_IACCELERATORUTILS, kAppUIPrefix + 20)
DECLARE_PMID(kInterfaceIDSpace, IID_IPANELICONPROVIDER, kAppUIPrefix + 21)
DECLARE_PMID(kInterfaceIDSpace, IID_IAPPBARUIOBSERVER, kAppUIPrefix + 22)
DECLARE_PMID(kInterfaceIDSpace, IID_IACTIVEWORKSPACENAMEPREF, kAppUIPrefix + 23)
DECLARE_PMID(kInterfaceIDSpace, IID_IDOCUMENTWINDOWSERVICE, kAppUIPrefix + 24)
DECLARE_PMID(kInterfaceIDSpace, IID_IREFPOINTUIUTILS, kAppUIPrefix + 25)
DECLARE_PMID(kInterfaceIDSpace, IID_ICENTERONSCREEN, kAppUIPrefix + 26)
DECLARE_PMID(kInterfaceIDSpace, IID_IUSAGETRACKING, kAppUIPrefix + 27)
//gap
DECLARE_PMID(kInterfaceIDSpace, IID_IDIALOGWASCANCELLED, kAppUIPrefix + 29)
DECLARE_PMID(kInterfaceIDSpace, IID_IUSERINTERFACE, kAppUIPrefix + 30)	
DECLARE_PMID(kInterfaceIDSpace, IID_ISUPPRESSEDUI, kAppUIPrefix + 31)	
DECLARE_PMID(kInterfaceIDSpace, IID_ISUPPRESSEDUIWITHXMLFILEDATA, kAppUIPrefix + 32)	
DECLARE_PMID(kInterfaceIDSpace, IID_IWINDOWSCRIPTUTILS, kAppUIPrefix + 33)
DECLARE_PMID(kInterfaceIDSpace, IID_IDOCUMENTUIUTILS, kAppUIPrefix + 34)
DECLARE_PMID(kInterfaceIDSpace, IID_ISWATCHFACADEUI, kAppUIPrefix + 35)
DECLARE_PMID(kInterfaceIDSpace, IID_IEVENTUTILS, kAppUIPrefix + 36)
DECLARE_PMID(kInterfaceIDSpace, IID_IAPPLICATIONACTIVESTATE, kAppUIPrefix + 37)
DECLARE_PMID(kInterfaceIDSpace, IID_IMISSINGCONVERSIONUTILS, kAppUIPrefix + 38)
DECLARE_PMID(kInterfaceIDSpace, IID_ISHOWALERTREGISTRYUTILS, kAppUIPrefix + 39)
DECLARE_PMID(kInterfaceIDSpace, IID_ILOADUSERWORKSPACECMDDATA, kAppUIPrefix + 40)
DECLARE_PMID(kInterfaceIDSpace, IID_ITOOLBARSIZEINFO, kAppUIPrefix + 41)
DECLARE_PMID(kInterfaceIDSpace, IID_IPASTEWITHTYPOGRAPHERSQUOTES, kAppUIPrefix + 42)
DECLARE_PMID(kInterfaceIDSpace, IID_WORKSPACECONTAINSPALETTESDATA, kAppUIPrefix + 43)
DECLARE_PMID(kInterfaceIDSpace, IID_WORKSPACECONTAINSMENUSDATA, kAppUIPrefix + 44)
DECLARE_PMID(kInterfaceIDSpace, IID_IOWLPALETTESIZER, kAppUIPrefix + 45)
DECLARE_PMID(kInterfaceIDSpace, IID_IPRIVATEPANELMGRUTILS, kAppUIPrefix + 46)
DECLARE_PMID(kInterfaceIDSpace, IID_IDOCWINDOWRESTOREBOUNDS, kAppUIPrefix + 47)
DECLARE_PMID(kInterfaceIDSpace, IID_IFLASHPLAYERCONTROLLER, kAppUIPrefix + 48)
DECLARE_PMID(kInterfaceIDSpace, IID_IPANELRESTOREWIDGETIDDATA, kAppUIPrefix + 49)
DECLARE_PMID(kInterfaceIDSpace, IID_IPALETTEREFDATA, kAppUIPrefix + 50 )
DECLARE_PMID(kInterfaceIDSpace,	IID_IDOCUMENTTITLEDATA,	kAppUIPrefix + 51)
DECLARE_PMID(kInterfaceIDSpace,	IID_IDOCUMENTTOOLTIPDATA,	kAppUIPrefix + 52)
DECLARE_PMID(kInterfaceIDSpace,	IID_IDOCUMENTPRESENTATION,	kAppUIPrefix + 53) // OWL2_CS4: Replaces IID_IDOCUMENTWINDOW on  document presentation (was document window) boss
DECLARE_PMID(kInterfaceIDSpace, IID_IPRESENTATIONLIST, kAppUIPrefix + 54 )  // OWL2_CS4: Replaces IID_IWINDOWLIST on the document presentation (was document window) boss
DECLARE_PMID(kInterfaceIDSpace, IID_IPRESENTATIONCMDDATA, kAppUIPrefix + 55 ) // OWL2_CS4: Replaces IID_ICLOSELAYOUTWINCMDDATA on various commands 
DECLARE_PMID(kInterfaceIDSpace,	IID_IDOCUMENTPRESENTATONLABELPROVIDER, kAppUIPrefix + 56) // OWL2_CS4: Replaces IID_IDOCUMENTWINDOWTITLEPROVIDER 
DECLARE_PMID(kInterfaceIDSpace,	IID_IPALETTEPRESENTATION, kAppUIPrefix + 57) // OWL2_CS4: Added to top level palette boss objects (that contain an IWindow) 
DECLARE_PMID(kInterfaceIDSpace,	IID_IAPPFRAMEBOUNDSPREF,	kAppUIPrefix + 58)
DECLARE_PMID(kInterfaceIDSpace,	IID_IHOSTEDRESIZECURSORPROVIDER,	kAppUIPrefix + 59)
//DECLARE_PMID(kInterfaceIDSpace,	IID_IIWANTSYSKEYFOCUS,	kAppUIPrefix + 60)
DECLARE_PMID(kInterfaceIDSpace,	IID_IDEFERREDRESIZESTATE,	kAppUIPrefix + 61) // treat as IIntData
DECLARE_PMID(kInterfaceIDSpace,	IID_IDOCUMENTEXTENDEDTITLEDATA,	kAppUIPrefix + 62)
DECLARE_PMID(kInterfaceIDSpace, IID_ISCRIPTSELECTIONOBSERVER, kAppUIPrefix + 63)
DECLARE_PMID(kInterfaceIDSpace,	IID_IAPPFRAMEZOOMPREF,	kAppUIPrefix + 64) // treat as IBoolData
DECLARE_PMID(kInterfaceIDSpace, IID_IFULLSCREENRESTOREDATA, kAppUIPrefix + 65)
DECLARE_PMID(kInterfaceIDSpace, IID_IPAGESIZEINTENT, kAppUIPrefix + 66)
#if 0
//STATIC_SWF_IN_WIDGET
DECLARE_PMID(kInterfaceIDSpace, IID_ILOADAPECOMPONENT, kAppUIPrefix + 67)
#endif
DECLARE_PMID(kInterfaceIDSpace, IID_IANYBGTASKSACTIVE, kAppUIPrefix + 68)
DECLARE_PMID(kInterfaceIDSpace, IID_IBGTASKSUIUTILS, kAppUIPrefix + 69 )
DECLARE_PMID(kInterfaceIDSpace, IID_IBGTASKSMONITORUPDATETRIGGER, kAppUIPrefix + 70 )
DECLARE_PMID(kInterfaceIDSpace, IID_IBGTASKSCOMPLETED, kAppUIPrefix + 71 )
DECLARE_PMID(kInterfaceIDSpace, IID_IBACKGROUNDTASKALERTDATA, kAppUIPrefix + 72 )
DECLARE_PMID(kInterfaceIDSpace, IID_IBGALERTSDIALOGDONE, kAppUIPrefix + 73 )
DECLARE_PMID(kInterfaceIDSpace, IID_IPRIVATEPAGESIZEPRESETUTILS, kAppUIPrefix + 74 )
DECLARE_PMID(kInterfaceIDSpace, IID_IRESERVEDNAMELIST, kAppUIPrefix + 75 )
DECLARE_PMID(kInterfaceIDSpace, IID_IBGTASKALERTSDLGMGR, kAppUIPrefix + 76 )
DECLARE_PMID(kInterfaceIDSpace, IID_IBGTASKALERTSDLGUPDATE, kAppUIPrefix + 77 )
//gap
DECLARE_PMID(kInterfaceIDSpace, IID_IAPEUTILS, kAppUIPrefix + 79 )
DECLARE_PMID(kInterfaceIDSpace, IID_IADDEDOREDITEDSIZES, kAppUIPrefix + 80 )
DECLARE_PMID(kInterfaceIDSpace, IID_IDISABLEDIALOGCACHING, kAppUIPrefix + 81 )
DECLARE_PMID(kInterfaceIDSpace, IID_IDISABLEDIALOGINSTANCECACHINGONLY, kAppUIPrefix + 82 )
DECLARE_PMID(kInterfaceIDSpace, IID_ITRANSFORMCURSORPANELUIDDATA, kAppUIPrefix + 83 )
DECLARE_PMID(kInterfaceIDSpace, IID_ISETTINGSINCLOUDDIALOGIDLETASK, kAppUIPrefix + 84 )
DECLARE_PMID(kInterfaceIDSpace, IID_ISETTINGSINCLOUDMENUOBSERVER, kAppUIPrefix + 85 )
#ifdef WINDOWS 
DECLARE_PMID(kInterfaceIDSpace, IID_IWINUISCALINGPREFS, kAppUIPrefix + 86 )
#endif
DECLARE_PMID(kInterfaceIDSpace, IID_IFORCESHOWWHATSNEW, kAppUIPrefix + 87 )
DECLARE_PMID(kInterfaceIDSpace, IID_IIMAGESTITCHER, kAppUIPrefix + 88 )
DECLARE_PMID(kInterfaceIDSpace, IID_IEXPERIMENTALFEATURESPREFS, kAppUIPrefix + 89)
DECLARE_PMID(kInterfaceIDSpace, IID_IPALETTEWORKSPACECONVERSION, kAppUIPrefix + 90)


// <Widget ID>
DECLARE_PMID(kWidgetIDSpace, kSavePaletteWSNameStaticWidgetID, kAppUIPrefix + 1)
DECLARE_PMID(kWidgetIDSpace, kSavePaletteWSEditBoxWidgetID, kAppUIPrefix + 2)
DECLARE_PMID(kWidgetIDSpace, kDeletePaletteWSPopupWidgetID, kAppUIPrefix + 3)
DECLARE_PMID(kWidgetIDSpace, kSavePaletteWSCaptureGroupPanelWidgetID, kAppUIPrefix + 4)
DECLARE_PMID(kWidgetIDSpace, kSavePaletteWSCaptureGroupLabelWidgetID, kAppUIPrefix + 5)
DECLARE_PMID(kWidgetIDSpace, kSavePaletteWSPaletteLocsCheckBoxWidgetID, kAppUIPrefix + 6)
DECLARE_PMID(kWidgetIDSpace, kControlSetPopupMenuWidgetID, kAppUIPrefix + 7)
DECLARE_PMID(kWidgetIDSpace, kSavePaletteWSMenusCheckBoxWidgetID, kAppUIPrefix + 8)
//gap
DECLARE_PMID(kWidgetIDSpace, kAlertApplyAllCheckboxWidgetID, kAppUIPrefix + 15)
DECLARE_PMID(kWidgetIDSpace, kAlertButton2WidgetID, kAppUIPrefix + 16)
DECLARE_PMID(kWidgetIDSpace, kAlertButton3WidgetID, kAppUIPrefix + 17)
DECLARE_PMID(kWidgetIDSpace, kAlertApplyAllDialogWidgetID, kAppUIPrefix + 18)
DECLARE_PMID(kWidgetIDSpace, kAlertApplyAllIconWidgetID, kAppUIPrefix + 19)
DECLARE_PMID(kWidgetIDSpace, kApplyAllAlertStaticTextWidgetID, kAppUIPrefix + 20)
DECLARE_PMID(kWidgetIDSpace, kUICustNewSetNameEditBoxWidgetId, kAppUIPrefix + 21)
DECLARE_PMID(kWidgetIDSpace, kUICustSaveDialogButtonPanelWidgetID, kAppUIPrefix + 22)
DECLARE_PMID(kWidgetIDSpace, kUICustomizationSaveAsDialogWidgetID, kAppUIPrefix + 23)
DECLARE_PMID(kWidgetIDSpace, kPreventTextStyleCreationCheckBoxWidgetID, kAppUIPrefix + 24)
DECLARE_PMID(kWidgetIDSpace, kPreventTextStyleEditingCheckBoxWidgetID, kAppUIPrefix + 25)
DECLARE_PMID(kWidgetIDSpace, kPreventAllTextStyleUsageCheckBoxWidgetID, kAppUIPrefix + 26)
DECLARE_PMID(kWidgetIDSpace, kPreventTrackingKerningCheckBoxWidgetID, kAppUIPrefix + 27)
DECLARE_PMID(kWidgetIDSpace, kPreventAllTextAttrCheckBoxWidgetID, kAppUIPrefix + 28)
DECLARE_PMID(kWidgetIDSpace, kPreventTransparencyUsageCheckBoxWidgetID, kAppUIPrefix + 29)

//gap
DECLARE_PMID(kWidgetIDSpace, kUICustMenuPanelWidgetID, kAppUIPrefix + 32)
//gap
DECLARE_PMID(kWidgetIDSpace, kUICustNewSetNameLabelWidgetId, kAppUIPrefix + 34)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusSetLabelStaticWidgetID, kAppUIPrefix + 35)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusSetNameDropDownWidgetID, kAppUIPrefix + 36)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusSetSaveWidgetID, kAppUIPrefix + 37)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusSetSaveAsWidgetID, kAppUIPrefix + 38)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusSetDeleteWidgetID, kAppUIPrefix + 39)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusSeperatorWidgetID, kAppUIPrefix + 40)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusForLabelStaticWidgetID, kAppUIPrefix + 41)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusForListWidgetID, kAppUIPrefix + 42)
DECLARE_PMID(kWidgetIDSpace, kMenuColumnOuterPanelWidgetID, kAppUIPrefix + 43)
DECLARE_PMID(kWidgetIDSpace, kVisibilityColumnOuterPanelWidgetID, kAppUIPrefix + 44)
DECLARE_PMID(kWidgetIDSpace, kColorColumnOuterPanelWidgetID, kAppUIPrefix + 45)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusInnerPanelWidgetID, kAppUIPrefix + 46)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusColorColLabelWidgetID, kAppUIPrefix + 47)
DECLARE_PMID(kWidgetIDSpace, kUICustMenuNodeWidgetID, kAppUIPrefix + 48)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusTreeWidgetWidgetID, kAppUIPrefix + 49)
DECLARE_PMID(kWidgetIDSpace, kUICustomizationEyeballWidgetID, kAppUIPrefix + 50)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusTreeOuterPanelWidgetID, kAppUIPrefix + 51)
DECLARE_PMID(kWidgetIDSpace, kUICustomizationEyeballOuterPanelWidgetID, kAppUIPrefix + 52)
DECLARE_PMID(kWidgetIDSpace, kPreventKerningPanelWidgetID, kAppUIPrefix + 53)
DECLARE_PMID(kWidgetIDSpace, kUICustomizationColorSwatchWidgetID, kAppUIPrefix + 54)
DECLARE_PMID(kWidgetIDSpace, kUICustomizationColorNameWidgetID, kAppUIPrefix + 55)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusAppMenuColLabelWidgetID, kAppUIPrefix + 56)
DECLARE_PMID(kWidgetIDSpace, kUICustMenusVisibilityColLabelWidgetID, kAppUIPrefix + 57)
DECLARE_PMID(kWidgetIDSpace, kUICustMenuDialogPanelWidgetID, kAppUIPrefix + 58)
DECLARE_PMID(kWidgetIDSpace, kUICustMenuSaveDeletePanelWidgetID, kAppUIPrefix + 59)
DECLARE_PMID(kWidgetIDSpace, kUICustMenuMenuTypePanelWidgetID, kAppUIPrefix + 60)
DECLARE_PMID(kWidgetIDSpace, kUICustMenuOutermostTreePanelWidgetID, kAppUIPrefix + 61)
DECLARE_PMID(kWidgetIDSpace, kPreventTextActionsGroupPanelWidgetID, kAppUIPrefix + 62)
DECLARE_PMID(kWidgetIDSpace, kPreventTextActionsPanelLabelWidgetID, kAppUIPrefix + 63)
DECLARE_PMID(kWidgetIDSpace, kPreventGraphicActionsGroupPanelWidgetID, kAppUIPrefix + 64)
DECLARE_PMID(kWidgetIDSpace, kPreventGraphicActionsPanelLabelWidgetID, kAppUIPrefix + 65)
DECLARE_PMID(kWidgetIDSpace, kPreventKerningSpacerWidgetID, kAppUIPrefix + 66)
DECLARE_PMID(kWidgetIDSpace, kPreventTextStylesPanelLabelWidgetID, kAppUIPrefix + 67)
DECLARE_PMID(kWidgetIDSpace, kPreventTextStylesGroupPanelWidgetID, kAppUIPrefix + 68)
DECLARE_PMID(kWidgetIDSpace, kPreventStyleCreationPanelWidgetID, kAppUIPrefix + 69)
DECLARE_PMID(kWidgetIDSpace, kPreventStyleCreationSpacerWidgetID, kAppUIPrefix + 70)
DECLARE_PMID(kWidgetIDSpace, kPreventStyleEditingPanelWidgetID, kAppUIPrefix + 71)
DECLARE_PMID(kWidgetIDSpace, kPreventStyleEditingSpacerWidgetID, kAppUIPrefix + 72)
DECLARE_PMID(kWidgetIDSpace, kUserInterfacePrefsDialogWidgetID, kAppUIPrefix + 73)
DECLARE_PMID(kWidgetIDSpace, kUIPrefsGroup1WidgetId, kAppUIPrefix + 74)
DECLARE_PMID(kWidgetIDSpace, kToolTipsTextWidgetID, kAppUIPrefix + 75)
DECLARE_PMID(kWidgetIDSpace, kToolTipsDropDownWidgetID, kAppUIPrefix + 76)
DECLARE_PMID(kWidgetIDSpace, kToolboxTextWidgetID, kAppUIPrefix + 77)
DECLARE_PMID(kWidgetIDSpace, kToolboxDropDownWidgetID, kAppUIPrefix + 78)
DECLARE_PMID(kWidgetIDSpace, kUICursorOptionsTitleTextWidgetID, kAppUIPrefix + 79)
DECLARE_PMID(kWidgetIDSpace, kDrawersStayOpenCheckBoxWidgetID, kAppUIPrefix + 80)
DECLARE_PMID(kWidgetIDSpace, kUIToolTipsTitleTextWidgetID, kAppUIPrefix + 81)
DECLARE_PMID(kWidgetIDSpace, kUIPanelsTitleTextWidgetID, kAppUIPrefix + 82)
DECLARE_PMID(kWidgetIDSpace, kUIPlaceCursorTitleTextWidgetID, kAppUIPrefix + 83)
DECLARE_PMID(kWidgetIDSpace, kShowThumbsCheckBoxWidgetID, kAppUIPrefix + 84)
DECLARE_PMID(kWidgetIDSpace, kUIPrefsGroup2WidgetId, kAppUIPrefix + 85)
DECLARE_PMID(kWidgetIDSpace, kUIPrefsGroup3WidgetId, kAppUIPrefix + 86)
DECLARE_PMID(kWidgetIDSpace, kUIPrefsGroup4WidgetId, kAppUIPrefix + 87)
DECLARE_PMID(kWidgetIDSpace, kUIPrefsGroup5WidgetId, kAppUIPrefix + 88)
DECLARE_PMID(kWidgetIDSpace, kUIMenusTitleTextWidgetID, kAppUIPrefix + 89)
DECLARE_PMID(kWidgetIDSpace, kShowDimensionsCursorCheckBoxWidgetID, kAppUIPrefix + 90)
DECLARE_PMID(kWidgetIDSpace, kAutoRevealCheckBoxWidgetID, kAppUIPrefix + 91)
DECLARE_PMID(kWidgetIDSpace, kOpenNewDocumentsAsTabsCheckBoxWidgetID, kAppUIPrefix + 92)
DECLARE_PMID(kWidgetIDSpace, kEnableFloatingDocumentDockingCheckBoxWidgetID, kAppUIPrefix + 93)
DECLARE_PMID(kWidgetIDSpace, kPatientUserTitleTextWidgetID, kAppUIPrefix + 94)
DECLARE_PMID(kWidgetIDSpace, kPatientUserDropDownWidgetID, kAppUIPrefix + 95)
DECLARE_PMID(kWidgetIDSpace, kHandStaticWID, kAppUIPrefix + 96)
DECLARE_PMID(kWidgetIDSpace, kHandSliderWID, kAppUIPrefix + 97)
DECLARE_PMID(kWidgetIDSpace, kHandStatusWID, kAppUIPrefix + 98)
DECLARE_PMID(kWidgetIDSpace, kHandGroupSettingsBorderTitleWID, kAppUIPrefix + 99)
DECLARE_PMID(kWidgetIDSpace, kHandGroupSettingsBorderWID, kAppUIPrefix + 100)
DECLARE_PMID(kWidgetIDSpace, kScrollingLowerStaticWID, kAppUIPrefix + 101)
DECLARE_PMID(kWidgetIDSpace, kScrollingHigherStaticWID, kAppUIPrefix + 102)
DECLARE_PMID(kWidgetIDSpace, kWarningWithCancelIconWidgetID, kAppUIPrefix + 103)
DECLARE_PMID(kWidgetIDSpace, kWarningWithCancelTextWidgetID, kAppUIPrefix + 104)
DECLARE_PMID(kWidgetIDSpace, kWarningWithCancelDialogWidgetID, kAppUIPrefix + 105)

DECLARE_PMID(kWidgetIDSpace, kBGUIPanelWidgetID, kAppUIPrefix + 106)
DECLARE_PMID(kWidgetIDSpace, kBGUIButtonWidgetID, kAppUIPrefix + 107)
DECLARE_PMID(kWidgetIDSpace, kBGUIProxyWidgetID, kAppUIPrefix + 108)
DECLARE_PMID(kWidgetIDSpace, kBGUIPanelControlStripWidgetID, kAppUIPrefix + 109)

DECLARE_PMID(kWidgetIDSpace, kAlertBackgroundTaskDialogWidgetID, kAppUIPrefix + 110)
DECLARE_PMID(kWidgetIDSpace, kBackgroundTaskAlertsErrorIconWidgetID,    kAppUIPrefix + 111) 
DECLARE_PMID(kWidgetIDSpace, kBackgroundTaskAlertsTreeViewPanelWidgetID,    kAppUIPrefix + 112) 
DECLARE_PMID(kWidgetIDSpace, kBackgroundTaskAlertsTreeViewWidgetID,    kAppUIPrefix + 113) 
DECLARE_PMID(kWidgetIDSpace, kBackgroundTaskAlertsTreeNodeGroupWidgetID,    kAppUIPrefix + 114) 
DECLARE_PMID(kWidgetIDSpace, kBackgroundTaskAlertsTextWidgetID,    kAppUIPrefix + 115) 
DECLARE_PMID(kWidgetIDSpace, kBackgroundTaskAlertsHeadingWidgetID,    kAppUIPrefix + 116) 
DECLARE_PMID(kWidgetIDSpace, kBGAlertStaticStringWidgetID,    kAppUIPrefix + 117)
DECLARE_PMID(kWidgetIDSpace, kAlertBackgroundTaskShowAlertsWidgetID,    kAppUIPrefix + 118)

DECLARE_PMID(kWidgetIDSpace, kPageSizePresetNameParentWidgetId, kAppUIPrefix + 119) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetWidthLabelWidgetID, kAppUIPrefix + 120) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetWidthEditWidgetID, kAppUIPrefix + 121) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetHeightLabelWidgetID, kAppUIPrefix + 122) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetHeightEditWidgetID, kAppUIPrefix + 123) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetWidthNudgeWidgetID, kAppUIPrefix + 124) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetHeightNudgeWidgetID, kAppUIPrefix + 125) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetEverythingWidgetID, kAppUIPrefix + 126) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetNameWHGroupWidgetID, kAppUIPrefix + 127) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetNameWHLabelGroupWidgetID, kAppUIPrefix + 128) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetNameWHEditGroupWidgetID, kAppUIPrefix + 129) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetWGroupWidgetID, kAppUIPrefix + 130) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetHGroupWidgetID, kAppUIPrefix + 131) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetInfoGroupWidgetID, kAppUIPrefix + 132) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetListWidgetID, kAppUIPrefix + 133) 
DECLARE_PMID(kWidgetIDSpace, kDeletePageSizePresetButtonWidgetId, kAppUIPrefix + 134) 
DECLARE_PMID(kWidgetIDSpace, kAddPageSizePresetButtonWidgetId, kAppUIPrefix + 135) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetSpacer1WidgetID, kAppUIPrefix + 136) 
DECLARE_PMID(kWidgetIDSpace, kPSPOrientationHiliteBorderWidgetID, kAppUIPrefix + 137) 
DECLARE_PMID(kWidgetIDSpace, kPSPTextWidgetId, kAppUIPrefix + 138) 
DECLARE_PMID(kWidgetIDSpace, kPSPTallIconWidgetID, kAppUIPrefix + 139) 
DECLARE_PMID(kWidgetIDSpace, kPSPWideIconWidgetID, kAppUIPrefix + 140) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetNameEditBoxWidgetID, kAppUIPrefix + 141) 
DECLARE_PMID(kWidgetIDSpace, kEnableMultiTouchGesturesCheckBoxWidgetID, kAppUIPrefix + 142) 
DECLARE_PMID(kWidgetIDSpace, kBackgroundTaskAlertsTreeNodeAlertWidgetID, kAppUIPrefix + 143)
DECLARE_PMID(kWidgetIDSpace, kBGAlertStaticStringMultiLineWidgetID, kAppUIPrefix + 144)
DECLARE_PMID(kWidgetIDSpace, kObjectFrameHighlightingCheckBoxWidgetID, kAppUIPrefix + 145) 
DECLARE_PMID(kWidgetIDSpace, kPatientUserDrawWidgetID, kAppUIPrefix + 146) 
#ifdef PPI_PAGESIZE_WIDGET
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetPPILabelWidgetID, kAppUIPrefix + 147) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetPPIEditWidgetID, kAppUIPrefix + 148) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetPPIGroupWidgetID, kAppUIPrefix + 149) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetPPINudgeWidgetID, kAppUIPrefix + 150) 
DECLARE_PMID(kWidgetIDSpace, kPageSizePresetPPIScaleStaticWidgetID, kAppUIPrefix + 151) 
#endif	// PPI_PAGESIZE_WIDGET
DECLARE_PMID(kWidgetIDSpace, kColorThemeBrightnessDropDownWidgetID,		kAppUIPrefix + 152)
DECLARE_PMID(kWidgetIDSpace, kColorThemeStaticWID,						kAppUIPrefix + 153)
DECLARE_PMID(kWidgetIDSpace, kAppearanceGroupSettingsBorderTitleWID,	kAppUIPrefix + 154)
DECLARE_PMID(kWidgetIDSpace, kAppearanceGroupSettingsBorderWID,			kAppUIPrefix + 155)
DECLARE_PMID(kWidgetIDSpace, kColorThemeBrightnessSliderWidgetID,		kAppUIPrefix + 156)
DECLARE_PMID(kWidgetIDSpace, kPasteboardColorWID,						kAppUIPrefix + 157)
DECLARE_PMID(kWidgetIDSpace, kPasteboardColorMatchThemeCheckBoxWID,		kAppUIPrefix + 158)

// Settigns in cloud
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPanelWidgetID, kAppUIPrefix + 159)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudDialogWidgetID, kAppUIPrefix + 160)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudSyncPrefsButtonWidgetID, kAppUIPrefix + 161)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudSyncNowButtonWidgetID, kAppUIPrefix + 162)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsPanelWidgetID, kAppUIPrefix + 163)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsPanelStaticTextWidgetID, kAppUIPrefix + 164)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsSyncOptiondGroupWID, kAppUIPrefix + 165)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsWorkspacesChkBxWidgetID, kAppUIPrefix + 166)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsPDFPresetsChkBxWidgetID, kAppUIPrefix + 167)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsKBSCsChkBxWidgetID, kAppUIPrefix + 168)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsCustMenusChkBxWidgetID, kAppUIPrefix + 169)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsSyncDrpDnWidgetID, kAppUIPrefix + 170)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsConflictDrpDnWidgetID, kAppUIPrefix + 171)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsSyncNowBtnWidgetID, kAppUIPrefix + 172)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsMngAccBtnWidgetID, kAppUIPrefix + 173)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsUIDTextWidgetID, kAppUIPrefix + 174)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsTimeStampTextWidgetID, kAppUIPrefix + 175)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsConflictTextWidgetID, kAppUIPrefix + 176)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudDlgMsgTextWidgetID, kAppUIPrefix + 177)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsManageAccBtnWidgetID, kAppUIPrefix + 178)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsGlyphsChkBxWidgetID, kAppUIPrefix + 179)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsScriptsChkBxWidgetID, kAppUIPrefix + 180)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsUserDictsChkBxWidgetID, kAppUIPrefix + 181)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsSyncStateTextWidgetID, kAppUIPrefix + 182)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsSyncLabelWidgetID, kAppUIPrefix + 183)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudDisableBtnWidgetID, kAppUIPrefix + 184)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsToolTipWidgetID, kAppUIPrefix + 185)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsUIDLabelWidgetID, kAppUIPrefix + 186)
DECLARE_PMID(kWidgetIDSpace, kSettingsInCloudPrefsSyncStateLabelWidgetID, kAppUIPrefix + 187)

DECLARE_PMID(kWidgetIDSpace, kBGUIProgressbarWidgetID, kAppUIPrefix + 188)
DECLARE_PMID(kWidgetIDSpace, kBGUITaskNameWidgetID, kAppUIPrefix + 189)
DECLARE_PMID(kWidgetIDSpace, kBGUIDocNameWidgetID, kAppUIPrefix + 190)
DECLARE_PMID(kWidgetIDSpace, kBGUIPercentCompleteWidgetID, kAppUIPrefix + 191)
DECLARE_PMID(kWidgetIDSpace, kBGUICancelButtonWidgetID, kAppUIPrefix + 192)
DECLARE_PMID(kWidgetIDSpace, kBGUIPanelTreeElementWidgetID, kAppUIPrefix + 193)
DECLARE_PMID(kWidgetIDSpace, kBGUIPanelTreeWidgetID, kAppUIPrefix + 194)
DECLARE_PMID(kWidgetIDSpace, kBGUIAlertMessageWidgetID, kAppUIPrefix + 195)
DECLARE_PMID(kWidgetIDSpace, kBGUIDetailedAlertMessageWidgetID, kAppUIPrefix + 196)
DECLARE_PMID(kWidgetIDSpace, kBGUIClearAlertsButtonWidgetID, kAppUIPrefix + 197)
DECLARE_PMID(kWidgetIDSpace, kBGUIRunningAlertIconWidgetID, kAppUIPrefix + 198)
DECLARE_PMID(kWidgetIDSpace, kBGUIEndAlertIconWidgetID, kAppUIPrefix + 199)
DECLARE_PMID(kWidgetIDSpace, kBGUIErrorIconWidgetID, kAppUIPrefix + 200)

DECLARE_PMID(kWidgetIDSpace, kSettingsMigrationDialogWidgetID, kAppUIPrefix + 201) 
DECLARE_PMID(kWidgetIDSpace, kSettingsMigrationDlgMsgTextWidgetID, kAppUIPrefix + 202) 
DECLARE_PMID(kWidgetIDSpace, kSettingsMigrationSuccessIconWidgetID, kAppUIPrefix + 203) 
DECLARE_PMID(kWidgetIDSpace, kSettingsMigrationWarningIconWidgetID, kAppUIPrefix + 204)
#ifdef WINDOWS 
DECLARE_PMID(kWidgetIDSpace, kWinUIScalingPrefsDialogWidgetID, kAppUIPrefix + 205)
DECLARE_PMID(kWidgetIDSpace, kWinUIScalingPrefsCheckboxWidgetID, kAppUIPrefix +206) 
DECLARE_PMID(kWidgetIDSpace, kWinUIScalingPrefInfoWidgetId, kAppUIPrefix +207) 
DECLARE_PMID(kWidgetIDSpace, kWinUIScalingLowerPrefRadioButtonWidgetID, kAppUIPrefix +208) 
DECLARE_PMID(kWidgetIDSpace, kWinUIScalingHigherPrefRadioButtonWidgetID, kAppUIPrefix +209) 
DECLARE_PMID(kWidgetIDSpace, kWinUIScalingPrefsPanelWidgetID, kAppUIPrefix +210) 
DECLARE_PMID(kWidgetIDSpace, kWinUIScalingPrefsTitleTextWidgetID, kAppUIPrefix +211) 
#endif	
DECLARE_PMID(kWidgetIDSpace, kExperimentalFeaturesPrefsDialogWidgetID, kAppUIPrefix + 212)
DECLARE_PMID(kWidgetIDSpace, kExperimentalFeaturesPrefsDescriptionTitleTextWidgetID, kAppUIPrefix +213)  
DECLARE_PMID(kWidgetIDSpace, kExperimentalFeaturesPrefsPublishOnlineCheckboxWidgetID, kAppUIPrefix +214) 

// <Implementation ID>
// ImplementationIDs
DECLARE_PMID(kImplementationIDSpace, kLocaleIDConversionImpl,			kAppUIPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kSelectionScriptProviderImpl,		kAppUIPrefix + 2)	//jwb 4/30/02 moved from ScriptingID.h
DECLARE_PMID(kImplementationIDSpace, kScriptSuiteIntegratorImpl,		kAppUIPrefix + 3)	//jwb 4/30/02 moved from ScriptingID.h
DECLARE_PMID(kImplementationIDSpace, kPrimaryLayoutDocumentCSBImpl, kAppUIPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kPrimaryWorkspaceCSBImpl, kAppUIPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kPrimaryNoteTextCSBImpl, kAppUIPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kPrimaryGalleyDocumentCSBImpl, kAppUIPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kPrimaryStoryEditorCSBImpl, kAppUIPrefix + 8)
DECLARE_PMID(kImplementationIDSpace, kPrimaryXMLDocumentCSBImpl, kAppUIPrefix + 9)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsTipsCmdImpl, kAppUIPrefix + 10)
DECLARE_PMID(kImplementationIDSpace, kUserInterfacePreferencesImpl, kAppUIPrefix + 11)
DECLARE_PMID(kImplementationIDSpace, kUserInterfacePrefsMenuActionImpl, kAppUIPrefix + 12)
DECLARE_PMID(kImplementationIDSpace, kUserInterfacePrefsDialogControllerImpl, kAppUIPrefix + 13)
DECLARE_PMID(kImplementationIDSpace, kUserInterfacePrefsPanelCreatorImpl, kAppUIPrefix + 14)
DECLARE_PMID(kImplementationIDSpace, kUserInterfacePreferencesFacadeImpl, kAppUIPrefix + 15)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsToolboxCmdImpl, kAppUIPrefix + 16)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsDrawersCmdImpl, kAppUIPrefix + 17)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsThumbnailsCmdImpl, kAppUIPrefix + 18)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsOpenRecentCmdImpl, kAppUIPrefix + 19)
DECLARE_PMID(kImplementationIDSpace, kCursorUtilsImpl, kAppUIPrefix + 20)
DECLARE_PMID(kImplementationIDSpace, kAcceleratorUtilsImpl, kAppUIPrefix + 21)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfaceShowDimensionsCursorCmdImpl, kAppUIPrefix + 22)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsAutoRevealCmdImpl, kAppUIPrefix + 23)
DECLARE_PMID(kImplementationIDSpace, kPanelIconProviderImpl, kAppUIPrefix + 24)
DECLARE_PMID(kImplementationIDSpace, kDynamicPauseTimerImpl, kAppUIPrefix + 25)
DECLARE_PMID(kImplementationIDSpace, kSpringLoadedToolKeyWatcherImpl, kAppUIPrefix + 26)
DECLARE_PMID(kImplementationIDSpace, kFullScreenRestoreDataImpl, kAppUIPrefix + 27)
DECLARE_PMID(kImplementationIDSpace, kFullScreenShortcutContextImpl, kAppUIPrefix + 28)
DECLARE_PMID(kImplementationIDSpace, kWindowScriptEventServiceProviderImpl, kAppUIPrefix + 29)
DECLARE_PMID(kImplementationIDSpace, kWindowScriptEventResponderImpl, kAppUIPrefix + 30)
DECLARE_PMID(kImplementationIDSpace, kOWLFlashPlayerEHImpl, kAppUIPrefix + 31)
//gap
DECLARE_PMID(kImplementationIDSpace, kProgressBarDialogControlViewImpl, kAppUIPrefix + 36)
DECLARE_PMID(kImplementationIDSpace, kDV_ResizeCornerViewImpl, kAppUIPrefix + 37)
DECLARE_PMID(kImplementationIDSpace, kDVPanelWrapperWindowImpl, kAppUIPrefix + 38)
DECLARE_PMID(kImplementationIDSpace, kIDDroverUI_IApplicationDelegateImpl, kAppUIPrefix + 39)
DECLARE_PMID(kImplementationIDSpace, kSuppressedUIWithXMLFileDataImpl, kAppUIPrefix + 40)
DECLARE_PMID(kImplementationIDSpace, kAppBarUpdateDataModelCmdImpl, kAppUIPrefix + 41)
DECLARE_PMID(kImplementationIDSpace, kShowFullMenusCmdImpl, kAppUIPrefix + 42)
DECLARE_PMID(kImplementationIDSpace, kOWLMenuComponentImpl, kAppUIPrefix + 43)
DECLARE_PMID(kImplementationIDSpace, kOWLWorkspaceMenuObserverImpl, kAppUIPrefix + 44)
DECLARE_PMID(kImplementationIDSpace, kCustomizeKitComponentImpl, kAppUIPrefix + 45)
DECLARE_PMID(kImplementationIDSpace, kControlSetElementTipImpl, kAppUIPrefix + 46)
DECLARE_PMID(kImplementationIDSpace, kControlSetTabPanelImpl, kAppUIPrefix + 47)
DECLARE_PMID(kImplementationIDSpace, kControlSetTreeViewAdapterImpl, kAppUIPrefix + 48)
DECLARE_PMID(kImplementationIDSpace, kControlSetTreeViewWidgetMgrImpl, kAppUIPrefix + 49)
DECLARE_PMID(kImplementationIDSpace, kControlSetStatesDataImpl, kAppUIPrefix + 50)
DECLARE_PMID(kImplementationIDSpace, kControlSetCheckboxObserverImpl, kAppUIPrefix + 51)
DECLARE_PMID(kImplementationIDSpace, kMenuSetDropDownObserverImpl, kAppUIPrefix + 52)
DECLARE_PMID(kImplementationIDSpace, kPaletteWorkspaceDynamicMenuImpl, kAppUIPrefix + 53)
DECLARE_PMID(kImplementationIDSpace, kFloatingPaletteSAXHandlerImpl, kAppUIPrefix + 54)
DECLARE_PMID(kImplementationIDSpace, kPaletteWorkspaceActionCompImpl, kAppUIPrefix + 55)
DECLARE_PMID(kImplementationIDSpace, kFloatingPaletteXMLGeneratorImpl, kAppUIPrefix + 56)
DECLARE_PMID(kImplementationIDSpace, kSavePaletteWSControllerImpl, kAppUIPrefix + 57)
DECLARE_PMID(kImplementationIDSpace, kTablessPaletteXMLGeneratorImpl, kAppUIPrefix + 58)
DECLARE_PMID(kImplementationIDSpace, kPaletteWorkspaceImpl, kAppUIPrefix + 59)
DECLARE_PMID(kImplementationIDSpace, kDeletePaletteWSControllerImpl, kAppUIPrefix + 60)
DECLARE_PMID(kImplementationIDSpace, kFilenameEBTextValidationImpl, kAppUIPrefix + 61)
DECLARE_PMID(kImplementationIDSpace, kGeneralUIPrefsScriptProviderImpl, kAppUIPrefix + 62)
DECLARE_PMID(kImplementationIDSpace, kMenuSetSaveAsButtonObserverImpl, kAppUIPrefix + 64)
//gap
DECLARE_PMID(kImplementationIDSpace, kWorkspaceNamePrefImpl, kAppUIPrefix + 66)
DECLARE_PMID(kImplementationIDSpace, kGenericTabAreaEventHandlerImpl, kAppUIPrefix + 67)
DECLARE_PMID(kImplementationIDSpace, kGenericTabAreaPanelTipImpl, kAppUIPrefix + 68)
//gap
DECLARE_PMID(kImplementationIDSpace, kSetMenuCustomizationPrefsCmdImpl, kAppUIPrefix + 89)
//gap
DECLARE_PMID(kImplementationIDSpace, kAppBarUIObserverImpl, kAppUIPrefix + 91)
DECLARE_PMID(kImplementationIDSpace, kPalettePanelScriptUtilsImpl, kAppUIPrefix + 92)
//gap
DECLARE_PMID(kImplementationIDSpace, kPWDefaultSAXHandlerImpl, kAppUIPrefix + 95)
DECLARE_PMID(kImplementationIDSpace, kToolInitializerImpl, kAppUIPrefix + 97)
DECLARE_PMID(kImplementationIDSpace, kUndoRedoDynamicMenuComponentImpl, kAppUIPrefix + 98)
DECLARE_PMID(kImplementationIDSpace, kUndoRedoDynamicMenuImpl, kAppUIPrefix + 99)
DECLARE_PMID(kImplementationIDSpace, kRefPointShapeImpl, kAppUIPrefix + 100)
DECLARE_PMID(kImplementationIDSpace, kRefPointUIUtilsImpl, kAppUIPrefix + 101)
//gap
DECLARE_PMID(kImplementationIDSpace, kInterfaceColorsImpl, kAppUIPrefix + 106)
DECLARE_PMID(kImplementationIDSpace, kUserInterfaceImpl, kAppUIPrefix + 107)
DECLARE_PMID(kImplementationIDSpace, kClosePresentationCmdImpl, kAppUIPrefix + 108) // CS4/OWL2 Note: was kCloseLayoutWinCmdImpl in LayoutUIID.h
DECLARE_PMID(kImplementationIDSpace, kSetAppFrameBoundsPrefCmdImpl, kAppUIPrefix + 109)
DECLARE_PMID(kImplementationIDSpace, kInterfaceAppearancePrefsImpl, kAppUIPrefix + 110)

DECLARE_PMID(kImplementationIDSpace, kApplyAllAlertDialogControllerImpl, kAppUIPrefix + 111)
DECLARE_PMID(kImplementationIDSpace, kApplyAllAlertDlgObserverImpl, kAppUIPrefix + 112)
DECLARE_PMID(kImplementationIDSpace, kSuppressedUIServiceMgrImpl, kAppUIPrefix + 113)
DECLARE_PMID(kImplementationIDSpace, kSuppressedUISAXHandlerImpl, kAppUIPrefix + 114)
DECLARE_PMID(kImplementationIDSpace, kSuppressedUIServiceProviderImpl, kAppUIPrefix + 115)
DECLARE_PMID(kImplementationIDSpace, kSuppressedUIWithXMLFileImpl, kAppUIPrefix + 116)
DECLARE_PMID(kImplementationIDSpace, kWindowScriptUtilsImpl,		kAppUIPrefix + 117)
DECLARE_PMID(kImplementationIDSpace, kDocumentUIUtilsImpl,			kAppUIPrefix + 118)
DECLARE_PMID(kImplementationIDSpace, kSwatchFacadeUIImpl,			kAppUIPrefix + 119)
DECLARE_PMID(kImplementationIDSpace, kWindowScriptProviderImpl,		kAppUIPrefix + 120)
DECLARE_PMID(kImplementationIDSpace, kDocFrameworkTestMenuImpl,		kAppUIPrefix + 121)
DECLARE_PMID(kImplementationIDSpace, kEventUtilsImpl,				kAppUIPrefix + 122)
//gap
DECLARE_PMID(kImplementationIDSpace, kApplicationActiveStateImpl,	kAppUIPrefix + 124)
DECLARE_PMID(kImplementationIDSpace, kMissingConversionUtilsImpl,	kAppUIPrefix + 125)
DECLARE_PMID(kImplementationIDSpace, kAppUIErrorStringServiceImpl,	kAppUIPrefix + 126)
DECLARE_PMID(kImplementationIDSpace, kShowAlertRegistryUtilsImpl,	kAppUIPrefix + 127)
DECLARE_PMID(kImplementationIDSpace, kUICustMenuColorObserverImpl, kAppUIPrefix + 128)
DECLARE_PMID(kImplementationIDSpace, kCachedMenuTreeStructureImpl, kAppUIPrefix + 129)
DECLARE_PMID(kImplementationIDSpace, kMenuSetSaveButtonObserverImpl, kAppUIPrefix + 130)
DECLARE_PMID(kImplementationIDSpace, kToolToggleBehaviorStandardImpl,	kAppUIPrefix + 131)
//gap
DECLARE_PMID(kImplementationIDSpace, kSuppressedUIDefaultSysFileDataImpl,	kAppUIPrefix + 133)
//gap
DECLARE_PMID(kImplementationIDSpace, kPanelScriptImpl,				kAppUIPrefix + 135)
//gap
DECLARE_PMID(kImplementationIDSpace, kPanelScriptProviderImpl,		kAppUIPrefix + 137)
DECLARE_PMID(kImplementationIDSpace, kMenuSetDeleteButtonObserverImpl,	kAppUIPrefix + 138)
DECLARE_PMID(kImplementationIDSpace, kUICustSaveAsDialogControllerImpl,	kAppUIPrefix + 139)
DECLARE_PMID(kImplementationIDSpace, kMenuCustomizationColorViewImpl,	kAppUIPrefix + 140)
DECLARE_PMID(kImplementationIDSpace, kLoadUserWorkspaceCmdImpl,	kAppUIPrefix + 141)
DECLARE_PMID(kImplementationIDSpace, kFeatureRestrictionPreferencesObsoleteImpl,	kAppUIPrefix + 142)
DECLARE_PMID(kImplementationIDSpace, kLoadUserWorkspaceCmdDataImpl,	kAppUIPrefix + 143)
DECLARE_PMID(kImplementationIDSpace, kSetActiveWorkspaceCmdImpl,	kAppUIPrefix + 144)
// gap
DECLARE_PMID(kImplementationIDSpace, kUICustomizationActionCompImpl, kAppUIPrefix + 151)
//gap
DECLARE_PMID(kImplementationIDSpace, kUICustomizationMenusControllerImpl, kAppUIPrefix + 154)
DECLARE_PMID(kImplementationIDSpace, kUICustomizationMenusObserverImpl, kAppUIPrefix + 155)
//gap
DECLARE_PMID(kImplementationIDSpace, kUICustomizationMenuTreeAdapterImpl, kAppUIPrefix + 159)
DECLARE_PMID(kImplementationIDSpace, kUICustomizationMenuTreeViewWidgetMgrImpl, kAppUIPrefix + 160)
DECLARE_PMID(kImplementationIDSpace, kUICustomizationMenuFilterImpl, kAppUIPrefix + 161)
DECLARE_PMID(kImplementationIDSpace, kUICustomizationUtilsImpl, kAppUIPrefix + 162)
DECLARE_PMID(kImplementationIDSpace, kMenuSetSAXHandlerImpl,	kAppUIPrefix + 163)
DECLARE_PMID(kImplementationIDSpace, kUICustomizationEyeballViewImpl, kAppUIPrefix + 164)
DECLARE_PMID(kImplementationIDSpace, kUICustomizationEyeballEventHandlerImpl, kAppUIPrefix + 165)
DECLARE_PMID(kImplementationIDSpace, kUICustomizationEyeballObserverImpl, kAppUIPrefix + 166)
DECLARE_PMID(kImplementationIDSpace, kWorkspaceValidatorSAXHandlerImpl, kAppUIPrefix + 167)
DECLARE_PMID(kImplementationIDSpace, kAMTUIStartupShutdownImpl, kAppUIPrefix + 168)
DECLARE_PMID(kImplementationIDSpace, kAMTUIOnLaunchCmdImpl, kAppUIPrefix + 169)
DECLARE_PMID(kImplementationIDSpace, kAMTUIIdleTaskImpl, kAppUIPrefix + 170)
DECLARE_PMID(kImplementationIDSpace, kAMTUIDynamicMenuImpl, kAppUIPrefix + 171)
DECLARE_PMID(kImplementationIDSpace, kAMTUIComponentImpl, kAppUIPrefix + 172)
DECLARE_PMID(kImplementationIDSpace, kUsageTrackingImpl, kAppUIPrefix + 173)
DECLARE_PMID(kImplementationIDSpace, kUICustomizationMenuTreeEHImpl, kAppUIPrefix + 174)
//gap
DECLARE_PMID(kImplementationIDSpace, kDV_UICustomizationEyeballViewImpl, kAppUIPrefix + 176)
//gap
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsShowAppBarCmdImpl, kAppUIPrefix + 178)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsEnableFloatingPresentationDockingCmdImpl, kAppUIPrefix + 179)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsUseApplicationFrameCmdImpl, kAppUIPrefix + 180)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsOpenNewDocumentsInTabsCmdImpl, kAppUIPrefix + 181)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsShowContentGrabberCmdImpl, kAppUIPrefix + 182)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsShowLiveCornersCmdImpl, kAppUIPrefix + 183)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsShowAnchorAdornmentCmdImpl, kAppUIPrefix + 184)
DECLARE_PMID(kImplementationIDSpace, kUserInterfacePrefsNewWSResponderImpl, kAppUIPrefix + 185)
DECLARE_PMID(kImplementationIDSpace, kUserInterfacePrefsPhase2ConverterImpl, kAppUIPrefix + 186)

//gap
DECLARE_PMID(kImplementationIDSpace, kPaletteUtilsImpl, kAppUIPrefix + 189)	
DECLARE_PMID(kImplementationIDSpace, kTablessPaletteFactoryImpl, kAppUIPrefix + 190)
DECLARE_PMID(kImplementationIDSpace, kTablessPaletteSAXHandlerImpl, kAppUIPrefix + 191)
DECLARE_PMID(kImplementationIDSpace, kDock_PaletteFactoryImpl, kAppUIPrefix + 192)
DECLARE_PMID(kImplementationIDSpace, kDock_SAXHandlerImpl, kAppUIPrefix + 193)
DECLARE_PMID(kImplementationIDSpace, kDock_XMLGeneratorImpl, kAppUIPrefix + 194)
DECLARE_PMID(kImplementationIDSpace, kOWLPaletteSizerImpl, kAppUIPrefix + 195)
DECLARE_PMID(kImplementationIDSpace, kPrivatePanelMgrUtilsImpl, kAppUIPrefix + 196)
DECLARE_PMID(kImplementationIDSpace, kPrivateOWLUtilsImpl, kAppUIPrefix + 197)
DECLARE_PMID(kImplementationIDSpace, kDocumentPresentationListImpl, kAppUIPrefix + 198)
DECLARE_PMID(kImplementationIDSpace, kPresentationCmdDataImpl, kAppUIPrefix + 199)

DECLARE_PMID(kImplementationIDSpace, kOWLHostedTabAwarePalettePanelWrapperViewImpl, kAppUIPrefix + 200)
//gap
DECLARE_PMID(kImplementationIDSpace, kOWLHostedPanelControlDataImpl, kAppUIPrefix + 203)
//gap
DECLARE_PMID(kImplementationIDSpace, kOWLHostedPalettePanelViewImpl, kAppUIPrefix + 205 )

DECLARE_PMID(kImplementationIDSpace, kOWLFlashPlayerViewImpl, kAppUIPrefix + 206)
DECLARE_PMID(kImplementationIDSpace, kOWLFlashPlayerControllerImpl, kAppUIPrefix + 207)
//gap
DECLARE_PMID(kImplementationIDSpace, kPaletteLeaf_PaletteFactoryImpl, kAppUIPrefix + 211)
DECLARE_PMID(kImplementationIDSpace, kPaletteLeaf_SAXHandlerImpl, kAppUIPrefix + 212)
DECLARE_PMID(kImplementationIDSpace, kPaletteLeaf_XMLGeneratorImpl, kAppUIPrefix + 213)
DECLARE_PMID(kImplementationIDSpace, kDataPaletteRefImpl, kAppUIPrefix + 214)
DECLARE_PMID(kImplementationIDSpace, kBGTaskAlertsDlgMgrImpl, kAppUIPrefix + 215)
//gap
DECLARE_PMID(kImplementationIDSpace, kOWLHostedResizeCursorProviderImpl, kAppUIPrefix + 217)
DECLARE_PMID(kImplementationIDSpace, kOWLHostedDocumentSizeBoxEHImpl, kAppUIPrefix + 218)
//gap
DECLARE_PMID(kImplementationIDSpace, kOWLHostedDocumentWrapperViewImpl, kAppUIPrefix + 222)
DECLARE_PMID(kImplementationIDSpace, kOWLHostedDocumentWindowImpl, kAppUIPrefix + 223)
DECLARE_PMID(kImplementationIDSpace, kBackgroundTaskAlertsStaticTextViewImpl, kAppUIPrefix + 224 )
DECLARE_PMID(kImplementationIDSpace, kOWLHostedDocument_LabelDataImpl, kAppUIPrefix + 225)
DECLARE_PMID(kImplementationIDSpace, kOWLHostedDocumentTitle_TextControlDataImpl, kAppUIPrefix + 226)
DECLARE_PMID(kImplementationIDSpace, kOWLHostedDocumentTooltip_TextControlDataImpl, kAppUIPrefix + 227)
DECLARE_PMID(kImplementationIDSpace, kOWLHostedDocumentPresentationImpl, kAppUIPrefix + 228)
DECLARE_PMID(kImplementationIDSpace, kOWLHostedPalettePresentationImpl, kAppUIPrefix + 229)
DECLARE_PMID(kImplementationIDSpace, kAppFrameBoundsPrefImpl, kAppUIPrefix + 230)
DECLARE_PMID(kImplementationIDSpace, kModifiedDocumentCheckThreadImpl, kAppUIPrefix + 231)
DECLARE_PMID(kImplementationIDSpace, kOWLHostedDocumentExtendedTitle_TextControlDataImpl, kAppUIPrefix + 232)
DECLARE_PMID(kImplementationIDSpace, kAppFrameZoomPrefImpl, kAppUIPrefix + 233)
DECLARE_PMID(kImplementationIDSpace, kScriptSelectionObserverImpl, kAppUIPrefix + 234)
DECLARE_PMID(kImplementationIDSpace, kToolToggleBehavNonStandardImpl, kAppUIPrefix + 235)
//DECLARE_PMID(kImplementationIDSpace, kConnectionsHomeUtilsImpl, kAppUIPrefix + 236)
DECLARE_PMID(kImplementationIDSpace, kBGTasksUIUtilsImpl, kAppUIPrefix + 237)
DECLARE_PMID(kImplementationIDSpace, kPageSizePresetInfoDialogControllerImpl, kAppUIPrefix + 238)
DECLARE_PMID(kImplementationIDSpace, kWarningWithCancelDlgControllerImpl, kAppUIPrefix + 239 )
DECLARE_PMID(kImplementationIDSpace, kWarningWithCancelDlgObserverImpl, kAppUIPrefix + 240 )
DECLARE_PMID(kImplementationIDSpace, kBGUIStartupShutdownImpl, kAppUIPrefix + 241 )
DECLARE_PMID(kImplementationIDSpace, kPageSizePresetItemListBoxCtrlImpl, kAppUIPrefix + 242)
DECLARE_PMID(kImplementationIDSpace, kBGTaskMonitorThreadImpl, kAppUIPrefix + 243 )
DECLARE_PMID(kImplementationIDSpace, kBGUIPanelObserverImpl, kAppUIPrefix + 244 )
DECLARE_PMID(kImplementationIDSpace, kBGUIPanelViewImpl, kAppUIPrefix + 245 )
DECLARE_PMID(kImplementationIDSpace, kBGUIPanelMenuComponentImpl, kAppUIPrefix + 246 )
DECLARE_PMID(kImplementationIDSpace, kBGUIAlertDialogControllerImpl, kAppUIPrefix + 247 )
DECLARE_PMID(kImplementationIDSpace, kBGUIAlertDialogObserverImpl, kAppUIPrefix + 248 )
DECLARE_PMID(kImplementationIDSpace, kBackgroundTaskAlertsTreeViewWidgetMgrImpl, kAppUIPrefix + 249) 
DECLARE_PMID(kImplementationIDSpace, kBackgroundTaskAlertsTreeViewAdapterImpl, kAppUIPrefix + 250) 
DECLARE_PMID(kImplementationIDSpace, kBackgroundTaskAlertDataImpl, kAppUIPrefix + 251) 
DECLARE_PMID(kImplementationIDSpace, kBGTaskObserverImpl, kAppUIPrefix + 252) 

DECLARE_PMID(kImplementationIDSpace, kPrivatePageSizePresetUtilsImpl, kAppUIPrefix + 253) 
DECLARE_PMID(kImplementationIDSpace, kPageSizePresetInfoDialogObserverImpl, kAppUIPrefix + 254)
DECLARE_PMID(kImplementationIDSpace, kReservedNameListImpl, kAppUIPrefix + 255)

// Onto the second prefix here...
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsShowMasterPageOverlayCmdImpl, kAppUIPrefix2 + 0)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsEnableMultiTouchGesturesCmdImpl, kAppUIPrefix2 + 1)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsPreventSelectingLockedItemsCmdImpl, kAppUIPrefix2 + 2)
//gap
DECLARE_PMID(kImplementationIDSpace, kBGAlertStaticMultiLineObserverImpl, kAppUIPrefix2 + 4)
DECLARE_PMID(kImplementationIDSpace, kBGMultiLineAlertTipImpl, kAppUIPrefix2 + 5)
DECLARE_PMID(kImplementationIDSpace, kSetWhatsNewDialogStartupPreferenceCmdImpl, kAppUIPrefix2 + 6)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsObjectsMoveWithPageCmdImpl, kAppUIPrefix2 + 7)
DECLARE_PMID(kImplementationIDSpace, kAPEUtilsImpl, kAppUIPrefix2 + 8)
DECLARE_PMID(kImplementationIDSpace, kPageSizeNameTextValidationImpl, kAppUIPrefix2 + 9)
DECLARE_PMID(kImplementationIDSpace, kAddedOrEditedSizesImpl, kAppUIPrefix2 + 10)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsObjectFrameHighlightingCmdImpl, kAppUIPrefix2 + 11)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsScrollAllWindowsCmdImpl, kAppUIPrefix2 + 12)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsZoomAllWindowsCmdImpl, kAppUIPrefix2 + 13)
DECLARE_PMID(kImplementationIDSpace, kSetEnableDrawProxyOnDragCmdImpl, kAppUIPrefix2 + 14)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsShowRibbonCmdImpl, kAppUIPrefix2 + 15)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsEnableCreateLinksCmdImpl, kAppUIPrefix2 + 16)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsEnableMapStylesCmdImpl, kAppUIPrefix2 + 17)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsUseCustomMonitorResolutionCmdImpl, kAppUIPrefix2 + 18)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsSetCustomMonitorResolutionCmdImpl, kAppUIPrefix2 + 19)

DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsUIBrightnessCmdImpl,		kAppUIPrefix2 + 20)
DECLARE_PMID(kImplementationIDSpace, kSetUserInterfacePrefsPasteboardColorCmdImpl,	kAppUIPrefix2 + 21)
DECLARE_PMID(kImplementationIDSpace, kUserInterfacePrefsDialogObserverImpl,			kAppUIPrefix2 + 22)

// Settings in cloud
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudActionComponentImpl, kAppUIPrefix2 + 23 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudDialogControllerImpl, kAppUIPrefix2 + 24 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudDialogObserverImpl, kAppUIPrefix2 + 25 )

DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudPrefsActionComponentImpl, kAppUIPrefix2 + 26 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudPrefsDialogControllerImpl, kAppUIPrefix2 + 27 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudPrefsDialogObserverImpl, kAppUIPrefix2 + 28 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudPrefsPanelCreatorImpl, kAppUIPrefix2 + 29 )

DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudUIObserverImpl, kAppUIPrefix2 + 32 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudMenuActionComponentImpl, kAppUIPrefix2 + 33 )
// gap
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudUICmdImpl, kAppUIPrefix2 + 35 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudDailogIdleTaskImpl, kAppUIPrefix2 + 36 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudPrefsDialogTipsImpl, kAppUIPrefix2 + 37 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudUIOpenPrefDialogCmdImpl, kAppUIPrefix2 + 38 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudPanelServiceImpl, kAppUIPrefix2 + 39 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudDocResponderImpl, kAppUIPrefix2 + 40 )
DECLARE_PMID(kImplementationIDSpace, kSettingsInCloudMenuObserverImpl, kAppUIPrefix2 + 41 )


DECLARE_PMID(kImplementationIDSpace, kBGUIPanelTreeViewAdapterImpl, kAppUIPrefix2 + 42 )
DECLARE_PMID(kImplementationIDSpace, kBGUIPanelTreeWidgetMgrImpl, kAppUIPrefix2 + 43 )
DECLARE_PMID(kImplementationIDSpace, kBGUIPanelTreeElementObserverImpl, kAppUIPrefix2 + 44 )

DECLARE_PMID(kImplementationIDSpace, kWorkspaceSettingsMigrationImpl, kAppUIPrefix2 + 45)
DECLARE_PMID(kImplementationIDSpace, kMenuSetSettingsMigrationImpl, kAppUIPrefix2 + 46)
DECLARE_PMID(kImplementationIDSpace, kSettingsMigrationLazyStartupShutdownImpl, kAppUIPrefix2 + 47)
DECLARE_PMID(kImplementationIDSpace, kSettingsMigrationDialogControllerImpl, kAppUIPrefix2 + 48)
DECLARE_PMID(kImplementationIDSpace, kSettingsMigrationDialogObserverImpl, kAppUIPrefix2 + 49)
DECLARE_PMID(kImplementationIDSpace, kValidateRetrySettingsMigrationCmdImpl, kAppUIPrefix2 + 50)
DECLARE_PMID(kImplementationIDSpace, kSettingsMigrationManualActionComponentImpl, kAppUIPrefix2 + 51)

DECLARE_PMID(kImplementationIDSpace, kBGTaskSpinIconCursorProviderImpl, kAppUIPrefix2 + 52)
DECLARE_PMID(kImplementationIDSpace, kAddonsActionCompImpl, kAppUIPrefix2 + 53 )
DECLARE_PMID(kImplementationIDSpace, kAddonsStartupShutdownImpl, kAppUIPrefix2 + 54)
//gap
#ifdef WINDOWS 
DECLARE_PMID(kImplementationIDSpace, kWinUIScalingPrefsComponentImpl, kAppUIPrefix2 + 56)
DECLARE_PMID(kImplementationIDSpace, kWinUIScalingPrefsPanelCreatorImpl, kAppUIPrefix2 + 57)
DECLARE_PMID(kImplementationIDSpace, kWinUIScalingPrefsDialogObserverImpl, kAppUIPrefix2 + 58)
DECLARE_PMID(kImplementationIDSpace, kWinUIScalingPrefsImpl, kAppUIPrefix2 + 59)
DECLARE_PMID(kImplementationIDSpace, kWinUIScalingPrefsDialogControllerImpl, kAppUIPrefix2 + 60)
DECLARE_PMID(kImplementationIDSpace, kSetWinUIScalingPrefsCmdImpl, kAppUIPrefix2 + 61)
#endif	
DECLARE_PMID(kImplementationIDSpace, kImageStitcherImpl, kAppUIPrefix2 + 62)
DECLARE_PMID(kImplementationIDSpace, kExperimentalFeaturesPrefsComponentImpl, kAppUIPrefix2 + 63)
DECLARE_PMID(kImplementationIDSpace, kExperimentalFeaturesPrefsPanelCreatorImpl, kAppUIPrefix2 + 64) 
DECLARE_PMID(kImplementationIDSpace, kExperimentalFeaturesPrefsDialogControllerImpl, kAppUIPrefix2 + 65)

DECLARE_PMID(kImplementationIDSpace, kExperimentalFeaturesPrefsImpl, kAppUIPrefix2 + 67)
DECLARE_PMID(kImplementationIDSpace, kSetExperimentalFeaturesPrefsCmdImpl, kAppUIPrefix2 + 68)
DECLARE_PMID(kImplementationIDSpace, kExperimentalFeaturesPrefsPanelServiceImpl, kAppUIPrefix2 + 69)
DECLARE_PMID(kImplementationIDSpace, kSetAutoAddSwatchToCCLibrariesPreferenceCmdImpl, kAppUIPrefix2 + 70)
DECLARE_PMID(kImplementationIDSpace, kSetAutoAddCharStyleToCCLibrariesPreferenceCmdImpl, kAppUIPrefix2 + 71)
DECLARE_PMID(kImplementationIDSpace, kSetAutoAddParaStyleToCCLibrariesPreferenceCmdImpl, kAppUIPrefix2 + 72)
DECLARE_PMID(kImplementationIDSpace, kPaletteWSConversionServiceImpl, kAppUIPrefix2 + 73)
// <Service ID>
// Service IDs
DECLARE_PMID(kServiceIDSpace, kDocumentPresentationService, kAppUIPrefix + 1) //OWL2_CS4: replaces kDocumentWindowService
DECLARE_PMID(kServiceIDSpace, kSuppressedUIService, kAppUIPrefix + 2)
DECLARE_PMID(kServiceIDSpace, kPaletteLeafFactoryService, kAppUIPrefix + 3)
DECLARE_PMID(kServiceIDSpace, kBeforeOpenWindowSignalResponderService, kAppUIPrefix + 4)
DECLARE_PMID(kServiceIDSpace, kBeforeCloseWindowSignalResponderService, kAppUIPrefix + 5)
DECLARE_PMID(kServiceIDSpace, kDuringCloseWindowSignalResponderService, kAppUIPrefix + 6)
DECLARE_PMID(kServiceIDSpace, kAfterCloseWindowSignalResponderService, kAppUIPrefix + 7)
DECLARE_PMID(kServiceIDSpace, kPaletteWSConversionService, kAppUIPrefix + 8)

// <Error ID>
// Error Codes
DECLARE_PMID(kErrorIDSpace, kInvalidPaletteWorkspaceFileErr,		kAppUIPrefix + 1)
DECLARE_PMID(kErrorIDSpace, kCantToggleAppBarError,					kAppUIPrefix + 2)
DECLARE_PMID(kErrorIDSpace, kRemoveFromNotSupportedError,			kAppUIPrefix + 3)
DECLARE_PMID(kErrorIDSpace, kMenuFileFormatIncompatible,			kAppUIPrefix + 4)
DECLARE_PMID(kErrorIDSpace, kScriptInvalidWorkspaceFileErr,			kAppUIPrefix + 5)
DECLARE_PMID(kErrorIDSpace, kScriptInvalidMenuSetFileErr,			kAppUIPrefix + 6)
DECLARE_PMID(kErrorIDSpace, kDeletePaletteWorkspaceErr,				kAppUIPrefix + 7)
DECLARE_PMID(kErrorIDSpace, kPaletteWorkspaceFileFormatIncompatible,kAppUIPrefix + 8)
DECLARE_PMID(kErrorIDSpace, kScriptInvalidShortcutSetFileErr,		kAppUIPrefix + 9)
DECLARE_PMID(kErrorIDSpace, kSetKeyObjectNotSupportedError,			kAppUIPrefix + 10)

// <Ignore>


// <Global ID>
// ActionIDs
DECLARE_PMID(kActionIDSpace, kDynamicPaletteWorkspaceActionID, kAppUIPrefix + 1)
DECLARE_PMID(kActionIDSpace, kSavePaletteWorkspaceActionID, kAppUIPrefix + 2)
DECLARE_PMID(kActionIDSpace, kDeletePaletteWorkspaceActionID, kAppUIPrefix + 3)
DECLARE_PMID(kActionIDSpace, kFirstLoadUserPaletteWorkspaceActionID, kAppUIPrefix + 4)
// All ID's between kFirstLoadUserPaletteWorkspaceActionID and kLastLoadUserPaletteWorkspaceActionID are RESERVED
DECLARE_PMID(kActionIDSpace, kLastLoadUserPaletteWorkspaceActionID, kAppUIPrefix + 54)
DECLARE_PMID(kActionIDSpace, kPaletteWorkspaceUserSeparatorActionID, kAppUIPrefix + 55)
DECLARE_PMID(kActionIDSpace, kFirstLoadDefaultPaletteWorkspaceActionID, kAppUIPrefix + 56)
// All ID's between kFirstLoadDefaultPaletteWorkspaceActionID and kLastLoadDefaultPaletteWorkspaceActionID are RESERVED
DECLARE_PMID(kActionIDSpace, kLastLoadDefaultPaletteWorkspaceActionID, kAppUIPrefix + 76)
DECLARE_PMID(kActionIDSpace, kPaletteWorkspaceDefaultSeparatorActionID, kAppUIPrefix + 77)
// gap
DECLARE_PMID(kActionIDSpace, kResetActiveWorkspaceActionID, kAppUIPrefix + 83)
DECLARE_PMID(kActionIDSpace, kOWLMoveToFloatingWindowActionID, kAppUIPrefix + 84)
DECLARE_PMID(kActionIDSpace, kOWLMoveAllToFloatingWindowActionID, kAppUIPrefix + 85)
DECLARE_PMID(kActionIDSpace, kOWLConsolidateToGroupActionID, kAppUIPrefix + 86)
DECLARE_PMID(kActionIDSpace, kOWLAppPrefsSepActionID, kAppUIPrefix + 87)
DECLARE_PMID(kActionIDSpace, kOWLToggleAppBarActionID, kAppUIPrefix + 88)
DECLARE_PMID(kActionIDSpace, kOWLToggleAppFrameActionID, kAppUIPrefix + 89)
DECLARE_PMID(kActionIDSpace, kOpenCloseAllPaletteWellsActionID, kAppUIPrefix + 90)
DECLARE_PMID(kActionIDSpace, kOpenClosePaletteWellsOnLeftActionID, kAppUIPrefix + 91)
DECLARE_PMID(kActionIDSpace, kOpenClosePaletteWellsOnRightActionID, kAppUIPrefix + 92)
DECLARE_PMID(kActionIDSpace, kMenuCustomizationDialogActionID, kAppUIPrefix + 93)
DECLARE_PMID(kActionIDSpace, kShowFullMenusActionID, kAppUIPrefix + 94)
DECLARE_PMID(kActionIDSpace, kWorkspaceSep1ActionID, kAppUIPrefix + 95)
DECLARE_PMID(kActionIDSpace, kUserInterfacePrefsActionID, kAppUIPrefix + 96)
DECLARE_PMID(kActionIDSpace, kWorkspaceSep3ActionID, kAppUIPrefix + 97)
DECLARE_PMID(kActionIDSpace, kToggleUseAppFrameOnMacActionID, kAppUIPrefix + 98)
DECLARE_PMID(kActionIDSpace, kUndoRedoDynamicActionID, kAppUIPrefix + 99)
DECLARE_PMID(kActionIDSpace, kFirstUndoActionID, kAppUIPrefix + 100)
// all those in between kFirstUndoActionID and kLastUndoActionID are reserved....
DECLARE_PMID(kActionIDSpace, kLastUndoActionID, kAppUIPrefix + 149)
DECLARE_PMID(kActionIDSpace, kFirstRedoActionID, kAppUIPrefix + 150)
// all those in between kFirstRedoActionID and kLastRedoActionID are reserved....
DECLARE_PMID(kActionIDSpace, kLastRedoActionID, kAppUIPrefix + 199)
DECLARE_PMID(kActionIDSpace, kAMTUIDynamicActionID, kAppUIPrefix + 200)
DECLARE_PMID(kActionIDSpace, kAMTUIFirstActionID, kAppUIPrefix + 201)
// all those in between kAMTUIFirstActionID and kAMTUILastActionID are reserved (dynamic stuff on Help menu from AMTLib)
DECLARE_PMID(kActionIDSpace, kAMTUILastActionID, kAppUIPrefix + 230)
DECLARE_PMID(kActionIDSpace, kAMTUIHelpSep1ActionID, kAppUIPrefix + 231)
DECLARE_PMID(kActionIDSpace, kAMTUIHelpSep2ActionID, kAppUIPrefix + 232)
// gap
DECLARE_PMID(kActionIDSpace, kAMTUIInDesignOnlineActionID, kAppUIPrefix + 234)
DECLARE_PMID(kActionIDSpace, kAMTUIHelpSep3ActionID, kAppUIPrefix + 235)
DECLARE_PMID(kActionIDSpace, kAMTUIReportABugActionID, kAppUIPrefix + 236)
//gap

DECLARE_PMID(kActionIDSpace, kTraceFileLogActionID, kAppUIPrefix + 238)

DECLARE_PMID(kActionIDSpace, kTraceOption2ActionID, kAppUIPrefix + 239)
DECLARE_PMID(kActionIDSpace, kTraceOption3ActionID, kAppUIPrefix + 240)
DECLARE_PMID(kActionIDSpace, kTraceOption4ActionID, kAppUIPrefix + 241)
DECLARE_PMID(kActionIDSpace, kToggleContentGrabberActionID, kAppUIPrefix + 242)
DECLARE_PMID(kActionIDSpace, kToggleLiveCornersActionID, kAppUIPrefix + 243)
DECLARE_PMID(kActionIDSpace, kExtrasSep1ActionID, kAppUIPrefix + 244)
DECLARE_PMID(kActionIDSpace, kExtrasSep2ActionID, kAppUIPrefix + 245)
DECLARE_PMID(kActionIDSpace, kBGUIPanelActionID, kAppUIPrefix + 246)
DECLARE_PMID(kActionIDSpace, kTraceDynamicActionID, kAppUIPrefix + 247)
DECLARE_PMID(kActionIDSpace, kTestTraceSepActionID, kAppUIPrefix + 248)
DECLARE_PMID(kActionIDSpace, kTraceClearActionID, kAppUIPrefix + 249)
DECLARE_PMID(kActionIDSpace, kTraceRemoveDisabledActionID, kAppUIPrefix + 250)
DECLARE_PMID(kActionIDSpace, kTraceLoadActionID, kAppUIPrefix + 251)
DECLARE_PMID(kActionIDSpace, kTraceSaveActionID, kAppUIPrefix + 252)
DECLARE_PMID(kActionIDSpace, kTraceOpenActionID, kAppUIPrefix + 253)
DECLARE_PMID(kActionIDSpace, kTestTraceSep2ActionID, kAppUIPrefix + 254)
DECLARE_PMID(kActionIDSpace, kExtensionManagerActionID,	kAppUIPrefix + 255)

// Onto the second prefix here...
DECLARE_PMID(kActionIDSpace, kLoad1stPaletteWorkspaceActionID, kAppUIPrefix2 + 1)
DECLARE_PMID(kActionIDSpace, kLoad2ndPaletteWorkspaceActionID, kAppUIPrefix2 + 2)
DECLARE_PMID(kActionIDSpace, kLoad3rdPaletteWorkspaceActionID, kAppUIPrefix2 + 3)
DECLARE_PMID(kActionIDSpace, kLoad4thPaletteWorkspaceActionID, kAppUIPrefix2 + 4)
DECLARE_PMID(kActionIDSpace, kLoad5thPaletteWorkspaceActionID, kAppUIPrefix2 + 5)
DECLARE_PMID(kActionIDSpace, kLoad6thPaletteWorkspaceActionID, kAppUIPrefix2 + 6)
DECLARE_PMID(kActionIDSpace, kLoad7thPaletteWorkspaceActionID, kAppUIPrefix2 + 7)
DECLARE_PMID(kActionIDSpace, kLoad8thPaletteWorkspaceActionID, kAppUIPrefix2 + 8)
DECLARE_PMID(kActionIDSpace, kLoad9thPaletteWorkspaceActionID, kAppUIPrefix2 + 9)
DECLARE_PMID(kActionIDSpace, kLoad1stPaletteUserWorkspaceActionID, kAppUIPrefix2 + 10)
DECLARE_PMID(kActionIDSpace, kLoad2ndPaletteUserWorkspaceActionID, kAppUIPrefix2 + 11)
DECLARE_PMID(kActionIDSpace, kLoad3rdPaletteUserWorkspaceActionID, kAppUIPrefix2 + 12)
DECLARE_PMID(kActionIDSpace, kLoad4thPaletteUserWorkspaceActionID, kAppUIPrefix2 + 13)
DECLARE_PMID(kActionIDSpace, kLoad5thPaletteUserWorkspaceActionID, kAppUIPrefix2 + 14)
DECLARE_PMID(kActionIDSpace, kLoad6thPaletteUserWorkspaceActionID, kAppUIPrefix2 + 15)
DECLARE_PMID(kActionIDSpace, kLoad7thPaletteUserWorkspaceActionID, kAppUIPrefix2 + 16)
DECLARE_PMID(kActionIDSpace, kLoad8thPaletteUserWorkspaceActionID, kAppUIPrefix2 + 17)
DECLARE_PMID(kActionIDSpace, kLoad9thPaletteUserWorkspaceActionID, kAppUIPrefix2 + 18)
DECLARE_PMID(kActionIDSpace, kToggleAnchorAdornmentActionID, kAppUIPrefix2 + 19)
DECLARE_PMID(kActionIDSpace, kToggleRibbonActionID, kAppUIPrefix2 + 20)
// Settings in cloud
DECLARE_PMID(kActionIDSpace, kSettingsInCloudAboutActionID, kAppUIPrefix2 + 21)
DECLARE_PMID(kActionIDSpace, kSettingsInCloudPanelWidgetActionID, kAppUIPrefix2 + 22)
DECLARE_PMID(kActionIDSpace, kSettingsInCloudSeparator1ActionID, kAppUIPrefix2 + 23)
DECLARE_PMID(kActionIDSpace, kSettingsInCloudPopupAboutThisActionID, kAppUIPrefix2 + 24)
DECLARE_PMID(kActionIDSpace, kSettingsInCloudDialogActionID, kAppUIPrefix2 + 25)
DECLARE_PMID(kActionIDSpace, kSettingsInCloudPrefsPanelActionID, kAppUIPrefix2 + 26)

DECLARE_PMID(kActionIDSpace, kSyncToCloudUserNameActionID, kAppUIPrefix2 + 27)
DECLARE_PMID(kActionIDSpace, kSyncNowActionID, kAppUIPrefix2 + 28)
DECLARE_PMID(kActionIDSpace, kSyncToCloudPauseActionID, kAppUIPrefix2 + 29)
DECLARE_PMID(kActionIDSpace, kSyncToCloudResumeSyncActionID, kAppUIPrefix2 + 30)
DECLARE_PMID(kActionIDSpace, kSyncToCloudStatusActionID, kAppUIPrefix2 + 31)
DECLARE_PMID(kActionIDSpace, kSyncToCloudMenuSepActionID, kAppUIPrefix2 + 32)
DECLARE_PMID(kActionIDSpace, kSyncToCloudManageSettingsActionID, kAppUIPrefix2 + 33)
DECLARE_PMID(kActionIDSpace, kSyncToCloudManageAccountActionID, kAppUIPrefix2 + 34)
DECLARE_PMID(kActionIDSpace, kBrowseAddonsActionID, kAppUIPrefix + 35)
DECLARE_PMID(kActionIDSpace, kSyncToCloudMenuSep2ActionID, kAppUIPrefix2 + 36)
DECLARE_PMID(kActionIDSpace, kMigrateSettingsManualActionID, kAppUIPrefix2 + 37)
#ifdef WINDOWS 
DECLARE_PMID(kActionIDSpace, kWinUIScalingPrefsActionID, kAppUIPrefix2 + 38)
#endif	
DECLARE_PMID(kActionIDSpace, kExperimentalFeaturesPrefsActionID, kAppUIPrefix2 + 39) 

//
//Script Element IDs
//

//Suites

//Objects
DECLARE_PMID(kScriptInfoIDSpace, kGeneralPrefsObjectScriptElement, 						kAppUIPrefix + 65)
DECLARE_PMID(kScriptInfoIDSpace, kClipboardPrefsObjectScriptElement,    				kAppUIPrefix + 66)
DECLARE_PMID(kScriptInfoIDSpace, kTransformPrefsObjectScriptElement,    				kAppUIPrefix + 67)
DECLARE_PMID(kScriptInfoIDSpace, kPanelVisiblePropertyScriptElement,    				kAppUIPrefix + 68)
DECLARE_PMID(kScriptInfoIDSpace, kPanelObjectScriptElement,    							kAppUIPrefix + 69)

//Methods
DECLARE_PMID(kScriptInfoIDSpace, kSelectMethodScriptElement,							kAppUIPrefix + 90)
DECLARE_PMID(kScriptInfoIDSpace, kSelectObjectMethodScriptElement,						kAppUIPrefix + 91)
DECLARE_PMID(kScriptInfoIDSpace, kApplyWorkspaceMethodScriptElement,					kAppUIPrefix + 92)
DECLARE_PMID(kScriptInfoIDSpace, kApplyMenuCustMethodScriptElement,						kAppUIPrefix + 93)
DECLARE_PMID(kScriptInfoIDSpace, kTogglePaletteSystemVisibilityMethodScriptElement,		kAppUIPrefix + 94)
DECLARE_PMID(kScriptInfoIDSpace, kApplyShortcutSetMethodScriptElement,					kAppUIPrefix + 95)

//Properties
DECLARE_PMID(kScriptInfoIDSpace, kSelectionKeyObjectPropertyScriptElement,				kAppUIPrefix + 159)
DECLARE_PMID(kScriptInfoIDSpace, kSelectionPropertyScriptElement,						kAppUIPrefix + 160)
DECLARE_PMID(kScriptInfoIDSpace, kPreferStyledTextPastePropertyScriptElement,			kAppUIPrefix + 161)
DECLARE_PMID(kScriptInfoIDSpace, kGeneralObjectPropertyScriptElement,    				kAppUIPrefix + 162)
DECLARE_PMID(kScriptInfoIDSpace, kPreferPDFPastePropertyScriptElement,   				kAppUIPrefix + 163)
DECLARE_PMID(kScriptInfoIDSpace, kCopyPDFToCBPropertyScriptElement,   					kAppUIPrefix + 164)
DECLARE_PMID(kScriptInfoIDSpace, kPageNumberingPropertyScriptElement,   				kAppUIPrefix + 165)
DECLARE_PMID(kScriptInfoIDSpace, kToolTipsPropertyScriptElement,   						kAppUIPrefix + 166)
DECLARE_PMID(kScriptInfoIDSpace, kToolsPalettePropertyScriptElement,   					kAppUIPrefix + 167)
DECLARE_PMID(kScriptInfoIDSpace, kCompleteFontDownloadGlyphLimitPropertyScriptElement,	kAppUIPrefix + 168)
DECLARE_PMID(kScriptInfoIDSpace, kTemporaryFolderPropertyScriptElement,   				kAppUIPrefix + 169)
DECLARE_PMID(kScriptInfoIDSpace, kClipboardObjectPropertyScriptElement,   				kAppUIPrefix + 170)
DECLARE_PMID(kScriptInfoIDSpace, kTransformObjectPropertyScriptElement,   				kAppUIPrefix + 171)
DECLARE_PMID(kScriptInfoIDSpace, kPreservePDFCDQuitPropertyScriptElement,   			kAppUIPrefix + 172)
DECLARE_PMID(kScriptInfoIDSpace, kPreviewSizePropertyScriptElement,						kAppUIPrefix + 173)
DECLARE_PMID(kScriptInfoIDSpace, kAssociatedPanelPropertyScriptElement,					kAppUIPrefix + 174)
DECLARE_PMID(kScriptInfoIDSpace, kPaletteDrawerPropertyScriptElement,					kAppUIPrefix + 175)
DECLARE_PMID(kScriptInfoIDSpace, kToolsPanelPropertyScriptElement,   					kAppUIPrefix + 176)
DECLARE_PMID(kScriptInfoIDSpace, kThumbnailPlaceCursorPropertyScriptElement,   			kAppUIPrefix + 177)
DECLARE_PMID(kScriptInfoIDSpace, kOpenRecentLengthPropertyScriptElement,				kAppUIPrefix + 178)
DECLARE_PMID(kScriptInfoIDSpace, kShowDimensionsCursorPropertyScriptElement,			kAppUIPrefix + 179)
DECLARE_PMID(kScriptInfoIDSpace, kAutoRevealPropertyScriptElement,						kAppUIPrefix + 180)
DECLARE_PMID(kScriptInfoIDSpace, kOpenAsTabsPropertyScriptElement,						kAppUIPrefix + 181)
DECLARE_PMID(kScriptInfoIDSpace, kApplicationFramePropertyScriptElement,				kAppUIPrefix + 182)
DECLARE_PMID(kScriptInfoIDSpace, kAppBarPropertyScriptElement,							kAppUIPrefix + 183)
DECLARE_PMID(kScriptInfoIDSpace, kEnableFloatingWindowDockingPropertyScriptElement,		kAppUIPrefix + 184)
DECLARE_PMID(kScriptInfoIDSpace, kPatientUserDelayPropertyScriptElement,				kAppUIPrefix + 185)
DECLARE_PMID(kScriptInfoIDSpace, kContentGrabberPropertyScriptElement,					kAppUIPrefix + 186)
DECLARE_PMID(kScriptInfoIDSpace, kLiveCornersPropertyScriptElement,						kAppUIPrefix + 187)
DECLARE_PMID(kScriptInfoIDSpace, kShowMasterPageOverlayPropertyScriptElement,			kAppUIPrefix + 188)
DECLARE_PMID(kScriptInfoIDSpace, kEnableMultiTouchGesturesPropertyScriptElement,		kAppUIPrefix + 189)
DECLARE_PMID(kScriptInfoIDSpace, kPreventSelectingLockedItemsPropertyScriptElement,		kAppUIPrefix + 190)
DECLARE_PMID(kScriptInfoIDSpace, kObjectsMoveWithPagePropertyScriptElement,				kAppUIPrefix + 191)
DECLARE_PMID(kScriptInfoIDSpace, kAnchorAdornmentPropertyScriptElement,					kAppUIPrefix + 192)
DECLARE_PMID(kScriptInfoIDSpace, kObjectFrameHighlightingPropertyScriptElement,			kAppUIPrefix + 193)
DECLARE_PMID(kScriptInfoIDSpace, kScrollAllWindowsPropertyScriptElement,				kAppUIPrefix + 194)
DECLARE_PMID(kScriptInfoIDSpace, kZoomAllWindowsPropertyScriptElement,					kAppUIPrefix + 195)
DECLARE_PMID(kScriptInfoIDSpace, kEnableDrawProxyOnDragScriptElement,					kAppUIPrefix + 196)
DECLARE_PMID(kScriptInfoIDSpace, kShowRibbonScriptElement,								kAppUIPrefix + 197)
DECLARE_PMID(kScriptInfoIDSpace, kEnableCreateLinksScriptElement,						kAppUIPrefix + 198)
DECLARE_PMID(kScriptInfoIDSpace, kEnableMapStylesScriptElement,							kAppUIPrefix + 199)

//Enums
DECLARE_PMID(kScriptInfoIDSpace, kPageNumberingEnumScriptElement,   					kAppUIPrefix + 200)
DECLARE_PMID(kScriptInfoIDSpace, kToolTipsEnumScriptElement,   							kAppUIPrefix + 201)
DECLARE_PMID(kScriptInfoIDSpace, kToolsPaletteEnumScriptElement,   						kAppUIPrefix + 202)
DECLARE_PMID(kScriptInfoIDSpace, kSelectionOptionsEnumScriptElement,   					kAppUIPrefix + 203)
DECLARE_PMID(kScriptInfoIDSpace, kSelectAllEnumScriptElement,   						kAppUIPrefix + 204)
DECLARE_PMID(kScriptInfoIDSpace, kPreviewSizeEnumScriptElement,   						kAppUIPrefix + 205)
DECLARE_PMID(kScriptInfoIDSpace, kToolsPanelEnumScriptElement,   						kAppUIPrefix + 206)
DECLARE_PMID(kScriptInfoIDSpace, kPatientUserDelayEnumScriptElement,					kAppUIPrefix + 207)
DECLARE_PMID(kScriptInfoIDSpace, kPreviewPagesEnumScriptElement,						kAppUIPrefix + 208)

DECLARE_PMID(kScriptInfoIDSpace, kUIBrightnessScriptElement,							kAppUIPrefix + 209)
DECLARE_PMID(kScriptInfoIDSpace, kPasteboardColorScriptElement,							kAppUIPrefix + 210)
DECLARE_PMID(kScriptInfoIDSpace, kShowWhatsNewOnStartupScriptElement,					kAppUIPrefix + 211)
DECLARE_PMID(kScriptInfoIDSpace, kEnablePublishOnlineScriptElement,						kAppUIPrefix + 212)
DECLARE_PMID(kScriptInfoIDSpace, kAutoAddSwatchToCCLibrariesScriptElement,				kAppUIPrefix + 213)
DECLARE_PMID(kScriptInfoIDSpace, kAutoAddCharStyleToCCLibrariesScriptElement,			kAppUIPrefix + 214)
DECLARE_PMID(kScriptInfoIDSpace, kAutoAddParaStyleToCCLibrariesScriptElement,			kAppUIPrefix + 215)

//More Properties
DECLARE_PMID(kScriptInfoIDSpace, kPreviewPagesPropertyScriptElement,					kAppUIPrefix + 220)
DECLARE_PMID(kScriptInfoIDSpace, kUseIncomingSpotUponConflictPropertyScriptElement,		kAppUIPrefix + 221)

//Events
DECLARE_PMID(kScriptInfoIDSpace, kAfterContextChangedEventScriptElement,				kAppUIPrefix + 240)
DECLARE_PMID(kScriptInfoIDSpace, kAfterSelectionChangedEventScriptElement,				kAppUIPrefix + 241)
DECLARE_PMID(kScriptInfoIDSpace, kAfterSelectionAttributeChangedEventScriptElement,		kAppUIPrefix + 242)
DECLARE_PMID(kScriptInfoIDSpace, kBeforeDeactivateEventScriptElement,					kAppUIPrefix + 243)
DECLARE_PMID(kScriptInfoIDSpace, kAfterActivateEventScriptElement,						kAppUIPrefix + 244)
DECLARE_PMID(kScriptInfoIDSpace, kAfterOpenWindowEventScriptElement,					kAppUIPrefix + 245)
DECLARE_PMID(kScriptInfoIDSpace, kBeforeCloseWindowEventScriptElement,					kAppUIPrefix + 246)
DECLARE_PMID(kScriptInfoIDSpace, kAfterCloseWindowEventScriptElement,					kAppUIPrefix + 247)
DECLARE_PMID(kScriptInfoIDSpace, kUseCustomMonitorResPrefScriptElement,					kAppUIPrefix + 248)
DECLARE_PMID(kScriptInfoIDSpace, kCustomMonitorResValuePrefScriptElement,				kAppUIPrefix + 249)
DECLARE_PMID(kScriptInfoIDSpace, kMainMonitorResValuePrefScriptElement,					kAppUIPrefix + 250)

//ScriptIDs
enum AppUIScriptIDs
{
	c_Panel =					'CPNS',
	c_Panels =					'pPNS',
	p_AssociatedPanel =			'pAsP',
	e_AfterContextChanged =		'eACC',
	e_AfterSelectionChanged =	'eASC',
	e_AfterSelectionAttributeChanged = 'eASA',
	e_BeforeDeactivate =		'eBAc',
	e_AfterActivate =			'eAAc',

	kLastAppUIScriptID
} ;

//GUIDS
// {9DDF3B90-2909-4c73-8B9B-38D1A1DD62C6}
#define kGeneralPrefs_CLSID { 0x9ddf3b90, 0x2909, 0x4c73, { 0x8b, 0x9b, 0x38, 0xd1, 0xa1, 0xdd, 0x62, 0xc6 } }
// {316B4A31-2E87-423b-8961-9117A2CAAF2D}
#define kClipboardPrefs_CLSID { 0x316b4a31, 0x2e87, 0x423b, { 0x89, 0x61, 0x91, 0x17, 0xa2, 0xca, 0xaf, 0x2d } }
// {E90BE5B1-D431-43de-8740-47BBCFCF2F6E}
#define kTransformPrefs_CLSID { 0xe90be5b1, 0xd431, 0x43de, { 0x87, 0x40, 0x47, 0xbb, 0xcf, 0xcf, 0x2f, 0x6e } }
// {BE8226A0-67E5-449f-8BBB-40A254502C8E}
#define kPalette_CLSID { 0xbe8226a0, 0x67e5, 0x449f, { 0x8b, 0xbb, 0x40, 0xa2, 0x54, 0x50, 0x2c, 0x8e } }
// {D4825DB8-E28C-467d-AD33-B1EC8B812248}
#define kPalettes_CLSID { 0xd4825db8, 0xe28c, 0x467d, { 0xad, 0x33, 0xb1, 0xec, 0x8b, 0x81, 0x22, 0x48 } }
// {C2683D0B-A7C8-4992-A4F7-5FEEFE7CEA1E}
#define kPanel_CLSID { 0xc2683d0b, 0xa7c8, 0x4992, { 0xa4, 0xf7, 0x5f, 0xee, 0xfe, 0x7c, 0xea, 0x1e } }
// {42999865-2B94-44ec-9C17-28D0C0A508CB}
#define kPanels_CLSID { 0x42999865, 0x2b94, 0x44ec, { 0x9c, 0x17, 0x28, 0xd0, 0xc0, 0xa5, 0x8, 0xcb } }

//---------------------------------------------------
// InvalHandlerTypeID
//---------------------------------------------------
DECLARE_PMID(kInvalHandlerIDSpace, kSelectionChangedInvalHandlerID, kAppUIPrefix + 1)
DECLARE_PMID(kInvalHandlerIDSpace, kSelectionAttrChangedInvalHandlerID, kAppUIPrefix + 2)

//---------------------------------------------------
// PaletteTypeIDSpace (Note that these are zero based to match PaletteRefType enum -- see PaletteRef.h)
//---------------------------------------------------
DECLARE_PMID(kPaletteTypeIDSpace, kUnknownPaletteTypeID, 0)
DECLARE_PMID(kPaletteTypeIDSpace, kTabGroupClusterTypeID, 1)
DECLARE_PMID(kPaletteTypeIDSpace, kDockTypeID,  2)
DECLARE_PMID(kPaletteTypeIDSpace, kToolbarTypeID,  3)
DECLARE_PMID(kPaletteTypeIDSpace, kControlBarTypeID,  4)
DECLARE_PMID(kPaletteTypeIDSpace, kTabPaneTypeID,  5)
DECLARE_PMID(kPaletteTypeIDSpace, kTabGroupTypeID,  6)
DECLARE_PMID(kPaletteTypeIDSpace, kPanelContainerTypeID, 7)

#define kInDesignAppbarPictureRsrcID 200
#define kInCopyAppbarPictureRsrcID   232 //(200 + index_InCopyFS)

#define kInDesignInCopySplashScreenWinRsrcID 400
#define kInDesignInCopyAboutScreenWinRsrcID 401

#define kBackgroundTaskAlertsNodeID    kAppUIPrefix + 1 

#endif //__AppUIID__



