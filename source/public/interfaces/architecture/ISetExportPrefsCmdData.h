//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/ISetExportPrefsCmdData.h $
//  
//  Owner: Michael Easter
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
//  ADOBE CONFIDENTIAL
//  
//========================================================================================

#pragma once
#ifndef __ISetExportPrefsCmdData__
#define __ISetExportPrefsCmdData__

// ----- Includes -----
#include "IPMUnknown.h"
#include "ImportExportUIID.h"

class PMString;


class ISetExportPrefsCmdData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ISETEXPORTPREFSCMDDATA };
	
	virtual void Set(const PMString& directory, const PMString& fileName) = 0;

	virtual void SetDirectory(const PMString& directory) = 0;
	virtual PMString GetDirectory() const = 0;

	virtual void SetFileName(const PMString& fileName) = 0;
	virtual PMString GetFileName() const = 0;
};

#endif	// __ISetExportPrefsCmdData__
