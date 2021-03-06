//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/widgets/setspaneldetailcontroller.h $
//  
//  Owner: Michael Burbidge
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

#pragma once
#ifndef __SetsPanelDetailController__
#define __SetsPanelDetailController__

#include "IPanelDetailController.h"
#include "IPMStream.h"
#include "widgetid.h"
#include "HelperInterface.h"
#include "PersistObjectCollection.h"
#include "PMPoint.h"

#ifdef WIDGET_BUILD
#pragma export on
#endif

//========================================================================================
// CLASS WidgetIDHolder
//========================================================================================

class WidgetIDHolder
{
public:
	typedef base_type data_type;
	WidgetIDHolder() : fId(0) { }
	WidgetIDHolder(const WidgetID& id) : fId(id) { }
	WidgetIDHolder(const WidgetIDHolder& other) : fId(other.fId) { }
	
	WidgetIDHolder operator=(const WidgetIDHolder& other) { fId = other.fId; return *this; }
	bool16 operator==(const WidgetIDHolder& other) const { return fId == other.fId; }
	
	void ReadWrite(IPMStream *s, ImplementationID prop) { s->XferInt32((int32&) fId); }
	WidgetID GetID() const { return fId; }
	
private:
	WidgetID	fId;
};


typedef PersistObjectCollection<WidgetIDHolder> PanelIDSet;

DECLARE_OBJECT_TYPE(PanelIDSet);

//========================================================================================
// CLASS SetsPanelDetailController
//========================================================================================

class WIDGET_DECL SetsPanelDetailController : public IPanelDetailController
{
public:
	SetsPanelDetailController(IPMUnknown *boss);
	virtual ~SetsPanelDetailController();
	
	virtual void	ReadWrite(IPMStream *s, ImplementationID prop);

	virtual void	RotateDetailLevel();
	virtual void	ShowDetailLevel(int16 nthLevel);
		
	virtual int16	GetDetailLevel() const;
	virtual int16	GetNumDetailLevels() const;
	virtual int16	GetDefaultDetailLevel() const;
	
	virtual void	AddToSet(int16 nthLevel, const WidgetID newPanel);
	virtual bool16	RemoveFromSet(int16 nthLevel, const WidgetID panelToRemove);


protected:
	void			ErasePanel();

protected:
	int16								fCurrentLevel;
	int16								fDefaultLevel;
	PersistObjectCollection<PanelIDSet>	fPanelSets;
		
DECLARE_HELPER_METHODS()

#if __INTEL_COMPILER

private:
	// Hack to resolve link errors.  The compiler is generating (for some reason, unclear
	// as it's not used) the assignment operator for this class.  Inside that code, it is
	// generating a call to assignment for fPanelSets.  That code is, for some reason, not
	// generated by the explicit template instantiation in templates_widget, resulting in a
	// link error.  This works around the problem:
	SetsPanelDetailController (const SetsPanelDetailController &);	// unimplemented
	SetsPanelDetailController &operator = (SetsPanelDetailController const &);  // unimplemented

#endif

};

//========================================================================================
// CLASS SetsHPanelDetailController
//========================================================================================

class WIDGET_DECL SetsHPanelDetailController : public SetsPanelDetailController
{
public:
	SetsHPanelDetailController(IPMUnknown *boss);
	virtual ~SetsHPanelDetailController();

	virtual void	ShowDetailLevel(int16 nthLevel);
};

#pragma export off

#endif
