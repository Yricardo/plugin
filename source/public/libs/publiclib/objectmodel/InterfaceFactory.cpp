//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/libs/publiclib/objectmodel/InterfaceFactory.cpp $
//  
//  Owner: Robin_Briggs
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

#include "InterfaceFactory.h"
#include "IObjectModel.h"
#include "ISession.h"
#include "PMString.h"
#include "InterfacePtr.h"

InterfaceFactory *InterfaceFactory::gFirstInterface = nil;

InterfaceFactory :: InterfaceFactory(ImplementationID faceID, 
									 InterfaceConstructor faceFact, 
									 InterfaceDestructor faceDestroy, 
									 InterfaceSizeOf faceSizeOf, 
									 InterfaceReadWrite faceReadWrite, 
									 InterfaceReadWrite faceSnapshotReadWrite,
									 InterfaceResetViewFun resetViewFun) :
	fID(faceID),
	fFactory(faceFact),
	fDestructor(faceDestroy),
	fSizeOf(faceSizeOf),
	fReadWrite(faceReadWrite),
	fSnapshotReadWrite(faceSnapshotReadWrite),
	fInterfaceResetViewFun(resetViewFun),
	fNext(gFirstInterface)
{
	gFirstInterface = this;
}
 

void InterfaceFactory :: InstallInterfaces(PluginID ownerComponent)
{
	InterfacePtr<IObjectModel> om(GetExecutionContextSession(), IID_IOBJECTMODEL);
	for (InterfaceFactory *face = gFirstInterface; face != nil; face = face->fNext)		{
			om->FillOutInterfaceFactory(ownerComponent, face->GetID(), face->GetFactory(), face->GetDestructor(), face->GetSizeOf(), face->GetReadWrite(), face->GetSnapshotReadWrite(), face->GetInterfaceResetViewFun());
		}
}



