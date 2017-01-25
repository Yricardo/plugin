//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/colormgmt/ICMSProfileData.h $
//  
//  Owner: James Jardee-Borquist
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

#ifndef __ICMSProfileData__

#define __ICMSProfileData__



#if PRAGMA_ONCE

#pragma once

#endif



#include "IPMUnknown.h"



#include "ACEColorMgmtID.h"



class ICMSProfile;



class ICMSProfileData : public IPMUnknown

{

public:

	enum { kDefaultIID = IID_ICMSPROFILEDATA };

	

	virtual void Set(ICMSProfile *profile) = 0;

	virtual ICMSProfile *GetProfile() const = 0;

};



#endif // __ICMSProfileData__



// End, ICMSProfileData.h.

