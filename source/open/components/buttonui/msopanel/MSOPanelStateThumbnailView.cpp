//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/msopanel/MSOPanelStateThumbnailView.cpp $
//  
//  Owner: Michele Stutzman
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

#include "VCPlugInHeaders.h"

// ----- Interfaces -----

#include "IAppearanceSuite.h"
#include "IDataBase.h"
#include "IGraphicsPort.h"
#include "IImageCache.h"
#include "IMediaInfo.h"
#include "ITreeNodeIDData.h"
#include "IWidgetParent.h"

// ----- Includes -----

#include "AGMGraphicsContext.h"
#include "AutoGSave.h"
#include "DVControlView.h"
#include "MSOStateNodeID.h"

// ----- Utility files -----

#include "FormFieldUIUtils.h"
#include "IThumbnailUtils.h"
#include "Utils.h"
#include "IWidgetUtils.h"

// ----- ID.h files -----

#include "FormFieldUIID.h"


class MSOPanelStateThumbnailView : public DVControlView 
{
public:
	typedef  DVControlView inherited;
	MSOPanelStateThumbnailView(IPMUnknown* boss);
	virtual ~MSOPanelStateThumbnailView();
	
	virtual void Draw(IViewPort* viewPort, SysRgn updateRgn = nil);

private:
	PMRect GetDrawRect();
	bool GetThumbnailAGMRecord(AGMImageAccessor** pOutAGMImage, const Form::AppearanceState& appearance);
};

// =============================================================================
// *** MSOPanelStateThumbnailView impl ***
// -----------------------------------------------------------------------------

CREATE_PERSIST_PMINTERFACE(MSOPanelStateThumbnailView, kMSOPanelStateThumbnailViewImpl)


MSOPanelStateThumbnailView::MSOPanelStateThumbnailView(IPMUnknown *boss) :
	inherited(boss)
{
} // end constructor

MSOPanelStateThumbnailView::~MSOPanelStateThumbnailView() 
{ 
} // end destructor

//----------------------------------------------------------------------------------------

PMRect MSOPanelStateThumbnailView::GetDrawRect()
{
	PMRect swatchRt = GetFrame();
	swatchRt.MoveTo(0, 0);						// get into local coordinates

	swatchRt.Inset(3, 3);
	return swatchRt;
} // end GetDrawRect()

//----------------------------------------------------------------------------------------
// This is the maximum x and y dimension of a thumbnail image
const int32 kMaxThumbnailMaxSize = 128;

//----------------------------------------------------------------------------------------

void MSOPanelStateThumbnailView::Draw(IViewPort* viewPort, SysRgn updateRgn)
{
	InterfacePtr<IWidgetParent> thumbnailWidget(this, UseDefaultIID());
	InterfacePtr<IWidgetParent> treeNodeWidget(thumbnailWidget->GetParent(), UseDefaultIID());

	InterfacePtr<const ITreeNodeIDData> nodeData(treeNodeWidget, UseDefaultIID());
	if (!nodeData || !nodeData->Get().IsValid()) return;

	TreeNodePtr<MSOStateNodeID> msoStateNode(nodeData->Get());
	IDataBase* db = msoStateNode->GetDataBase();
	if (db == nil) return;

	AGMImageAccessor *thumbnail = nil;

	//FormWidgetBlocker blocker;
	PMRect frameRect = GetDrawRect().Round();
	bool bHaveThumb = GetThumbnailAGMRecord(&thumbnail, msoStateNode->GetAppearance());
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
	}
} // end Draw()

//----------------------------------------------------------------------------------------

bool MSOPanelStateThumbnailView::GetThumbnailAGMRecord(AGMImageAccessor** pOutAGMImage, const Form::AppearanceState& appearance)
{
	InterfacePtr<IAppearanceSuite> appearanceSuite(FormFieldUIUtils::QueryAppearanceSuite());
	if (appearanceSuite)
	{
		ErrorCode err = appearanceSuite->GetAppearanceThumbnail(appearance, kMaxThumbnailMaxSize, kMaxThumbnailMaxSize, pOutAGMImage);
		return err == kSuccess;
	}
	
	return false;
} // end GetThumbnailAGMRecord()
