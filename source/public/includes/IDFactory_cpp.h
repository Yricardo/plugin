//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/IDFactory_cpp.h $
//  
//  Owner: Michael Burbidge
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

#ifndef __IDFactory_cpp_h__
#define __IDFactory_cpp_h__

#include "IDFactory.h"

#ifdef REGISTER_OM_IDS

// ----- This is included from xxxID.cpp files to redefine DECLARE_PMID to actually
//		 define the factory that registers the ID with the object model.

#undef DECLARE_PMID

#if defined ORIGINAL_ENUM_DECLARE_PMID
	#define DECLARE_PMID(space, name, id) enum { name = id };\
	IDFactory g##name##IDFactory(space, #name, name);
#elif defined CONST_INT_DECLARE_PMID
	#define DECLARE_PMID(space, name, id) const int name = id;\
	IDFactory g##name##IDFactory(space, #name, name);
#elif defined NAMED_ENUM_DECLARE_PMID
	#define DECLARE_PMID(space, name, id) enum space##name {name = id};\
	IDFactory g##name##IDFactory(space, #name, name);
#endif

#endif // REGISTER_OM_IDS

#endif // __IDFactory_cpp_h__
