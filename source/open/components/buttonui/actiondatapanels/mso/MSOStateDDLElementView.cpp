//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/actiondatapanels/mso/MSOStateDDLElementView.cpp $
//  
//  Owner: Michele Stutzman
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2014/03/11 10:35:53 $
//  
//  $Revision: #3 $
//  
//  $Change: 871398 $
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

#include "VCPlugInHeaders.h"

// ----- Interfaces -----

#include "IAppearanceSuite.h"
#include "IIntData.h"
#include "IUIDData.h"
#include "IControlView.h"
#include "IGraphicsPort.h"
#include "IUIColorSpec.h"
#include "IWidgetParent.h"
#include "IWindow.h"

// ----- Includes -----

#include "AGMGraphicsContext.h"
#include "AutoGSave.h"
#include "DVOwnerDrawDropDownListView.h"
#include "FormFieldUIDefs.h"

// ----- Utility files -----

#include "DrawStringUtils.h"
#include "IFormFieldUtils.h"
#include "StringUtils.h"
#include "UserInterfaceUtils.h"
#include "IWidgetUtils.h"

// ----- ID.h files -----

#include "FormFieldUIID.h"


const int32 kMaxThumbnailMaxSize = 128;

class MSOStateDDLElementView : public DVDropDownElementView 
{
	typedef DVDropDownElementView inherited;
	
public:
	MSOStateDDLElementView(IPMUnknown *boss) : inherited(boss), fBGColorLoaded(kFalse) { ; }
	~MSOStateDDLElementView() { ; }
	
	virtual void Draw(IViewPort* viewPort, SysRgn updateRgn = nil); 
	virtual void WindowHidden();

private:
	void DrawBackgroundFill(IViewPort* viewPort, SysRgn updateRgn,bool16 isHilited);

	bool16 fBGColorLoaded;
	int32  fBGColor;
	int32  fHiliteBGColor;
};


// =============================================================================
// *** MSOStateDDLElementView impl ***
// -----------------------------------------------------------------------------

CREATE_PERSIST_PMINTERFACE(MSOStateDDLElementView, kMSOStateDDLElementViewImpl)

// -----------------------------------------------------------------------------
// borrowed from UIColorSwatchElementView.cpp

void MSOStateDDLElementView::DrawBackgroundFill(IViewPort* viewPort, SysRgn updateRgn,bool16 isHilited)
{
	if (!fBGColorLoaded)
	{
		// First check if any ancestor has set the background color.
		InterfacePtr<IWidgetParent> parentHolder(this, UseDefaultIID());
		InterfacePtr<IUIColorSpec> ancestorColor((IUIColorSpec*) parentHolder->QueryParentFor(IID_IUICOLORSPEC));
		if (ancestorColor && (ancestorColor->GetBackgroundColorID() != kInvalidInterfaceColor))
			fBGColor = ancestorColor->GetBackgroundColorID();
		else	//  Not a valid color, use our default one.
			fBGColor = kInterfacePaletteFill;

				
		if (ancestorColor && (ancestorColor->GetBackgroundHiliteColorID() != kInvalidInterfaceColor))
			fHiliteBGColor = ancestorColor->GetBackgroundHiliteColorID();
		else	//  Not a valid color, use our default one.
			fHiliteBGColor = kInterfaceHighLight;
			
		fBGColorLoaded = kTrue;
	}

	RealAGMColor background;
	InterfacePtr<IInterfaceColors> icolors( GetExecutionContextSession(), IID_IINTERFACECOLORS );
	icolors->GetRealAGMColor(isHilited ? fHiliteBGColor : fBGColor, background);	
	AGMGraphicsContext gc(viewPort, this, updateRgn);
	InterfacePtr<IGraphicsPort> gPort(gc.GetViewPort(), UseDefaultIID());

	AutoGSave autoGSave(gPort);
	gPort->setrgbcolor(background.red, background.green, background.blue);

	PMRect myFrame = GetAdjustedFrame();
	
	gPort->rectpath(myFrame);	
	gPort->fill();
} // end DrawBackgroundFill()

// -----------------------------------------------------------------------------

void MSOStateDDLElementView::Draw(IViewPort* viewPort, SysRgn updateRgn)
{	
	AGMGraphicsContext gc(viewPort, this, updateRgn);
	InterfacePtr<IGraphicsPort> gPort(gc.GetViewPort(), UseDefaultIID());

	InterfacePtr<IUIDData> msoData(this, UseDefaultIID());
	IDataBase* db = msoData->GetItemDataBase();
	if (db == nil) return;

	InterfacePtr<IIntData> stateData(this, UseDefaultIID());
	InterfacePtr<const IWidgetParent> wp(this,UseDefaultIID());
	InterfacePtr<const IControlView> parentView((IControlView*) wp->QueryParentFor(IID_ICONTROLVIEW));

	DVPanelDataReference *dvPanelData = IDV_UI_NodeRef::Get_UI_Node_As<DVPanelDataReference>(Get_UI_Node());
	ASSERT_MSG(dvPanelData != nil, "MSOStateDDLElementView::Draw: no drover widget data!");
	
	PMRect myFrame = GetFrame();
	if(dvPanelData->IsDrawingDefaultItem())
		myFrame = parentView->GetFrame();

	myFrame.MoveTo(4, 0);
	PMReal textLeftEdge = myFrame.Left();
	PMReal textRowHeight = myFrame.Height();	
	
	bool16 isHilited = IsElementHilited();

	// Draw the background fill
	DrawBackgroundFill(viewPort, updateRgn, isHilited && !dvPanelData->IsDrawingDefaultItem());

	if (!dvPanelData->IsDrawingDefaultItem())		// Draw the thumbnail if the drop-down is open
	{		
		AGMImageAccessor *thumbnail = nil;
		bool bHaveThumb = Utils<IFormFieldUtils>()->GetAppearanceThumbnail(msoData->GetRef(), stateData->Get(), kMaxThumbnailMaxSize, kMaxThumbnailMaxSize, &thumbnail) == kSuccess;
		if ( bHaveThumb )
		{
			// frame containing the thumbnail
			PMRect frameRect;
			frameRect.SetDimensions(kMSOStateMediumRowHeight, kMSOStateMediumRowHeight);
			frameRect.MoveTo(0, 0);						// get into local coordinates

			frameRect.Inset(3, 3);
			frameRect.Round();
		
			PMReal frameWidth = frameRect.Width();
			PMReal frameHeight = frameRect.Height();
	
			Int32Rect	bounds = thumbnail->GetBounds();
			int32 thumbWidth = bHaveThumb ? (bounds.right - bounds.left) : kMaxThumbnailMaxSize;
			int32 thumbHeight = bHaveThumb ? (bounds.bottom - bounds.top) : kMaxThumbnailMaxSize;

			PMReal scaleFactor = std::min(  frameWidth/thumbWidth, frameHeight/thumbHeight  );
		
			PMRect thumbRect;
			thumbRect.Left() = frameRect.Left() + (frameWidth - thumbWidth*scaleFactor) / 2.0;
			thumbRect.Top() = frameRect.Top() + (frameHeight - thumbHeight*scaleFactor) / 2.0;
			thumbRect = thumbRect.Round();
			thumbRect.Right() = thumbRect.Left() + thumbWidth*scaleFactor;
			thumbRect.Bottom() = thumbRect.Top() + thumbHeight*scaleFactor;
			thumbRect = thumbRect.Round();
				
			PMMatrix matrix(scaleFactor,
							0,
							0,
							scaleFactor,
							thumbRect.Left() + 1,
							thumbRect.Top() + 1
							);
			
			// Draw the thumbnail image
			gPort->setrgbcolor(PMReal(1.0), PMReal(1.0), PMReal(1.0));
			gPort->rectfill(thumbRect);
			gPort->image( const_cast<AGMImageRecord*>(thumbnail->GetAGMImageRecord()), matrix, 0 );

			// ----- Frame the swatch.
			gPort->setrgbcolor(PMReal(0), PMReal(0), PMReal(0));
			gPort->rectstroke(thumbRect);		
			
			// Destroy the thumbnail
			delete thumbnail;

			// position text to the right of the thumbnail
			textLeftEdge = frameRect.Right() + 4;
			textRowHeight = kMSOStateMediumRowHeight;
		}
	}

	//
	// Drawing the text

	// Get the name
	PMString stateName(Utils<Facade::IAppearanceItemFacade>()->GetStateName(msoData->GetRef(), stateData->Get()));

	// Get the font to use
	InterfacePtr<const IWindow> window((IWindow*) wp->QueryParentFor(IID_IWINDOW));
	InterfaceFontInfo const &fontInfo = (isHilited && !dvPanelData->IsDrawingDefaultItem()) ? window->GetHiliteFont() : window->GetFont(); 

	// Get the position
	PMReal yPosition = Utils<IWidgetUtils>()->GetViewYPosition(&gc, fontInfo, textRowHeight);
	PMPoint drawPt(textLeftEdge, yPosition);

	PMReal textWidth(myFrame.Right() - drawPt.X());
	stateName = StringUtils::PMEllipsizeString(&gc, textWidth, stateName, fontInfo);

	// Get the text color
	IInterfaceColors::InterfaceColor textColor = kInterfaceTextColor;
	if (isHilited)
		textColor = kInterfaceHighLightText;
	if (!this->IsEnabled())
		textColor = dv_utils::IsUIInterfaceBright() ? kInterfaceDisabledGray : kInterface32Gray;

	// Draw the text
	StringUtils::PMDrawString(&gc, drawPt, stateName, fontInfo, textColor);
} // end Draw()

// -----------------------------------------------------------------------------

void MSOStateDDLElementView::WindowHidden()
{
	InterfacePtr<IUIDData> msoData(this, UseDefaultIID());
	if (msoData) 
		msoData->Set(nil, kInvalidUID);

	InterfacePtr<IIntData> stateData(this, UseDefaultIID());
	if (stateData)
		stateData->Set(-1);

	inherited::WindowHidden();
}