//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextAttrUID.h $
//  
//  Owner: Eric_Kenninga
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

#ifndef __ITextAttrUID__
#define __ITextAttrUID__

#include "IPMUnknown.h"
#include "TextAttrID.h"

/** 
	@ingroup text_attr
*/
class ITextAttrUID : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRUID };
		
		typedef UID		ValueType;

		void Set(ValueType flag)
			{ SetUIDData(flag); }
		ValueType Get() const
			{ return GetUIDData(); }

		virtual UID GetUIDData() const = 0;
		virtual void SetUIDData(UID newColor) = 0;
};

#endif
