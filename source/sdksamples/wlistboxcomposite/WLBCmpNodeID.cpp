//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/wlistboxcomposite/WLBCmpNodeID.cpp $
//  
//  Owner: Adobe Developer Technologies
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

// Interface includes:
#include "IPMStream.h"

// Project includes:
#include "WLBCmpNodeID.h"
/**
	@ingroup wlistboxcomposite
*/

/* Compare
*/
int32 WLBCmpNodeID::Compare(const NodeIDClass* nodeID) const
{
	const WLBCmpNodeID* oneNode = static_cast<const WLBCmpNodeID*>(nodeID);
	ASSERT(nodeID);
    return fName.Compare(kTrue, oneNode->GetName());

}


/* Clone
*/
NodeIDClass* WLBCmpNodeID::Clone() const
{
	return new WLBCmpNodeID(this->GetName());
}


/* Read
*/
void WLBCmpNodeID::Read(IPMStream* stream)
{
	fName.ReadWrite(stream);
}


/* Write
*/
void WLBCmpNodeID::Write(IPMStream* stream) const
{
	(const_cast<WLBCmpNodeID*>(this)->fName).ReadWrite(stream);
}

//	end, File:	PnlTrvDataNode.cpp
