//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/CErrorStringService.h $
//  
//  Owner: Jonathan W. Brown
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
#ifndef __CERRORSTRINGSERVICE__
#define __CERRORSTRINGSERVICE__

#include "CPMUnknown.h"
#include "IErrorStringService.h"

/**	Base class for implementing IErrorStringService.

	@ingroup arch_error
*/
class PUBLIC_DECL CErrorStringService : public CPMUnknown<IErrorStringService>
{
	typedef CPMUnknown<IErrorStringService> Inherited ;

public:
	CErrorStringService( IPMUnknown* boss, PluginID pluginPrefix, RsrcID errorStringTableRsrcID ) ;
	~CErrorStringService() ;
	
	virtual bool16 HasUserErrorString( ErrorCode errCode, IPMUnknown* errInfo ) const ;
	virtual PMString GetUserErrorString( ErrorCode errCode, IPMUnknown* errInfo ) const ;
	
	virtual bool16 HasUserErrorDescription( ErrorCode errCode, IPMUnknown* errInfo ) const ;
	virtual PMString GetUserErrorDescription( ErrorCode errCode, IPMUnknown* errInfo ) const ;

protected:
	PluginID	fPluginID ;
	RsrcID		fErrorStringTableRsrcID ;
} ;

#endif
