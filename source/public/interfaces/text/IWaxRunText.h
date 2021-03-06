//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/IWaxRunText.h $
//  
//  Owner: dwaterfa
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
#ifndef __IWaxText__
#define __IWaxText__

#include "IPMUnknown.h"
#include "TextID.h"
#include "TextDrawPriority.h"
#include "DrawPassInfo.h"

class GraphicsData;
class IGraphicsContext;
class PMMatrix;
class PMRect;
class PMLineSeg;

/** The interface for drawing everything associated with the WaxRun (text, adornments, everything).
	@ingroup text_wax
	@see IWaxLineShape
*/
class IWaxRunText : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IWAXRUNTEXT };

	/** Draw the waxRun and any adornments (including global adornments) attacted to it.
		Called by IWaxRunShape. For more details on parameters and description, see IWaxRunShape.
	@see IWaxLineShape, IShape, IGlobalTextAdornment, ITextAdornment, IAdornmentShape, and CWaxRunText
	*/
	virtual void Draw(GraphicsData* gd, int32 iShapeFlags = 0, Text::DrawPassInfo::Pass pass = nil, const PMRect* areaToDraw = nil) const = 0;
};

#endif
