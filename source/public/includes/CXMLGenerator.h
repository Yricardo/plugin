//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/CXMLGenerator.h $
//  
//  Owner: Lonnie Millett
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

#pragma once
#ifndef __CXMLGenerator_h__
#define __CXMLGenerator_h__

#include "IXMLGenerator.h"
#include "CPMUnknown.h"

#ifdef __clang__
template class PUBLIC_DECL CPMUnknown<IXMLGenerator>;
#endif

class PUBLIC_DECL CXMLGenerator : public CPMUnknown<IXMLGenerator>
{
public:
	CXMLGenerator(IPMUnknown *boss);
		
	virtual void GenerateBeginTag(IXMLOutStream *s);
	virtual void CollectAttributes(IXMLOutStream *s, IXMLOutStream::AttributeList *attrs);
	virtual void GenerateContent(IXMLOutStream *s, int32 beforeChildIndex = 0);
	virtual void GenerateEndTag(IXMLOutStream *s);
};

#endif
