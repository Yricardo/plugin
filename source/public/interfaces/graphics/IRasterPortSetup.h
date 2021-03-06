//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IRasterPortSetup.h $
//  
//  Owner: fhaberma
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
#ifndef __IRasterPortSetup__
#define __IRasterPortSetup__

#include "IPMUnknown.h"

class IRasterPort;

/**
 An interface for setting up additional information in a raster port. For 
 instance, this is used to ensure that a raster port has the correct profile 
 installed. Called implicitly by GraphicsUtils::SetupRasterPort
 
 kRasterPortSetupService services must implement this interface.
 
 @see IRasterPort
 @see GraphicsUtils::SetupRasterPort
 */
class IRasterPortSetup : public IPMUnknown
{
public:
		/**
		 Adds additional info to the raster port, or does special stuff when a 
		 raster port is being created
		 
		 @param rPort		The port to set up
		 @return kTrue if successful, else kFalse
		 */
		virtual bool16 Setup(IRasterPort *rPort) = 0;		
};

#endif