//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/CIDRollOverIconButtonView.h $
//  
//  Owner: Vadim Tkachev	
//  
//  $Author: gmatthew $
//  
//  $DateTime: 2013/06/18 15:15:50 $
//  
//  $Revision: #1 $
//  
//  $Change: 853167 $
//  
//  ADOBE CONFIDENTIAL
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
#ifndef __CIDRollOverIconButtonView__
#define __CIDRollOverIconButtonView__

/** class CIDRollOverIconButtonView

		Concrete implementation of the IControlView interface for icon buttons.  
		
		This is the default implementation used in InDesign icon buttons, kRoloverIconButtonViewImpl
		Clients seeking to modify default rollover icon buttons behaviors should derive from this class.
		
		This file replaces PlatformRolloverIconButtonView.h, which is now obsolete.
*/

#include "DVRollOverIconButtonView.h"

class WIDGET_DECL CIDRollOverIconButtonView : public DVRollOverIconButtonView
{
	typedef DVRollOverIconButtonView inherited;

public:
	CIDRollOverIconButtonView(IPMUnknown *boss);
	virtual ~CIDRollOverIconButtonView();
};

#endif //__CIDRollOverIconButtonView__