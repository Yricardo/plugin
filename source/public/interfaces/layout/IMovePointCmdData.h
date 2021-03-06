//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IMovePointCmdData.h $
//  
//  Owner: robin briggs
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
//  
//  Data interface for move control point command.
//  
//========================================================================================

#pragma once
#ifndef __IMovePointCmdData__
#define __IMovePointCmdData__

#include "IPMUnknown.h"
#include "PMPoint.h"
#include "GenericID.h"
#include "IHandleShape.h"		// for PointSelector

class IMovePointCmdData : public IPMUnknown
{
	public:
		virtual void Set(const PointSelector& ctrlPtID, const PBPMPoint& toHere) = 0;
		
		virtual const PointSelector& GetCtrlPoint() const = 0;
		virtual const PBPMPoint& GetDestination() const = 0;

		virtual void SetNewPointID(const PointSelector& newPtID) = 0;
		virtual const PointSelector& GetNewPointID() const = 0;
};


#endif //__IMovePointCmdData__
