//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/xmlcataloghandler/XCatHndAcquirerXMLImportPrefs.cpp $
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

// Interface includes
#include "IXMLImportOptionsPool.h"

// General includes
#include "CXMLImportPreferences.h"
#include "XCatHndID.h"

/** Implementation of IXMLImportPreferences, rely on clients (like XDocBookWorkflow/UI)
	turning on this preference.

	@ingroup xmlcataloghandler
*/
class XCatHndAcquirerXMLImportPrefs : public CXMLImportPreferences
{
public:	

	/**	Constructor
		@param boss reference to boss object aggregating this implementation
	 */
	XCatHndAcquirerXMLImportPrefs(IPMUnknown *boss);

	/**	@see CXMLImportPreferences::Initialize
	 */
	virtual void Initialize(IXMLImportOptionsPool *pool);
};

CREATE_PMINTERFACE(XCatHndAcquirerXMLImportPrefs, kXCatHndAcquirerXMLImportPrefsImpl)

/*
*/
XCatHndAcquirerXMLImportPrefs::XCatHndAcquirerXMLImportPrefs(IPMUnknown *boss) :
CXMLImportPreferences(boss)
{}

/*
*/
void XCatHndAcquirerXMLImportPrefs::Initialize(IXMLImportOptionsPool *pool)
{
	if (fPool != pool)
	{
		// First initialize the fPool member for later access.
		fPool.reset(pool);
		ASSERT(fPool);
		if(fPool) {
			fPool->AddRef();
		}	
		// Default to turn the acquirer from this plug-in on
		bool16 isEnabled = kTrue;
		CXMLImportPreferences::AddPreference(WideString(kXCatHndAcquirerXMLImportPrefsKey), 
								IXMLImportPreferences::kBool16, -1, isEnabled);
	}
}

//  Code generated by DollyXS code generator