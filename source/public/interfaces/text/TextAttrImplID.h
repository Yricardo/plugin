//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/TextAttrImplID.h $
//  
//  Owner: Eric Menninga
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/05/06 23:36:38 $
//  
//  $Revision: #4 $
//  
//  $Change: 911411 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __TextAttrImplID__
#define __TextAttrImplID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"


#define kTextAttrPrefix	 RezLong(0x1B00)
#define kTextAttrPrefix2	 RezLong(0x1Df00)


// <Implementation ID>
// ImplementationIDs (text attrs)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt32x1Impl, kTextAttrPrefix + 0)
DECLARE_PMID(kImplementationIDSpace, kTextAttrAlignFullJustImpl, kTextAttrPrefix + 1)
DECLARE_PMID(kImplementationIDSpace, kTextAttrFontDataImpl, kTextAttrPrefix + 2)
DECLARE_PMID(kImplementationIDSpace, kTextAttrBooleanOnImpl, kTextAttrPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kTextAttrBooleanOffImpl, kTextAttrPrefix + 4)
DECLARE_PMID(kImplementationIDSpace, kTextAttrReferenceImpl, kTextAttrPrefix + 5)
DECLARE_PMID(kImplementationIDSpace, kTextAttrComposerIDImpl, kTextAttrPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt32Impl, kTextAttrPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kTextAttrDataPositionImpl, kTextAttrPrefix + 8)
DECLARE_PMID(kImplementationIDSpace, kTextAttrHyphenModeImpl, kTextAttrPrefix + 9)

DECLARE_PMID(kImplementationIDSpace, kTextAttrTabSettingsImpl, kTextAttrPrefix + 10)
DECLARE_PMID(kImplementationIDSpace, kTextAttrCapitalModeImpl, kTextAttrPrefix + 11)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStringImpl, kTextAttrPrefix + 12)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16Impl, kTextAttrPrefix + 13)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16x12Impl, kTextAttrPrefix + 14)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16x6Impl, kTextAttrPrefix + 15)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16x2Impl, kTextAttrPrefix + 16)
DECLARE_PMID(kImplementationIDSpace, kTextAttrLanguageImpl, kTextAttrPrefix + 17)
DECLARE_PMID(kImplementationIDSpace, kTAClassIDPairKernMethodImpl, kTextAttrPrefix + 18)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRDn1Impl, kTextAttrPrefix + 19)

DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0Impl, kTextAttrPrefix + 20)
DECLARE_PMID(kImplementationIDSpace, kTextAttrConversionProviderImpl, kTextAttrPrefix + 21)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1Impl, kTextAttrPrefix + 22)
DECLARE_PMID(kImplementationIDSpace, kTAOTFFractionReportImpl, kTextAttrPrefix + 23)
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableYMeasureSTULImpl,    kTextAttrPrefix + 24)	// Introduced 2/12/03 bmorsell
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0p5Impl, kTextAttrPrefix + 25)				/* for 50% */
DECLARE_PMID(kImplementationIDSpace, kTAOTFDiscLigReportImpl, kTextAttrPrefix + 26)
DECLARE_PMID(kImplementationIDSpace, kTAOTFTitlingReportImpl, kTextAttrPrefix + 27)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD6Impl, kTextAttrPrefix + 28)
DECLARE_PMID(kImplementationIDSpace, kTAOTFOrdinalReportImpl, kTextAttrPrefix + 29)

DECLARE_PMID(kImplementationIDSpace, kTextAttrPositionModeImpl, kTextAttrPrefix + 30)
DECLARE_PMID(kImplementationIDSpace, kTextAttrUnderlineModeImpl, kTextAttrPrefix + 31)
DECLARE_PMID(kImplementationIDSpace, kTextAttrAlignRagLeftImpl, kTextAttrPrefix + 32)
DECLARE_PMID(kImplementationIDSpace, kTextAttrWideStringImpl, kTextAttrPrefix + 33)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPointImpl, kTextAttrPrefix + 34)
DECLARE_PMID(kImplementationIDSpace, kTextAttrBreakBeforeModeImpl, kTextAttrPrefix + 35)
DECLARE_PMID(kImplementationIDSpace, kTextAttrParaRuleModeImpl, kTextAttrPrefix + 36)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRN_AutoKernImpl, kTextAttrPrefix + 37)
DECLARE_PMID(kImplementationIDSpace, kTextAttrSpecialGlyphImpl, kTextAttrPrefix + 38)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D5I3_25Impl_Obsolete, kTextAttrPrefix + 39)		/* delete ; USED BY CONVERTER */

DECLARE_PMID(kImplementationIDSpace, kTextAttrRD12Ip1_1296Impl, kTextAttrPrefix + 40)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0In5k_5kImpl, kTextAttrPrefix + 41)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD100I0_100Impl, kTextAttrPrefix + 42)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0In85_85Impl, kTextAttrPrefix + 43)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0In180_180Impl, kTextAttrPrefix + 44)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1I0p01_10Impl, kTextAttrPrefix + 45)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0In120_120Impl_Obsolete, kTextAttrPrefix + 46)		/* deleted ; USED BY CONVERTER */
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1I0_1kImpl, kTextAttrPrefix + 47)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD36I0_8640Impl, kTextAttrPrefix + 48)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1p33I0_10Impl, kTextAttrPrefix + 49)

DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0p8I0_10Impl, kTextAttrPrefix + 50)
DECLARE_PMID(kImplementationIDSpace, kTAFontUIDReportImpl, kTextAttrPrefix + 51)
DECLARE_PMID(kImplementationIDSpace, kTAPointSizeReportImpl, kTextAttrPrefix + 52)
DECLARE_PMID(kImplementationIDSpace, kTAColorReportImpl, kTextAttrPrefix + 53)
DECLARE_PMID(kImplementationIDSpace, kTAStrokeColorReportImpl, kTextAttrPrefix + 54)
DECLARE_PMID(kImplementationIDSpace, kTAAutoLeadReportImpl, kTextAttrPrefix + 55)
DECLARE_PMID(kImplementationIDSpace, kTALeadingReportImpl, kTextAttrPrefix + 56)
DECLARE_PMID(kImplementationIDSpace, kTAYGlyphScaleReportImpl, kTextAttrPrefix + 57)
DECLARE_PMID(kImplementationIDSpace, kTAXGlyphScaleReportImpl, kTextAttrPrefix + 58)
DECLARE_PMID(kImplementationIDSpace, kTAIndent1LReportImpl, kTextAttrPrefix + 59)

DECLARE_PMID(kImplementationIDSpace, kTAIndentBRReportImpl, kTextAttrPrefix + 60)
DECLARE_PMID(kImplementationIDSpace, kTAIndentBLReportImpl, kTextAttrPrefix + 61)
DECLARE_PMID(kImplementationIDSpace, kTAAlignmentReportImpl, kTextAttrPrefix + 62)
DECLARE_PMID(kImplementationIDSpace, kTAAlignLastReportImpl_Obsolete, kTextAttrPrefix + 63)
DECLARE_PMID(kImplementationIDSpace, kTAPairKernReport, kTextAttrPrefix + 64)
DECLARE_PMID(kImplementationIDSpace, kTAPageNumTypeReportImpl, kTextAttrPrefix + 65)
DECLARE_PMID(kImplementationIDSpace, kTAAutoQuadReportImpl_Obsolete, kTextAttrPrefix + 66)
DECLARE_PMID(kImplementationIDSpace, kTATrackKernReportImpl, kTextAttrPrefix + 67)
DECLARE_PMID(kImplementationIDSpace, kTALigaturesReportImpl, kTextAttrPrefix + 68)
DECLARE_PMID(kImplementationIDSpace, kTAHyphenWeightReportImpl, kTextAttrPrefix + 69)

DECLARE_PMID(kImplementationIDSpace, kTADropCapReportCImpl, kTextAttrPrefix + 70)
DECLARE_PMID(kImplementationIDSpace, kTADropCapReportLImpl, kTextAttrPrefix + 71)
DECLARE_PMID(kImplementationIDSpace, kTABaselineGridReportImpl_Obsolete, kTextAttrPrefix + 72)		/* converter only */
DECLARE_PMID(kImplementationIDSpace, kTABalancedLinesReportImpl, kTextAttrPrefix + 73)
DECLARE_PMID(kImplementationIDSpace, kTACapitalModeReportImpl, kTextAttrPrefix + 74)
DECLARE_PMID(kImplementationIDSpace, kTAOutlineReportImpl, kTextAttrPrefix + 75)
DECLARE_PMID(kImplementationIDSpace, kTAPairKernMethodReportImpl, kTextAttrPrefix + 76)
DECLARE_PMID(kImplementationIDSpace, kTABLShiftReportImpl, kTextAttrPrefix + 77)
DECLARE_PMID(kImplementationIDSpace, kTAHyphenLadderReportImpl, kTextAttrPrefix + 78)
DECLARE_PMID(kImplementationIDSpace, kTALanguageReportImpl, kTextAttrPrefix + 79)

DECLARE_PMID(kImplementationIDSpace, kTAHyphenZoneReportImpl, kTextAttrPrefix + 80)
DECLARE_PMID(kImplementationIDSpace, kTAFigureStyleReportImpl, kTextAttrPrefix + 81)
DECLARE_PMID(kImplementationIDSpace, kTAHyphenCapitalizedImpl, kTextAttrPrefix + 82)
DECLARE_PMID(kImplementationIDSpace, kTAHyphenShortestWordImpl, kTextAttrPrefix + 83)
DECLARE_PMID(kImplementationIDSpace, kTAHyphenMinAfterImpl, kTextAttrPrefix + 84)
DECLARE_PMID(kImplementationIDSpace, kTAHyphenMinBeforeImpl, kTextAttrPrefix + 85)
DECLARE_PMID(kImplementationIDSpace, kTAHyphenModeReportImpl, kTextAttrPrefix + 86)
DECLARE_PMID(kImplementationIDSpace, kTASpaceAfterReportImpl, kTextAttrPrefix + 87)
DECLARE_PMID(kImplementationIDSpace, kTASpaceBeforeReportImpl, kTextAttrPrefix + 88)
DECLARE_PMID(kImplementationIDSpace, kTATabsReportImpl, kTextAttrPrefix + 89)

DECLARE_PMID(kImplementationIDSpace, kTAUnderlineReportImpl, kTextAttrPrefix + 90)
DECLARE_PMID(kImplementationIDSpace, kTAFontStyleReportImpl, kTextAttrPrefix + 91)
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharacterHangImpl, kTextAttrPrefix + 92)
DECLARE_PMID(kImplementationIDSpace, kTAWordspaceMaxReportImpl, kTextAttrPrefix + 93)
DECLARE_PMID(kImplementationIDSpace, kTAWordspaceMinReportImpl, kTextAttrPrefix + 94)
DECLARE_PMID(kImplementationIDSpace, kTAWordspaceDesReportImpl, kTextAttrPrefix + 95)
DECLARE_PMID(kImplementationIDSpace, kTALetterspaceDesReportImpl, kTextAttrPrefix + 96)
DECLARE_PMID(kImplementationIDSpace, kTALetterspaceMaxReportImpl, kTextAttrPrefix + 97)
DECLARE_PMID(kImplementationIDSpace, kTALetterspaceMinReportImpl, kTextAttrPrefix + 98)
DECLARE_PMID(kImplementationIDSpace, kTAGlyphscaleDesReportImpl, kTextAttrPrefix + 99)

DECLARE_PMID(kImplementationIDSpace, kTAGlyphscaleMaxReportImpl, kTextAttrPrefix + 100)
DECLARE_PMID(kImplementationIDSpace, kTAGlyphscaleMinReportImpl, kTextAttrPrefix + 101)
DECLARE_PMID(kImplementationIDSpace, kTAILGShiftReportImpl, kTextAttrPrefix + 102)
DECLARE_PMID(kImplementationIDSpace, kTABreakBeforeModeReportImpl, kTextAttrPrefix + 103)
DECLARE_PMID(kImplementationIDSpace, kTAKeepTogetherReportImpl, kTextAttrPrefix + 104)
DECLARE_PMID(kImplementationIDSpace, kTAKeepWithNextReportImpl, kTextAttrPrefix + 105)
DECLARE_PMID(kImplementationIDSpace, kTAKeepFirstNLinesReportImpl, kTextAttrPrefix + 106)
DECLARE_PMID(kImplementationIDSpace, kTAKeepLastNLinesReportImpl, kTextAttrPrefix + 107)
DECLARE_PMID(kImplementationIDSpace, kTAPositionReportImpl, kTextAttrPrefix + 108)
DECLARE_PMID(kImplementationIDSpace, kTAStrikethruReportImpl, kTextAttrPrefix + 109)

DECLARE_PMID(kImplementationIDSpace, kTAComposerReportImpl, kTextAttrPrefix + 110)
DECLARE_PMID(kImplementationIDSpace, kTANoBreakReportImpl, kTextAttrPrefix + 111)
DECLARE_PMID(kImplementationIDSpace, kTACharacterHangReportImpl, kTextAttrPrefix + 112)
DECLARE_PMID(kImplementationIDSpace, kTAAlternateReportImpl, kTextAttrPrefix + 113)
DECLARE_PMID(kImplementationIDSpace, kTAKeepLinesReportImpl, kTextAttrPrefix + 114)
DECLARE_PMID(kImplementationIDSpace, kTAStrokeTintReportImpl, kTextAttrPrefix + 115)
DECLARE_PMID(kImplementationIDSpace, kTATintReportImpl, kTextAttrPrefix + 116)
DECLARE_PMID(kImplementationIDSpace, kTAStrokeOverprintReportImpl, kTextAttrPrefix + 117)
DECLARE_PMID(kImplementationIDSpace, kTAOverprintReportImpl, kTextAttrPrefix + 118)
DECLARE_PMID(kImplementationIDSpace, kTAStrokeGradAngleReportImpl, kTextAttrPrefix + 119)

DECLARE_PMID(kImplementationIDSpace, kTAGradAngleReportImpl, kTextAttrPrefix + 120)
DECLARE_PMID(kImplementationIDSpace, kTAStrokeGradLengthReportImpl, kTextAttrPrefix + 121)
DECLARE_PMID(kImplementationIDSpace, kTAGradLengthReportImpl, kTextAttrPrefix + 122)
DECLARE_PMID(kImplementationIDSpace, kTAStrokeGradCenterReportImpl, kTextAttrPrefix + 123)
DECLARE_PMID(kImplementationIDSpace, kTAGradCenterReportImpl, kTextAttrPrefix + 124)
DECLARE_PMID(kImplementationIDSpace, kTASkewAngleReportImpl, kTextAttrPrefix + 125)
DECLARE_PMID(kImplementationIDSpace, kTAPRAColorReportImpl, kTextAttrPrefix + 126)
DECLARE_PMID(kImplementationIDSpace, kTAPRAStrokeReportImpl, kTextAttrPrefix + 127)
DECLARE_PMID(kImplementationIDSpace, kTAPRATintReportImpl, kTextAttrPrefix + 128)
DECLARE_PMID(kImplementationIDSpace, kTAPRAOffsetReportImpl, kTextAttrPrefix + 129)

DECLARE_PMID(kImplementationIDSpace, kTAPRAIndentLReportImpl, kTextAttrPrefix + 130)
DECLARE_PMID(kImplementationIDSpace, kTAPRAIndentRReportImpl, kTextAttrPrefix + 131)
DECLARE_PMID(kImplementationIDSpace, kTAPRAModeReportImpl, kTextAttrPrefix + 132)
DECLARE_PMID(kImplementationIDSpace, kTAPRBColorReportImpl, kTextAttrPrefix + 133)
DECLARE_PMID(kImplementationIDSpace, kTAPRBStrokeReportImpl, kTextAttrPrefix + 134)
DECLARE_PMID(kImplementationIDSpace, kTAPRBTintReportImpl, kTextAttrPrefix + 135)
DECLARE_PMID(kImplementationIDSpace, kTAPRBOffsetReportImpl, kTextAttrPrefix + 136)
DECLARE_PMID(kImplementationIDSpace, kTAPRBIndentLReportImpl, kTextAttrPrefix + 137)
DECLARE_PMID(kImplementationIDSpace, kTAPRBIndentRReportImpl, kTextAttrPrefix + 138)
DECLARE_PMID(kImplementationIDSpace, kTAPRBModeReportImpl, kTextAttrPrefix + 139)

DECLARE_PMID(kImplementationIDSpace, kTAPRAOverprintReportImpl, kTextAttrPrefix + 140)
DECLARE_PMID(kImplementationIDSpace, kTAPRBOverprintReportImpl, kTextAttrPrefix + 141)
DECLARE_PMID(kImplementationIDSpace, kTAPRARuleOnReportImpl, kTextAttrPrefix + 142)
DECLARE_PMID(kImplementationIDSpace, kTAPRBRuleOnReportImpl, kTextAttrPrefix + 143)
DECLARE_PMID(kImplementationIDSpace, kTASpecialGlyphReportImpl, kTextAttrPrefix + 144)
DECLARE_PMID(kImplementationIDSpace, kTAHiliteAngleReportImpl, kTextAttrPrefix + 145)
DECLARE_PMID(kImplementationIDSpace, kTAHiliteLengthReportImpl, kTextAttrPrefix + 146)
DECLARE_PMID(kImplementationIDSpace, kTAStrokeHiliteAngleReportImpl, kTextAttrPrefix + 147)
DECLARE_PMID(kImplementationIDSpace, kTAStrokeHiliteLengthReportImpl, kTextAttrPrefix + 148)
DECLARE_PMID(kImplementationIDSpace, kTAAlignSingleReportImpl, kTextAttrPrefix + 149)

DECLARE_PMID(kImplementationIDSpace, kTAForceVerticalGlyphsReportImpl, kTextAttrPrefix + 150)
DECLARE_PMID(kImplementationIDSpace, kTAStrikeoutReportImpl, kTextAttrPrefix + 151)
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentStrikeoutImpl, kTextAttrPrefix + 152)
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentUnderlineImpl, kTextAttrPrefix + 153)
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentStrikethruImpl, kTextAttrPrefix + 154)
DECLARE_PMID(kImplementationIDSpace, kTARotateGlyphReportImpl, kTextAttrPrefix + 155)
DECLARE_PMID(kImplementationIDSpace, kTextAttrBalancedLinePrefImpl, kTextAttrPrefix + 156)
DECLARE_PMID(kImplementationIDSpace, kSlashedZeroOTFReportImpl, kTextAttrPrefix + 157)
DECLARE_PMID(kImplementationIDSpace, kStylisticSetsOTFReportImpl, kTextAttrPrefix + 158)
DECLARE_PMID(kImplementationIDSpace, kHistoricalOTFReportImpl, kTextAttrPrefix + 159)

DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D0I0_25Impl, kTextAttrPrefix + 160)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D2I1_15Impl_Obsolete, kTextAttrPrefix + 161)		/* deleted ; USED BY CONVERTER */
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D0I0_5Impl, kTextAttrPrefix + 162)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D0I0_150Impl, kTextAttrPrefix + 163)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D2I1_50Impl, kTextAttrPrefix + 164)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1p2I0_5Impl, kTextAttrPrefix + 165)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1I0p5_2Impl, kTextAttrPrefix + 166)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0In1_5Impl, kTextAttrPrefix + 167)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0I0_8640Impl, kTextAttrPrefix + 168)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1I0_1Impl, kTextAttrPrefix + 169)

DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1In8640_8640Impl_Obsolete, kTextAttrPrefix + 170)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0I0_120Impl_Obsolete, kTextAttrPrefix + 171)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRDn1In1_5kImpl, kTextAttrPrefix + 172)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1I0_10Impl, kTextAttrPrefix + 173)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD1I0_5Impl, kTextAttrPrefix + 174)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0In8640_8640Impl, kTextAttrPrefix + 175)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D3I0_25Impl, kTextAttrPrefix + 176)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRDn1In1_100Impl, kTextAttrPrefix + 177)		/* for stroke/fill tint attributes */
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D2I1_15Impl, kTextAttrPrefix + 178)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D5I3_25Impl, kTextAttrPrefix + 179)

DECLARE_PMID(kImplementationIDSpace, kTAOTFSwashReportImpl, kTextAttrPrefix + 180)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStandardFiguresImpl, kTextAttrPrefix + 181)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRDn1In1_1kImpl, kTextAttrPrefix + 182)
DECLARE_PMID(kImplementationIDSpace, kTextAttrFontCompareImpl, kTextAttrPrefix + 183 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrStyleListImpl, kTextAttrPrefix + 184 )
DECLARE_PMID(kImplementationIDSpace, kTAStyleListReportImpl, kTextAttrPrefix + 185 )
DECLARE_PMID(kImplementationIDSpace, kTAPRBGapColorReportImpl, kTextAttrPrefix + 186 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16n1Impl, kTextAttrPrefix + 187 )
DECLARE_PMID(kImplementationIDSpace, kTAOTFStylisticAltReportImpl, kTextAttrPrefix + 188 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D5I0_10Impl, kTextAttrPrefix + 189 )

DECLARE_PMID(kImplementationIDSpace, kTAPRAStrokeTypeReportImpl, kTextAttrPrefix + 190 )
DECLARE_PMID(kImplementationIDSpace, kTAPRBStrokeTypeReportImpl, kTextAttrPrefix + 191 )
DECLARE_PMID(kImplementationIDSpace, kTAUnderlineStrokeTypeReportImpl, kTextAttrPrefix + 192 )
DECLARE_PMID(kImplementationIDSpace, kStrikeThroughStrokeTypeReportImpl, kTextAttrPrefix + 193 )
DECLARE_PMID(kImplementationIDSpace, kTAPRBGapTintReportImpl, kTextAttrPrefix + 194 )
DECLARE_PMID(kImplementationIDSpace, kTAPRBGapOverprintReportImpl, kTextAttrPrefix + 195 )
DECLARE_PMID(kImplementationIDSpace, kTAPRAGapColorReportImpl, kTextAttrPrefix + 196 )
DECLARE_PMID(kImplementationIDSpace, kTAPRAGapTintReportImpl, kTextAttrPrefix + 197 )
DECLARE_PMID(kImplementationIDSpace, kTAOTFContextAltReportImpl, kTextAttrPrefix + 198 )
DECLARE_PMID(kImplementationIDSpace, kTAPRAGapOverprintReportImpl, kTextAttrPrefix + 199 )

DECLARE_PMID(kImplementationIDSpace, kTextAttrStrokeType_SolidImpl, kTextAttrPrefix + 200 )
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentStrikeThroughDataImpl, kTextAttrPrefix + 201 )
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentSTULImpl, kTextAttrPrefix + 202 )
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentUnderlineDataImpl, kTextAttrPrefix + 203 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrStringRegisterImpl, kTextAttrPrefix + 204)
DECLARE_PMID(kImplementationIDSpace, kCharacterAttributeImpl, kTextAttrPrefix + 205)
DECLARE_PMID(kImplementationIDSpace, kParagraphAttributeImpl, kTextAttrPrefix + 206)
DECLARE_PMID(kImplementationIDSpace, kApplyTextAttrToWorkspaceCmdImpl, kTextAttrPrefix + 207)
DECLARE_PMID(kImplementationIDSpace, kTAIndentLastRightReportImpl, kTextAttrPrefix + 208)
DECLARE_PMID(kImplementationIDSpace, kTAHyphenLastWordImpl, kTextAttrPrefix + 209)

DECLARE_PMID(kImplementationIDSpace, kMeasureFormatterImpl, kTextAttrPrefix + 210)
DECLARE_PMID(kImplementationIDSpace, kPercentageFormatterImpl, kTextAttrPrefix + 211)
DECLARE_PMID(kImplementationIDSpace, kAngleFormatterImpl, kTextAttrPrefix + 212)
DECLARE_PMID(kImplementationIDSpace, kTextAttrOTPosFormsImpl, kTextAttrPrefix + 213)
DECLARE_PMID(kImplementationIDSpace, kTextAttrMissingImplDataImpl, kTextAttrPrefix + 214)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD0In1_10Impl, kTextAttrPrefix + 215)
DECLARE_PMID(kImplementationIDSpace, kTAGotoNextXReportImpl, kTextAttrPrefix + 216)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPhase2ConversionImpl, kTextAttrPrefix + 217)
#ifdef DEBUG
DECLARE_PMID(kImplementationIDSpace, kAttrBossReferencingImpl, kTextAttrPrefix + 218)
#endif
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentParaRulesDataImpl, kTextAttrPrefix + 219)

DECLARE_PMID(kImplementationIDSpace, kParaRulesAdornmentDataImpl, kTextAttrPrefix + 220)
DECLARE_PMID(kImplementationIDSpace, kTextAttrFontUIDCompareImpl, kTextAttrPrefix + 221)
DECLARE_PMID(kImplementationIDSpace, kKentenAdornmentDataImpl, kTextAttrPrefix + 222)
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentKentenDataImpl, kTextAttrPrefix + 223)
DECLARE_PMID(kImplementationIDSpace, kRubyAdornmentDataImpl, kTextAttrPrefix + 224)
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentRubyDataImpl, kTextAttrPrefix + 225)
DECLARE_PMID(kImplementationIDSpace, kTextAttrIteratorRegImpl, kTextAttrPrefix + 226)
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableXMeasureImpl, kTextAttrPrefix + 227)
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableYMeasureImpl, kTextAttrPrefix + 228)
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableXGlyphScaleImpl, kTextAttrPrefix + 229)

DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableTabSettingsImpl, kTextAttrPrefix + 230)
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableRMSMeasureImpl,    kTextAttrPrefix + 231)
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableArithMeanMeasureImpl,    kTextAttrPrefix + 232)
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableGeomMeanMeasureImpl,    kTextAttrPrefix + 233)
DECLARE_PMID(kImplementationIDSpace, kTextAttrDCDetailImpl, kTextAttrPrefix + 234)
DECLARE_PMID(kImplementationIDSpace, kTAHyphenCrossFrameReportImpl, kTextAttrPrefix + 235)
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableConverseDirectionMeasureImpl, kTextAttrPrefix + 236 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalableYGlyphScaleImpl, kTextAttrPrefix + 237 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrScalablePositiveYMeasureImpl, kTextAttrPrefix + 238 )
DECLARE_PMID(kImplementationIDSpace, kTACharUnderlineColorReportImpl, kTextAttrPrefix + 239 )

DECLARE_PMID(kImplementationIDSpace, kTACharUnderlineGapColorReportImpl, kTextAttrPrefix + 240 )
DECLARE_PMID(kImplementationIDSpace, kTACharUnderlineTintReportImpl, kTextAttrPrefix + 241 )
DECLARE_PMID(kImplementationIDSpace, kTACharUnderlineGapTintReportImpl, kTextAttrPrefix + 242 )
DECLARE_PMID(kImplementationIDSpace, kTACharUnderlineOverprintReportImpl, kTextAttrPrefix + 243 )
DECLARE_PMID(kImplementationIDSpace, kTACharUnderlineGapOverprintReportImpl, kTextAttrPrefix + 244 )
DECLARE_PMID(kImplementationIDSpace, kTACharUnderlineOffsetReportImpl, kTextAttrPrefix + 245 )
DECLARE_PMID(kImplementationIDSpace, kTACharUnderlineWeightReportImpl, kTextAttrPrefix + 246 )
DECLARE_PMID(kImplementationIDSpace, kTACharStrikeThroughColorReportImpl, kTextAttrPrefix + 247 )
DECLARE_PMID(kImplementationIDSpace, kTACharStrikeThroughGapColorReportImpl, kTextAttrPrefix + 248 )
DECLARE_PMID(kImplementationIDSpace, kTACharStrikeThroughTintImpl, kTextAttrPrefix + 249 )

DECLARE_PMID(kImplementationIDSpace, kTACharStrikeThroughGapTintReportImpl, kTextAttrPrefix + 250 )
DECLARE_PMID(kImplementationIDSpace, kTACharStrikeThroughOverprintReportImpl, kTextAttrPrefix + 251 )
DECLARE_PMID(kImplementationIDSpace, kTACharStrikeThroughGapOverprintReportImpl, kTextAttrPrefix + 252 )
DECLARE_PMID(kImplementationIDSpace, kTACharStrikeThroughOffsetReportImpl, kTextAttrPrefix + 253 )
DECLARE_PMID(kImplementationIDSpace, kTACharStrikeThroughWeightReportImpl, kTextAttrPrefix + 254 )

DECLARE_PMID(kImplementationIDSpace, kTextAttrRDn9999Impl, kTextAttrPrefix + 255 )
// ---------- END OF kTextAttrPrefix ----------------------------------------------------
//-----------------------------------------------------------------------------------


DECLARE_PMID(kImplementationIDSpace, kPersistAttrReportImpl, kTextAttrPrefix2 + 0 )
DECLARE_PMID(kImplementationIDSpace, kIsBlackBoxAttrImpl, kTextAttrPrefix2 + 1 )
DECLARE_PMID(kImplementationIDSpace, kTAOTPosFormsReportImpl, kTextAttrPrefix2 + 2 )
DECLARE_PMID(kImplementationIDSpace, kTADropCapDetailReportImpl, kTextAttrPrefix2 + 3 )
DECLARE_PMID(kImplementationIDSpace, kTAOTMarkPositionReportImpl, kTextAttrPrefix2 + 4 )
DECLARE_PMID(kImplementationIDSpace, kTAOTLocaleReportImpl, kTextAttrPrefix2 + 5 )
DECLARE_PMID(kImplementationIDSpace, kTAPRAKeepInFrameReportImpl, kTextAttrPrefix2 + 6 )
DECLARE_PMID(kImplementationIDSpace, kTAIgnoreEdgeAlignReportImpl, kTextAttrPrefix2 + 7 )
DECLARE_PMID(kImplementationIDSpace, kObjectFCStoryAttrInfoImpl, kTextAttrPrefix2 + 8 )
DECLARE_PMID(kImplementationIDSpace, kObjectFCTextFrameOptionsAttrInfoImpl, kTextAttrPrefix2 + 9 )

DECLARE_PMID(kImplementationIDSpace, kObjectFCTextFrameBaselineOptionsAttrInfoImpl, kTextAttrPrefix2 + 10 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrColorCompareImpl, kTextAttrPrefix2 + 11)
DECLARE_PMID(kImplementationIDSpace, kTAMiterLimitReportImpl, kTextAttrPrefix2 + 12)
DECLARE_PMID(kImplementationIDSpace, kTAStrokeAlignmentReportImpl, kTextAttrPrefix2 + 13)
DECLARE_PMID(kImplementationIDSpace, kTAOutlineJoinReportImpl, kTextAttrPrefix2 + 14)
DECLARE_PMID(kImplementationIDSpace, kTextAttrReferenceListImpl, kTextAttrPrefix2 + 15)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD4I0_1kImpl, kTextAttrPrefix2 + 16)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt32d2Impl, kTextAttrPrefix2 + 17)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGrepStyleListImpl, kTextAttrPrefix2 + 18)
DECLARE_PMID(kImplementationIDSpace, kTAGrepStyleListReportImpl, kTextAttrPrefix2 + 19)

DECLARE_PMID(kImplementationIDSpace, kTextAttrLineStyleListImpl, kTextAttrPrefix2 + 20)
DECLARE_PMID(kImplementationIDSpace, kTALineStyleListReportImpl, kTextAttrPrefix2 + 21)
DECLARE_PMID(kImplementationIDSpace, kTextAttrConditionsCompareImpl, kTextAttrPrefix2 + 22)

DECLARE_PMID(kImplementationIDSpace, kTASpanColumnTypeReportImpl, kTextAttrPrefix2 + 23)
DECLARE_PMID(kImplementationIDSpace, kTASpanColumnCountReportImpl, kTextAttrPrefix2 + 24)
DECLARE_PMID(kImplementationIDSpace, kTASplitColumnInsideGutterReportImpl, kTextAttrPrefix2 + 25)
DECLARE_PMID(kImplementationIDSpace, kTASplitColumnOutsideGutterReportImpl, kTextAttrPrefix2 + 26)
DECLARE_PMID(kImplementationIDSpace, kTAKeepWithPrevReportImpl, kTextAttrPrefix2 + 27)
DECLARE_PMID(kImplementationIDSpace, kTextAttrRD6I0_8640Impl, kTextAttrPrefix2 + 28)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D0I0_2Impl, kTextAttrPrefix2 + 29)
DECLARE_PMID(kImplementationIDSpace, kTextAttrInt16D1I1_40Impl, kTextAttrPrefix2 + 30)
DECLARE_PMID(kImplementationIDSpace, kTASpanColumnMinSpaceBeforeReportImpl, kTextAttrPrefix2 + 31)
DECLARE_PMID(kImplementationIDSpace, kTASpanColumnMinSpaceAfterReportImpl, kTextAttrPrefix2 + 32)

DECLARE_PMID(kImplementationIDSpace, kTextAttrRD2In1_1000Impl, kTextAttrPrefix2 + 33)

DECLARE_PMID(kImplementationIDSpace, kObjectFCTFAutoSizeOptionsAttrInfoImpl, kTextAttrPrefix2 + 34 )

DECLARE_PMID(kImplementationIDSpace, kTAPBSFillColorReportImpl, kTextAttrPrefix2 + 35 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSFillTintReportImpl, kTextAttrPrefix2 + 36 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSFillOverprintReportImpl, kTextAttrPrefix2 + 37 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSWidthReportImpl, kTextAttrPrefix2 + 38 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSFillOnReportImpl, kTextAttrPrefix2 + 39 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSClipToFrameReportImpl, kTextAttrPrefix2 + 40 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSSuppressPrintingReportImpl, kTextAttrPrefix2 + 41 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSOffsetLReportImpl, kTextAttrPrefix2 + 42 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSOffsetRReportImpl, kTextAttrPrefix2 + 43 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSOffsetTReportImpl, kTextAttrPrefix2 + 44 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSOffsetBReportImpl, kTextAttrPrefix2 + 45 )
DECLARE_PMID(kImplementationIDSpace, kTAPBSTopOriginReportImpl, kTextAttrPrefix2 + 46)
DECLARE_PMID(kImplementationIDSpace, kTAPBSBottomOriginReportImpl, kTextAttrPrefix2 + 47)
DECLARE_PMID(kImplementationIDSpace, kTextAttrParaBorderShadingWidthImpl, kTextAttrPrefix2 + 48)
DECLARE_PMID(kImplementationIDSpace, kTextAttrParaBorderShadingTopOriginImpl, kTextAttrPrefix2 + 49)
DECLARE_PMID(kImplementationIDSpace, kTextAttrParaBorderShadingBottomOriginImpl, kTextAttrPrefix2 + 50)
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentParagraphBorderShadeImpl, kTextAttrPrefix2 + 51 )
DECLARE_PMID(kImplementationIDSpace, kTextAdornmentParaBorderShadeDataImpl, kTextAttrPrefix2 + 52 )
DECLARE_PMID(kImplementationIDSpace, kParaBorderShadeAdornmentDataImpl, kTextAttrPrefix2 + 53 )
//gap

DECLARE_PMID(kImplementationIDSpace, kParaBorderShadeHighBeamDataImpl, kTextAttrPrefix2 + 69)

#endif
		// __TextAttrImplID__
