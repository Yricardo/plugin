//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IndexPanelID.h $
//  
//  Owner: Bertrand Lechevalier
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

#ifndef __IndexPanelID__
#define __IndexPanelID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kIndexPanelPrefix			RezLong( 0x13100 )

// <Start IDC>
// PluginID
#define kIndexPanelPluginName 			"IndexPanel"
DECLARE_PMID(kPlugInIDSpace, kIndexPanelPluginID, kIndexPanelPrefix + 1)

// <Class ID>
// ClassIDs
DECLARE_PMID(kClassIDSpace, kIndexPanelWidgetBoss,							kIndexPanelPrefix + 1)
DECLARE_PMID(kClassIDSpace, kIndexTreeViewWidgetBoss,						kIndexPanelPrefix + 2)
DECLARE_PMID(kClassIDSpace, kTopicTreeNodeWidgetBoss,						kIndexPanelPrefix + 3)
//gap
DECLARE_PMID(kClassIDSpace, kIndexPanelNewButtonBoss,						kIndexPanelPrefix + 5)
DECLARE_PMID(kClassIDSpace, kIndexPanelDeleteButtonBoss,					kIndexPanelPrefix + 6)
DECLARE_PMID(kClassIDSpace, kIndexPanelGenerateButtonBoss,					kIndexPanelPrefix + 7)
DECLARE_PMID(kClassIDSpace, kIndexPanelUpdateButtonBoss,					kIndexPanelPrefix + 8)
//gap
DECLARE_PMID(kClassIDSpace, kIndexPanelMenuComponentBoss,					kIndexPanelPrefix + 10)
DECLARE_PMID(kClassIDSpace, kIndexOptionsDlgBoss,							kIndexPanelPrefix + 11)
DECLARE_PMID(kClassIDSpace, kEntryTreeNodeWidgetBoss,						kIndexPanelPrefix + 12)
DECLARE_PMID(kClassIDSpace, kIndexKeyboardShortcutsBoss,					kIndexPanelPrefix + 13)
//gap
DECLARE_PMID(kClassIDSpace, kIndexPanelPromoteButtonBoss,					kIndexPanelPrefix + 17)
DECLARE_PMID(kClassIDSpace, kIndexPanelDemoteButtonBoss,					kIndexPanelPrefix + 18)
DECLARE_PMID(kClassIDSpace, kIndexTreeStaticTextWidgetBoss,					kIndexPanelPrefix + 19)
DECLARE_PMID(kClassIDSpace, kPageRangeDDListWidgetBoss,						kIndexPanelPrefix + 20)
DECLARE_PMID(kClassIDSpace, kIndexDEHandlerBoss,							kIndexPanelPrefix + 21)
DECLARE_PMID(kClassIDSpace, kCapitalizeDlgBoss,								kIndexPanelPrefix + 22)
DECLARE_PMID(kClassIDSpace, kUseOfStyleDDListWidgetBoss,					kIndexPanelPrefix + 23)
DECLARE_PMID(kClassIDSpace, kReferencedEditBoxWidgetBoss,					kIndexPanelPrefix + 24)
DECLARE_PMID(kClassIDSpace, kIndexPanelTestMenuBoss,						kIndexPanelPrefix + 25)
DECLARE_PMID(kClassIDSpace, kCustomXRefListWidgetBoss,						kIndexPanelPrefix + 26)
DECLARE_PMID(kClassIDSpace, kOptionsStringsEditWidgetBoss,					kIndexPanelPrefix + 27)
DECLARE_PMID(kClassIDSpace, kDialogTreeViewWidgetBoss,						kIndexPanelPrefix + 28)
DECLARE_PMID(kClassIDSpace, kDialogTreeNodeWidgetBoss,						kIndexPanelPrefix + 29)
DECLARE_PMID(kClassIDSpace, kDialogTreeStaticTextWidgetBoss,				kIndexPanelPrefix + 30)
DECLARE_PMID(kClassIDSpace, kGenerateIndexDlgBoss,							kIndexPanelPrefix + 31)
// gap
DECLARE_PMID(kClassIDSpace, kMetaCharPopupWidgetBoss,						kIndexPanelPrefix + 33)
DECLARE_PMID(kClassIDSpace, kMetaCharMenuComponentBoss,						kIndexPanelPrefix + 34)
DECLARE_PMID(kClassIDSpace, kIndexPanelGoToButtonBoss,						kIndexPanelPrefix + 35)
DECLARE_PMID(kClassIDSpace, kParaPageNbEditBoxWidgetBoss,					kIndexPanelPrefix + 36)
DECLARE_PMID(kClassIDSpace, kPNumberStyleDDListWidgetBoss,					kIndexPanelPrefix + 37)
DECLARE_PMID(kClassIDSpace, kIndexBookCheckBoxBoss,							kIndexPanelPrefix + 38)
DECLARE_PMID(kClassIDSpace, kPNumberStyleCheckBoxWidgetBoss,				kIndexPanelPrefix + 39)
DECLARE_PMID(kClassIDSpace, kIndexPanelFindChangeDataBoss,					kIndexPanelPrefix + 40)
DECLARE_PMID(kClassIDSpace, kMarkAllButtonObserverBoss,						kIndexPanelPrefix + 41)
DECLARE_PMID(kClassIDSpace, kIndexFindEditBoxWidgetBoss,					kIndexPanelPrefix + 42)

DECLARE_PMID(kClassIDSpace, kIndexSortOptionsDialogBoss,					kIndexPanelPrefix + 43)
DECLARE_PMID(kClassIDSpace, kIndexSortOptionsListElementWidgetBoss,			kIndexPanelPrefix + 44)
DECLARE_PMID(kClassIDSpace, kIndexSortOptionsInlineDropDownContainerWidgetBoss,	kIndexPanelPrefix + 45)
DECLARE_PMID(kClassIDSpace, kIndexSortOptionsListElementDropdownListWidgetBoss,	kIndexPanelPrefix + 46)
DECLARE_PMID(kClassIDSpace, kIndexSortOptionsSplitterWidgetBoss,			kIndexPanelPrefix + 47)
DECLARE_PMID(kClassIDSpace, kIndexSortOptionsTreeViewWidgetBoss,			kIndexPanelPrefix + 48)
DECLARE_PMID(kClassIDSpace, kIndexSortOptionsMoveUpButtonBoss,				kIndexPanelPrefix + 49)
DECLARE_PMID(kClassIDSpace, kIndexSortOptionsMoveDownButtonBoss,			kIndexPanelPrefix + 50)
DECLARE_PMID(kClassIDSpace, kIndexSortOptionZOrderDEHandlerBoss,			kIndexPanelPrefix + 51)

DECLARE_PMID(kClassIDSpace, kEditChineseButtonBoss,							kIndexPanelPrefix + 52)
DECLARE_PMID(kClassIDSpace, kEditPinyinDialogBoss,							kIndexPanelPrefix + 53)
DECLARE_PMID(kClassIDSpace, kEditStrokeDialogBoss,							kIndexPanelPrefix + 54)
DECLARE_PMID(kClassIDSpace, kEditStrokeCountEditBoxWidgetBoss,				kIndexPanelPrefix + 55)
DECLARE_PMID(kClassIDSpace, kEditPinyinToneEditBoxWidgetBoss,				kIndexPanelPrefix + 56)
DECLARE_PMID(kClassIDSpace, kEditTopicTextEditBoxWidgetBoss,				kIndexPanelPrefix + 57)


// <Implementation ID>
// ImplementationIDs
DECLARE_PMID(kImplementationIDSpace, kIndexPanelViewImpl,					kIndexPanelPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelNewBtnObserverImpl,			kIndexPanelPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kIndexNodeDataImpl,					kIndexPanelPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelDeleteBtnObserverImpl,		kIndexPanelPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelGenerateBtnObserverImpl,	kIndexPanelPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelUpdateBtnObserverImpl,		kIndexPanelPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kDeleteButtonDDTargetImpl,				kIndexPanelPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelMenuComponentImpl,			kIndexPanelPrefix + 8)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelObserverImpl,				kIndexPanelPrefix + 9)
DECLARE_PMID(kImplementationIDSpace, kIndexNodeDDSourceImpl,				kIndexPanelPrefix + 10)
DECLARE_PMID(kImplementationIDSpace, kIndexKeyboardShortcutsImpl,			kIndexPanelPrefix + 11)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelPromoteBtnObserverImpl,		kIndexPanelPrefix + 12)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelDemoteBtnObserverImpl,		kIndexPanelPrefix + 13)
DECLARE_PMID(kImplementationIDSpace, kReferencedEditBoxDDTargetImpl,		kIndexPanelPrefix + 14)
DECLARE_PMID(kImplementationIDSpace, kIndexTreeViewAdapterImpl,				kIndexPanelPrefix + 15)
DECLARE_PMID(kImplementationIDSpace, kIndexTreeViewWidgetMgrImpl,			kIndexPanelPrefix + 16)
DECLARE_PMID(kImplementationIDSpace, kUseOfStyleObserverImpl,				kIndexPanelPrefix + 17)
DECLARE_PMID(kImplementationIDSpace, kIndexTreeControlViewImpl,				kIndexPanelPrefix + 18)
DECLARE_PMID(kImplementationIDSpace, kIndexNodeControlViewImpl,				kIndexPanelPrefix + 19)
DECLARE_PMID(kImplementationIDSpace, kPageRangeComboObserverImpl,			kIndexPanelPrefix + 20)
DECLARE_PMID(kImplementationIDSpace, kIndexOptionsDlgControllerImpl,		kIndexPanelPrefix + 21)
DECLARE_PMID(kImplementationIDSpace, kIndexTreeObserverImpl,				kIndexPanelPrefix + 22)
DECLARE_PMID(kImplementationIDSpace, kTreeStaticTextControlViewImpl,		kIndexPanelPrefix + 23)
DECLARE_PMID(kImplementationIDSpace, kIndexOptionsObserverImpl,				kIndexPanelPrefix + 24)
DECLARE_PMID(kImplementationIDSpace, kGenerateIndexDlgControllerImpl,		kIndexPanelPrefix + 25)
DECLARE_PMID(kImplementationIDSpace, kIndexDEHandlerImpl,					kIndexPanelPrefix + 26)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelTestMenuImpl,				kIndexPanelPrefix + 27)
DECLARE_PMID(kImplementationIDSpace, kOptionsStringsEditEHImpl,				kIndexPanelPrefix + 28)
DECLARE_PMID(kImplementationIDSpace, kGenerateIndexObserverImpl,			kIndexPanelPrefix + 29)
// gap
DECLARE_PMID(kImplementationIDSpace, kIndexPanelDataImpl,					kIndexPanelPrefix + 31)
DECLARE_PMID(kImplementationIDSpace, kIndexNodeEventHandlerImpl,			kIndexPanelPrefix + 32)
DECLARE_PMID(kImplementationIDSpace, kMetaCharMenuCompImpl,					kIndexPanelPrefix + 33)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelGoToBtnObserverImpl,		kIndexPanelPrefix + 34)
DECLARE_PMID(kImplementationIDSpace, kNewButtonDDTargetImpl,				kIndexPanelPrefix + 35)
DECLARE_PMID(kImplementationIDSpace, kCapitalizeDlgControllerImpl,			kIndexPanelPrefix + 36)
DECLARE_PMID(kImplementationIDSpace, kOptionsStringsEditObserverImpl,		kIndexPanelPrefix + 37)
DECLARE_PMID(kImplementationIDSpace, kParaPageNbObserverImpl,				kIndexPanelPrefix + 38)
DECLARE_PMID(kImplementationIDSpace, kPNumberStyleObserverImpl,				kIndexPanelPrefix + 39)
DECLARE_PMID(kImplementationIDSpace, kPNumberStyleCBObserverImpl,			kIndexPanelPrefix + 40)
DECLARE_PMID(kImplementationIDSpace, kCustomXRefObserverImpl,				kIndexPanelPrefix + 41)
DECLARE_PMID(kImplementationIDSpace, kReferencedEditBoxObserverImpl,		kIndexPanelPrefix + 42)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelBookCheckBoxTipImpl,		kIndexPanelPrefix + 43)
DECLARE_PMID(kImplementationIDSpace, kMarkAllButtonObserverImpl,			kIndexPanelPrefix + 44)
DECLARE_PMID(kImplementationIDSpace, kIndexNodeExpanderObserverImpl,		kIndexPanelPrefix + 45)
DECLARE_PMID(kImplementationIDSpace, kIndexPanelGoToBtnTipImpl,				kIndexPanelPrefix + 46)
DECLARE_PMID(kImplementationIDSpace, kIndexFindEditBoxEHImpl,				kIndexPanelPrefix + 47)
DECLARE_PMID(kImplementationIDSpace, kIndexOptionsTreeViewTipImpl,			kIndexPanelPrefix + 48)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionsDialogControllerImpl, kIndexPanelPrefix + 49)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionsInlineDDControllerImpl,	kIndexPanelPrefix + 50)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionsTreeViewWidgetAdapterImpl,kIndexPanelPrefix + 51)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionsTreeViewWidgetMgrImpl,	kIndexPanelPrefix + 52)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionsMoveUpButtonImpl,			kIndexPanelPrefix + 53)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionsListElementObserverImpl,	kIndexPanelPrefix + 54)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionsMoveDownButtonImpl,		kIndexPanelPrefix + 55)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionTreeViewObserverImpl,		kIndexPanelPrefix + 56)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionZOrderDDSourceImpl,		kIndexPanelPrefix + 57)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionZOrderDDTargetImpl,		kIndexPanelPrefix + 58)
DECLARE_PMID(kImplementationIDSpace, kIndexSortOptionZOrderDEHandlerImpl,		kIndexPanelPrefix + 59)
//gap
DECLARE_PMID(kImplementationIDSpace, kEditChineseButtonObserverImpl,			kIndexPanelPrefix + 61)
DECLARE_PMID(kImplementationIDSpace, kEditPinyinDialogControllerImpl,			kIndexPanelPrefix + 62)
DECLARE_PMID(kImplementationIDSpace, kEditStrokeDialogControllerImpl,			kIndexPanelPrefix + 63)
DECLARE_PMID(kImplementationIDSpace, kIndexChineseEntryDataImpl,				kIndexPanelPrefix + 64)
DECLARE_PMID(kImplementationIDSpace, kIndexUnihanManagerImpl,					kIndexPanelPrefix + 65)
DECLARE_PMID(kImplementationIDSpace, kEditStrokeCountObserverImpl,				kIndexPanelPrefix + 66)
DECLARE_PMID(kImplementationIDSpace, kEditPinyinToneObserverImpl,				kIndexPanelPrefix + 67)
DECLARE_PMID(kImplementationIDSpace, kEditTopicTextObserverImpl,				kIndexPanelPrefix + 68)
DECLARE_PMID(kImplementationIDSpace, kEditTopicTextEHImpl,						kIndexPanelPrefix + 69)


// <Action ID>
DECLARE_PMID(kActionIDSpace, kIndexPanelActionID,							kIndexPanelPrefix + 1)
DECLARE_PMID(kActionIDSpace, kNewTopicActionID,								kIndexPanelPrefix + 2)
DECLARE_PMID(kActionIDSpace, kDeleteTopicActionID,							kIndexPanelPrefix + 3)
DECLARE_PMID(kActionIDSpace, kGenerateIndexActionID,						kIndexPanelPrefix + 4)
DECLARE_PMID(kActionIDSpace, kUpdatePreviewActionID,						kIndexPanelPrefix + 5)
DECLARE_PMID(kActionIDSpace, kImportTopicActionID,							kIndexPanelPrefix + 6)
DECLARE_PMID(kActionIDSpace, kRemoveUnusedActionID,							kIndexPanelPrefix + 7)
DECLARE_PMID(kActionIDSpace, kCapitalizeActionID,							kIndexPanelPrefix + 8)
DECLARE_PMID(kActionIDSpace, kIndexSep1ActionID,							kIndexPanelPrefix + 9)
DECLARE_PMID(kActionIDSpace, kIndexSep2ActionID,							kIndexPanelPrefix + 10)
DECLARE_PMID(kActionIDSpace, kIndexSep3ActionID,							kIndexPanelPrefix + 11)
DECLARE_PMID(kActionIDSpace, kGoToMarkerActionID,							kIndexPanelPrefix + 12)
DECLARE_PMID(kActionIDSpace, kIndexOptionsActionID,							kIndexPanelPrefix + 16)
DECLARE_PMID(kActionIDSpace, kIndexSep4ActionID,							kIndexPanelPrefix + 17)
DECLARE_PMID(kActionIDSpace, kCreateNewDefaultPRefActionID,					kIndexPanelPrefix + 18)
DECLARE_PMID(kActionIDSpace, kCreateNewDefaultPRefReversedActionID,			kIndexPanelPrefix + 19)
DECLARE_PMID(kActionIDSpace, kDuplicateTopicActionID,						kIndexPanelPrefix + 20)
DECLARE_PMID(kActionIDSpace, kFindIndexActionID,							kIndexPanelPrefix + 21)
DECLARE_PMID(kActionIDSpace, kIndexSep5ActionID,							kIndexPanelPrefix + 22)

DECLARE_PMID(kActionIDSpace, kIdxBulletActionID,							kIndexPanelPrefix + 23)
DECLARE_PMID(kActionIDSpace, kIdxCarriageReturnActionID,					kIndexPanelPrefix + 24)
DECLARE_PMID(kActionIDSpace, kIdxNewLineActionID,							kIndexPanelPrefix + 25)
//DECLARE_PMID(kActionIDSpace, kIdxParaActionID,								kIndexPanelPrefix + 26)
//DECLARE_PMID(kActionIDSpace, kIdxRegisterActionID,							kIndexPanelPrefix + 27)
//DECLARE_PMID(kActionIDSpace, kIdxSectionActionID,							kIndexPanelPrefix + 28)
DECLARE_PMID(kActionIDSpace, kIdxTabActionID,								kIndexPanelPrefix + 29)
DECLARE_PMID(kActionIDSpace, kIdxPopupSep2ActionID,							kIndexPanelPrefix + 30)
DECLARE_PMID(kActionIDSpace, kIdxEmDashActionID,							kIndexPanelPrefix + 31)
DECLARE_PMID(kActionIDSpace, kIdxMSpaceActionID,							kIndexPanelPrefix + 32)
DECLARE_PMID(kActionIDSpace, kIdxEnDashActionID,							kIndexPanelPrefix + 33)
DECLARE_PMID(kActionIDSpace, kIdxNSpaceActionID,							kIndexPanelPrefix + 34)
DECLARE_PMID(kActionIDSpace, kIdxFlushSpaceActionID,						kIndexPanelPrefix + 35)
DECLARE_PMID(kActionIDSpace, kIdxHairSpaceActionID,							kIndexPanelPrefix + 36)
DECLARE_PMID(kActionIDSpace, kIdxNonBreakSpaceActionID,						kIndexPanelPrefix + 37)
DECLARE_PMID(kActionIDSpace, kIdxThinSpaceActionID,							kIndexPanelPrefix + 38)
//DECLARE_PMID(kActionIDSpace, kIdxWhiteSpaceActionID,						kIndexPanelPrefix + 39)
DECLARE_PMID(kActionIDSpace, kIdxPopupSep3ActionID,							kIndexPanelPrefix + 40)
DECLARE_PMID(kActionIDSpace, kIdxDiscretHyphenActionID,						kIndexPanelPrefix + 41)
DECLARE_PMID(kActionIDSpace, kIdxNonBreakHyphenActionID,					kIndexPanelPrefix + 42)

DECLARE_PMID(kActionIDSpace, kIdxJapCommaActionID,							kIndexPanelPrefix + 43)
DECLARE_PMID(kActionIDSpace, kIdx2DotsLeaderActionID,						kIndexPanelPrefix + 44)
DECLARE_PMID(kActionIDSpace, kIdx3DotsLeaderActionID,						kIndexPanelPrefix + 45)
DECLARE_PMID(kActionIDSpace, kIdxWavyDashActionID,							kIndexPanelPrefix + 46)
DECLARE_PMID(kActionIDSpace, kIdxArrowActionID,								kIndexPanelPrefix + 47)
DECLARE_PMID(kActionIDSpace, kIdxCommaActionID,								kIndexPanelPrefix + 48)
DECLARE_PMID(kActionIDSpace, kIdxSpaceActionID,								kIndexPanelPrefix + 49)
//DECLARE_PMID(kActionIDSpace, kIdxDoubleByteSpaceActionID,					kIndexPanelPrefix + 50)
DECLARE_PMID(kActionIDSpace, kIdx1DotsLeaderActionID,						kIndexPanelPrefix + 51)

DECLARE_PMID(kActionIDSpace, kIdxPopupSep4ActionID,							kIndexPanelPrefix + 52)
DECLARE_PMID(kActionIDSpace, kIdxPopupSep5ActionID,							kIndexPanelPrefix + 53)
DECLARE_PMID(kActionIDSpace, kIdxPopupSep6ActionID,							kIndexPanelPrefix + 54)
DECLARE_PMID(kActionIDSpace, kIdxMaqafActionID,								kIndexPanelPrefix + 55)
DECLARE_PMID(kActionIDSpace, kIdxKashidaActionID,							kIndexPanelPrefix + 56)

DECLARE_PMID(kActionIDSpace, kShowHideUnrefActionID,						kIndexPanelPrefix + 60)
// gap
DECLARE_PMID(kActionIDSpace, kCreateNewDefaultTopicActionID,				kIndexPanelPrefix + 62)
DECLARE_PMID(kActionIDSpace, kHeaderSetActionID,							kIndexPanelPrefix + 63)
DECLARE_PMID(kActionIDSpace, kIdxNextFormatActionID,						kIndexPanelPrefix + 64)
DECLARE_PMID(kActionIDSpace, kIdxNonBreakFixedSpaceActionID,				kIndexPanelPrefix + 65)
DECLARE_PMID(kActionIDSpace, kIdxSixthSpaceActionID,						kIndexPanelPrefix + 66)
DECLARE_PMID(kActionIDSpace, kIdxQuarterSpaceActionID,						kIndexPanelPrefix + 67)
DECLARE_PMID(kActionIDSpace, kIdxThirdSpaceActionID,						kIndexPanelPrefix + 68)
DECLARE_PMID(kActionIDSpace, kIdxFigureSpaceActionID,						kIndexPanelPrefix + 69)
DECLARE_PMID(kActionIDSpace, kIdxPunctuationSpaceActionID,					kIndexPanelPrefix + 70)
DECLARE_PMID(kActionIDSpace, kIdxIdeographicSpaceActionID,					kIndexPanelPrefix + 71)



// <Widget ID>
// Widget IDs
DECLARE_PMID(kWidgetIDSpace, kIndexPanelWidgetID,							kIndexPanelPrefix + 1)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelControlStripWidgetID,				kIndexPanelPrefix + 2)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelUpdateButtonWidgetID,				kIndexPanelPrefix + 3)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelGenerateButtonWidgetID,				kIndexPanelPrefix + 4)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelNewButtonWidgetID,					kIndexPanelPrefix + 5)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelDeleteButtonWidgetID,				kIndexPanelPrefix + 6)
DECLARE_PMID(kWidgetIDSpace, kIndexTreeWidgetID,							kIndexPanelPrefix + 7)
DECLARE_PMID(kWidgetIDSpace, kIndexOptionsPanelWidgetID,					kIndexPanelPrefix + 8)
DECLARE_PMID(kWidgetIDSpace, kTopicTreeNodeWidgetID,						kIndexPanelPrefix + 9)
DECLARE_PMID(kWidgetIDSpace, kEntryTreeNodeWidgetID,						kIndexPanelPrefix + 10)
DECLARE_PMID(kWidgetIDSpace, kIndexFormatDropDownWidgetID,					kIndexPanelPrefix + 11)
DECLARE_PMID(kWidgetIDSpace, kFirstTopicEditBoxWidgetID,					kIndexPanelPrefix + 12)
DECLARE_PMID(kWidgetIDSpace, kSecondTopicEditBoxWidgetID,					kIndexPanelPrefix + 13)
DECLARE_PMID(kWidgetIDSpace, kThirdTopicEditBoxWidgetID,					kIndexPanelPrefix + 14)
DECLARE_PMID(kWidgetIDSpace, kFourthTopicEditBoxWidgetID,					kIndexPanelPrefix + 15)
DECLARE_PMID(kWidgetIDSpace, kFirstSortEditBoxWidgetID,						kIndexPanelPrefix + 16)
DECLARE_PMID(kWidgetIDSpace, kSecondSortEditBoxWidgetID,					kIndexPanelPrefix + 17)
DECLARE_PMID(kWidgetIDSpace, kThirdSortEditBoxWidgetID,						kIndexPanelPrefix + 18)
DECLARE_PMID(kWidgetIDSpace, kFourthSortEditBoxWidgetID,					kIndexPanelPrefix + 19)
DECLARE_PMID(kWidgetIDSpace, kTopicLabelWidgetID,							kIndexPanelPrefix + 20)
DECLARE_PMID(kWidgetIDSpace, kSortLabelWidgetID,							kIndexPanelPrefix + 21)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelPromoteButtonWidgetID,				kIndexPanelPrefix + 22)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelDemoteButtonWidgetID,				kIndexPanelPrefix + 23)
DECLARE_PMID(kWidgetIDSpace, kTopicEditsPanelWidgetID,						kIndexPanelPrefix + 24)
DECLARE_PMID(kWidgetIDSpace, kSeperatorWidgetID,							kIndexPanelPrefix + 25)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelModeGroupWidgetID,					kIndexPanelPrefix + 26)
DECLARE_PMID(kWidgetIDSpace, kAddAllButtonWidgetID,							kIndexPanelPrefix + 27)
DECLARE_PMID(kWidgetIDSpace, kCapitalizePanelWidgetID,						kIndexPanelPrefix + 28)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelPRefGroupWidgetID,					kIndexPanelPrefix + 29)
DECLARE_PMID(kWidgetIDSpace, kIndexNodeDisplayStringWidgetID,				kIndexPanelPrefix + 30)
DECLARE_PMID(kWidgetIDSpace, kCapitalizeGroupWidgetID,						kIndexPanelPrefix + 31)
DECLARE_PMID(kWidgetIDSpace, kIndexNodePageRangeStringWidgetID,				kIndexPanelPrefix + 32)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelGoToButtonWidgetID,					kIndexPanelPrefix + 33)
DECLARE_PMID(kWidgetIDSpace, kFindLabelWidgetID,							kIndexPanelPrefix + 34)
DECLARE_PMID(kWidgetIDSpace, kIDXFindEditBoxWidgetID,						kIndexPanelPrefix + 35)
DECLARE_PMID(kWidgetIDSpace, kCapSelectedRadioWidgetID,						kIndexPanelPrefix + 36)
DECLARE_PMID(kWidgetIDSpace, kIndexTreePanelWidgetID,						kIndexPanelPrefix + 37)
DECLARE_PMID(kWidgetIDSpace, kBookCheckBoxWidgetID,							kIndexPanelPrefix + 38)
DECLARE_PMID(kWidgetIDSpace, kPNumberStyleWidgetID,							kIndexPanelPrefix + 39)
DECLARE_PMID(kWidgetIDSpace, kPNumberStyleDDListWidgetID,					kIndexPanelPrefix + 40)
DECLARE_PMID(kWidgetIDSpace, kPageRangeDDListWidgetID,						kIndexPanelPrefix + 41)
DECLARE_PMID(kWidgetIDSpace, kUseOfStyleDDListWidgetID,						kIndexPanelPrefix + 42)
DECLARE_PMID(kWidgetIDSpace, kParaPageNbEditBoxWidgetID,					kIndexPanelPrefix + 43)
DECLARE_PMID(kWidgetIDSpace, kCustomLabelWidgetID,							kIndexPanelPrefix + 44)
DECLARE_PMID(kWidgetIDSpace, kReferencedEditBoxWidgetID,					kIndexPanelPrefix + 45)
DECLARE_PMID(kWidgetIDSpace, kCapLevel1RadioWidgetID,						kIndexPanelPrefix + 46)
DECLARE_PMID(kWidgetIDSpace, kCustomXRefListWidgetID,						kIndexPanelPrefix + 47)
DECLARE_PMID(kWidgetIDSpace, kTopicRadioWidgetID,							kIndexPanelPrefix + 48)
DECLARE_PMID(kWidgetIDSpace, kTopicModeWidgetID,							kIndexPanelPrefix + 49)
DECLARE_PMID(kWidgetIDSpace, kCapAllRadioWidgetID,							kIndexPanelPrefix + 50)
DECLARE_PMID(kWidgetIDSpace, kReferencedLabelWidgetID,						kIndexPanelPrefix + 51)
DECLARE_PMID(kWidgetIDSpace, kNumberLabelWidgetID,							kIndexPanelPrefix + 52)
DECLARE_PMID(kWidgetIDSpace, kPageRefStyleLabelWidgetID,					kIndexPanelPrefix + 53)
DECLARE_PMID(kWidgetIDSpace, kRefTypeLabelWidgetID,							kIndexPanelPrefix + 54)
DECLARE_PMID(kWidgetIDSpace, kEntryRadioWidgetID,							kIndexPanelPrefix + 55)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelXRefGroupWidgetID,					kIndexPanelPrefix + 56)
DECLARE_PMID(kWidgetIDSpace, kAddButtonWidgetID,							kIndexPanelPrefix + 57)
DECLARE_PMID(kWidgetIDSpace, kDialogTreeNodeWidgetID,						kIndexPanelPrefix + 58)
DECLARE_PMID(kWidgetIDSpace, kDialogTreePanelWidgetID,						kIndexPanelPrefix + 59)
DECLARE_PMID(kWidgetIDSpace, kDialogTreeWidgetID,							kIndexPanelPrefix + 60)
DECLARE_PMID(kWidgetIDSpace, kReplaceIndexWidgetID,							kIndexPanelPrefix + 61)
DECLARE_PMID(kWidgetIDSpace, kIncludeBookWidgetID,							kIndexPanelPrefix + 62)
DECLARE_PMID(kWidgetIDSpace, kTitleStyleStaticWidgetID,						kIndexPanelPrefix + 63)
DECLARE_PMID(kWidgetIDSpace, kHiddenLayersWidgetID,							kIndexPanelPrefix + 64)
DECLARE_PMID(kWidgetIDSpace, kGenerateIndexPanelWidgetID,					kIndexPanelPrefix + 65)
DECLARE_PMID(kWidgetIDSpace, kTitleStyleDropDownWidgetID,					kIndexPanelPrefix + 66)
DECLARE_PMID(kWidgetIDSpace, kTitleStaticWidgetID,							kIndexPanelPrefix + 67)
DECLARE_PMID(kWidgetIDSpace, kTitleEditBoxWidgetID,							kIndexPanelPrefix + 68)
DECLARE_PMID(kWidgetIDSpace, kShowOptionsWidgetID,							kIndexPanelPrefix + 69)
DECLARE_PMID(kWidgetIDSpace, kBookNameStaticWidgetID,						kIndexPanelPrefix + 70)
DECLARE_PMID(kWidgetIDSpace, kFollowingTopicTextWidgetID,					kIndexPanelPrefix + 71)
DECLARE_PMID(kWidgetIDSpace, kBetweenEntriesTextWidgetID,					kIndexPanelPrefix + 72)
DECLARE_PMID(kWidgetIDSpace, kPageRangeTextWidgetID,						kIndexPanelPrefix + 73)
DECLARE_PMID(kWidgetIDSpace, kBetweenPageNumTextWidgetID,					kIndexPanelPrefix + 74)
DECLARE_PMID(kWidgetIDSpace, kBeforeXRefTextWidgetID,						kIndexPanelPrefix + 75)
DECLARE_PMID(kWidgetIDSpace, kEntryEndTextWidgetID,							kIndexPanelPrefix + 76)
DECLARE_PMID(kWidgetIDSpace, kSeparatorsTextWidgetID,						kIndexPanelPrefix + 77)
DECLARE_PMID(kWidgetIDSpace, kIncludeHeadersCheckBoxWidgetID,				kIndexPanelPrefix + 78)
DECLARE_PMID(kWidgetIDSpace, kIncludeEmptyCheckBoxWidgetID,					kIndexPanelPrefix + 79)
DECLARE_PMID(kWidgetIDSpace, kFormatGroupWidgetID,							kIndexPanelPrefix + 80)
DECLARE_PMID(kWidgetIDSpace, kEntryIconWidgetID,							kIndexPanelPrefix + 81)
DECLARE_PMID(kWidgetIDSpace, kFollowingTopicEditBoxWidgetID,				kIndexPanelPrefix + 82)
DECLARE_PMID(kWidgetIDSpace, kFollowingTopicGroupWidgetID,					kIndexPanelPrefix + 83)
DECLARE_PMID(kWidgetIDSpace, kFollowingTopicPopupWidgetID,					kIndexPanelPrefix + 84)
DECLARE_PMID(kWidgetIDSpace, kBetweenEntriesEditBoxWidgetID,				kIndexPanelPrefix + 85)
DECLARE_PMID(kWidgetIDSpace, kBetweenEntriesGroupWidgetID,					kIndexPanelPrefix + 86)
DECLARE_PMID(kWidgetIDSpace, kBetweenEntriesPopupWidgetID,					kIndexPanelPrefix + 87)
DECLARE_PMID(kWidgetIDSpace, kPageRangeEditBoxWidgetID,						kIndexPanelPrefix + 88)
DECLARE_PMID(kWidgetIDSpace, kPageRangeGroupWidgetID,						kIndexPanelPrefix + 89)
DECLARE_PMID(kWidgetIDSpace, kPageRangePopupWidgetID,						kIndexPanelPrefix + 90)
DECLARE_PMID(kWidgetIDSpace, kBetweenPageNumEditBoxWidgetID,				kIndexPanelPrefix + 91)
DECLARE_PMID(kWidgetIDSpace, kBetweenPageNumGroupWidgetID,					kIndexPanelPrefix + 92)
DECLARE_PMID(kWidgetIDSpace, kBetweenPageNumPopupWidgetID,					kIndexPanelPrefix + 93)
DECLARE_PMID(kWidgetIDSpace, kBeforeXRefEditBoxWidgetID,					kIndexPanelPrefix + 94)
DECLARE_PMID(kWidgetIDSpace, kBeforeXRefGroupWidgetID,						kIndexPanelPrefix + 95)
DECLARE_PMID(kWidgetIDSpace, kBeforeXRefPopupWidgetID,						kIndexPanelPrefix + 96)
DECLARE_PMID(kWidgetIDSpace, kEntryEndEditBoxWidgetID,						kIndexPanelPrefix + 97)
DECLARE_PMID(kWidgetIDSpace, kEntryEndGroupWidgetID,						kIndexPanelPrefix + 98)
DECLARE_PMID(kWidgetIDSpace, kEntryEndPopupWidgetID,						kIndexPanelPrefix + 99)
DECLARE_PMID(kWidgetIDSpace, kLevelGroupWidgetID,							kIndexPanelPrefix + 100)
DECLARE_PMID(kWidgetIDSpace, kLevelTextWidgetID,							kIndexPanelPrefix + 101)
DECLARE_PMID(kWidgetIDSpace, kLevel1TextWidgetID,							kIndexPanelPrefix + 102)
DECLARE_PMID(kWidgetIDSpace, kLevel1DropDownWidgetID,						kIndexPanelPrefix + 103)
DECLARE_PMID(kWidgetIDSpace, kLevel2TextWidgetID,							kIndexPanelPrefix + 104)
DECLARE_PMID(kWidgetIDSpace, kLevel2DropDownWidgetID,						kIndexPanelPrefix + 105)
DECLARE_PMID(kWidgetIDSpace, kLevel3TextWidgetID,							kIndexPanelPrefix + 106)
DECLARE_PMID(kWidgetIDSpace, kLevel3DropDownWidgetID,						kIndexPanelPrefix + 107)
DECLARE_PMID(kWidgetIDSpace, kLevel4TextWidgetID,							kIndexPanelPrefix + 108)
DECLARE_PMID(kWidgetIDSpace, kLevel4DropDownWidgetID,						kIndexPanelPrefix + 109)
DECLARE_PMID(kWidgetIDSpace, kIndexGroupWidgetID,							kIndexPanelPrefix + 110)
DECLARE_PMID(kWidgetIDSpace, kIndexStyleTextWidgetID,						kIndexPanelPrefix + 111)
DECLARE_PMID(kWidgetIDSpace, kSectionHeadingTextWidgetID,					kIndexPanelPrefix + 112)
DECLARE_PMID(kWidgetIDSpace, kSectionHeadingDropDownWidgetID,				kIndexPanelPrefix + 113)
DECLARE_PMID(kWidgetIDSpace, kCrossRefTextWidgetID,							kIndexPanelPrefix + 114)
DECLARE_PMID(kWidgetIDSpace, kCrossRefDropDownWidgetID,						kIndexPanelPrefix + 115)
DECLARE_PMID(kWidgetIDSpace, kPageNumberTextWidgetID,						kIndexPanelPrefix + 116)
DECLARE_PMID(kWidgetIDSpace, kPageNumberDropDownWidgetID,					kIndexPanelPrefix + 117)
DECLARE_PMID(kWidgetIDSpace, kCrossRefTopicTextWidgetID,					kIndexPanelPrefix + 118)
DECLARE_PMID(kWidgetIDSpace, kCrossRefTopicDropDownWidgetID,				kIndexPanelPrefix + 119)
DECLARE_PMID(kWidgetIDSpace, kBookNameLabelWidgetID,						kIndexPanelPrefix + 120)
DECLARE_PMID(kWidgetIDSpace, kFormatGroupPopupWidgetID,						kIndexPanelPrefix + 121)
//DECLARE_PMID(kWidgetIDSpace, kIndexFindNextButtonWidgetID,					kIndexPanelPrefix + 122)
DECLARE_PMID(kWidgetIDSpace, kCapSelectedAndSubRadioWidgetID,				kIndexPanelPrefix + 123)
DECLARE_PMID(kWidgetIDSpace, kFindGroupWidgetID,							kIndexPanelPrefix + 124)
DECLARE_PMID(kWidgetIDSpace, kIndexPanelParentGroupWidgetID,				kIndexPanelPrefix + 125)
// gap
DECLARE_PMID(kWidgetIDSpace, kFrameTypeStaticWidgetID,						kIndexPanelPrefix + 130)
DECLARE_PMID(kWidgetIDSpace, kFrameTypeDropDownWidgetID,					kIndexPanelPrefix + 131)
DECLARE_PMID(kWidgetIDSpace, klevelLabelWidgetID,							kIndexPanelPrefix + 132)
DECLARE_PMID(kWidgetIDSpace, kIndexFindDownButtonWidgetID,					kIndexPanelPrefix + 133)
DECLARE_PMID(kWidgetIDSpace, kIndexFindTopButtonWidgetID,					kIndexPanelPrefix + 134)
DECLARE_PMID(kWidgetIDSpace, kReplaceIndexCompleteAlertWidgetID,			kIndexPanelPrefix + 135)
DECLARE_PMID(kWidgetIDSpace, kFormatOuterGroupWidgetID,						kIndexPanelPrefix + 136)
DECLARE_PMID(kWidgetIDSpace, kBookNameLabelStaticWidgetID,					kIndexPanelPrefix + 137)
DECLARE_PMID(kWidgetIDSpace, kCustomBeforeAfterLabelWidgetID,				kIndexPanelPrefix + 138)
DECLARE_PMID(kWidgetIDSpace, kCustomBeforeAfterDropDownWidgetID,			kIndexPanelPrefix + 139)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsDialogGroupPanelTextWidgetID,			kIndexPanelPrefix + 140)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsUpButtonWidgetID,						kIndexPanelPrefix + 141)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsDownButtonWidgetID,					kIndexPanelPrefix + 142)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementGenericPanel1WidgetID,		kIndexPanelPrefix + 143)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementGenericPanel2WidgetID,		kIndexPanelPrefix + 144)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementGenericPanel3WidgetID,		kIndexPanelPrefix + 145)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementGenericPanel4WidgetID,		kIndexPanelPrefix + 146)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementGenericPanel5WidgetID,		kIndexPanelPrefix + 147)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementGenericPanel6WidgetID,		kIndexPanelPrefix + 148)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementCheckBoxWidgetID,			kIndexPanelPrefix + 149)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementPriorityWidgetID,			kIndexPanelPrefix + 150)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementScriptWidgetID,			kIndexPanelPrefix + 151)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementInLineDropDownWidgetID,	kIndexPanelPrefix + 152)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsDialogPanelWidgetID,					kIndexPanelPrefix + 153)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsDialogPanel1WidgetID,					kIndexPanelPrefix + 154)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsDialogPanel2WidgetID,					kIndexPanelPrefix + 155)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsDialogPanel3WidgetID,					kIndexPanelPrefix + 156)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsDialogPanel4WidgetID,					kIndexPanelPrefix + 157)
DECLARE_PMID(kWidgetIDSpace, kLeftIndexSortOptionsSplitterWidgetID,					kIndexPanelPrefix + 158)
DECLARE_PMID(kWidgetIDSpace, kMiddleIndexSortOptionsSplitterWidgetID,				kIndexPanelPrefix + 159)
DECLARE_PMID(kWidgetIDSpace, kRightIndexSortOptionsSplitterWidgetID,				kIndexPanelPrefix + 160)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsIncludeCheckBoxPanelWidgetID,			kIndexPanelPrefix + 161)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsIncludeCheckBoxTitleWidgetID,			kIndexPanelPrefix + 162)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsPriorityPanelWidgetID,				kIndexPanelPrefix + 163)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsPriorityTitleWidgetID,				kIndexPanelPrefix + 164)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsScriptPanelWidgetID,					kIndexPanelPrefix + 165)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsScriptTitleWidgetID,					kIndexPanelPrefix + 166)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsHeaderTypePanelWidgetID,				kIndexPanelPrefix + 167)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsHeaderTypeTitleWidgetID,				kIndexPanelPrefix + 168)
// DECLARE_PMID(kWidgetIDSpace, kMyFancyNewWidgetID,		kIndexPanelPrefix + 169)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsListElementWidgetID,					kIndexPanelPrefix + 170)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsDialogWidgetID,						kIndexPanelPrefix + 171)
DECLARE_PMID(kWidgetIDSpace, kIndexSortOptionsTreeViewWidgetID,						kIndexPanelPrefix + 172)

DECLARE_PMID(kWidgetIDSpace, kEditChineseButton1WidgetID,						kIndexPanelPrefix + 173)
DECLARE_PMID(kWidgetIDSpace, kEditChineseButton2WidgetID,						kIndexPanelPrefix + 174)
DECLARE_PMID(kWidgetIDSpace, kEditChineseButton3WidgetID,						kIndexPanelPrefix + 175)
DECLARE_PMID(kWidgetIDSpace, kEditChineseButton4WidgetID,						kIndexPanelPrefix + 176)

DECLARE_PMID(kWidgetIDSpace, kEditPinyinDialogID,								kIndexPanelPrefix + 177)
DECLARE_PMID(kWidgetIDSpace, kEditStrokeDialogID,								kIndexPanelPrefix + 178)
DECLARE_PMID(kWidgetIDSpace, kEditChineseTextWidgetID,							kIndexPanelPrefix + 179)
DECLARE_PMID(kWidgetIDSpace, kEditChineseTopicLevelWidgetID,					kIndexPanelPrefix + 180)

DECLARE_PMID(kWidgetIDSpace, kEditChineseGroupWidgetID,							kIndexPanelPrefix + 181)
DECLARE_PMID(kWidgetIDSpace, kEditChineseButtonGroupWidgetID,					kIndexPanelPrefix + 182)
DECLARE_PMID(kWidgetIDSpace, kEditChineseTextEditGroupWidgetID,					kIndexPanelPrefix + 183)

DECLARE_PMID(kWidgetIDSpace, kFirstTopicEditWidgetID,							kIndexPanelPrefix + 184)
DECLARE_PMID(kWidgetIDSpace, kFirstPinyinSortEditWidgetID,						kIndexPanelPrefix + 185)
DECLARE_PMID(kWidgetIDSpace, kFirstStrokeEditWidgetID,							kIndexPanelPrefix + 186)
DECLARE_PMID(kWidgetIDSpace, kFirstShape1EditWidgetID,							kIndexPanelPrefix + 187)
DECLARE_PMID(kWidgetIDSpace, kFirstShape2EditWidgetID,							kIndexPanelPrefix + 188)

DECLARE_PMID(kWidgetIDSpace, kSecondPinyinSortEditWidgetID,						kIndexPanelPrefix + 189)
DECLARE_PMID(kWidgetIDSpace, kSecondStrokeEditWidgetID,							kIndexPanelPrefix + 190)
DECLARE_PMID(kWidgetIDSpace, kSecondShape1EditWidgetID,							kIndexPanelPrefix + 191)
DECLARE_PMID(kWidgetIDSpace, kSecondShape2EditWidgetID,							kIndexPanelPrefix + 192)

DECLARE_PMID(kWidgetIDSpace, kThirdPinyinSortEditWidgetID,						kIndexPanelPrefix + 193)
DECLARE_PMID(kWidgetIDSpace, kThirdStrokeEditWidgetID,							kIndexPanelPrefix + 194)
DECLARE_PMID(kWidgetIDSpace, kThirdShape1EditWidgetID,							kIndexPanelPrefix + 195)
DECLARE_PMID(kWidgetIDSpace, kThirdShape2EditWidgetID,							kIndexPanelPrefix + 196)

DECLARE_PMID(kWidgetIDSpace, kForthPinyinSortEditWidgetID,						kIndexPanelPrefix + 197)
DECLARE_PMID(kWidgetIDSpace, kForthStrokeEditWidgetID,							kIndexPanelPrefix + 198)
DECLARE_PMID(kWidgetIDSpace, kForthShape1EditWidgetID,							kIndexPanelPrefix + 199)
DECLARE_PMID(kWidgetIDSpace, kForthShape2EditWidgetID,							kIndexPanelPrefix + 200)

DECLARE_PMID(kWidgetIDSpace, kFifthPinyinSortEditWidgetID,						kIndexPanelPrefix + 201)
DECLARE_PMID(kWidgetIDSpace, kFifthStrokeEditWidgetID,							kIndexPanelPrefix + 202)
DECLARE_PMID(kWidgetIDSpace, kFifthShape1EditWidgetID,							kIndexPanelPrefix + 203)
DECLARE_PMID(kWidgetIDSpace, kFifthShape2EditWidgetID,							kIndexPanelPrefix + 204)

////////
////////


// <Interface ID>
// PMIIDs
DECLARE_PMID(kInterfaceIDSpace, IID_IINDEXPANELDATA,						kIndexPanelPrefix + 1)
DECLARE_PMID(kInterfaceIDSpace, IID_IINDEXNODEDATA,							kIndexPanelPrefix + 2)
DECLARE_PMID(kInterfaceIDSpace, IID_IINDEXPANELMSG,							kIndexPanelPrefix + 3)
//DECLARE_PMID(kInterfaceIDSpace, IID_IFORMATINDEXOPTIONS,					kIndexPanelPrefix + 4)

DECLARE_PMID(kInterfaceIDSpace, IID_IINDEXCHINESEENTRYDATA,					kIndexPanelPrefix + 6)
DECLARE_PMID(kInterfaceIDSpace, IID_IINDEXUNIHANMANAGER,					kIndexPanelPrefix + 7)

// <Interface ID>
// Interface ID

// <Service ID>
// Service IDs

// Messages ID
DECLARE_PMID(kMessageIDSpace, kOptionsEditGetsFocus,						kIndexPanelPrefix + 1)
    // sent by OptionsStringsEditEH on OptionsStringsEditEH::GetKeyFocus().
    // received by promote and demote observer.
DECLARE_PMID(kMessageIDSpace, kOptionsEditGivesUpFocus,						kIndexPanelPrefix + 2)
    // sent by OptionsStringsEditEH on OptionsStringsEditEH::GiveUpKeyFocus().
    // received by promote and demote observer.
DECLARE_PMID(kMessageIDSpace, kDisplayStringsChangedMessage,				kIndexPanelPrefix + 3)
DECLARE_PMID(kMessageIDSpace, kPRefTypeChangedMessage,						kIndexPanelPrefix + 4)
DECLARE_PMID(kMessageIDSpace, kNextStyleUIDChangedMessage,					kIndexPanelPrefix + 5)
DECLARE_PMID(kMessageIDSpace, kNumOfParOrPageChangedMessage,				kIndexPanelPrefix + 6)
DECLARE_PMID(kMessageIDSpace, kStyleUIDChangedMessage,						kIndexPanelPrefix + 7)
DECLARE_PMID(kMessageIDSpace, kXRefTypeChangedMessage,						kIndexPanelPrefix + 8)
DECLARE_PMID(kMessageIDSpace, kReferencedTopicEntryChangedMessage,			kIndexPanelPrefix + 9)
DECLARE_PMID(kMessageIDSpace, kCustomTypeStringChangedMessage,				kIndexPanelPrefix + 10)
DECLARE_PMID(kMessageIDSpace, kObjectChangedMessage,						kIndexPanelPrefix + 11)
DECLARE_PMID(kMessageIDSpace, kChangeToPRefModeMessage,						kIndexPanelPrefix + 12)
DECLARE_PMID(kMessageIDSpace, kShowUnusedMessage,							kIndexPanelPrefix + 13)

DECLARE_PMID(kMessageIDSpace, kEditChineseGiveUpFocusMessage,				kIndexPanelPrefix + 14)

#define kIndexSortOptionsListNodeID	kIndexPanelPrefix + 1

#endif // __IndexPanelID__
