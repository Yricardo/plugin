//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextAttrPoint.h $
//  
//  Owner: ekenning
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
#ifndef __ITextAttrPoint__
#define __ITextAttrPoint__

#include "IPMUnknown.h"
#include "TextAttrID.h"

class PMPoint;

/** Interface for a text attribute whose value is represented as a point.
	@ingroup text_attr
*/
class ITextAttrPoint : public IPMUnknown
{
	public:
		enum { kDefaultIID = IID_ITEXTATTRPOINT };

		typedef const PMPoint&		ValueType;

		/** */
		void Set(ValueType flag)
			{ SetPoint(flag); }
		/** */
		ValueType Get() const
			{ return GetPoint(); }

		/** */
		virtual const PMPoint& GetPoint() const = 0;
		/** */
		virtual void SetPoint(const PMPoint& ss) = 0;
};

#endif
		//__ITextAttrPoint__
