//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/GraphicFramePanelID.h $
//  
//  Owner: Lonnie Millett
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

#ifndef __GRAPHICFRAMEPANELID__
#define __GRAPHICFRAMEPANELID__

#include "CrossPlatformTypes.h"
#include "IDFactory.h"

#define kGraphicPanelPrefix	 RezLong(0x5800) 

// <Start IDC>
// PluginID
#define kGraphicFramePanelPluginName 		"GraphicFramePanel"
DECLARE_PMID(kPlugInIDSpace, kGraphicFramePanelPluginID, kGraphicPanelPrefix + 1)

// <Class ID>
// ClassIDs
DECLARE_PMID(kClassIDSpace, kGraphicFramePanelRegisterBoss, kGraphicPanelPrefix + 1)
DECLARE_PMID(kClassIDSpace, kGraphicFramePanelGroupWidgetBoss, kGraphicPanelPrefix + 2)

// <Implementation ID>
// ImplementationIIDs
// gap
DECLARE_PMID(kImplementationIDSpace, kGraphicFramePanelGroupViewImpl, kGraphicPanelPrefix + 2)

#endif




