//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IFrameType.h $
//  
//  Owner: Steve Pellegrin
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
#ifndef __IFRAMETYPE__
#define __IFRAMETYPE__

#include "IPMUnknown.h"
#include "UtilitiesID.h"

class IFrameType : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IFRAMETYPE };

	enum FrameType
	{
		kNotAFrame,						// Simple page item
		kGraphicFrame,					// Frame with an image
		kEmptyGraphicFrame,				// Graphic frame without content (displays X)
		kGraphicFrameWithPlaceHolder,	// Graphic frame with place holder
		kTextFrame,						// Text frame with textual contents
		kEmptyTextFrame					// Text frame without textual contents
	};

	/** Interface on all spline page items. Returns the type of frame that the
	    spline represents. If the spline is not a frame (a simple page item)
		kNotAFrame is returned.
	@return FrameType.
	*/
	virtual FrameType GetFrameType() const = 0;

	/** Helper method that relies on GetFrameType().
	@return kTrue if the frame either holds an image or potentially does.
	*/
	virtual bool16 IsGraphicFrame() const = 0;

	/** Helper method that relies on GetFrameType().
	@return kTrue if the frame either contains text or potentially does.
	*/
	virtual bool16 IsTextFrame() const = 0;

	/** Helper method that relies on GetFrameType().
	@return kTrue if the object is a frame, not a simple page item.
	*/
	virtual bool16 IsAFrame() const = 0;

	/** Helper method that relies on GetFrameType().
	@return kTrue if the object is a page item, but not a frame.
	*/
	virtual bool16 IsNotAFrame() const = 0;

	/** Helper method that relies on GetFrameType().
	NOTE: "empty" means "no content, not even a placeholder".
	@return kTrue if the object is "empty".
	*/
	virtual bool16 IsEmpty() const = 0;

	/** Helper method that relies on GetFrameType().
	NOTE: "logically empty" includes graphic frames with placeholder content.
	@return kTrue if the object is "logically empty".
	*/
	virtual bool16 IsLogicallyEmpty() const = 0;
} ;

#endif	// __IFRAMETYPE__