//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextAttrClauseMode.h $
//  
//  Owner: Michiko Jessett
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
#ifndef __ITextAttrClauseMode__
#define __ITextAttrClauseMode__

#include "IPMUnknown.h"
#include "IIMEAttrStyle.h"

/** 
	@ingroup text_attr
*/
class ITextAttrClauseMode : public IPMUnknown
{
	public:
//		enum { kDefaultIID = IID_ITEXTATTRBOOLEAN };
		
		typedef IIMEAttrStyle::IMEClauseMode		ValueType;

		void Set(ValueType flag)
			{ SetMode(flag); }
		ValueType Get() const
			{ return GetMode(); }

		virtual void SetMode(IIMEAttrStyle::IMEClauseMode mode) = 0;
		virtual IIMEAttrStyle::IMEClauseMode GetMode() const = 0;
};

#endif
// __ITextAttrClauseMode__
