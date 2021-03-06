//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/publiclib/files/MResChainChecker.cpp $
//  
//  Owner: robin briggs
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

#include "MResChainChecker.h"

//========================================================================================
//	Class MResChainChecker
//========================================================================================

MResChainChecker::MResChainChecker(const char* msg)  : fOldCurRes(::CurResFile()), fMsg(msg) { }

MResChainChecker::~MResChainChecker()
{
    if(MResChainChecker::kResChainCheckerEnabled)
        ASSERT_MSG(fOldCurRes == ::CurResFile(),fMsg.c_str());
}
    
bool MResChainChecker::IsEnabled(){ return MResChainChecker::kResChainCheckerEnabled; }

// This is included so that ResChainChecker can be enabled from the debugger
// Ideally it would be const, but then GCC will optimize it out.
bool MResChainChecker::kResChainCheckerEnabled = false;
