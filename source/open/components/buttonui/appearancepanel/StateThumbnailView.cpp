//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/appearancepanel/StateThumbnailView.cpp $
//  
//  Owner: Tim Wright
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
//  
//  Based on LayerSwatchView.cpp in Layer Panel project.
//  
//========================================================================================

#include "VCPlugInHeaders.h"

#include "IWidgetParent.h"
#include "IInterfaceColors.h"
#include "iuicolorutils.h"
#include "AGMGraphicsContext.h"
#include "DVControlView.h"
#include "ILayoutUIUtils.h"

#include "IStateData.h"
#include "IAppearanceSuite.h"
#include "FormFieldUIDefs.h"
#include "FormFieldUIID.h"
#include "FormFieldUIUtils.h"

#include "AGMImageAccessor.h"
#include "AutoGSave.h"

//----------------------------------------------------------------------------------------
//
// Class definition
//
//----------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------
// Class StateThumbnailView
//----------------------------------------------------------------------------------------
class /* WIDGET_DECL */ StateThumbnailView : public DVControlView
{
public:
	typedef DVControlView inherited;
	StateThumbnailView(IPMUnknown *boss);
	virtual ~StateThumbnailView();

protected:	
	virtual void 	Draw(IViewPort* viewPort, SysRgn updateRgn = nil); 

private:
	bool GetThumbnailAGMRecord( AGMImageAccessor** pOutAGMImage );
	void DrawThumbnailImage(IGraphicsPort* inGraphicsPort, const PMRect& inRect);
	PMRect GetDrawRect();
};

//----------------------------------------------------------------------------------------

CREATE_PERSIST_PMINTERFACE(StateThumbnailView, kStateThumbnailViewImpl)

StateThumbnailView::StateThumbnailView(IPMUnknown *boss) :
	inherited(boss)
{
}

//----------------------------------------------------------------------------------------

StateThumbnailView::~StateThumbnailView()
{
}

//----------------------------------------------------------------------------------------

PMRect StateThumbnailView::GetDrawRect()
{
	PMRect swatchRt = GetFrame();
	swatchRt.MoveTo(0, 0);						// get into local coordinates

	swatchRt.Inset(3, 3);
	return swatchRt;
}

static void FillThumbWithCheckerBoard(IGraphicsPort *gPort, PMRect& frame)
{	
	const int32 kCheckerSize = 5;
	
	// Try to make the checkerboard squares about kCheckerSize pixels in size.
	// Multiply by two below to reflect the fact that a checkerboard is a 
	// repeating tile of supersquares, consisting of four smaller squares with
	// alternating colors.
	int32 nHorz = ::ToInt32(frame.Width()) / (kCheckerSize * 2);
	int32 nVert = ::ToInt32(frame.Height()) / (kCheckerSize * 2);
	if (nHorz < 1) nHorz = 1;
	if (nVert < 1) nVert = 1;
	
	// Now we know we'll have 'nHorz' supersquares across and 'nVert'
	// supersquares from top to bottom.  Time to draw them squares.
	// We'll draw them as 25% opaque black multiplied, so they'll blend
	// with whatever the background-fill color is (highlight or white).
	
	{
		AutoGSave autoGSave(gPort);
		gPort->rectclip(frame);
		gPort->translate(frame.Left(), frame.Top());

		float cw = (::ToFloat(frame.Width()) / (float)nHorz);
		float ch = (::ToFloat(frame.Height()) / (float)nVert);
		
		for(int32 y = 0; y < nVert; y++)
		{
			for(int32 x = 0; x < nHorz; x++)
			{
				float 	cx = (float)x * cw, 
						cy = (float)y * ch;
						
				PMRect r(::Round(cx), ::Round(cy), ::Round(cx + cw/2.), ::Round(cy + ch/2.));
				gPort->rectfill(r);
				
				r.MoveRel(::Round(cw / 2.), ::Round(ch / 2.));
				gPort->rectfill(r);
			}
		}
	}
	
	// ----- Frame the thumbnail.
	gPort->rectstroke(frame);		
}

//----------------------------------------------------------------------------------------
// This is the maximum x and y dimension of a thumbnail image
const int32 kMaxThumbnailMaxSize = 128;

void StateThumbnailView::Draw(IViewPort* viewPort, SysRgn updateRgn)
{
	InterfacePtr<IControlView> frontView(Utils<ILayoutUIUtils>()->QueryFrontView());
	IDocument * frontDoc = Utils<ILayoutUIUtils>()->GetFrontDocument();
	
	if (frontView == nil || frontDoc == nil)
		return;

	AGMImageAccessor *thumbnail = nil;

	FormWidgetBlocker blocker;
	PMRect frameRect = GetDrawRect().Round();
	bool bHaveThumb = GetThumbnailAGMRecord(&thumbnail);
	if ( !bHaveThumb )
		frameRect.Inset(frameRect.Width()/20, frameRect.Height()/20);
		
	PMReal frameWidth = frameRect.Width();
	PMReal frameHeight = frameRect.Height();
		
	
	{
		Int32Rect	bounds;
		if ( bHaveThumb )
			bounds = thumbnail->GetBounds();
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
		
		// Erase the background
		AGMGraphicsContext gc(viewPort, this, updateRgn);
		InterfacePtr<IGraphicsPort> graphicsPort(gc.GetViewPort(), IID_IGRAPHICSPORT);
		AutoGSave autoGSave(graphicsPort);
		graphicsPort->newpath();
		
		// Draw the thumbnail image
		if ( bHaveThumb )
		{
			graphicsPort->setrgbcolor(PMReal(1.0), PMReal(1.0), PMReal(1.0));
			graphicsPort->rectfill(thumbRect);
			graphicsPort->image( const_cast<AGMImageRecord*>(thumbnail->GetAGMImageRecord()), matrix, 0 );

			// ----- Frame the swatch.
			graphicsPort->setrgbcolor(PMReal(0), PMReal(0), PMReal(0));
			graphicsPort->rectstroke(thumbRect);		
		
			// Destroy the thumbnail
			delete thumbnail;
		}
		else
		{
			RealAGMColor agmColor;
			InterfacePtr<IInterfaceColors> colors(GetExecutionContextSession(), IID_IINTERFACECOLORS);			
			colors->GetRealAGMColor(kInterfacePaletteFill, agmColor);
			
			if ( !IsHilited() )
			{
				graphicsPort->setrgbcolor(agmColor.red, agmColor.green, agmColor.blue);
				graphicsPort->rectfill(thumbRect);
				graphicsPort->setrgbcolor(agmColor.red * .8, agmColor.green * .8, agmColor.blue * .8); // 0.8 works well for both bright and dark UI.
			}
			else
			{
				graphicsPort->setrgbcolor(PMReal(1.0), PMReal(1.0), PMReal(1.0));
				graphicsPort->rectfill(thumbRect);
				graphicsPort->setrgbcolor(agmColor.red * .95, agmColor.green * .95, agmColor.blue * .95);
			}
			FillThumbWithCheckerBoard(graphicsPort, thumbRect);
		}
	}
}

//----------------------------------------------------------------------------------------

bool StateThumbnailView::GetThumbnailAGMRecord( AGMImageAccessor** pOutAGMImage )
{
	InterfacePtr<IAppearanceSuite> appearanceSuite(FormFieldUIUtils::QueryAppearanceSuite());
	if (appearanceSuite)
	{
		InterfacePtr<IWidgetParent>	widgetParent(this, IID_IWIDGETPARENT);
		InterfacePtr<IStateData>	stateData(widgetParent->GetParent(), IID_ISTATEDATA);
		Form::AppearanceState	state = stateData->GetState();

		return
			appearanceSuite->GetAppearanceThumbnail(state, kMaxThumbnailMaxSize, kMaxThumbnailMaxSize, pOutAGMImage)
				 == kSuccess;
	}
	
	return false;
}
