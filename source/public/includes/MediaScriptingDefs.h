//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/MediaScriptingDefs.h $
//  
//  Owner: wtislar
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

#pragma once
#ifndef __MEDIASCRIPTINGDEFS__
#define __MEDIASCRIPTINGDEFS__

#include "ScriptingDefs.h"
#include "BehaviorID.h"

// ------------------------------------------------------------------

//
// Please make sure any id's you add are unique !!!
//

enum MediaDefs 
{
	en_PosterOption					= 'Mpos',
	en_NoPoster						= en_None,
	en_StandardPoster				= en_Standard,

	en_ProxyImage					= 'Mpxy',
	en_FromMedia					= 'Mfmf',

	p_DoNotPrintPoster				= 'Sprn',
	p_EmbedContentInPDF				= 'Semb',
	p_PlayOnPageTurn				= 'Mplo',
	p_PosterFile					= 'Sspf'
//	p_PosterOption					= 'Spop', removed [Vantive 616739]
//	p_PosterType					= 'Spty'  removed [Vantive 616739]	
};

#endif	// __MEDIASCRIPTINGDEFS__

