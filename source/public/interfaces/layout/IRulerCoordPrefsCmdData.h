//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/IRulerCoordPrefsCmdData.h $
//  
//  Owner: Yeming Liu
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
//  Comment:  Ruler per page or Ruler per spread 
//  
//========================================================================================

#pragma once
#ifndef __IRulerCoordPrefsCmdData__
#define __IRulerCoordPrefsCmdData__

#include "IPMUnknown.h"
#include "IRulerCoordinatePrefs.h"

class IRulerCoordPrefsCmdData : public IPMUnknown
{
public:
	virtual void Set(	
						const	UIDRef&	doc, 			/* which document to affect */
						const	IRulerCoordinatePrefs::RulerCoordinateType rulerType	/* ruler per page, ruler per spread or zero point on spine */
					) = 0;

	virtual const UIDRef& GetDocument() const = 0;
			
	virtual const IRulerCoordinatePrefs::RulerCoordinateType GetRulerPerPage() const = 0;
			
	virtual const void SetRulerPerPage(const IRulerCoordinatePrefs::RulerCoordinateType rulerType) = 0;
};

#endif // __IRulerCoordPrefsCmdData__
