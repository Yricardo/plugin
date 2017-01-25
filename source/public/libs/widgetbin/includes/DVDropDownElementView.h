//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/widgetbin/includes/DVDropDownElementView.h $
//  
//  Owner: Deepak Gupta
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/05/06 23:36:38 $
//  
//  $Revision: #2 $
//  
//  $Change: 911411 $
//  
//  Copyright 1997-2015 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __DVDropDownElementView__
#define __DVDropDownElementView__

#include "DVAbstractControlView.h"

#ifdef DV_WIDGET_BUILD
#pragma export on
#endif

/******************************************************************************
 * class DVDropDownElementView
 ******************************************************************************/
class DVPanelDataReference;
class DV_WIDGET_DECL DVDropDownElementView : public DVAbstractControlView
{
	typedef DVAbstractControlView inherited;
public:
	DVDropDownElementView(IPMUnknown *boss);
 	virtual ~DVDropDownElementView() {}
	
	/** override of IControlView::Draw, the traditional ControlView drawing method. 
		@param viewport, viewport for drawing
		@param updateRgn, clip region
	*/
	virtual void Draw(IViewPort *viewport, SysRgn updateRgn) = 0;

	/** Get DVPanelDataReference * of this element view 
		@return DVPanelDataReference *,  data interface for the owner draw list elements corresponding to this element view 
	*/
	virtual DVPanelDataReference *GetReference();

	/** Set the enable state for widget. Optionally causes invalidate. 
		@param doEnable, Enable the view if TRUE and Disable otherwise
		@param invalidate, invalidate the widget for drawing
	*/
	virtual void Enable(bool16 doEnable, bool16 invalidate);

	/** Set the widget to disabled state. Optionally causes invalidate. 
		@param invalidate, invalidate the widget for drawing
	*/
    virtual void Disable(bool16 invalidate);
    
protected:
	/** Checks if this item element is highlighted 
		@return TRUE is element is highlighted, FALSE otherwise
	*/
	virtual bool16 IsElementHilited() const;

	/** Checks if this item element is drawn as default item of drop down 
		@return TRUE is element is drawn as default, FALSE otherwise
	*/
	bool16 IsDrawingAsDefaultItem() const;

	/** Get the adjusted frame. 
		@return Client rect, If this item element is drawn as default item then adjusted frame would be smaller due to thumb drawn on one side
	*/
	PMRect GetAdjustedFrame()const;
    
private:
	float GetThumbWidth()const;
	float GetInset()const;
};

#pragma export off

#endif //__DVDropDownElementView__
