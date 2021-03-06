//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/architecture/ChecksumUtils.h $
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

#ifdef DEBUG
#ifndef __ChecksumUtils__
#define __ChecksumUtils__

#include "OMFactoryCtor.h"

class IObjectModel;
class IPMStream;

class PUBLIC_DECL ChecksumUtils
{
public:
	static void Terminate(); 
	static uint32 SerializeAndChecksum(IPMUnknown *obj, ImplementationID implID);
	static uint32 SerializeAndChecksum(IPMUnknown *obj, ImplementationID implID, InterfaceReadWrite readWrite);
	static uint32 Checksum(IPMStream *streamToCheck, uint32 length);
private:
	static IPMStream *QueryStreamOut();
	static IPMStream *QueryStreamIn(IPMStream *streamOut);

	// It makes sense to you thread local data. This will have better cache locality than using shared objects
	static IDThreading::ThreadLocal<int32> tl_StreamInUse;
	static IDThreading::ThreadLocalManagedObject<InterfacePtr<IPMStream> > tl_StreamOut;
	static IDThreading::ThreadLocalManagedObject<InterfacePtr<IPMStream> > tl_StreamIn;
};
#endif


#endif // __ChecksumUtils__
