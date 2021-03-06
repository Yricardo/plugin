//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/basicme/BscMEScript.cpp $
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

// Interface includes:

// General includes:
#include "CProxyScript.h"

// Project includes:
#include "BscMEID.h"
#include "BscMEScriptingDefs.h"

/** Implements IScript via partial implementation CProxyScript.
*/
class BscMEScript : public CProxyScript
{
public:
	/** Constructor */
	BscMEScript(IPMUnknown* boss);

	/** Destructor */
	virtual ~BscMEScript(void);
};

/* Make the implementation available to the application.
*/
CREATE_PMINTERFACE(BscMEScript, kBscMEScriptImpl)

/* Constructor
*/
BscMEScript::BscMEScript(IPMUnknown* boss) : 
	CProxyScript(boss)
{
	// declare the script object ID 

	// NOTE: this ScriptID must match that used in the call to 
	// IScriptUtils::CreateProxyScriptObject in BscMEScriptProvider::AccessProperty (for p_BscME)
	// and BscMEScriptProvider::AppendNthObject.
	fObjectType = c_BscME;
}

/*
*/
BscMEScript::~BscMEScript(void)	
{
	// Do nothing.
}

// End, BscMEScript.cpp.

