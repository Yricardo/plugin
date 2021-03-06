//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/ControlStripID.h $
//  
//  Owner: Paul Sorrick
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
//  ADOBE CONFIDENTIAL
//  
//========================================================================================

#ifndef __ControlStripID__
#define __ControlStripID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kControlStripPrefix	 RezLong(0x11500)

// <Start IDC>
// PluginID
#define kControlStripPluginName 				"Control Strip"
DECLARE_PMID(kPlugInIDSpace, kControlStripPluginID, kControlStripPrefix + 1)

// <Class ID>
// ClassIDs

DECLARE_PMID(kClassIDSpace, kControlStripBoss, kControlStripPrefix + 1)
// gap
DECLARE_PMID(kClassIDSpace, kControlStripKitViewHorzBoss, kControlStripPrefix + 4)
DECLARE_PMID(kClassIDSpace, kMenuControlStripBoss, kControlStripPrefix + 5)
DECLARE_PMID(kClassIDSpace, kControlStripActionComponentBoss, kControlStripPrefix + 6)
DECLARE_PMID(kClassIDSpace, kFittingControlStripBoss, kControlStripPrefix + 7)
DECLARE_PMID(kClassIDSpace, kControlStripFittingRegisterBoss, kControlStripPrefix + 8)
DECLARE_PMID(kClassIDSpace, kFrameGridLinesAndColumnsControlStripBoss, kControlStripPrefix + 9)
DECLARE_PMID(kClassIDSpace, kVerticalJustificationControlStripBoss, kControlStripPrefix + 10)
DECLARE_PMID(kClassIDSpace, kControlStripBasicRegisterBoss, kControlStripPrefix + 11)
DECLARE_PMID(kClassIDSpace, kFrameOptionsPanelWidgetBoss, kControlStripPrefix + 12)
DECLARE_PMID(kClassIDSpace, kFrameOptionsControlStripBoss, kControlStripPrefix + 13)
DECLARE_PMID(kClassIDSpace, kControlStripFrameOptionsRegisterBoss, kControlStripPrefix + 14)
DECLARE_PMID(kClassIDSpace, kParentChildControlStripBoss, kControlStripPrefix + 15)
DECLARE_PMID(kClassIDSpace, kControlStripIconPopupBoss, kControlStripPrefix + 16)
DECLARE_PMID(kClassIDSpace, kCursorPositionPanelWidgetBoss, kControlStripPrefix + 17)
DECLARE_PMID(kClassIDSpace, kSetControlStripPrefsCmdBoss, kControlStripPrefix + 18)
DECLARE_PMID(kClassIDSpace, kFrameGridAttributesControlStripBoss, kControlStripPrefix + 19)
DECLARE_PMID(kClassIDSpace, kTextModeControlStripBoss, kControlStripPrefix + 20)
DECLARE_PMID(kClassIDSpace, kControlStripFrameCursorRegisterBoss, kControlStripPrefix + 21)
DECLARE_PMID(kClassIDSpace, kFrameGridViewOptionsControlStripBoss, kControlStripPrefix + 22)
DECLARE_PMID(kClassIDSpace, kControlStripConversionBoss, kControlStripPrefix + 23)
DECLARE_PMID(kClassIDSpace, kSpanColumnsPanelWidgetBoss, kControlStripPrefix + 25)
DECLARE_PMID(kClassIDSpace, kSetControlStripVisibleSetsCmdBoss, kControlStripPrefix + 26)
DECLARE_PMID(kClassIDSpace, kResizeControlStripWinMsgBoss, kControlStripPrefix + 27) // just a message
DECLARE_PMID(kClassIDSpace, kControlStripDialogBoss, kControlStripPrefix + 28)
DECLARE_PMID(kClassIDSpace, kControlStripTreeNodeWidgetBoss, kControlStripPrefix + 29)
DECLARE_PMID(kClassIDSpace, kControlStripTreeViewWidgetBoss, kControlStripPrefix + 30)
DECLARE_PMID(kClassIDSpace, kControlStripCategoryCheckBoxBoss, kControlStripPrefix + 31)
DECLARE_PMID(kClassIDSpace, kControlStripControlSetCheckBoxBoss, kControlStripPrefix + 32)
DECLARE_PMID(kClassIDSpace, kTextModeSeparatorControlStripBoss, kControlStripPrefix + 33)
// gap
DECLARE_PMID(kClassIDSpace, kLayoutOptionsControlStripBoss, kControlStripPrefix + 35)
DECLARE_PMID(kClassIDSpace, kMasterPageOverlayCheckBoxWidgetBoss, kControlStripPrefix + 36)
DECLARE_PMID(kClassIDSpace, kBalanceColumnsControlStripBoss, kControlStripPrefix + 37)
DECLARE_PMID(kClassIDSpace, kTextControlSet2Boss, kControlStripPrefix + 38)
DECLARE_PMID(kClassIDSpace, kObjectsMoveWithPageCheckBoxWidgetBoss, kControlStripPrefix + 39)
DECLARE_PMID(kClassIDSpace, kCreateLayoutSnapshotButtonWidgetBoss, kControlStripPrefix + 40)
DECLARE_PMID(kClassIDSpace, kLayoutPoliciesDropdownListWidgetBoss, kControlStripPrefix + 41)
DECLARE_PMID(kClassIDSpace, kDeleteLayoutSnapshotButtonWidgetBoss, kControlStripPrefix + 42)
DECLARE_PMID(kClassIDSpace, kEnableSnapshotBlendingCheckBoxWidgetBoss, kControlStripPrefix + 43)
DECLARE_PMID(kClassIDSpace, kAutoFitCheckBoxWidgetBoss, kControlStripPrefix + 44)


// <Interface ID>
// Interface IDs

DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPREGISTER, kControlStripPrefix + 1)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPSELECTIONOBSERVER, kControlStripPrefix + 2)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPWIDGETSUITE, kControlStripPrefix + 3)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPFITTINGSUITE, kControlStripPrefix + 4)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPBASICSUITE, kControlStripPrefix + 5)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPFRAMEOPTIONSSUITE, kControlStripPrefix + 6)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPMENUSUITE, kControlStripPrefix + 7)
DECLARE_PMID(kInterfaceIDSpace, IID_IFRAMEOPTIONSSELECTIONOBSERVER, kControlStripPrefix + 8)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPPREFS, kControlStripPrefix + 9)
DECLARE_PMID(kInterfaceIDSpace, IID_IFRAMEGRIDSELECTIONOBSERVER, kControlStripPrefix + 10)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPFRAMECURSORSUITE, kControlStripPrefix + 11)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPUTILS, kControlStripPrefix + 12)
DECLARE_PMID(kInterfaceIDSpace, IID_IPENDINGUPDATECONTROLLER, kControlStripPrefix + 13)
DECLARE_PMID(kInterfaceIDSpace, IID_ICONTROLSTRIPDIMENSIONS, kControlStripPrefix + 14)
DECLARE_PMID(kInterfaceIDSpace, IID_IVERTICALJUSTIFICATIONSELECTIONOBSERVER, kControlStripPrefix + 15)
DECLARE_PMID(kInterfaceIDSpace, IID_FRAMEFITTINGSELECTIONOBSERVER, kControlStripPrefix + 16)
DECLARE_PMID(kInterfaceIDSpace, IID_ISWATCHESPOPUPPERSISTUIDDATA, kControlStripPrefix + 17)
DECLARE_PMID(kInterfaceIDSpace, IID_ICOLORPOPUPPERSISTUIDDATA, kControlStripPrefix + 18)
DECLARE_PMID(kInterfaceIDSpace, IID_IBALANCECOLUMNSSELECTIONOBSERVER, kControlStripPrefix + 19)

// <Implementation ID>
// Implementation IDs

DECLARE_PMID(kImplementationIDSpace, kControlStripDfltRegisterServiceImpl, kControlStripPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kControlStripObserverImpl, kControlStripPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kControlStripSelectionObserverImpl, kControlStripPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kTextModeSeparatorObserverImpl, kControlStripPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kMenuControlSetObserverImpl, kControlStripPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kControlStripActionComponentImpl, kControlStripPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kControlStripWidgetSuiteASBImpl, kControlStripPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kControlStripFittingSuiteImpl, kControlStripPrefix + 8)
DECLARE_PMID(kImplementationIDSpace, kControlStripFittingRegisterImpl, kControlStripPrefix + 9)
DECLARE_PMID(kImplementationIDSpace, kFittingButtonsObserverImpl, kControlStripPrefix + 10)

DECLARE_PMID(kImplementationIDSpace, kControlStripBasicSuiteImpl, kControlStripPrefix + 11)
DECLARE_PMID(kImplementationIDSpace, kControlStripBasicRegisterImpl, kControlStripPrefix + 12)
DECLARE_PMID(kImplementationIDSpace, kFrameOptionsSelectionObserverImpl, kControlStripPrefix + 13)
DECLARE_PMID(kImplementationIDSpace, kFrameOptionsWidgetObserverImpl, kControlStripPrefix + 14)
DECLARE_PMID(kImplementationIDSpace, kControlStripFrameOptionsSuiteImpl, kControlStripPrefix + 15)
DECLARE_PMID(kImplementationIDSpace, kControlStripFrameOptionsRegisterImpl, kControlStripPrefix + 16)
DECLARE_PMID(kImplementationIDSpace, kSelectParentChildObserverImpl, kControlStripPrefix + 17)
DECLARE_PMID(kImplementationIDSpace, kControlStripMenuPopupEHImpl, kControlStripPrefix + 18)
DECLARE_PMID(kImplementationIDSpace, kControlStripMenuSuiteASBImpl, kControlStripPrefix + 19)
DECLARE_PMID(kImplementationIDSpace, kControlStripMenuLayoutCSBImpl, kControlStripPrefix + 20)

DECLARE_PMID(kImplementationIDSpace, kControlStripMenuDefaultCSBImpl, kControlStripPrefix + 21)
DECLARE_PMID(kImplementationIDSpace, kControlStripMenuTextCSBImpl, kControlStripPrefix + 22)
DECLARE_PMID(kImplementationIDSpace, kControlStripMenuTableCSBImpl, kControlStripPrefix + 23)
DECLARE_PMID(kImplementationIDSpace, kVerticalJustificationSelectionObserverImpl, kControlStripPrefix + 24)
DECLARE_PMID(kImplementationIDSpace, kControlStripFrameCursorSuiteImpl, kControlStripPrefix + 25)
DECLARE_PMID(kImplementationIDSpace, kCursorPositionObserverImpl, kControlStripPrefix + 26)
DECLARE_PMID(kImplementationIDSpace, kControlStripPrefsImpl, kControlStripPrefix + 27)
DECLARE_PMID(kImplementationIDSpace, kSetControlStripPrefsCmdImpl, kControlStripPrefix + 28)
DECLARE_PMID(kImplementationIDSpace, kFrameGridSelectionObserverImpl, kControlStripPrefix + 29)

DECLARE_PMID(kImplementationIDSpace, kFrameGridWidgetObserverImpl, kControlStripPrefix + 30)
DECLARE_PMID(kImplementationIDSpace, kTextModeButtonsObserverImpl, kControlStripPrefix + 31)
DECLARE_PMID(kImplementationIDSpace, kVerticalJustificationWidgetObserverImpl, kControlStripPrefix + 32)
DECLARE_PMID(kImplementationIDSpace, kSetControlStripVisibleSetsCmdImpl, kControlStripPrefix + 33)
DECLARE_PMID(kImplementationIDSpace, kControlStripFrameCursorRegisterImpl, kControlStripPrefix + 34)
DECLARE_PMID(kImplementationIDSpace, kControlStripUtilsImpl, kControlStripPrefix + 35)
DECLARE_PMID(kImplementationIDSpace, kControlStripDialogControllerImpl, kControlStripPrefix + 36)
DECLARE_PMID(kImplementationIDSpace, kControlStripPanelViewImpl, kControlStripPrefix + 37)
DECLARE_PMID(kImplementationIDSpace, kControlStripPendingUpdateControllerImpl, kControlStripPrefix + 38)
DECLARE_PMID(kImplementationIDSpace, kControlStripFrameOptionsTipImpl, kControlStripPrefix + 39)

DECLARE_PMID(kImplementationIDSpace, kControlStripTreeViewAdapterImpl, kControlStripPrefix + 40)
DECLARE_PMID(kImplementationIDSpace, kControlStripTreeViewWidgetMgrImpl, kControlStripPrefix + 41)
DECLARE_PMID(kImplementationIDSpace, kControlStripPanelEHImpl, kControlStripPrefix + 42)
DECLARE_PMID(kImplementationIDSpace, kControlStripCategoryCheckBoxObserverImpl, kControlStripPrefix + 43)
DECLARE_PMID(kImplementationIDSpace, kControlStripControlSetCheckBoxObserverImpl, kControlStripPrefix + 44)
DECLARE_PMID(kImplementationIDSpace, kControlStripXMLGeneratorImpl, kControlStripPrefix + 45)
DECLARE_PMID(kImplementationIDSpace, kControlStripSAXHandlerImpl, kControlStripPrefix + 46)
DECLARE_PMID(kImplementationIDSpace, kControlStripPrefsCmdDataImpl, kControlStripPrefix + 47)
DECLARE_PMID(kImplementationIDSpace, kControlStripMenuSpreadCSBImpl, kControlStripPrefix + 48)
DECLARE_PMID(kImplementationIDSpace, kAutoFitCheckBoxEHImpl, kControlStripPrefix + 49)

DECLARE_PMID(kImplementationIDSpace, kMasterPageOverlayWidgetObserverImpl, kControlStripPrefix + 50)
DECLARE_PMID(kImplementationIDSpace, kAutoFitObserverImpl, kControlStripPrefix + 51)
DECLARE_PMID(kImplementationIDSpace, kFrameFittingSelectionObserverImpl, kControlStripPrefix + 52)
DECLARE_PMID(kImplementationIDSpace, kSwatchesWidgetPersistUIDDataImpl, kControlStripPrefix + 53)
DECLARE_PMID(kImplementationIDSpace, kColorWidgetPersistUIDDataImpl, kControlStripPrefix + 54)
DECLARE_PMID(kImplementationIDSpace, kBalanceColumnsSelectionObserverImpl, kControlStripPrefix + 55)
DECLARE_PMID(kImplementationIDSpace, kBalanceColumnsWidgetObserverImpl, kControlStripPrefix + 56)
DECLARE_PMID(kImplementationIDSpace, kObjectsMoveWithPageWidgetObserverImpl, kControlStripPrefix + 57)
DECLARE_PMID(kImplementationIDSpace, kCreateLayoutSnapshotWidgetObserverImpl, kControlStripPrefix + 58)
DECLARE_PMID(kImplementationIDSpace, kLayoutPoliciesDropdownListWidgetObserverImpl, kControlStripPrefix + 59)
DECLARE_PMID(kImplementationIDSpace, kDeleteLayoutSnapshotWidgetObserverImpl, kControlStripPrefix + 60)
DECLARE_PMID(kImplementationIDSpace, kEnableSnapshotBlendingCheckBoxWidgetObserverImpl, kControlStripPrefix + 61)


// <Message ID>

DECLARE_PMID(kMessageIDSpace, kUpdateAllWidgetsMessage, kControlStripPrefix + 1)

// <Widget ID>

DECLARE_PMID(kWidgetIDSpace, kControlStripPanelWidgetID, kControlStripPrefix + 1)

// TODO move these to appropriate ID.h files, or delete
DECLARE_PMID(kWidgetIDSpace, kFontControlSetWidgetID, kControlStripPrefix + 2)
DECLARE_PMID(kWidgetIDSpace, kCharAttrButtonsControlSetWidgetID, kControlStripPrefix + 3)
DECLARE_PMID(kWidgetIDSpace, kParaAlignButtonsControlSetWidgetID, kControlStripPrefix + 4)
DECLARE_PMID(kWidgetIDSpace, kTextStylesControlSetWidgetID, kControlStripPrefix + 5)
DECLARE_PMID(kWidgetIDSpace, kControlStripKitHDockBarViewWidgetID, kControlStripPrefix + 6)
DECLARE_PMID(kWidgetIDSpace, kFrameOptionsGutterIconWidgetID, kControlStripPrefix + 7)
DECLARE_PMID(kWidgetIDSpace, kCharacterStylesDropDownWidgetID, kControlStripPrefix + 8)
DECLARE_PMID(kWidgetIDSpace, kParagraphStylesDropDownWidgetID, kControlStripPrefix + 9)
DECLARE_PMID(kWidgetIDSpace, kFrameOptionsControlSetWidgetID, kControlStripPrefix + 10)
DECLARE_PMID(kWidgetIDSpace, kMenuControlSetWidgetID, kControlStripPrefix + 11)
DECLARE_PMID(kWidgetIDSpace, kMenuPanelWidgetId, kControlStripPrefix + 12)
DECLARE_PMID(kWidgetIDSpace, kVerticalJustificationParentWidgetID, kControlStripPrefix + 13)
DECLARE_PMID(kWidgetIDSpace, kFittingParentWidgetID, kControlStripPrefix + 14)
DECLARE_PMID(kWidgetIDSpace, kContentToFrameWidgetID, kControlStripPrefix + 15)
DECLARE_PMID(kWidgetIDSpace, kFrameToContentWidgetID, kControlStripPrefix + 16)
DECLARE_PMID(kWidgetIDSpace, kCenterContentWidgetID, kControlStripPrefix + 17)
DECLARE_PMID(kWidgetIDSpace, kFitContentPropWidgetID, kControlStripPrefix + 18)
DECLARE_PMID(kWidgetIDSpace, kFrameOptionsParentWidgetID, kControlStripPrefix + 19)
DECLARE_PMID(kWidgetIDSpace, kFrameOptionsNumColumnsWidgetID, kControlStripPrefix + 20)
DECLARE_PMID(kWidgetIDSpace, kControlStripKitTablessViewWidgetID, kControlStripPrefix + 21)

DECLARE_PMID(kWidgetIDSpace, kSelectChildButtonWidgetID, kControlStripPrefix + 22)
DECLARE_PMID(kWidgetIDSpace, kSelectParentButtonWidgetID, kControlStripPrefix + 23)
DECLARE_PMID(kWidgetIDSpace, kParentChildButtonsWidgetID, kControlStripPrefix + 24)

DECLARE_PMID(kWidgetIDSpace, kControlStripMenuButtonWidgetID, kControlStripPrefix + 25)
DECLARE_PMID(kWidgetIDSpace, kFrameOptionsGutterWidgetID, kControlStripPrefix + 26)

DECLARE_PMID(kWidgetIDSpace, kControlStripVJTopButtonWidgetID, kControlStripPrefix + 27)
DECLARE_PMID(kWidgetIDSpace, kControlStripVJCenterButtonWidgetID, kControlStripPrefix + 28)
DECLARE_PMID(kWidgetIDSpace, kControlStripVJBottomButtonWidgetID, kControlStripPrefix + 29)
DECLARE_PMID(kWidgetIDSpace, kControlStripVJJustifyButtonWidgetID, kControlStripPrefix + 30)
DECLARE_PMID(kWidgetIDSpace, kFrameOptionsNumColumnsIconWidgetID, kControlStripPrefix + 31)

DECLARE_PMID(kWidgetIDSpace, kCursorSubPanelWidgetId, kControlStripPrefix + 32)
DECLARE_PMID(kWidgetIDSpace, kIconXCursorWidgetId, kControlStripPrefix + 33)
DECLARE_PMID(kWidgetIDSpace, kXCursorEditBoxWidgetId, kControlStripPrefix + 34)

DECLARE_PMID(kWidgetIDSpace, kFrameGridAttributesParentWidgetID, kControlStripPrefix + 35)
DECLARE_PMID(kWidgetIDSpace, kFrameGridHCharsIconWidgetID, kControlStripPrefix + 36)
DECLARE_PMID(kWidgetIDSpace, kFrameGridHCharsWidgetID, kControlStripPrefix + 37)
DECLARE_PMID(kWidgetIDSpace, kFrameGridVCharsIconWidgetID, kControlStripPrefix + 38)
DECLARE_PMID(kWidgetIDSpace, kFrameGridVCharsWidgetID, kControlStripPrefix + 39)
DECLARE_PMID(kWidgetIDSpace, kFrameGridCharAkiIconWidgetID, kControlStripPrefix + 40)
DECLARE_PMID(kWidgetIDSpace, kFrameGridCharAkiWidgetID, kControlStripPrefix + 41)
DECLARE_PMID(kWidgetIDSpace, kFrameGridLineAkiIconWidgetID, kControlStripPrefix + 42)
DECLARE_PMID(kWidgetIDSpace, kFrameGridLineAkiWidgetID, kControlStripPrefix + 43)
DECLARE_PMID(kWidgetIDSpace, kNamedGridDDWidgetID, kControlStripPrefix + 44)
DECLARE_PMID(kWidgetIDSpace, kFrameGridVerticalScaleWidgetID, kControlStripPrefix + 45)
DECLARE_PMID(kWidgetIDSpace, kFrameGridHorizontalScaleWidgetID, kControlStripPrefix + 46)
DECLARE_PMID(kWidgetIDSpace, kFrameGridColumnsWidgetID, kControlStripPrefix + 47)
DECLARE_PMID(kWidgetIDSpace, kFrameGridGutterWidgetID, kControlStripPrefix + 48)
DECLARE_PMID(kWidgetIDSpace, kFrameGridVerticalScaleIconWidgetID, kControlStripPrefix + 49)
DECLARE_PMID(kWidgetIDSpace, kFrameGridHorizontalScaleIconWidgetID, kControlStripPrefix + 50)
DECLARE_PMID(kWidgetIDSpace, kFrameGridColumnsIconWidgetID, kControlStripPrefix + 51)
DECLARE_PMID(kWidgetIDSpace, kFrameGridGutterIconWidgetID, kControlStripPrefix + 52)
DECLARE_PMID(kWidgetIDSpace, kFrameGridViewIconWidgetID, kControlStripPrefix + 53)
DECLARE_PMID(kWidgetIDSpace, kFrameGridViewTypeWidgetID, kControlStripPrefix + 54)
DECLARE_PMID(kWidgetIDSpace, kNamedGridIconWidgetID, kControlStripPrefix + 55)

DECLARE_PMID(kWidgetIDSpace, kTextCharacterModeWidgetID, kControlStripPrefix + 56)
DECLARE_PMID(kWidgetIDSpace, kTextParagraphModeWidgetID, kControlStripPrefix + 57)
DECLARE_PMID(kWidgetIDSpace, kTextModeControlSetWidgetID, kControlStripPrefix + 58)
DECLARE_PMID(kWidgetIDSpace, kControlStripVJGroupWidgetID, kControlStripPrefix + 59)

DECLARE_PMID(kWidgetIDSpace, kSelectPreviousSiblingButtonWidgetID, kControlStripPrefix + 60)
DECLARE_PMID(kWidgetIDSpace, kSelectNextSiblingButtonWidgetID, kControlStripPrefix + 61)
DECLARE_PMID(kWidgetIDSpace, kControlStripMenuGroupWidgetID, kControlStripPrefix + 62)
DECLARE_PMID(kWidgetIDSpace, kFrameOptionsColumnsNudgeWidgetID, kControlStripPrefix + 63)
DECLARE_PMID(kWidgetIDSpace, kFrameGridVerticalScaleNudgeWidgetID, kControlStripPrefix + 64)
DECLARE_PMID(kWidgetIDSpace, kFrameGridHorizontalScaleNudgeWidgetID, kControlStripPrefix + 65)
DECLARE_PMID(kWidgetIDSpace, kFrameGridCharAkiNudgeWidgetID, kControlStripPrefix + 66)
DECLARE_PMID(kWidgetIDSpace, kFrameGridLineAkiNudgeWidgetID, kControlStripPrefix + 67)
DECLARE_PMID(kWidgetIDSpace, kFrameGridHCharsNudgeWidgetID, kControlStripPrefix + 68)
DECLARE_PMID(kWidgetIDSpace, kFrameGridVCharsNudgeWidgetID, kControlStripPrefix + 69)
DECLARE_PMID(kWidgetIDSpace, kFrameGridColumnsNudgeWidgetID, kControlStripPrefix + 70)
DECLARE_PMID(kWidgetIDSpace, kFrameGridGutterNudgeWidgetID, kControlStripPrefix + 71)

DECLARE_PMID(kWidgetIDSpace, kFillFramePropWidgetID, kControlStripPrefix + 72)
// gap
DECLARE_PMID(kWidgetIDSpace, kControlStripSeparatorWidgetID1, kControlStripPrefix + 75)
DECLARE_PMID(kWidgetIDSpace, kControlStripFrameOptionsPanelWidgetID, kControlStripPrefix + 76)
DECLARE_PMID(kWidgetIDSpace, kFrameOptionsGutterNudgeWidgetID, kControlStripPrefix + 77)
DECLARE_PMID(kWidgetIDSpace, kCharKerningControlSetWidgetID, kControlStripPrefix + 78)
DECLARE_PMID(kWidgetIDSpace, kCharScalingControlSetWidgetID, kControlStripPrefix + 79)
DECLARE_PMID(kWidgetIDSpace, kCharMojikumiControlSetWidgetID, kControlStripPrefix + 80)

DECLARE_PMID(kWidgetIDSpace, kParaIndentsControlSetWidgetID, kControlStripPrefix + 81)
DECLARE_PMID(kWidgetIDSpace, kParaSpacingControlSetWidgetID, kControlStripPrefix + 82)
DECLARE_PMID(kWidgetIDSpace, kParaJSetsControlSetWidgetID, kControlStripPrefix + 83)
DECLARE_PMID(kWidgetIDSpace, kParaTableControlSetWidgetID, kControlStripPrefix + 84)
DECLARE_PMID(kWidgetIDSpace, kFrameAndCursorControlSetWidgetId, kControlStripPrefix + 85)
DECLARE_PMID(kWidgetIDSpace, kFrameGridViewOptionsParentWidgetID, kControlStripPrefix + 86)
DECLARE_PMID(kWidgetIDSpace, kFrameGridLinesAndColumnsParentWidgetID, kControlStripPrefix + 87)
DECLARE_PMID(kWidgetIDSpace, kControlStripQuickApplyGroupWidgetID, kControlStripPrefix + 88)
DECLARE_PMID(kWidgetIDSpace, kControlStripQuickApplyPanelWidgetID, kControlStripPrefix + 89)
DECLARE_PMID(kWidgetIDSpace, kTextModeSeparatorControlSetWidgetID, kControlStripPrefix + 90)
DECLARE_PMID(kWidgetIDSpace, kTextModeSeparatorWidgetID, kControlStripPrefix + 91)
DECLARE_PMID(kWidgetIDSpace, kAutoFitObserverWidgetId, kControlStripPrefix + 92)
DECLARE_PMID(kWidgetIDSpace, kSpanColumnsIconWidgetID, kControlStripPrefix + 93)
DECLARE_PMID(kWidgetIDSpace, kObjectsMoveWithPageWidgetID, kControlStripPrefix + 94)
// gap

DECLARE_PMID(kWidgetIDSpace, kControlStripCustomizeDialogWidgetID, kControlStripPrefix + 100)
DECLARE_PMID(kWidgetIDSpace, kControlStripTreeWidgetID, kControlStripPrefix + 101)
DECLARE_PMID(kWidgetIDSpace, kControlStripTreeCategoryWidgetId, kControlStripPrefix + 102)
DECLARE_PMID(kWidgetIDSpace, kControlStripCustomizePanel1WidgetId, kControlStripPrefix + 103)
DECLARE_PMID(kWidgetIDSpace, kControlStripTreeControlSetWidgetId, kControlStripPrefix + 104)
DECLARE_PMID(kWidgetIDSpace, kControlStripCustomizePanel2WidgetId, kControlStripPrefix + 105)
DECLARE_PMID(kWidgetIDSpace, kLayoutOptionsParentWidgetID, kControlStripPrefix + 106)
DECLARE_PMID(kWidgetIDSpace, kLayoutPolicyLabelWidgetID, kControlStripPrefix + 107)
DECLARE_PMID(kWidgetIDSpace, kMasterPageOverlayWidgetID, kControlStripPrefix + 108)

DECLARE_PMID(kWidgetIDSpace, kBalanceColumnsParentWidgetID, kControlStripPrefix + 109)
DECLARE_PMID(kWidgetIDSpace, kControlStripBalanceColumnsButtonWidgetID, kControlStripPrefix + 110)
DECLARE_PMID(kWidgetIDSpace, kControlStripUnBalanceColumnsButtonWidgetID, kControlStripPrefix + 111)
DECLARE_PMID(kWidgetIDSpace, kControlStripBalanceColumnsGroupWidgetID, kControlStripPrefix + 112)

DECLARE_PMID(kWidgetIDSpace, kCreateLayoutSnapshotWidgetID, kControlStripPrefix + 113)
DECLARE_PMID(kWidgetIDSpace, kLayoutPoliciesDropdownListWidgetID, kControlStripPrefix + 114)
DECLARE_PMID(kWidgetIDSpace, kDeleteLayoutSnapshotWidgetID, kControlStripPrefix + 115)
DECLARE_PMID(kWidgetIDSpace, kEnableSnapshotBlendingWidgetID, kControlStripPrefix + 116)


// <Action ID>

DECLARE_PMID(kActionIDSpace, kControlStripActionID, kControlStripPrefix + 1)
DECLARE_PMID(kActionIDSpace, kSetControlStripFocusActionID, kControlStripPrefix + 2)
DECLARE_PMID(kActionIDSpace, kToggleTextModeActionID, kControlStripPrefix + 3)
DECLARE_PMID(kActionIDSpace, kControlStripDockAtTopActionID, kControlStripPrefix + 4)
DECLARE_PMID(kActionIDSpace, kControlStripDockAtBottomActionID, kControlStripPrefix + 5)
DECLARE_PMID(kActionIDSpace, kControlStripFloatActionID, kControlStripPrefix + 6)
DECLARE_PMID(kActionIDSpace, kBridgeBrowseActionID, kControlStripPrefix + 7)
// gap
DECLARE_PMID(kActionIDSpace, kControlStripSepActionID, kControlStripPrefix + 13)
DECLARE_PMID(kActionIDSpace, kControlStripSep2ActionID, kControlStripPrefix + 14)
DECLARE_PMID(kActionIDSpace, kControlStripCustomizeActionID, kControlStripPrefix + 15)


#endif // __ControlStripID__

