//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/IOperatedReplacementsInfo.h $
//  
//  Owner: HabibK
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
#ifndef __OperatedReplacementsInfo__
#define __OperatedReplacementsInfo__

#include "IPMUnknown.h"
#include "TextID.h"
#include "K2Vector.h"
#include "ITextModel.h"

class WideString;

/** Used to hold the string to insert into a text story with the InsertTextCmd
	@ingroup text_find
*/
class IOperatedReplacementsInfo : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_IOPERATEDREPLACEMENTSINFO };

		virtual void SetOperatedReplacementsInfo(const boost::shared_ptr<ITextModel::ReplacementList>& replacementList) = 0;
		virtual const boost::shared_ptr<ITextModel::ReplacementList>&  GetOperatedReplacementsInfo() const = 0;
};

#endif

