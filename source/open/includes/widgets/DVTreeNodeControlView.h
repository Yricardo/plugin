//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/DVTreeNodeControlView.h $
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
#ifndef __DVTreeNodeControlView__
#define __DVTreeNodeControlView__
	
#include "DVPanelView.h"

#ifdef DV_WIDGET_BUILD
#pragma export on
#endif

/*
	Drover world's version of TreeNodeControlView
*/

class DV_WIDGET_DECL DVTreeNodeControlView : public DVPanelView
{
	typedef DVPanelView inherited;
public:
	DVTreeNodeControlView(IPMUnknown *boss); 
	virtual	~DVTreeNodeControlView();

	virtual void 	DV_Draw(dvaui::drawbot::Drawbot* drawbotP) const;
	
protected:
	//	The default is to draw separator or if the node height is at least 14 pixels.
	virtual void	SetDrawNodeSeparatorOnOff (bool16 turnOn);
	//	The default separator is kInterfaceWhite.
	virtual void	SetNodeSeparatorColor (int32 separatorColor);

	virtual	void	GetBackgroundColors();
	virtual void 	DrawBackground(dvaui::drawbot::Drawbot* drawbotP) const;

private:
	bool16			ShouldDrawEndLine() const;
	bool16			fDrawNodeSeparator;
	int32			fSeparatorColor;

	int32			fBGColor;
	int32			fHiliteBGColor;
};

#pragma export off

#endif

