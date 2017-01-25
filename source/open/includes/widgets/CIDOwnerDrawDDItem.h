//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/CIDOwnerDrawDDItem.h $
//  
//  Owner: mortimer
//  
//  $Author: gmatthew $
//  
//  $DateTime: 2013/06/18 15:15:50 $
//  
//  $Revision: #1 $
//  
//  $Change: 853167 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 1997-2013 Adobe Systems Incorporated. All rights reserved.
//
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __CIDOwnerDrawDDItem__
#define __CIDOwnerDrawDDItem__

#include "COwnerDrawDDItem.h"

#ifdef WIDGET_BUILD
#pragma export on
#endif

class WIDGET_DECL CIDOwnerDrawDDItem : public COwnerDrawDDItem
{
	typedef COwnerDrawDDItem inherited;
	
public:
			 CIDOwnerDrawDDItem(IPMUnknown* boss) : inherited( boss ) { ; }
	virtual ~CIDOwnerDrawDDItem() { ; }
	
	virtual void	MeasureItem(int32 itemID,  uint16& itemWidth, uint16& itemHeight);
	virtual bool16	IsItemBeingDrawnInsideWidget();
};

#pragma export off

#endif