//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/interactive/IButtonIdentifier.h $
//  
//  Owner: Mitch Coleman
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
#ifndef __IButtonIdentifier_h__
#define __IButtonIdentifier_h__

#include "IPMUnknown.h"
#include "FormFieldID.h"

//=============================================================================

/** Identifies a page item as a Multi-State Object.  These objects shouldn't be
    placed within one another.
*/
class IButtonIdentifier : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IBUTTONIDENTIFIER };
};

//=============================================================================

#endif // __IButtonIdentifier_h__

