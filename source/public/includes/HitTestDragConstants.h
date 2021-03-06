//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/HitTestDragConstants.h $
//  
//  Owner: jargast
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
#ifndef __HitTestDragConstants__
#define __HitTestDragConstants__

// Changing these will globally affect how we hit test and what distance the user must
// move before an item is edited or created.

const int32 kHitTestTolerance	= 2;
const int32 kMinDragDistance	= 3;
const int32 kHitTestBBoxTolerance	= 4;
const uint32 kMinConstrainedDragDistance = 5;
const int32 kHitTestMoreGenerousTolerance = 6;
const int32 kHitTestFreeTransformTolerance = 10;
const uint32 kAutoScrollDelay  = 10;		// Number of 60ths of a second between drop target autoscrolls. Prevents scrolling too fast.
const uint32 kFastAutoScrollDelay  = 7;		// Number of 60ths of a second between drop target autoscrolls. Used for views that want to scroll a little faster.
const uint32 kMinAutoScrollDelay  = 3;		// Number of 60ths of a second between drop target autoscrolls. Used for views that want to scroll even faster. This is the limit!
const PMReal kDragMotionIsSlowThreshhold = 8.0;	// Minimum distance between mouse moves to avoid extra calls to ISnapTo
const uint32 kInitialCompositionThreshold = 60;	// Number of 60ths of a second before patient user operations triggers composition when dragging items
const uint32 kSubsequentCompositionThreshold = 30;	// Number of 60ths of a second before subsequent patient user operations trigger composition when dragging items
const uint32 kPatientUserMinDragTicks = 30;		// Number of 60ths of a second before patient user will kick in if mouse hasn't moved kMinDragDistance. Prevents a click from accidentally moving an item.
const int32 kEmitHandleShapeThreshold = 250;		// Number of handles to put into a path before performing a fill/stroke operation. Comes into play with page items with lots of path points.
#endif
