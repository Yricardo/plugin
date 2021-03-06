//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/ParcelKey.h $
//  
//  Owner: dwaterfa
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
//  Purpose of Interface:
//  
//========================================================================================

#pragma once
#ifndef __ParcelKey__
#define __ParcelKey__

#ifdef DEBUG
#include "PMString.h"
#endif

class IPMStream;

#pragma export on
class PUBLIC_DECL ParcelKey
{
	public:
		ParcelKey();

		bool16		operator==(const ParcelKey& other) const
			{ return fV == other.fV; }

		bool16		operator!=(const ParcelKey& other) const
			{ return !(*this == other); }

		bool16		operator<(const ParcelKey& other) const
			{ return fV < other.fV; }

		bool16		IsValid() const
			{ return (this->fV != 0); }

		void		SetInvalid()
			{ fV = 0; }

		void		ReadWrite(IPMStream*);

#ifdef DEBUG
		PMString 	ToHex() const
			{ char buf[10]; sprintf(buf, "0x%lx", fV); return PMString(buf); }

		PMString	ToDec() const
			{ char buf[10]; sprintf(buf, "%ld", fV); return PMString(buf); }
#endif

		typedef base_type	data_type;

	protected:
		uint32	fV;
};
#pragma export off

#endif // __ParcelKey__

