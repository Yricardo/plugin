//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/codesnippets/SnpXMLResolutionHelper.cpp $
//  
//  Owner:	Heath Lynn
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
#include "IPlugInList.h"
#include "IObjectModel.h"
#include "SnpXMLResolutionHelper.h"
#include "SDKDef.h"
#include "DebugClassUtils.h"

#ifdef DEBUG
#define RESOLVE_ID(id) \
	PMString retval("?"); \
	DebugClassUtilsBuffer buffer; \
	DebugClassUtils::GetIDName(&buffer, id); \
	retval.SetCString(buffer, PMString::kUnknownEncoding); \
	return retval;
#else
#define RESOLVE_ID(id) \
	PMString retval("?"); \
	char buffer[250]; \
	sprintf( buffer, "%#x", id.Get()); \
	retval.SetCString(buffer, PMString::kUnknownEncoding); \
	return retval;
#endif

SnpXMLResolutionHelper::	SnpXMLResolutionHelper()
{
}

SnpXMLResolutionHelper::~SnpXMLResolutionHelper()
{

}

PMString SnpXMLResolutionHelper::ResolveAction(ActionID id)
{
	RESOLVE_ID(id)
}
PMString SnpXMLResolutionHelper::ResolveClass(ClassID id)
{
	RESOLVE_ID(id)
}

PMString SnpXMLResolutionHelper::ResolveImplementation(PMIID id)
{
	RESOLVE_ID(id)
}

