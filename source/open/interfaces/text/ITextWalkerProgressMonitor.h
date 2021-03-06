//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/interfaces/text/ITextWalkerProgressMonitor.h $
//  
//  Owner: Habib Khalfallah
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
#ifndef __ITextWalkerProgressMonitor__
#define __ITextWalkerProgressMonitor__

#include "TextWalkerServiceProviderID.h"
class RangeProgressBar;
class ITextWalkerProgressMonitor : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITEXTWALKERPROGRESSMONITOR};
	virtual RangeProgressBar* GetWalkerProgressMonitor() const = 0;	
	virtual void SetWalkerProgressMonitor( RangeProgressBar* info)  = 0;	
};

#endif
