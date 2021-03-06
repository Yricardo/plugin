//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IGuidePrefsCmdData.h $
//  
//  Owner: psorrick
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
#ifndef __IGuidePrefsCmdData__
#define __IGuidePrefsCmdData__

#include "IPMUnknown.h"
#include "SpreadID.h"
#include "UIDRef.h" 
#include "PMRect.h"
#include "IGuideData.h"

class IDataBase;

/** Command data interface for guide prefs commands.
	Includes : 	
	\li guides drawn in front or back
	\li guides shown or hidden
	\li guides locked or unlocked
	Affects margin, column and ruler guides.

	@ingroup layout_guide
	@see IGuidePrefs
	@see kSetGuidePrefsCmdBoss 
	@see kGuideItemBoss
*/
class IGuidePrefsCmdData : public IPMUnknown
{
public:
	virtual void Set(	const	UIDRef&	doc, 			/* which document to affect */
						const	bool16	inBack,		 	/* column, margin and ruler guides drawn in front or back */
						const	bool16	shown,		 	/* column, margin and ruler guides shown or hidden */
						const	bool16	locked,		/* column, margin and ruler guides locked or unlocked */
						const	PMReal& threshold = kDefaultViewThreshold, 	/* view threshold */
						const   UID	colorUID = kInvalidUID) = 0;
	virtual const UIDRef& GetDocument() const = 0;
	virtual const bool16  GetGuidesInBack() const = 0;
	virtual const bool16  GetGuidesShown() const = 0;
	virtual const bool16  GetGuidesLocked() const = 0;
	virtual const PMReal& GetGuidesViewThreshold() const = 0;
	virtual const UID	   GetGuidesColorUID() const = 0;
};




#endif // __IGuidePrefsCmdData__
