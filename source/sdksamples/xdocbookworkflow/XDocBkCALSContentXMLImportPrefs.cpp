//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/xdocbookworkflow/XDocBkCALSContentXMLImportPrefs.cpp $
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
#include "XDocBkID.h"

/** Implementation of IXMLImportPreferences, used by service that
	implements DocBook tables in CALS format.
	@ingroup xdocbookworkflow
*/
class XDocBkCALSContentXMLImportPrefs : public CXMLImportPreferences
{
public:	

	/**	Constructor
		@param boss reference to boss object aggregating this implementation
	 */
	XDocBkCALSContentXMLImportPrefs(IPMUnknown *boss);

	/**	Set up initial state of preferences in options pool in workspace
		@param pool workspace of interest 
		@precondition pool should allow IWorkspace to be instantiated
	 */
	virtual void Initialize(IXMLImportOptionsPool *pool);
};

CREATE_PMINTERFACE(XDocBkCALSContentXMLImportPrefs, kXDocBkCALSContentXMLImportPrefsImpl)

/*
*/
XDocBkCALSContentXMLImportPrefs::XDocBkCALSContentXMLImportPrefs(IPMUnknown *boss) :
CXMLImportPreferences(boss)
{}

/*
*/
void XDocBkCALSContentXMLImportPrefs::Initialize(IXMLImportOptionsPool *pool)
{
	if (fPool != pool)
	{
		// First initialize the fPool member for later access.
		fPool.reset(pool);
		ASSERT(fPool);
		if(fPool) {
			fPool->AddRef();
		}
		// Setting default to off: see API docs
		CXMLImportPreferences::AddPreference(WideString(kXDocBkCALSContentXMLImportPrefsKey), IXMLImportPreferences::kBool16, -1, kTrue);
	}
}

//  Code generated by DollyXS code generator
