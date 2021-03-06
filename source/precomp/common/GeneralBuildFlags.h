//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/precomp/common/GeneralBuildFlags.h $
//  
//  Owner: Lonnie Millett
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/05/20 09:30:47 $
//  
//  $Revision: #8 $
//  
//  $Change: 912776 $
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
//  For CodeWarrior the symbol __INTEL__ is defined if building for Windows.
//  If using Visual C++ then _MSC_VER is defined. [amb-cwi86]
//  
//  make sure we get MACINTOSH or WINDOWS defined correctly for ODFRC
//  
//========================================================================================

#pragma once
#ifdef __ODFRC__
	#ifdef __WINDOWS__
		#ifndef WINDOWS
			#define WINDOWS 1
		#endif
	#else
		#ifndef MACINTOSH
			#define MACINTOSH 1
		#endif
	#endif
#endif

#if defined _WIN32 && defined _MSC_VER
	// The Microsoft Visual C++ compiler is being used to generate
	// code for the WIN32 platform.
	//
	// The Visual C++ compiler by default defines WIN32 and _WINDOWS but
	// we don't need these defined in the project settings.  Instead we
	// count on the fact that the compiler internally defines _WIN32 and
	// _MSC_VER.  We define WINDOWS ourself right here.

#define WINDOWS 1

#ifndef PMRESOURCE
#include "VCSettings.h"
#endif

#elif defined UNIX

#elif !defined WINDOWS && !defined __INTEL__
	// Building for Macintosh
//pragma once on - causes boost problems and weird behaviour
#define MACINTOSH 1
#endif

// Move the actual compiler macros to a central location - djb
//	see http://gcc.gnu.org/wiki/Visibility
#ifdef __GNUC__
	#define DLL_IMPORT_DECL __attribute__ ((visibility("default")))
	#define DLL_EXPORT_DECL __attribute__ ((visibility("default")))
	#define LOCAL_DECL 	__attribute__ ((visibility("hidden")))
	#define INTERFACE_DECL 	__attribute__ ((visibility("default")))
#elif defined _WIN32 && defined _MSC_VER
	#define DLL_IMPORT_DECL __declspec(dllimport)
	#define DLL_EXPORT_DECL __declspec(dllexport)
	#define LOCAL_DECL
	#define INTERFACE_DECL
#endif

// This keyword is for code that is obsolete, but is present so that client
// code can still run. We anticipate that what is DEPRECATED in version x, 
// will be removed completely in version x + 1.
#define ID_DEPRECATED

#define USEPMTYPES 1
#define SKIPOMPARSE 1
#if !defined(OLDROUTINENAMES)
	#define OLDROUTINENAMES	0
#endif

// Should undef (i.e. comment out) before product ships!!!
// See comments in PMNew.cpp about this flag
//#define PLATFORM_ALLOCATOR_TEST 1

// Turned off for R5 -- May, 2015
//#define PRERELEASE	1		//Please undef before product ships!!!

// Use this flag to create a build that will turn off the
// "edited with prerelease" flag in the Content Manager.
#define BRIDGEBUILD	0

// Turned off for R5 -- May, 2015
// Should undef before product ships!!!
//#define BENCHMARK_ONLY 1  //Used for benchmark specific code

//#define REMOVED_JBX_FOR_CS3	1	// Used for jbx
//#ifndef qME
//#define qME 1
//#endif
#if !defined(qME)
#define DISPLAY_CELLS_IN_STORY 1
#endif

