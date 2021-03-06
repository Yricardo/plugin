//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/buttonui/actiondatapanels/animation/AnimationDDLControlData.cpp $
//  
//  Owner: Greg St. Pierre
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

#include "IDynamicTargetsFacade.h"
#include "IPageItemNameFacade.h"

#include "BehaviorUIID.h"
#include "DropDownListControlDataOf.tpp"
#include "K2Vector.tpp"		// NB: This is necessary to avoid linker errors. Obviously.
#include "Utils.h"

#include "AnimationBehaviorPanelTypes.h"

CREATE_PMINTERFACE(DropDownListControlDataOf<AnimationTargetReference>, kAnimationDDLControlDataImpl);

template <>
PMString DropDownListControlDataOf<AnimationTargetReference>::GetString(const AnimationTargetReference& item) const
{
	if (item != UIDRef::gNull)
	{
		PMString title = Utils<Facade::IDynamicTargetsFacade>()->GetTargetName(item);
		
		if (title.IsEmpty())
		{
			title = Utils<Facade::IPageItemNameFacade>()->GetDefaultPageItemName(item);
			title.Translate();
			title.Insert("<");
			title.Append(">");
		}
		
		return title;
	}
	return PMString("$$$/Dialog/Behaviors/Animation/NoAnimation");
}
