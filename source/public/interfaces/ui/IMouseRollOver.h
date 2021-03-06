//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/ui/IMouseRollOver.h $
//  
//  Owner: Dave Burnard (was jargast)
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
#ifndef __IMouseRollOver__
#define __IMouseRollOver__

#include "IPMUnknown.h"
#include "widgetid.h"

#include "PMPoint.h"

/** Interface used to attach "roll over" mouse behavior to a widget.
		Roll over behavior changes the appearance of a widget, and/or the cursor, as the mouse passes over it.
*/
class IMouseRollOver : public IPMUnknown
{
public:
	 enum { kDefaultIID = IID_IMOUSEROLLOVER };  // for UseDefaultIID()

	/** Called once when the mouse enters the associated control. */
	virtual void MouseEnter (const PMPoint& localMousePos) = 0;
	
	/** Called periodically while the mouse moves within the associated control. */
	virtual void MouseOver (const PMPoint& localMousePos) = 0;
	
	/** Called when the mouse has left the associated control. */
	virtual void MouseLeave () = 0;
	
	/** Is the mouse is over the associated control, as determined by the previous calls to MouseEnter/Over/Leave. 
	*/
	virtual bool8 IsMouseOver() const = 0;
	
	/** Get the mouse point where it was over the associated control, as determined by the previous calls to MouseEnter/Over/Leave.
			The value is undefined if the last call to this interface was MouseLeave. 
	*/
	virtual PMPoint GetMouseOverPosition() const = 0;
};

#endif
