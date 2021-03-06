//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IApplicationDefaultsUtils.h $
//  
//  Owner: Brendan O'Shea
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
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __IAPPLICATIONDEFAULTSUTILS__
#define __IAPPLICATIONDEFAULTSUTILS__
#include "AppFrameworkID.h"
#include "IDFile.h"
// ===================================================================================
//	class IApplicationDefaultsUtils 
// ===================================================================================
//
//	usage: ec = Utils<IApplicationDefaultsUtils>()->SetDefaults( ... ) ;

class IApplicationDefaultsUtils : public IPMUnknown 
{
public:
	// ----- Constants -----
	enum {kDefaultIID = IID_IAPPLICATIONDEFAULTSUTILS};
	virtual	ErrorCode SetDefaults(uint32 languageRegionEnumeration) const = 0;
	virtual	ErrorCode SetDefaults(IDFile idmlFormattedDefaultsFile) const = 0;
};

#endif

