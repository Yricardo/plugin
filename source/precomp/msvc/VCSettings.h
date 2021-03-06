//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/precomp/msvc/VCSettings.h $
//  
//  Owner: Michael Burbidge
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/03/30 22:32:42 $
//  
//  $Revision: #3 $
//  
//  $Change: 906971 $
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
#ifndef __VCSettings__
#define __VCSettings__

#define UNICODE
#define _UNICODE

#define WINVER        0x0600 
#define _WIN32_WINNT  0x0600
#define _WIN32_IE     0x0700

#define UISF_ACTIVE         0x4

#ifdef DEBUG
#define ASSERT_ON 1
#else
#undef ASSERT_ON
#endif // NOT DEBUG

#if defined _SECURE_SCL
	#if _SECURE_SCL != 0
		#error "Wrong setting for _SECURE_SCL, it must be defined as 0 (via preprocessor definition flag in the project)"
	#endif
#endif

#if defined _HAS_ITERATOR_DEBUGGING
	#if _HAS_ITERATOR_DEBUGGING != 0
		#error "Wrong setting for _HAS_ITERATOR_DEBUGGING, it must be defined as 0 (via preprocessor definition flag in the project)"
	#endif
#endif

// warning C4819: The file contains a character that cannot be represented in the current code page (932). Save the file in Unicode format to prevent data loss
#pragma warning (disable: 4819)

// warning C4996: '_swprintf' was declared deprecated
#pragma warning (disable: 4996)	

//pragma warning (disable: 4237)

// warning C4237: nonstandard extension used : 'bool' keyword is reserved for future use
#pragma warning(disable : 4237)
// warning C4068: unknown pragma
#pragma warning(disable : 4068)
// warning C4083: expected '('; found identifier 'Main'	-- (this warning is generated by an unknown pragma)
#pragma warning(disable : 4083)

// Remove these eventually.
// warning C4251: 'x' : class 'PMReal' needs to have dll-interface to be used by clients of class 'PMPoint'
#pragma warning(disable : 4251)
// warning C4275: non dll-interface class 'IEventHandler' used as base for dll-interface class 'CEventHandler'
#pragma warning(disable : 4275)

// warning C4273: 'QueryInterface' : inconsistent dll linkage.  dllexport assumed.
#pragma warning(disable : 4273)

// This is here because I don't know how to cast or whatever to turn it off.
// warning C4800: 'int' : forcing value to bool 'true' or 'false' (performance warning)
#pragma warning(disable : 4800)

// warning C4244: 'return' : conversion from 'unsigned long' to 'long', possible loss of data
#pragma warning(disable : 4244)

//warning C4018: '<' : signed/unsigned mismatch
#pragma warning(disable : 4018)

// warning C4661: 'K2Vector<T>::Method K2Vector<T>::ForceInstantiation(int)' : no suitable definition provided for explicit template instantiation request
#pragma warning(disable : 4661)

// warning C4146: unary minus operator applied to unsigned type, result still unsigned
#pragma warning(disable : 4146)

//warning C4290: C++ exception specification ignored except to indicate a function is not __declspec(nothrow)
#pragma warning(disable : 4290)

// Turn OFF automatic library selection "feature" for boost
// (see http://boost.org/more/separate_compilation.html)
#ifndef BOOST_ALL_NO_LIB
#define BOOST_ALL_NO_LIB 
#endif

#ifndef __TBB_NO_IMPLICIT_LINKAGE
#define __TBB_NO_IMPLICIT_LINKAGE 1
#endif

#endif // __VCSettings__
