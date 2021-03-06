//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/publiclib/utils/LibraryAssetID.cpp $
//  
//  Owner: Tim Gogolin
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

#include "LibraryAssetID.h"
#include "IPMStream.h"

// Default constructor creates an invalid id 
// Arrays and ChangedMessage struct needs to be able to create a default id
LibraryAssetID::LibraryAssetID()
: fID(-1)
{
}

LibraryAssetID::LibraryAssetID(int32 i)
: fID(i)
{
}

bool16 LibraryAssetID::IsValid() const
{
	return fID >= 0;
}

bool16 LibraryAssetID::operator==(const LibraryAssetID& id) const
{
	return fID == id.fID;
}

LibraryAssetID LibraryAssetID::CreateLibraryAssetID(int32 i)
{
	return LibraryAssetID(i);
}

int32 LibraryAssetID::GetAssetIDNumericValue() const
{
	return fID;
}
