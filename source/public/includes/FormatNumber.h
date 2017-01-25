//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/FormatNumber.h $
//  
//  Owner: Robin Briggs
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/03/13 15:57:09 $
//  
//  $Revision: #4 $
//  
//  $Change: 905372 $
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
#ifndef __FormatNumber__
#define __FormatNumber__

#include "CrossPlatformTypes.h"

// Major format number.

#define kK2MajorFormatNumber				RezLong(0)
#define kSherpaMajorFormatNumber			RezLong(1)
#define kHotakaMajorFormatNumber			RezLong(2)
#define kKeystoneMajorFormatNumber			RezLong(3)
#define kAnnaMajorFormatNumber				RezLong(4)
#define kDragontailMajorFormatNumber		RezLong(5)
#define kFiredrakeMajorFormatNumber		RezLong(6)
#define kCobaltMajorFormatNumber			RezLong(7)
#define kBasilMajorFormatNumber			RezLong(8)
#define kRocketMajorFormatNumber			RezLong(9)
#define kOdinMajorFormatNumber				RezLong(10)
#define kAthosMajorFormatNumber				RezLong(11)
#define kCitiusMajorFormatNumber			RezLong(12)
#define kSiriusMajorFormatNumber			RezLong(13)
#define kR5MajorFormatNumber				RezLong(14)

#define kCurrentMajorFormatNumber			kR5MajorFormatNumber


// The final K2 minor format version.
#define kLastK2MinorVersionNumber			RezLong(307)


// Initial minor format numbers for each release
#define kHotakaInitialMinorFormatNumber		RezLong(1)
#define kAnnaInitialMinorFormatNumber		RezLong(1)
#define kDragontailInitialMinorFormatNumber	RezLong(1)
#define kFiredrakeInitialMinorFormatNumber	RezLong(1)
#define kCobaltInitialMinorFormatNumber	RezLong(1)
#define kBasilInitialMinorFormatNumber	RezLong(1)
#define kRocketInitialMinorFormatNumber	RezLong(1)
#define kOdinInitialMinorFormatNumber	RezLong(1)
#define kAthosInitialMinorFormatNumber	RezLong(1)
#define kCitiusInitialMinorFormatNumber	RezLong(1)
#define kSiriusInitialMinorFormatNumber	RezLong(1)
#define kR5InitialMinorFormatNumber		RezLong(1)

#endif  // __FormatNumber__
