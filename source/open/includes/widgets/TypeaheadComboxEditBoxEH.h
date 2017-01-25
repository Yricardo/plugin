//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/TypeaheadComboxEditBoxEH.h $
//  
//  Owner: lance bushore
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
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#pragma once
#ifndef __TypeaheadComboxEditBoxEH__
#define __TypeaheadComboxEditBoxEH__

#include "TypeaheadEditBoxEH.h"
class WIDGET_DECL TypeaheadComboxEditBoxEH : public TypeaheadEditBoxEH
{
	typedef TypeaheadEditBoxEH inherited;
	
public:
	TypeaheadComboxEditBoxEH(IPMUnknown *boss);
	~TypeaheadComboxEditBoxEH();	

	virtual bool16 KeyDown(IEvent* e); 
	virtual bool16 KeyUp(IEvent* e); 
	
	virtual void PostGetKeyFocus();
	virtual void PostGiveUpKeyFocus();

protected:
	virtual bool16 IsComboboxEditBox() { return kTrue; }
	virtual bool16 SkipIfDisabled() const { return kFalse; }

	//	Must override
	virtual	bool16	SelectionListSelectItem (int32, bool16, bool16);
	virtual	bool16	SelectionListItemIsEnabled (int32) const;
	virtual	int32	SelectionListGetIndex (const PMString&) const;
	virtual	int32	SelectionListGetIndexOfPartialString (const PMString&) const;
	virtual	int32	SelectionListGetLength (void) const;
	virtual	PMString  GetTextDataString(void) const;
	
	virtual bool16 IsChanged();
	
private:
	bool16 fChangedViaTypeahead;
};

#endif