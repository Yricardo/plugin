//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextEditorShell.h $
//  
//  Owner: Bernd Paradies
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
#ifndef __ITextEditorShell__
#define __ITextEditorShell__

#include "IPMUnknown.h"

//----------------------------------------------------------------------------------------
// Interface ITextEditorShell
//----------------------------------------------------------------------------------------

/** 
	@ingroup text_editor
*/
class ITextEditorShell : public IPMUnknown
{
public:
	// activation
	virtual	void		Activate() = 0;							// called from the EventHandler
	virtual	void		Deactivate() = 0;						// called from the EventHandler

	// transactions
	virtual	void		FirstAction() = 0;
	virtual	void		LastAction() = 0;	

	// shell chain
	virtual	ITextEditorShell *	QueryNextShell() = 0;							
};


//----------------------------------------------------------------------------------------
// usefull macros
//----------------------------------------------------------------------------------------

#define ENSURE_INTERFACE( Class, nIID  ) \
	{ \
		IPMUnknown *pUnknown = this->QueryInterface( (nIID) ); \
		if( pUnknown ) \
			pUnknown->Release(); \
		else \
			ASSERT_MSG( kFalse, #Class " - missing interface: " #nIID ); \
	}

#endif
