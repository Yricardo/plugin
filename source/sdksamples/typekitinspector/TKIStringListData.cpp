//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/typekitinspector/TKIStringListData.cpp $
//  
//  Owner: Timothy Brand-Spencer
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2015/03/13 15:57:09 $
//  
//  $Revision: #1 $
//  
//  $Change: 905372 $
//  
//  Copyright 1997-2015 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//========================================================================================

#include "VCPlugInHeaders.h"
#include "IPMStream.h"
#include "TKIID.h"
#include "ITKIStringListData.h"

class TKIStringListData : public CPMUnknown<ITKIStringListData>
{
	public:
		TKIStringListData(IPMUnknown* boss);

		virtual ~TKIStringListData();

		/** Set the value of the list of nodes.
			@param newList - the list of nodes that will be the new value
		*/
		virtual void SetStringList(const K2Vector<NodeID>& newList);

		/** Return the value of the list.
			@return the list of TKITreeNodeID 
		*/
		virtual const K2Vector<NodeID>& GetStringList();

	private:
		K2Vector<NodeID> fNodeList;
};

CREATE_PMINTERFACE(TKIStringListData, kTKIStringListDataImpl)

TKIStringListData::TKIStringListData(IPMUnknown* boss) : CPMUnknown<ITKIStringListData>(boss)
{
}
	
TKIStringListData::~TKIStringListData()
{
}

void TKIStringListData::SetStringList(const K2Vector<NodeID>& newList)
{
	if (newList != fNodeList)
	{
		PreDirty();
		fNodeList = newList;
	}
}

const K2Vector<NodeID>& TKIStringListData::GetStringList()
{
	return fNodeList;
}