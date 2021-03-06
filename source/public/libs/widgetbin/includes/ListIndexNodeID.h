//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/widgetbin/includes/ListIndexNodeID.h $
//  
//  Owner: Matt Joss
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

#ifndef __ListIndexNodeID__
#define __ListIndexNodeID__


#include "NodeID.h"
#include "IPMStream.h"
#include "widgetid.h"

#pragma export on

//========================================================================================
// class ListIndexNodeID 
//========================================================================================
class DV_WIDGET_DECL ListIndexNodeID : public NodeIDClass
{
public:
	enum { kNodeType = kListIndexNodeID }; 

	virtual ~ListIndexNodeID() { }
	
	virtual	NodeType		GetNodeType() const { return kNodeType; }
	virtual int32			Compare(const NodeIDClass* NodeID) const;
	virtual NodeIDClass*	Clone() const;
	virtual void			Read(IPMStream*	stream);
	virtual void			Write(IPMStream*	stream) const;
	virtual PMString		GetDescription() const;

			int32			GetIndex() const { return fIndex; }

	static	NodeID_rv		RootNodeID();
	static	NodeID_rv		Create( const int32& index );
private:
	ListIndexNodeID(int32 index) { fIndex = index; }
	int32	fIndex;
};


#pragma export off

#endif
