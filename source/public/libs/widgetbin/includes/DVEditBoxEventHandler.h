//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/widgetbin/includes/DVEditBoxEventHandler.h $
//  
//  Owner: Sanyam Jain
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
//  Copyright 1997-2008 Adobe Systems Incorporated. All rights reserved.
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
#ifndef __DVEditboxEventHandler__
#define __DVEditboxEventHandler__

#ifdef DV_WIDGET_BUILD
#pragma export on
#endif

/*
	Drover world's version of EditBoxEventHandler
*/

#include "DVControlEventHandler.h"

class DV_WIDGET_DECL DVEditBoxEventHandler : public DVControlEventHandler
{
	typedef DVControlEventHandler inherited;
public:
	DVEditBoxEventHandler(IPMUnknown *boss);
	~DVEditBoxEventHandler();

	// Key Events:
	virtual bool16	KeyDown(IEvent* e);

	virtual bool16	LButtonDn(IEvent* e);

	virtual void	PostGetKeyFocus();
	virtual void	PostGiveUpKeyFocus();
	virtual bool16	CanHaveKeyFocus() const;
	virtual bool16	WillingToGiveUpKeyFocus();

	virtual bool16	AttemptApplyEntry();
	virtual bool16  ValidateContents(); 

protected:
	void			NotifyObserver(IPMUnknown *pUnknown);
	IControlView*	FindNudgeControl();
	
	virtual bool16	RememberFocusIfInPalette();
	
	void ReplaceSelection(const PMString& replaceWithStr); // convenience method for subclasses

	virtual bool16 IsChanged();     

protected:
	bool16            fIsDisplayingAlert; 
	bool16            fIMEStatus; 
	bool16            fSettingIMEStatus; 
};

#endif