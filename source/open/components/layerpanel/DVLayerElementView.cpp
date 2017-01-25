//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/layerpanel/DVLayerElementView.cpp $
//  
//  Owner: Mainak Ghosh
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
//  Copyright 2010 Adobe Systems Incorporated. All rights reserved.
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

#include "VCPlugInHeaders.h"

// Interfaces:
#include "IGraphicsPort.h"
#include "IPanelControlData.h"
#include "IWidgetParent.h"
#include "IBoolData.h"
#include "IViewport.h"

// Includes:
#include "LayerPanelDefs.h"
#include "DVTreeNodeControlView.h"
#include "LocaleSetting.h"
#include "AutoGSave.h"

// Utility files:
#include "Utils.h"
#include "IWidgetUtils.h"

// ID.h files:
#include "LayerPanelID.h"

#include "DVAPublicIncludes.h"
#include "DVPublicUtilities.h"

//----------------------------------------------------------------------------------------
// Class definition
//----------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------
// Class DVLayerElementView
//----------------------------------------------------------------------------------------

class DVLayerElementView : public DVTreeNodeControlView
{
	typedef DVTreeNodeControlView inherited;
	
public:
			 DVLayerElementView(IPMUnknown *boss) : inherited(boss) { ; }
	virtual ~DVLayerElementView() { ; }

	virtual void DV_Draw(dvaui::drawbot::Drawbot *drawbotP) const;

	virtual void DrawBackground(dvaui::drawbot::Drawbot* drawbotP) const;

private:
			void DrawBorder(dvaui::drawbot::Drawbot *drawbotP, const PMRect& frame) const;
			void DrawSeparatorOnRight(IControlView* widget, RealAGMColor color, dvaui::drawbot::Drawbot *drawbotP, int32 offsetFromRight) const;
};

#pragma mark DVLayerElementView implementation

CREATE_PERSIST_PMINTERFACE(DVLayerElementView, kLayerElementViewImpl)

void DVLayerElementView::DV_Draw(dvaui::drawbot::Drawbot *drawbotP) const
{
	PMRect frame( this->GetInnerContentFrame() );

	InterfacePtr<IPanelControlData>	myData(this, UseDefaultIID());
	IControlView* layerSwatchView = myData->FindWidget(kLayerListElementSwatchWidgetID);

	frame.Left()  = 1;

	if ( layerSwatchView )
		frame.Right() = layerSwatchView->GetFrame().Right() + 1;
	
	inherited::DV_Draw(drawbotP);
	
	DrawBorder(drawbotP, frame);
}

void DVLayerElementView::DrawBorder( dvaui::drawbot::Drawbot *drawbotP, const PMRect& frame ) const
{
	InterfacePtr<const IWidgetParent> wp(this,UseDefaultIID());
	InterfacePtr<const IBoolData> rowSizeBool((IBoolData*)wp->QueryParentFor( IID_ISMALLPALETTEROWSBOOLDATA));
	bool16 bSmallRows =  rowSizeBool ? rowSizeBool->GetBool() : false;

	RealAGMColor bevelAGMColor;
	InterfacePtr<IInterfaceColors> colors(GetExecutionContextSession(), UseDefaultIID());
	
	if (colors)
	{
		colors->GetRealAGMColor(kInterfaceSeparatorColor, bevelAGMColor);		
		InterfacePtr<IPanelControlData>	myData(this, UseDefaultIID());

		IControlView* eyeballView = myData->FindWidget(kLayerListElementEyeballWidgetID);
		DrawSeparatorOnRight(eyeballView, bevelAGMColor, drawbotP, 2);		
	}
}

// This draws a separator line on the right side of the widget. The offsetFromRight is just used so as to center the icon equally.
void DVLayerElementView::DrawSeparatorOnRight(IControlView* widget, RealAGMColor color, dvaui::drawbot::Drawbot *drawbotP, int32 offsetFromRight) const
{		
#if CAN_USE_DRAWBOT_FROM_OPEN_PROJECT
		dvaui::drawbot::SurfaceInterface *surface( drawbotP->GetSurface() );
		ASSERT_MSG( surface, "Drawbot failed to get surface pointer");
	
		dvaui::drawbot::PenP  bevelPen( *drawbotP, dv_utils::RealColorToColorRGBA(color), dv_utils::kDefaultStrokeWidth );
#endif

			if (widget)
			{

				PMRect widgetFrame( widget->GetFrame() );
				
#if CAN_USE_DRAWBOT_FROM_OPEN_PROJECT
				dvaui::drawbot::PathP bevelPath( *drawbotP );

				bevelPath->MoveTo( dv_utils::ToPointF32(widgetFrame.Right() + offsetFromRight, frame.Top()) );
				bevelPath->LineTo( dv_utils::ToPointF32(widgetFrame.Right() + offsetFromRight, frame.Bottom()-1) );

				surface->StrokePath( *bevelPen, *bevelPath );		
#else
				PMPointList bevelPts1(2);
				bevelPts1.push_back(PMPoint(widgetFrame.Right() + offsetFromRight, widgetFrame.Top()));	//moveto
				bevelPts1.push_back(PMPoint(widgetFrame.Right() + offsetFromRight, widgetFrame.Bottom()-1));   //lineto
				
				dv_utils::DVStrokePath(drawbotP, color, bevelPts1, dv_utils::kDefaultStrokeWidth );
#endif
			}
}

// have to override this method because we don't want the hilight to extend over the swatch/eye/pencil icons.
void DVLayerElementView::DrawBackground(dvaui::drawbot::Drawbot* drawbotP) const
{	
	InterfacePtr<IPanelControlData>    myData(this, UseDefaultIID()); 
	IControlView* layerSwatchView = myData->FindWidget(kLayerListElementSwatchWidgetID); 

	if (layerSwatchView)
	{
		PMRect frame( this->GetInnerContentFrame() );

		frame.Left() = layerSwatchView->GetFrame().Right() + 1; 

		if (IsHilited()) 
		{
			RGBColor background;
			InterfacePtr<IInterfaceColors> colors(GetExecutionContextSession(), UseDefaultIID());
			
			if (colors)
			{
				colors->GetRGBColor(kInterfaceHighLight, background);
				dv_utils::DVFillRect(drawbotP, background, frame);
			}
		}
		else
			Utils<IWidgetUtils>()->DrawPaletteFill(this, drawbotP, &frame);
	}
}