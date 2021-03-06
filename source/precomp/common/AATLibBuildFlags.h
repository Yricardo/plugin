//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/precomp/common/AATLibBuildFlags.h $
//  
//  Owner: Douglas Resnick
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2013/09/16 14:59:15 $
//  
//  $Revision: #1 $
//  
//  $Change: 859056 $
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
#include "GeneralBuildFlags.h"

#ifndef AATLIB_DECL
	#define AATLIB_DECL DLL_EXPORT_DECL
#endif

#ifndef PLUGIN_DECL
	#define PLUGIN_DECL DLL_IMPORT_DECL
#endif

#define AATLIB_BUILD 1

// PLUGIN enables correct resource and quickdraw global access.
// While a plugin is in fact a shared library, PLUGIN is considered
// less strict than using the symbol SHAREDLIBRARY, which is also
// used to turn off some application specific behavior in plugins
// (such as the installation of test menus).
//#define PLUGIN 1
