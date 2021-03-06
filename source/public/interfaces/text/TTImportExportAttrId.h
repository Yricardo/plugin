//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/TTImportExportAttrId.h $
//  
//  Owner: Rahul Shinde
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/05/06 23:36:38 $
//  
//  $Revision: #5 $
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

#pragma once
#ifndef __TaggedTextImportExportAttrID__
#define __TaggedTextImportExportAttrID__

//Excluded by Manoj Gupta
//#include "TaggedTextBuildNumber.h"

#include "CrossPlatformTypes.h"
#include "IDFactory.h"
#define kTaggedTextImportExportAttrPrefix   RezLong(0x9300)
#define kTaggedTextImportExportAttrPrefix2   RezLong(0x8a00) //Pankaj copied from kTaggedTextImportFilterPrefix as I exhausted my ID's
#define kTaggedTextImportExportAttrPrefix3	RezLong(0x22D00)

// Plugin IDs
#define kTaggedTextImportExportAttrPluginName   "Tagged Text Attributes"
DECLARE_PMID(kPlugInIDSpace, kTaggedTextImportExportAttrPluginID, kTaggedTextImportExportAttrPrefix + 1)

// <Interface ID>
DECLARE_PMID(kInterfaceIDSpace, IID_IATTRIMPORTEXPORT, kTaggedTextImportExportAttrPrefix + 1)

//Test menu boss
// <Class ID>
DECLARE_PMID(kClassIDSpace, kTaggedTextImportExportAttrTestMenuBoss, kTaggedTextImportExportAttrPrefix + 5)
//gap


// Implementation IDs of Importexport Interface in the Paragraph TextAttr Bosses.
DECLARE_PMID(kImplementationIDSpace, kParaAttrSpanColumnMinSpaceBeforeImpExpImpl, kTaggedTextImportExportAttrPrefix + 3)
DECLARE_PMID(kImplementationIDSpace, kParaAttrSpanColumnMinSpaceAfterImpExpImpl, kTaggedTextImportExportAttrPrefix + 4)

//text menu implementation
//<Implementation ID>
DECLARE_PMID(kImplementationIDSpace, kTaggedTextImportExportAttrTestMenuImpl, kTaggedTextImportExportAttrPrefix + 5)

// Implementation IDs of Importexport Interface in the Paragraph TextAttr Bosses.
DECLARE_PMID(kImplementationIDSpace, kParaAttrSpanColumnTypeImpExpImpl, kTaggedTextImportExportAttrPrefix + 6)
DECLARE_PMID(kImplementationIDSpace, kParaAttrSpanColumnCountImpExpImpl, kTaggedTextImportExportAttrPrefix + 7)
DECLARE_PMID(kImplementationIDSpace, kParaAttrSplitColumnInsideGutterImpExpImpl, kTaggedTextImportExportAttrPrefix + 8)
DECLARE_PMID(kImplementationIDSpace, kParaAttrSplitColumnOutsideGutterImpExpImpl, kTaggedTextImportExportAttrPrefix + 9)
DECLARE_PMID(kImplementationIDSpace, kParaAttrKeepWithPrevImpExpImpl, kTaggedTextImportExportAttrPrefix + 10)

// Implementation IDs of Importexport Interface in the Character TextAttr Bosses.
DECLARE_PMID(kImplementationIDSpace, kTextAttrCapitalModeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 11 /* 11 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 12 /* 12 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrLanguageBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 13 /* 13 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrAlternateCharBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 15 /* 15 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrLigaturesImpExpImpl, kTaggedTextImportExportAttrPrefix + 16 /* 16 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrOldStyleFiguresImpExpImpl, kTaggedTextImportExportAttrPrefix + 17 /* 17 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPairKernMethodBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 18 /* 18 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrBLShiftImpExpImpl, kTaggedTextImportExportAttrPrefix + 19 /* 19 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 20 /* 20 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPositionModeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 21 /* 21 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrSkewAngleBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 22 /* 22 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStrokeTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 23 /* 23 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGradAngleBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 24 /* 24 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGradCenterBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 25 /* 25 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGradLengthBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 26 /* 26 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrFontUIDBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 27 /* 27 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrXGlyphScaleImpExpImpl, kTaggedTextImportExportAttrPrefix + 28 /* 28 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrILGShiftImpExpImpl, kTaggedTextImportExportAttrPrefix + 29 /* 29 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrLeadImpExpImpl, kTaggedTextImportExportAttrPrefix + 30 /* 30 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrNoBreakBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 31 /* 31 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 32 /* 32 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 33 /* 33 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPointSizeImpExpImpl, kTaggedTextImportExportAttrPrefix + 34 /* 34 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrTrackKernBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 35 /* 35 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStrikethruBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 36 /* 36 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 37 /* 37 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStrokeGradAngleBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 38 /* 38 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStrokeGradCenterBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 39 /* 39 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStrokeGradLengthBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 40 /* 40 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrOutlineImpExpImpl, kTaggedTextImportExportAttrPrefix + 41 /* 41 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrFontStyleBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 42 /* 42 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrUnderlineBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 43 /* 43 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrYGlyphScaleImpExpImpl, kTaggedTextImportExportAttrPrefix + 45 /* 45 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrHyphenLastImpExpImpl, kTaggedTextImportExportAttrPrefix + 46 /* 46 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrCrossFrameHyphenImpExpImpl, kTaggedTextImportExportAttrPrefix + 47 /* 47 */)

DECLARE_PMID(kImplementationIDSpace, kTABoutenCharBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 48 /* 48 */)
DECLARE_PMID(kImplementationIDSpace, kTABoutenColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 49 /* 49 */)
DECLARE_PMID(kImplementationIDSpace, kTABoutenFontUIDBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 50 /* 50 */)
DECLARE_PMID(kImplementationIDSpace, kTABoutenFontStyleBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 51 /* 51 */)
DECLARE_PMID(kImplementationIDSpace, kTABoutenScaleXBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 52 /* 52 */)
DECLARE_PMID(kImplementationIDSpace, kTABoutenOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 53 /* 53 */)
DECLARE_PMID(kImplementationIDSpace, kTABoutenScaleYBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 54 /* 54 */)
DECLARE_PMID(kImplementationIDSpace, kTAKinsokuTableBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 55 /* 55 */)
DECLARE_PMID(kImplementationIDSpace, kTAMojikumiTableBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 56 /* 56 */)
//#ifdef UNIMPLEMENTED //This is not yet supported by K2 hence not supported TT filter
DECLARE_PMID(kImplementationIDSpace, kTATsumeTableBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 57 /* 57 */)
//#endif
DECLARE_PMID(kImplementationIDSpace, kTextAttrAutoQuadBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 58 /* 58 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrWordspaceDesImpExpImpl, kTaggedTextImportExportAttrPrefix + 59 /* 59 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrHyphenCapImpExpImpl, kTaggedTextImportExportAttrPrefix + 60 /* 60 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrHyphenModeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 61 /* 61 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrHyphenLadderBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 62 /* 62 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrHyphenZoneBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 63 /* 63 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrWordspaceMaxImpExpImpl, kTaggedTextImportExportAttrPrefix + 64 /* 64 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrMinAfterImpExpImpl, kTaggedTextImportExportAttrPrefix + 65 /* 65 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrMinBeforeImpExpImpl, kTaggedTextImportExportAttrPrefix + 66 /* 66 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrWordspaceMinImpExpImpl, kTaggedTextImportExportAttrPrefix + 67 /* 67 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrHyphenFactorImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 68 /* 68 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrHyphenFixedImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 69 /* 69 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrHyphenMagnifierImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 70 /* 70 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrHyphenScaleImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 71 /* 71 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrLastLineHyphenImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 72 /* 72 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrShortestWordImpExpImpl, kTaggedTextImportExportAttrPrefix + 73 /* 73 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrBaselineGridBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 74 /* 74 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrAlignLastImpExpImpl, kTaggedTextImportExportAttrPrefix + 75 /* 75 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrAlignBodyImpExpImpl, kTaggedTextImportExportAttrPrefix + 76 /* 76 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrAutoLeadImpExpImpl, kTaggedTextImportExportAttrPrefix + 77 /* 77 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharacterHangBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 78 /* 78 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGlyphscaleDesImpExpImpl, kTaggedTextImportExportAttrPrefix + 79 /* 79 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrLetterspaceDesImpExpImpl, kTaggedTextImportExportAttrPrefix + 80 /* 80 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrIndent1LImpExpImpl, kTaggedTextImportExportAttrPrefix + 81 /* 81 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrKeepLinesBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 82 /* 82 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrKeepTogetherBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 83 /* 83 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrKeepWithNextBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 84 /* 84 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrIndentBLImpExpImpl, kTaggedTextImportExportAttrPrefix + 85 /* 85 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGlyphscaleMaxImpExpImpl, kTaggedTextImportExportAttrPrefix + 86 /* 86 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrLetterspaceMaxImpExpImpl, kTaggedTextImportExportAttrPrefix + 87 /* 87 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGlyphscaleMinImpExpImpl, kTaggedTextImportExportAttrPrefix + 88 /* 88 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrLetterspaceMinImpExpImpl, kTaggedTextImportExportAttrPrefix + 89 /* 89 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrComposeDepthImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 90 /* 90 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrConsistencyImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 91 /* 91 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrFavorFactorImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 92 /* 92 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrMaxRagCompressImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 93 /* 93 */)
DECLARE_PMID(kImplementationIDSpace, kTCTextAttrComposeWidthImpExpImpl_Obsolete, kTaggedTextImportExportAttrPrefix + 94 /* 94 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrDropCapCharsImpExpImpl, kTaggedTextImportExportAttrPrefix + 95 /* 95 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrDropCapLinesImpExpImpl, kTaggedTextImportExportAttrPrefix + 96 /* 96 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrKeepLastNLinesBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 98 /* 98 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrBreakBeforeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 99 /* 99 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 100 /* 100 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAIndentLBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 101 /* 101 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAModeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 102 /* 102 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 103 /* 103 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAIndentRBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 104 /* 104 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAStrokeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 105 /* 105 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRATintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 106 /* 106 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 107 /* 107 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBIndentLBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 108 /* 108 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBModeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 109 /* 109 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 110 /* 110 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBIndentRBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 111 /* 111 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBStrokeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 112 /* 112 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 113 /* 113 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrIndentBRImpExpImpl, kTaggedTextImportExportAttrPrefix + 114 /* 114 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrSpaceAfterImpExpImpl, kTaggedTextImportExportAttrPrefix + 115 /* 115 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrSpaceBeforeImpExpImpl, kTaggedTextImportExportAttrPrefix + 116 /* 116 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrTabsBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 117 /* 117 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrComposerBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 118 /* 118 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrKeepFirstNLinesBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 119 /* 119 */)
DECLARE_PMID(kImplementationIDSpace, kTAMojiRubiBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 120 /* 120 */)
DECLARE_PMID(kImplementationIDSpace, kTARubiColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 121 /* 121 */)
DECLARE_PMID(kImplementationIDSpace, kTARubiFontUIDBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 122 /* 122 */)
DECLARE_PMID(kImplementationIDSpace, kTARubiXScaleBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 123 /* 123 */)
DECLARE_PMID(kImplementationIDSpace, kTARubiOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 124 /* 124 */)
DECLARE_PMID(kImplementationIDSpace, kTARubiAttrBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 125 /* 125 */)
DECLARE_PMID(kImplementationIDSpace, kTARubiPointSizeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 126 /* 126 */)
DECLARE_PMID(kImplementationIDSpace, kTARubiSpacingBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 127 /* 127 */)
//#ifdef UNIMPLEMENTED //This is not yet supported by K2 hence not supported TT filter			//Anuj Rubi String
DECLARE_PMID(kImplementationIDSpace, kTARubiStringBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 128 /* 128 */)
//#endif

DECLARE_PMID(kImplementationIDSpace, kTARubiFontStyleBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 129 /* 129 */)
DECLARE_PMID(kImplementationIDSpace, kTARubiYScaleBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 130 /* 130 */)
DECLARE_PMID(kImplementationIDSpace, kTARubiAlignmentBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 131 /* 131 */)

DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 132 /* 132 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRARuleOnBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 133 /* 133 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 134 /* 134 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBRuleOnBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 135 /* 135 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPairKernBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 136 /* 35 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPageNumberTypeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 137 /* 37		PAGENUM	//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGotoNextXBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 138 /* 38		NextXChars	//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyAutoScalingBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 139 /* 39		RubyAuto	//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyPositionBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 140 /* 40		RubyPos		//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyAutoScaleMinBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 141 /* 41		RubyAutoScaleMin		//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyXOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 142 /* 42		RubyXOffset				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyYOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 143 /* 43		RubyYOffset				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 144 /* 44		RubyTint				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 145 /* 45		RubyOverprint				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyStrokeTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 146 /* 46		RubyStrokeTint				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyOutlineBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 147 /* 47		RubyOutline				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenXOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 148 /* 48		KentenXOffset				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenYOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 149 /* 49		KentenYOffset				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 150 /* 50		KentenTint				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 151 /* 51		KentenOverprint				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenStrokeTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 152 /* 52		KentenStrokeTint				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 153 /* 53		KentenStrokeOverprint				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenOutlineBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 154 /* 54		KentenOutline				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTATatechuyokoAttrBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 155 /* 55		TCY				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTATatechuyokoXOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 156 /* 56		TCYXO				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTATatechuyokoYOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 157 /* 57		TCYYO				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenKindBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 158 /* 58		Kenten kind				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAShataiMagnificationBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 159 /* 59		Shatai magn.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAShataiAngleBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 160 /* 60		Shatai angle				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAShataiAdjustTsumeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 161 /* 61		Shatai Tsume				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAShataiAdjustRotationBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 162 /* 62		Shatai Rot.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTATsumeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 163 /* 63		tsume .				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAGridJidoriReportBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 164 /* 64		jidori .				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTACharRotateAngleReportBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 165 /* 65		charRot .				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAGridGyoudoriReportBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 166 /* 66		gyoudori .				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAMojikumiRensuujiBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 167 /* 67		rensuuji .				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARotateRomanBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 168 /* 68		rotateRoman .				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAGridAlignOnlyFirstLineReportBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 169 /* 69		Align First line only.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGridAlignmentBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 170 /* 70		Grid Align.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTACJKHangingBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 171 /* 71		Kinsoku Hard.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTABunriKinshiBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 172 /* 72		Kinsoku Hard.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKinsokuTypeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 173 /* 73		Kinsoku Hard.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenSizeBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 174 /* 74		Kinsoku Hard.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyEdgeSpaceBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 175 /* 75		Kinsoku Hard.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenPositionBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 176 /* 76		Kenten position.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAMojikumiForceAfterSpacingBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 177 /* 77		Mojiikumi AfterSpace.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAMojikumiForceBeforeSpacingBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 178 /* 78		Mojiikumi BeforeSpace.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyOverhangBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 179			/* 79		Ruby Overhang.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyAdjustParentBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 180			/* 80		Ruby Adjust Parent.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKumiNumberReportBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 181			/* 81		Kumi Number.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKumiNumberWithRomanReportBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 182			/* 82		Kumi Number with Roman?.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenStrokeColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 183			/* 83		Kenten Stroke Color.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyStrokeColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 184			/* 84		Ruby Stroke Color.				//Anuj */)
DECLARE_PMID(kImplementationIDSpace, kTARubyStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 185			/* 85		Ruby Stroke Overprint.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenAlignmentBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 186			/* 86		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTAKentenFontFamilyBossImpExpImpl, kTaggedTextImportExportAttrPrefix + 187			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTextAttrSpecialGlyphBossImpExpImpl	, kTaggedTextImportExportAttrPrefix + 188 /*special glyph*/)
// Hotaka->Anna merge 15/Dec/00 %brycem% kRowAttrHeightImpExpImpl value conflicts with existing Hotaka value.
// Moved to below
DECLARE_PMID(kImplementationIDSpace, kColAttrWidthImpExpImpl, kTaggedTextImportExportAttrPrefix + 189			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftInsetImpExpImpl, kTaggedTextImportExportAttrPrefix + 190			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrTopInsetImpExpImpl, kTaggedTextImportExportAttrPrefix + 191			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightInsetImpExpImpl, kTaggedTextImportExportAttrPrefix + 192			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrBottomInsetImpExpImpl, kTaggedTextImportExportAttrPrefix + 193			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 194			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 195			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrFillTintImpExpImpl, kTaggedTextImportExportAttrPrefix + 196			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 197			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 198			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrTopStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 199			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrBottomStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 200			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterLeftStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 201			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterRightStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 202			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterTopStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 203			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterBottomStrokeWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 204			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrBeforeSpaceImpExpImpl, kTaggedTextImportExportAttrPrefix + 205			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrAfterSpaceImpExpImpl, kTaggedTextImportExportAttrPrefix + 206			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kRowAttrMinRowSizeImpExpImpl, kTaggedTextImportExportAttrPrefix + 207			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kRowAttrMaxRowSizeImpExpImpl, kTaggedTextImportExportAttrPrefix + 208			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kCellAttrRotationImpExpImpl, kTaggedTextImportExportAttrPrefix + 209			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTextCellAttrMaxVJInterParaSpaceImpExpImpl, kTaggedTextImportExportAttrPrefix + 210			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternFirstWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 211			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternSecondWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 212			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternFirstWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 213			/* 87		Kenten Alignment.				//Anuj	 */)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternSecondWeightImpExpImpl, kTaggedTextImportExportAttrPrefix + 214			/* 87		Kenten Alignment.				//Anuj	 */)

DECLARE_PMID(kImplementationIDSpace, kRowAttrAutoGrowImpExpImpl , kTaggedTextImportExportAttrPrefix + 215)
DECLARE_PMID(kImplementationIDSpace, kTextCellAttrFirstLineOffsetImpExpImpl , kTaggedTextImportExportAttrPrefix + 216               )
DECLARE_PMID(kImplementationIDSpace, kTextCellAttrVerticalJustificationImpExpImpl , kTaggedTextImportExportAttrPrefix + 217        )
DECLARE_PMID(kImplementationIDSpace, kTextCellAttrVerticalCompositionImpExpImpl , kTaggedTextImportExportAttrPrefix + 218           )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternFirstCountImpExpImpl , kTaggedTextImportExportAttrPrefix + 219        )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternSecondCountImpExpImpl , kTaggedTextImportExportAttrPrefix + 220      )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternFirstCountImpExpImpl , kTaggedTextImportExportAttrPrefix + 221        )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternSecondCountImpExpImpl , kTaggedTextImportExportAttrPrefix + 222      )
DECLARE_PMID(kImplementationIDSpace, kTableAttrFillPatternPriorityImpExpImpl , kTaggedTextImportExportAttrPrefix + 223             )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternFirstCountImpExpImpl , kTaggedTextImportExportAttrPrefix + 224    )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternSecondCountImpExpImpl , kTaggedTextImportExportAttrPrefix + 225  )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternFirstCountImpExpImpl , kTaggedTextImportExportAttrPrefix + 226    )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternSecondCountImpExpImpl , kTaggedTextImportExportAttrPrefix + 227  )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternStartValueImpExpImpl , kTaggedTextImportExportAttrPrefix + 228      )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternEndValueImpExpImpl , kTaggedTextImportExportAttrPrefix + 229         )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternStartValueImpExpImpl , kTaggedTextImportExportAttrPrefix + 230        )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternEndValueImpExpImpl , kTaggedTextImportExportAttrPrefix + 231           )
DECLARE_PMID(kImplementationIDSpace, kRowAttrKeepsImpExpImpl , kTaggedTextImportExportAttrPrefix + 232  )

DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 233)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 234)
DECLARE_PMID(kImplementationIDSpace, kCellAttrFillColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 235)
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 236)
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 237)
DECLARE_PMID(kImplementationIDSpace, kCellAttrTopStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 238)
DECLARE_PMID(kImplementationIDSpace, kCellAttrBottomStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 239)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterLeftStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 240)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterRightStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 241)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterTopStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 242)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterBottomStrokeColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 243)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternFirstColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 244)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternSecondColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 245)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternFirstColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 246)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternSecondColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 247)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternFirstColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 248)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternSecondColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 249)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternFirstColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 250)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternSecondColorImpExpImpl, kTaggedTextImportExportAttrPrefix + 251)

DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix + 252)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix + 253)
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix + 254)
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix + 255)
//end of kTaggedTextImportExportAttrPrefix


//gap

// Regional cell styles
// First 5 defined in TaggedTextFiltersID.h
DECLARE_PMID(kImplementationIDSpace, kTableAttrFirstColCellStyleImportExportImpl,		kTaggedTextImportExportAttrPrefix2 + 6)
DECLARE_PMID(kImplementationIDSpace, kTextAttrMiterLimitImpExpImpl, 					kTaggedTextImportExportAttrPrefix2 + 7)
DECLARE_PMID(kImplementationIDSpace, kTableAttrFooterCellStyleImportExportImpl,			kTaggedTextImportExportAttrPrefix2 + 8)
DECLARE_PMID(kImplementationIDSpace, kTableAttrBodyCellStyleImportExportmpl,			kTaggedTextImportExportAttrPrefix2 + 9)
DECLARE_PMID(kImplementationIDSpace, kTableAttrHeaderCellStyleImportExportImpl,			kTaggedTextImportExportAttrPrefix2 + 10)
DECLARE_PMID(kImplementationIDSpace, kTableAttrLastColCellStyleImportExportImpl,		kTaggedTextImportExportAttrPrefix2 + 11)
DECLARE_PMID(kImplementationIDSpace, kTextAttrStrokeAlignmentImpExpImpl, 					kTaggedTextImportExportAttrPrefix2 + 12)
DECLARE_PMID(kImplementationIDSpace, kTableAttrFirstColCellStyleUseBodyImportExportImpl,	kTaggedTextImportExportAttrPrefix2 + 13)
// 14, 16 - 21 defined in TaggedTextFiltersID.h
DECLARE_PMID(kImplementationIDSpace, kTableAttrLastColCellStyleUseBodyImportExportImpl,		kTaggedTextImportExportAttrPrefix2 + 22)
DECLARE_PMID(kImplementationIDSpace, kTextAttrOutlineJoinImpExpImpl, 					kTaggedTextImportExportAttrPrefix2 + 23)
DECLARE_PMID(kImplementationIDSpace, kTextAttrKashidaWidthBossImpExpImpl,					kTaggedTextImportExportAttrPrefix2 + 24)
DECLARE_PMID(kImplementationIDSpace, kTableAttrHeaderCellStyleUseBodyImportExportImpl,		kTaggedTextImportExportAttrPrefix2 + 25)
DECLARE_PMID(kImplementationIDSpace, kTableAttrFooterCellStyleUseBodyImportExportImpl,		kTaggedTextImportExportAttrPrefix2 + 26)
DECLARE_PMID(kImplementationIDSpace, kCellAttrParagraphStyleImportExportImpl,				kTaggedTextImportExportAttrPrefix2 + 27)

DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAKeepInFrameBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 28)
DECLARE_PMID(kImplementationIDSpace, kTextAttrIndentLastRightImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 29)
DECLARE_PMID(kImplementationIDSpace, kCellAttrTopStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 30)
DECLARE_PMID(kImplementationIDSpace, kCellAttrBottomStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 31)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterLeftStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 32)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterRightStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 33)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterTopStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 34)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterBottomStrokeTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 35)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternFirstTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 36)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternSecondTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 37)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternFirstTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 38)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternSecondTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 39)

DECLARE_PMID(kImplementationIDSpace, kCellAttrCellTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 40)
DECLARE_PMID(kImplementationIDSpace, kTableAttrDefaultCellTypeImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 41)
DECLARE_PMID(kImplementationIDSpace, kTextAttrBalancedLinesImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 42)
DECLARE_PMID(kImplementationIDSpace, kTextAttrIgnoreEdgeAlignImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 43)

DECLARE_PMID(kImplementationIDSpace, kBNBulletTextAfterAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 44)
DECLARE_PMID(kImplementationIDSpace, kBNListLevelAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 45 )
DECLARE_PMID(kImplementationIDSpace, kBNBulletListAlignAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 46)
DECLARE_PMID(kImplementationIDSpace, kBNNumListAlignAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 47)
DECLARE_PMID(kImplementationIDSpace, kBNBulletCharStyleAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 48)
DECLARE_PMID(kImplementationIDSpace, kBNNumberCharStyleAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 49)

DECLARE_PMID(kImplementationIDSpace, kBNNumberingNumberAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 50)
DECLARE_PMID(kImplementationIDSpace, kBNShouldRestartAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 51)
DECLARE_PMID(kImplementationIDSpace, kBNNumberingCFPreviousAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 52)
DECLARE_PMID(kImplementationIDSpace, kBNListStyleAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 53)
DECLARE_PMID(kImplementationIDSpace, kBNRestartPolicyAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 54)
DECLARE_PMID(kImplementationIDSpace, kTAIdeoSpaceBehaviorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 55)
DECLARE_PMID(kImplementationIDSpace, kTAWordWrapOffBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 56)
DECLARE_PMID(kImplementationIDSpace, kConditionalTextAttributeBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 57 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrLineStylesBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 58)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGrepStylesBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 59 )

DECLARE_PMID(kImplementationIDSpace, kTextAttrAlignSingleImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 60 )
DECLARE_PMID(kImplementationIDSpace, kRowAttrHeightImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 61)
DECLARE_PMID(kImplementationIDSpace, kAltGlyphAttrBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 62)
DECLARE_PMID(kImplementationIDSpace, kTAWarichuAttrBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 63)
DECLARE_PMID(kImplementationIDSpace, kTAWarichuNumOfLineBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 64)
DECLARE_PMID(kImplementationIDSpace, kTAWarichuRelativeSizeBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 65)
DECLARE_PMID(kImplementationIDSpace, kTAWarichuLineSpacingBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 66)
DECLARE_PMID(kImplementationIDSpace, kTAWarichuAlignmentBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 67)
DECLARE_PMID(kImplementationIDSpace, kTAWarichuMinCharsBeforeBreakBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 68)
DECLARE_PMID(kImplementationIDSpace, kTAWarichuMinCharsAfterBreakBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 69)

DECLARE_PMID(kImplementationIDSpace, kTAWarichuAutoResizeParenBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 70)
DECLARE_PMID(kImplementationIDSpace, kTARubiOTProBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 71 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftStrokeTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 72 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightStrokeTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 73 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrTopStrokeTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 74 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrBottomStrokeTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 75 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterLeftStrokeTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 76 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterRightStrokeTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 77 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterTopStrokeTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 78 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterBottomStrokeTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 79 )

//added new attributes.. krishnas dated 30th May 2001
DECLARE_PMID(kImplementationIDSpace, kTAOTFHVKanaBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 80 )
DECLARE_PMID(kImplementationIDSpace, kTAOTFProportionalBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 81 )
DECLARE_PMID(kImplementationIDSpace, kTAOTFRomanItalicsBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 82 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrOTFOrdinalBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 83 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrOTFFractionBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 84 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrOTFDiscLigBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 85 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrOTFTitlingBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 86 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrOTFContextAltBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 87 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrOTFSwashBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 88 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrOTFStylisticAltBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 89 )

DECLARE_PMID(kImplementationIDSpace, kTextAttrHyphenWeightBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 90 )
DECLARE_PMID(kImplementationIDSpace, kTAMojikumiAdjustPeriodBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 91 )
DECLARE_PMID(kImplementationIDSpace, kTAMojikumiFullAdjustBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 92 )
DECLARE_PMID(kImplementationIDSpace, kTAMojikumiRomanWidthBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 93 )
DECLARE_PMID(kImplementationIDSpace, kTARubyOverhangFlagBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 94 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrForceVerticalGlyphsBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 95 )
DECLARE_PMID(kImplementationIDSpace, kTARubyRelativeSizeBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 96 )
DECLARE_PMID(kImplementationIDSpace, kTAKentenCharacterSetBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 97 )
DECLARE_PMID(kImplementationIDSpace, kTAKentenRelatedSizeBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 98 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrAlignmentImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 99)

DECLARE_PMID(kImplementationIDSpace, kTALeadingModelBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 100 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrRunInStylesBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 101 )
DECLARE_PMID(kImplementationIDSpace, kTAParaGyoudoriBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 102 )
DECLARE_PMID(kImplementationIDSpace, kTAScaleAffectsLineHeightBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 103 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternFirstTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 104 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternSecondTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 105 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternFirstTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 106 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternSecondTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 107 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternFirstTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 108 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternSecondTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 109 )

DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternFirstTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 110 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternSecondTintImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 111 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternStartValueImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 112 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternEndValueImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 113 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternStartValueImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 114 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternEndValueImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 115 )

//added for dragon tail
//for table cell diagonals
DECLARE_PMID(kImplementationIDSpace, kCellAttrDiagnolTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 116 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrDiagnolOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 117 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrDiagnolColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 118 )
DECLARE_PMID(kImplementationIDSpace, kDiagnolStrokeTypeBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 119 )

DECLARE_PMID(kImplementationIDSpace, kCellAttrDiagnolWeightBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 120 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrDiagnolsOnTopBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 121 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftTopLineBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 122 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightTopLineBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 123 )
DECLARE_PMID(kImplementationIDSpace, kDiagnolCellAdornerBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 124 )
//till here
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 125 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 126 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrTopStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 127 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrBottomStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 128 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterLeftStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 129 )

DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterRightStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 130 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterTopStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 131 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterBottomStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 132 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternFirstOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 133 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowFillPatternSecondOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 134 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternFirstOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 135 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColFillPatternSecondOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 136 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternFirstOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 137 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternSecondOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 138 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternFirstOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 139 )

DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternSecondOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 140)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 141 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 142 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrFillOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 143 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrInnerRowStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 144 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrInnerColStrokeOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 145 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrClipBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 146 )
DECLARE_PMID(kImplementationIDSpace, kTextCellAttrMinFirstLineOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 147 )
DECLARE_PMID(kImplementationIDSpace, kStartHeadersOnAttrBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 148 )
DECLARE_PMID(kImplementationIDSpace, kStartFootersOnAttrBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 149 )
DECLARE_PMID(kImplementationIDSpace, kSkipFirstHeaderAttrBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 150 )
DECLARE_PMID(kImplementationIDSpace, kSkipLastFooterAttrBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 151)
DECLARE_PMID(kImplementationIDSpace, kTACJKGridTrackingBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 152 )

//Underline Options
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharUnderlineColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 153 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharUnderlineGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 154 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharUnderlineGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 155 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharUnderlineGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 156 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharUnderlineOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 157 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharUnderlineOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 158 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharUnderlineTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 159 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharUnderlineWeightOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 160 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharUnderlineTypeBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 161 )

//Strikethrough Options
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharStrikeThroughColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 162 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharStrikeThroughGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 163 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharStrikeThroughGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 164 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharStrikeThroughGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 165 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharStrikeThroughOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 166 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharStrikeThroughOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 167 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharStrikeThroughTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 168 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharStrikeThroughWeightOffsetBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 169 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrCharStrikeThroughTypeBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 170 )

//Para Rule Above -New attributes
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 171 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 172 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 173 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRAStrokeTypeBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 174 )

//Para Rule Below -New attributes
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 175 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 176 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 177 )
DECLARE_PMID(kImplementationIDSpace, kTextAttrPRBStrokeTypeBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 178 )


//Table Gap Attributes
// Gap Tint
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 179 )

DECLARE_PMID(kImplementationIDSpace, kCellAttrDiagnolGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 180 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrInnerRowStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 181 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrInnerColStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 182 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 183)
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 184 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterLeftStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 185)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterRightStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 186)
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterTopStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 187 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterBottomStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 188 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternFirstGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 189 )

DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternSecondGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 190 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternFirstGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 191 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternSecondGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 192 )

//Gap Color
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 193 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 194 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrTopStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 195 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrBottomStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 196 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrDiagnolGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 197 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrInnerRowStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 198 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrInnerColStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 199 )

DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 200 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 201 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterLeftStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 202 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterRightStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 203 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterTopStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 204 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterBottomStrokeGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 205 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternFirstGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 206)
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternSecondGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 207 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternFirstGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 208 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternSecondGapColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 209 )

//Gap Overprint
DECLARE_PMID(kImplementationIDSpace, kCellAttrLeftStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 210 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 211 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrTopStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 212 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrBottomStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 213 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrDiagnolGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 214 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrInnerRowStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 215 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrInnerColStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 216 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 217 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 218 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterLeftStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 219 )

DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterRightStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 220 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterTopStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 221 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrOuterBottomStrokeGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 222 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternFirstGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 223 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrRowStrokePatternSecondGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 224 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternFirstGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 225 )
DECLARE_PMID(kImplementationIDSpace, kTableAttrColStrokePatternSecondGapOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 226 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrRightStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 227 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrTopStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 228 )
DECLARE_PMID(kImplementationIDSpace, kCellAttrBottomStrokeGapTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 229 )

DECLARE_PMID(kImplementationIDSpace, kTextAttrOTFeatureListBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 230)
DECLARE_PMID(kImplementationIDSpace, kTextAttrGlyphFormBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 231)
DECLARE_PMID(kImplementationIDSpace, kTableAttrStrokeOrderBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 232 )

DECLARE_PMID(kImplementationIDSpace, kHistoricalOTFImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 233)
DECLARE_PMID(kImplementationIDSpace, kSlashedZeroOTFImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 234)
DECLARE_PMID(kImplementationIDSpace, kStylisticSetsOTFBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 235)

// manojg TCY
DECLARE_PMID(kImplementationIDSpace, kTARubiAutoTCYNumDigitsReportImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 236)
DECLARE_PMID(kImplementationIDSpace, kTARubiAutoTCYIncludeRomanReportImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 237)
DECLARE_PMID(kImplementationIDSpace, kTARubiAutoTCYAutoScaleReportImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 238)
//manojg TCY

DECLARE_PMID(kImplementationIDSpace, kDropCapDetailBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 239)
DECLARE_PMID(kImplementationIDSpace, kOTPositionalFormsBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 240)
DECLARE_PMID(kImplementationIDSpace, kOTMarkPositioningBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 241)
DECLARE_PMID(kImplementationIDSpace, kOTLocaleFeatureBossImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 242)

DECLARE_PMID(kImplementationIDSpace, kBNListTypeAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 243)
DECLARE_PMID(kImplementationIDSpace, kBNNumberingStyleAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 244)
DECLARE_PMID(kImplementationIDSpace, kBNBulletCharAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 245)
DECLARE_PMID(kImplementationIDSpace, kBNFontStyleAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 246)
DECLARE_PMID(kImplementationIDSpace, kBNFontUIDAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 247)
DECLARE_PMID(kImplementationIDSpace, kBNSizeAttrImpExpImpl_obsolete, kTaggedTextImportExportAttrPrefix2 + 248)
DECLARE_PMID(kImplementationIDSpace, kBNColorAttrImpExpImpl_obsolete, kTaggedTextImportExportAttrPrefix2 + 249)
DECLARE_PMID(kImplementationIDSpace, kBNNumberStartAtAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2 + 250)
DECLARE_PMID(kImplementationIDSpace, kBNNumberSeparatorAttrImpExpImpl_obsolete, kTaggedTextImportExportAttrPrefix2 + 251)
DECLARE_PMID(kImplementationIDSpace, kBNBulletFontStyleAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 252)
DECLARE_PMID(kImplementationIDSpace, kBNNumberingFontStyleAttrImpExpImpl_obsolete, kTaggedTextImportExportAttrPrefix2  + 253)
DECLARE_PMID(kImplementationIDSpace, kBNNumberingFontUIDAttrImpExpImpl_obsolete, kTaggedTextImportExportAttrPrefix2  + 254)
DECLARE_PMID(kImplementationIDSpace, kBNBulletFontUIDAttrImpExpImpl, kTaggedTextImportExportAttrPrefix2  + 255)

DECLARE_PMID(kImplementationIDSpace, kPageItemCellAttrLeftInsetImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 1)
DECLARE_PMID(kImplementationIDSpace, kPageItemCellAttrTopInsetImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 2)
DECLARE_PMID(kImplementationIDSpace, kPageItemCellAttrRightInsetImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 3)
DECLARE_PMID(kImplementationIDSpace, kPageItemCellAttrBottomInsetImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 4)
DECLARE_PMID(kImplementationIDSpace, kPageItemCellAttrClipBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 5)

DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSWidthBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 6)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSClipToFrameBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 7)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSSuppressPrintingBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 8)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSOffsetLBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 9)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSOffsetRBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 10)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSOffsetTBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 11)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSOffsetBBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 12)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSFillColorBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 13)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSFillTintBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 14)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSFillOverprintBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 15)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSTopOriginBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 16)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSBottomOriginBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 17)
DECLARE_PMID(kImplementationIDSpace, kTextAttrPBSFillOnBossImpExpImpl, kTaggedTextImportExportAttrPrefix3 + 18)
//gap


//Resource ID
#define mTaggedTextImportExportAttrTestMenuID 	1005
#define kTaggedTextImportExportAttrStringsRsrcID 1020

//menu ids
#define mSuportedTextAttrs					 1
#define mTaggedTextFilter	 4
#endif
