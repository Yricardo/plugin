//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/private/toolkit/interfaces/IDiagLogModifier.h $
//  
//  Owner: gxiao 
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2013/09/16 14:59:15 $
//  
//  $Revision: #1 $
//  
//  $Change: 859056 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and may be covered by U.S. and Foreign Patents,
//  patents in process, and are protected by trade secret or copyright law.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//========================================================================================

#pragma once
#ifndef __IDiagLogModifier__
#define __IDiagLogModifier__

#include "IDiagLoggingAPI.h"

#include "DiagnosticLogID.h"

class IDiagLogModifier : public IDiagLoggingAPI 
{
public:
	enum { kDefaultIID = IID_IDIAGLOGMODIFIER };
};

#endif // __IDiagLogModifier__