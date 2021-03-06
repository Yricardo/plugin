//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IRestoreInternalMetaData.h $
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
#ifndef __IRestoreInternalMetaData_h__
#define __IRestoreInternalMetaData_h__

#include "IPMUnknown.h"
#include "MetaDataID.h"

class IMetaData;

/**   IRestoreInternalMetaData provides plug-ins a chance to restore critical internal properties after 
      a document's metadata has been changed.
*/
class IRestoreInternalMetaData : public IPMUnknown
{
public:	
	enum { kDefaultIID = IID_IRESTOREINTERNALMETADATA };

   /** 
       Copies critical internal properties from origMetaData to newMetaData.
       @param origMetaData IN, the metadata before the change
       @param newMetaData IN/OUT, the metadata after the change
   */
	virtual void	RestoreInternalProperties(IMetaData* newMetaData, IMetaData* origMetaData) = 0;
};

#endif // __IRestoreInternalMetaData_h__
