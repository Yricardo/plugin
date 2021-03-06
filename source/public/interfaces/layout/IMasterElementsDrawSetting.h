//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IMasterElementsDrawSetting.h $
//  
//  Owner: Brendan O'Shea
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
#ifndef __IMasterElementsDrawSetting__
#define __IMasterElementsDrawSetting__

#include "IPMUnknown.h"
#include "MasterPageID.h"

/** An command data interface for a spread which determines if the master associated with that
	spread draws. User can set on a per-spread basis whether master page items draw.
	In the UI, this is controlled via the Pages Panel menu Show/Hide Master Items.

	@ingroup layout_spread
	@see kShowMasterItemsCmdBoss
*/
class IMasterElementsDrawSetting : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IDRAWMASTERELEMENTS };

	/**	Set the new value for whether master page items will be drawn for a spread.
		@param newSetting IN bool16 value, kTrue to draw, kFalse to skip drawing master page items.
	 */
	virtual void	Set(bool16 newSetting) = 0;

	/**	Return the data interface value.
		@return bool16 kTrue to draw, kFalse to skip drawing master page items.
	 */
	virtual bool16	Get() = 0;
};

#endif
