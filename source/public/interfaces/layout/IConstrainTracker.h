//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IConstrainTracker.h $
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
#ifndef __IConstrainTracker__
#define __IConstrainTracker__

#include "IPMUnknown.h"
#include "PMPoint.h"

class IEvent;
class ICommand;

//----------------------------------------------------------------------------------------
// Interface IConstrainTracker, IID_ICONSTRAINTRACKER
//----------------------------------------------------------------------------------------

class IConstrainTracker : public IPMUnknown
{
public:
	virtual 	bool16		Init( IEvent* theEvent ) = 0;
			// usually called by the tracker's BeginTracking(), returns kFalse on error.
	virtual 	bool16		Constrain( PBPMPoint *pPoint ) const = 0;
			// usually called by the tracker's ContinueTracking(), returns kTrue if pPoint has been modified.
	virtual 	bool16		ConstrainEvent( IEvent* theEvent ) const = 0;
			// usually called by the tracker's EndTracking(), returns kTrue if theEvent has been modified.
	virtual	ICommand *	ConstrainCommand( ICommand *pCommand ) const = 0;
			// usually called before executing the command, might return a diffierent command.
};

#endif
