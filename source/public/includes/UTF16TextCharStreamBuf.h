//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/UTF16TextCharStreamBuf.h $
//  
//  Owner: Chris Parrish
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
#ifndef __UTF16TextCharStreamBuf__
#define __UTF16TextCharStreamBuf__

//----- Std Lib
#include <streambuf>


namespace K2
{
	typedef	std::char_traits<UTF16TextChar>	UTF16TextCharTraits;

template<class _Elem,
	class _Traits>
	class basic_utf16textcharbuf
		: public std::basic_streambuf<_Elem, _Traits>
	{
	public:
		virtual bool16 checkIOStatus() = 0;
	};

	typedef basic_utf16textcharbuf<UTF16TextChar, UTF16TextCharTraits > UTF16TextCharStreamBuf;
}

#endif //__UTF16TextCharStreamBuf__

