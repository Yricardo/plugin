//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/publiclib/strings/CErrorStringService.cpp $
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

#include "VCPublicHeaders.h"
#include "CErrorStringService.h"

#include "ErrorUtils.h"

CErrorStringService::CErrorStringService( IPMUnknown* boss, PluginID pluginID, RsrcID errorStringTableRsrcID ) :
	Inherited( boss ),
	fPluginID( pluginID ),
	fErrorStringTableRsrcID( errorStringTableRsrcID )
{
}

CErrorStringService::~CErrorStringService()
{
}

bool16 CErrorStringService::HasUserErrorString( ErrorCode errCode, IPMUnknown* errInfo ) const
{
	return ( ( errCode & 0xffffff00 ) == ( fPluginID & 0xffffff00 ) ) ;
}	

PMString CErrorStringService::GetUserErrorString( ErrorCode errCode, IPMUnknown* errInfo ) const
{	
	return ErrorUtils::PMLoadErrorStringFromRsrc( errCode, fPluginID, fErrorStringTableRsrcID ) ;
}

bool16 CErrorStringService::HasUserErrorDescription( ErrorCode errCode, IPMUnknown* errInfo ) const
{
	return kFalse ;
}

PMString CErrorStringService::GetUserErrorDescription( ErrorCode errCode, IPMUnknown* errInfo ) const
{
	return PMString() ;
}
