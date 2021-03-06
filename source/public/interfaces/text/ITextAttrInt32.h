//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextAttrInt32.h $
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

#pragma once
#ifndef __ITextAttrInt32__
#define __ITextAttrInt32__

#include "IPMUnknown.h"
#include "TextAttrID.h"

/** Interface for a text attribute whose value is represented by a 32 bit integer.
	@ingroup text_attr
*/
class ITextAttrInt32 : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRINT32 };

		typedef int32		ValueType;

		typedef int32		value_type;

		/** A well-behaved implementation will enforce the limits, if any, returned by HasLimits().  If the value exceeds either limit, it should be set to that limit. */
		virtual void Set(value_type) = 0;

		/** */
		virtual value_type Get() const = 0;

		/** Report whether or not this attribute has upper and/or lower limits and what they are. The limits are the same units as the value.
		@param lLim IN If the return value is kTrue, is the lower limit of valid values.  (value will always be >= the returned value)
		@param uLim IN If the return value is kTrue, is the upper limit of valid values.  (value will always be <= the returned value)
		@return if the return value is kFalse the parameter values are undefined.
		@note the caller has ultimate responsibility for enforcing the limits.  i.e. although well-behaved implementations will enforce the limits, not all are.
				Also, how the limits are enforced may vary with each implementation - i.e. some silently ignore the invalid values, some set to the nearest limit.
		*/
		virtual bool16 HasLimits(value_type& lLim, value_type& uLim) const = 0;

		/** */
		value_type GetInt32() const { return Get(); }
		/** */
		void SetInt32(value_type  flag) { Set(flag); }
};

#endif
