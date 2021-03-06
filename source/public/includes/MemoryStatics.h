//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/MemoryStatics.h $
//  
//  Owner: ?
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/04/27 23:40:40 $
//  
//  $Revision: #2 $
//  
//  $Change: 910020 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#ifndef __MemoryStatics__
#define __MemoryStatics__

// This definition is checked for elsewhere as a sanity check to make sure we aren't
// missing this header (and thus missing our new/delete) in InDesign / plug-in code.

#define INCLUDED_MEMORY_STATICS 1	


#ifdef MACINTOSH
#include <new>
#endif

#ifndef PLATFORM_ALLOCATOR_TEST

#ifdef WINDOWS

// On Windows, these are exported from PMRuntime.
// NOT CURRENTLY TRUE:  On the Mac, these are in MemoryStatics.cpp which is present in (but not exported from) each linkage unit

void* operator new(size_t size) throw (std::bad_alloc);

void* operator new[](size_t size) throw (std::bad_alloc);

void operator delete(void*p) throw();

void operator delete[](void*p) throw();

void* operator new(size_t size, const std::nothrow_t&) throw();

void* operator new[](size_t size, const std::nothrow_t&) throw();

void operator delete(void*p, const std::nothrow_t&) throw();

void operator delete[](void*p, const std::nothrow_t&) throw();

void * operator new(size_t size, short temporary);	// [][] get rid of these, temporary memory does nothing special anymore

void * operator new[](size_t size, short temporary);	// [][] get rid of these, temporary memory does nothing special anymore

#endif

#ifdef MACINTOSH

#include <new>

// These new and delete operators must be forced inline, because if code is actually
// generated for them, new and delete are always default visibility and they will
// be exported from where they are generated, which causes link problems with libraries, etc...

namespace K2Memory	// in PMRuntime
{
	__attribute__ ((visibility("default"))) void *RTLCompatibleNewDelegate (size_t size);

	__attribute__ ((visibility("default"))) void *RTLCompatibleNewArrayDelegate (size_t size);

	__attribute__ ((visibility("default"))) void RTLCompatibleDeleteDelegate (void *p);

	__attribute__ ((visibility("default"))) void RTLCompatibleDeleteArrayDelegate (void *p);
};

// both "inline" and "__attribute__ ((__always_inline__))" are reqyured
#define FORCE_INLINE inline __attribute__ ((__always_inline__))

FORCE_INLINE void* operator new(size_t size) throw (std::bad_alloc)
{
	// Doesn't actually throw
	return K2Memory::RTLCompatibleNewDelegate (size);
}

FORCE_INLINE void* operator new[](size_t size) throw (std::bad_alloc)
{
	// Doesn't actually throw
	return K2Memory::RTLCompatibleNewArrayDelegate (size);
}

FORCE_INLINE void operator delete(void*p) throw()
{
	K2Memory::RTLCompatibleDeleteDelegate (p);
}

FORCE_INLINE void operator delete[](void*p) throw()
{
	K2Memory::RTLCompatibleDeleteArrayDelegate (p);
}


FORCE_INLINE void* operator new(size_t size, const std::nothrow_t&) throw()
{
	return K2Memory::RTLCompatibleNewDelegate (size);
}

FORCE_INLINE void* operator new[](size_t size, const std::nothrow_t&) throw()
{
	return K2Memory::RTLCompatibleNewArrayDelegate (size);
}

FORCE_INLINE void operator delete(void*p, const std::nothrow_t&) throw()
{
	K2Memory::RTLCompatibleDeleteDelegate (p);
}

FORCE_INLINE void operator delete[](void*p, const std::nothrow_t&) throw()
{
	K2Memory::RTLCompatibleDeleteArrayDelegate (p);
}

FORCE_INLINE void * operator new(size_t size, short temporary)
{
	#pragma unused(temporary)
	// [][] get rid of these, temporary memory does nothing special anymore
	return K2Memory::RTLCompatibleNewDelegate (size);
}

FORCE_INLINE void * operator new[](size_t size, short temporary)
{
	#pragma unused(temporary)
	// [][] get rid of these, temporary memory does nothing special anymore
	return K2Memory::RTLCompatibleNewArrayDelegate (size);
}

#endif // MACINTOSH

#endif // !PLATFORM_ALLOCATOR_TEST

#endif // __MemoryStatics__


