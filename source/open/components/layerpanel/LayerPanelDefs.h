//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/layerpanel/LayerPanelDefs.h $
//  
//  Owner: ?
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
//  Definitions for constants used by the layer panel
//  
//========================================================================================

#pragma once
#ifndef __LayerPanelDefs__
#define __LayerPanelDefs__

#include "IconRsrcDefs.h"

// ----- localizable resource IDs

#define kLayerPanelStringsRsrcID			1000
#define kLayerPanelStringsNoTransRsrcID		1100

#define kLayerOptionsDialogRsrcID		1400
#define kLayerMenuResID				1600

#define kLayerPanelActionResID			1700

#define kLayerPanelPanelListRsrcID			1900
#define kLayerPanelRsrcID					2000
#define kLayerPageItemElementPanelRsrcID	2100
#define kLayerElementPanelRsrcID			2200

// icon ids
#define kLayerLockedIcon		1512
#define kLayerPenIcon			1514
#define kLayerBlankIcon			1515
#define kLayerNotLockedIcon		kLayerBlankIcon
#define kLayerPenLockedIcon		1516
#define kLayerPenSmallIcon		1517
#define kLayerPenLockedSmallIcon 1518
#define kLayerProxyCantDropIcon 1519
#define kLayerLockedOpaqueIcon	1520
#define kLayerPaletteIconRsrcID 1550

//const int kNameStartPosition = 16;
const int kActiveInset = 25;
const int kLayerProxySize = 6;
//const int kLayerSmallRowsSwatchSize = 8;
//const int kLayerSwatchSize = 10;

const int kLayerRegularRowHeight = 19;
const int kLayerSmallRowHeight = 14;

const int kMinLayerPalWidth = 207;
const int kMaxLayerPalWidth = 10000;
const int kMaxLayerPalHeight = 10000;

#define kPageItemNamePanelXLoc 43
#endif
