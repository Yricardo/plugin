//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/IQuoteTable.h $
//  
//  Owner: Adnan_Sulejmanpasic
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
#ifndef __IQuoteTable__
#define __IQuoteTable__

#include "IPMUnknown.h"
#include "QuoteEntry.h"
#include "K2Vector.h"

typedef K2Vector<QuoteEntry> QuoteEntryList;

/** 
	@ingroup text_quote
*/
class IQuoteTable : public IPMUnknown
{

public:
	
	enum { kDefaultIID = IID_IQUOTETABLE };
	
	virtual const QuoteEntry& GetTypographersQuotes(int32 index) const = 0;

	virtual const UTF32TextChar GetTypographersQuotes(const PMString& aName, const ILanguage::QuotationType nType, const ILanguage::QuotationPosition nPosition) = 0;
	
	virtual void SetTypographersQuotes(InterfacePtr<ILanguage>& pLanguage, const UTF32TextChar leftSingle, const UTF32TextChar rightSingle,
										const UTF32TextChar leftDouble, const UTF32TextChar rightDouble) = 0;

	virtual void ResetTable() = 0;

	virtual int32 IsLanguageInTable(const PMString& aName) const = 0;

	virtual int16 GetNumLanguages() const = 0;
};

#endif
