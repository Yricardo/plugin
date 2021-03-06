//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IPDFPostProcessPrefs.h $
//  
//  Owner: Michelle Dalton
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
#ifndef __IPDFPostProcessPrefs__
#define __IPDFPostProcessPrefs__

#include "PDFID.h"

/** Interface used to maintain persistent PDF preference data not part of the standard IPDFExportPrefs.

@author Steve Flenniken
*/

class IPDFPostProcessPrefs : public IPMUnknown
{
public:
	enum {kDefaultIID = IID_IPDFPOSTPROCESSPREFS};

	/** Method to copy the specified preferences to this object.
        @param prefsToCopy are the preferences to copy.
	*/
	virtual void CopyPrefs(IPDFPostProcessPrefs* prefsToCopy) = 0;

	/** Standard method to presist this object.
        @param iPMStream is the stream to use for read or write.
        @param prop is the implementation id.
	*/
	virtual void ReadWrite (IPMStream* iPMStream, ImplementationID prop) = 0;

	virtual void SetViewAfterExport(bool16 viewAfterExport) = 0;
	virtual bool16 GetViewAfterExport() const = 0;
};

#endif
