//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/CWaxCollectionHitTest.h $
//  
//  Owner: rkamicar
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
//  Base class for IWaxHitTest on collections.
//  
//========================================================================================

#pragma once
#ifndef __CWaxCollectionHitTest__
#define __CWaxCollectionHitTest__

#include "K2Vector.h"
#include "PMMatrix.h"
#include "CPMUnknown.h"
#include "IWaxHitTest.h"

class  PUBLIC_DECL CWaxCollectionHitTest : public CPMUnknown<IWaxHitTest>
{
public:
	CWaxCollectionHitTest(IPMUnknown* boss);

	// ---- This should be a pure virtual method, but VC 2003 won't let us define pure virtuals
	//		and export them from a dll. [mburbidg 5-3-03]

	virtual PMReal HitTestWax( PMPoint pt, PMLineSeg selection, int32* charCount /*  = nil */) const;
	virtual bool16 GetLocationOf(int32 offset, PMPoint* pt, int32 innerPos, PMMatrix* pWaxToGlyphMatrix /* = nil */) const;
};

#endif
