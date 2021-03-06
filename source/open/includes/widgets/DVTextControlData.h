//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/DVTextControlData.h $
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
#ifndef __DVTextControlData__
#define __DVTextControlData__

#ifdef DV_WIDGET_BUILD
#pragma export on
#endif

#include "CTextControlData.h"

class IControlView;

class DV_WIDGET_DECL DVTextControlData : public CTextControlData
{
	typedef CTextControlData inherited;
public:
	DVTextControlData(IPMUnknown *boss);
	virtual ~DVTextControlData();
	
protected:
	virtual void				DoSetWidgetString(const PMString& newString);
	virtual IControlView*		QueryStaticTextView() const; // where is the StaticTextView impl (override if not self)
	
	PMString	fMyString;
};

#pragma export off

#endif
