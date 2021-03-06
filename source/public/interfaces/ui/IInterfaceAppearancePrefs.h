//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/ui/IInterfaceAppearancePrefs.h $
//  
//  Owner: Deepak Gupta
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2013/08/19 23:39:12 $
//  
//  $Revision: #2 $
//  
//  $Change: 856668 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//  
//  User Interface Color table
//  
//========================================================================================

#pragma once
#ifndef __IID_IINTERFACEAPPEARANCEPREFS__
#define __IID_IINTERFACEAPPEARANCEPREFS__

#include "PMTypes.h"
#include "IPMStream.h"
#include "WorkspaceID.h"

/** Interface to provide UI Appearance preferences
@deprecated This interface has been deprecated. Please use IUserInterfacePreferencesFacade to access Brightness and PasteboardColor preferences
*/
class IInterfaceAppearancePrefs : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IINTERFACEAPPEARANCEPREFS };
	
	/**	Get the Application brightness, this should be cached from saved preferences
		@return kTrue if successful
	*/
	virtual  bool16 GetInterfaceBrightness(PMReal & outBrightness)const = 0;

	/**	Set the Application brightness, this should be saved in preferences
		@return kTrue if successful
	*/
	virtual  bool16 SetInterfaceBrightness(const PMReal inBrightness) = 0;

	/**	Get the Pasteboard Color Pref, this should be cached from saved preferences
		@return kTrue if successful
	*/
	virtual  bool16 GetPasteboardColorPref(int32 & outPasteboardColorPref)const = 0;

	/**	Set the Pasteboard Color Pref, this should be saved in preferences
		@return kTrue if successful
	*/
	virtual  bool16 SetPasteboardColorPref(const int32 inPasteboardColorPref) = 0;
};



#endif// __IID_IINTERFACEAPPEARANCEPREFS__
