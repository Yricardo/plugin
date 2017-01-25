//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/RsrcSpec.h $
//  
//  Owner: Michael Burbidge
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
#ifndef __RsrcSpec_h__
#define __RsrcSpec_h__

#include "PMLocaleId.h"

/** Class used to specify a resource.
			
		IDResourceShell::GetResource takes a RsrcSpec. By default you can create
		a resource spec by giving it a type and id. But if you are iterating over all
		resources of a given type you can set the optionaly third parameter, byID, to false. This
		will treat the ID field as an index. This class makes it so that we don't have to
		overload every method in shuksan that takes a resource type and id to be able to
		specify type and index.
*/
class RsrcSpec
{
public:
	/** Empty Contructor - creates an invalid resource*/
	RsrcSpec() :
		fLocaleId(k_enUS),
		fPluginID(kInvalidPlugin),
		fType(0x34343434),
		fIndexOrID(0),
		fByID(kTrue)
	{
	}
	/** Constructor - specify a resource by type and ID (or index) */
	RsrcSpec(const RsrcType& type, const RsrcID& indexOrID, bool16 byID = kTrue) :
		fLocaleId(k_enUS),
		fPluginID(kInvalidPlugin),
		fType(type),
		fIndexOrID(indexOrID),
		fByID(byID)
	{
	}
			
	/** Constructor - specify a resource by type and ID (or index) and pluginID */
	RsrcSpec(PluginID pluginID, const RsrcType& type, const RsrcID& indexOrID, bool16 byID = kTrue) :
		fLocaleId(k_enUS),
		fPluginID(pluginID),
		fType(type),
		fIndexOrID(indexOrID),
		fByID(byID)
	{
	}
	
	/** Constructor - specify a resource by type and ID (or index) and pluginID and for a specific localeID */
	RsrcSpec(const PMLocaleId& localeId, PluginID pluginID, const RsrcType& type, const RsrcID& indexOrID, bool16 byID = kTrue) :
		fLocaleId(localeId),
		fPluginID(pluginID),
		fType(type),
		fIndexOrID(indexOrID),
		fByID(byID)
	{
	}
	
	/** Copy Contructor */
	RsrcSpec(const RsrcSpec& spec) :
		fLocaleId(spec.fLocaleId),
		fPluginID(spec.fPluginID),
		fType(spec.fType),
		fIndexOrID(spec.fIndexOrID),
		fByID(spec.fByID)
	{
	}
		
	/** Assignment operator */
	RsrcSpec& operator=(const RsrcSpec& spec)
	{
		if (this != &spec)
		{
			fLocaleId = spec.fLocaleId;
			fPluginID = spec.fPluginID;
			fType = spec.fType;
			fIndexOrID = spec.fIndexOrID;
			fByID = spec.fByID;
		}
		
		return *this;
	}
	
	/** Get the locale ID */
	PMLocaleId GetLocaleID() const { return fLocaleId; }
	/** Get the plugin ID */
	PluginID GetPluginID() const { return fPluginID; }
	/** Get the resource type */
	RsrcType GetType() const { return fType; }
	/** Get the resource ID (or index if RsrcApec was constructed with fByID == kFalse */
	RsrcID GetIndexOrID() const { return fIndexOrID; }
	/** Get the flag controllong whether it refers to resources by index or ID (kTrue by default, meaning by ID) */
	bool16 GetByID() const { return fByID; }

private:
	PMLocaleId		fLocaleId;
	PluginID		fPluginID;
	RsrcType		fType;
	RsrcID			fIndexOrID;
	bool16			fByID;	
};

#endif // __RsrcSpec_h__
