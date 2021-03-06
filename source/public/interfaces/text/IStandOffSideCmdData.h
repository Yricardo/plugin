//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/IStandOffSideCmdData.h $
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
#ifndef __IStandOffSideCmdData__
#define __IStandOffSideCmdData__

#include "IPMUnknown.h"
#include "IStandOff.h"
#include "StandOffID.h"

/** INTERNAL USE ONLY */
class IStandOffSideCmdData : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ISTANDOFFSIDECMDDATA };

		virtual	void			SetSide(IStandOff::side nSide) = 0;

		virtual	IStandOff::side	GetSide() const = 0;

};

#endif
