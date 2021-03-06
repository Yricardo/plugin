//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/icurvefit.h $
//  
//  Owner: dstephen
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
//  Purpose:
//  Given a set of polygonal points, create a bezier which approximates the polygon.
//  
//========================================================================================

#pragma once
#ifndef __ICurveFit__
#define __ICurveFit__

#include "IPMUnknown.h"

class IOutlineInfo;
class IPathGeometry;
class PMReal;

class ICurveFit : public IPMUnknown
{
public:

	virtual ErrorCode Smooth
		( 
			const IPathGeometry*  	pathData, 		// Input data

			IPathGeometry* 			curves, 	// resulting path(s)
			
			const PMReal& pointTolerance,	// Fidelity tolerance (in the units of the input data).  
											// The smaller the number the tighter the fit and the more segments you'll have.
			
			const PMReal& cornerTolerance,	// Corner angle threshold in degrees. 180 turns off corner finding.

			const PMReal& smoothingTolerance, // controls smoothing.  Use 0 to turn smoothing off.  Smoothing tolerances
											// are typically specified in decibels, where the ranges 0 to 40,
											// 40 to 80 and 80 to 120 dbs correspond to large, moderate and small
											// amounts of smoothing.  For interactive smothing of small bumps or
											// flat spots on curves, I use about 50 to 60 dbs.

			int16 noiseFilterLevel			// number of passes through a guassian noise filter before smoothing.
											// For data digitized from the mouse or a tablet, I use 4.  This value
											// is an integer in the range 0 to about 12.  0 turns off denoising.  A
											// value too large will cause the corner finder to fail, because sharp 
											// corners will have a tendency to be seen as noise and be removed.
		) const = 0;
};

#endif
