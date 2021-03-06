//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/xmlcataloghandler/XCatHndErrorStringService.cpp $
//  
//  Owner: Adobe Developer Technologies
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

#include "VCPlugInHeaders.h"

#include "CErrorStringService.h"

#include "XCatHndID.h"


/** Implements IErrorStringService to provide friendly errors
	when we set the global error code with our own error-codes (in the
	span of this plug-in's prefix)
	@ingroup xmlcataloghandler
*/
class XCatHndErrorStringService : public CErrorStringService
{
public:
	/** Constructor */
	XCatHndErrorStringService( IPMUnknown* boss ) :
	  CErrorStringService( boss, kXCatHndPluginID, kXCatHndErrorStringTableRsrcID ) {}
} ;

CREATE_PMINTERFACE( XCatHndErrorStringService, kXCatHndErrorStringServiceImpl )

//  Code generated by DollyXS code generator
