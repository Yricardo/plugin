//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IScaleObjectCmdData.h $
//  
//  Owner: Shawn Sheridan
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
#ifndef __IScaleItemCmdData__
#define __IScaleItemCmdData__

#include "IPMUnknown.h"
#include "GenericID.h"
#include "IScaleObject.h"

class IScaleObjectCmdData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ISCALEOBJECTCMDDATA};

		virtual void SetScaleValues(PMReal xScale, PMReal yScale) = 0;
		virtual PMReal GetXScale() = 0;
		virtual PMReal GetYScale() = 0;

		virtual void	SetScaleContext(IScaleObject::ScaleContext* context) = 0;
		virtual IScaleObject::ScaleContext* 
						GetScaleContext() const = 0;
};

#endif /* __IScaleItemCmdData__ */
