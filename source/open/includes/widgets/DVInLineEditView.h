//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/DVInLineEditView.h $
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
//  Copyright 2010 Adobe Systems Incorporated
//  All Rights Reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and are protected by trade secret or copyright law.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//========================================================================================

#pragma once
#ifndef __DVInLineEditView__
#define __DVInLineEditView__
	
#include "DVPanelView.h"

class DV_WIDGET_DECL DVInLineEditView : public DVPanelView
{
	typedef DVPanelView inherited;
public:
	DVInLineEditView(IPMUnknown *boss);
 	virtual ~DVInLineEditView();
	virtual void ReadWrite(IPMStream *s, ImplementationID prop);
	virtual void WindowHidden();
	virtual void WindowChanged();
	virtual void ParentPurged();
	virtual void DoPostCreate();

protected:
	void CommonInit();

private:
	InterfacePtr<IControlView> fStaticWidgetView;
};

#endif // __DVInLineEditView__

