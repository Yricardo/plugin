//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IFreeTransformUtils.h $
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
#ifndef __IFreeTransformUtils__
#define __IFreeTransformUtils__

#include "AppFrameworkID.h"
#include "IPMUnknown.h"
#include "Utils.h"

#include "PMPoint.h"
#include "PMRect.h"

class PMRect;
class UIDList;
class ISelectionManager;
class ILayoutSelectionSuite;

/** Utilities related to the free transform tool.
	@ingroup layout_util
*/
class IFreeTransformUtils : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IFREETRANSFORMUTILS };

	/**	Is the free transform tool (kFreeTransformToolBoss) considered "active".
		@param none
		@return bool16 kTrue if considered active, kFalse otherwise.
	 */
	virtual bool16 IsFTToolActive() = 0;
};


#endif	// __IFreeTransformUtils__
