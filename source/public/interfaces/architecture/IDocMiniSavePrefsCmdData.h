//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IDocMiniSavePrefsCmdData.h $
//  
//  Owner: Roey Horns
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
#ifndef __IDocMiniSavePrefsCmdData__
#define __IDocMiniSavePrefsCmdData__

#include "IPMUnknown.h"

class IDocument;

class IDocMiniSavePrefsCmdData : public IPMUnknown
{
public:
	virtual void SetDocument(IDocument *theDocument) = 0;
	virtual IDocument *GetDocument() const = 0;
	
	virtual void SetInterval(uint32 newInterval) = 0;
	virtual uint32 GetInterval() const = 0;
	
	virtual uint32 GetMinInterval() const = 0;
	virtual uint32 GetMaxInterval() const = 0;
	
	virtual bool16 IsValid() const = 0;
};


#endif // __IDocMiniSavePrefsCmdData__
