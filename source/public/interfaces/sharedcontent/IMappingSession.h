//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/sharedcontent/IMappingSession.h $
//  
//  Owner: Prakash Verma
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
//  Copyright 2010 Adobe Systems Incorporated
//  All Rights Reserved.
//   
// NOTICE:  All information contained herein is, and remains
// the property of Adobe Systems Incorporated and its suppliers,
// if any.  The intellectual and technical concepts contained
// herein are proprietary to Adobe Systems Incorporated and its
// suppliers and are protected by trade secret or copyright law.
// Dissemination of this information or reproduction of this material
// is strictly forbidden unless prior written permission is obtained
// from Adobe Systems Incorporated. 
//   
//======================================================================================== 

#ifndef __IMappingSession_h__ 
#define __IMappingSession_h__ 

#include "SharedContentID.h"

#include <map>

class IMappingSession : public IPMUnknown
{
public:
	enum  { kDefaultIID = IID_IMAPPINGSESSION };

	virtual bool16		GetIsMappingSessionOpen() const = 0;
	//virtual void		SetIsMapping(bool16 bIsMapping) = 0;
	virtual void		BeginMappingSession(IDataBase *pSrcDB, IDataBase *pDestDB) = 0;
	virtual void		EndMappingSession() = 0;
	virtual void		BindSrcAndDestUID(const IDataBase *pSrcDB, const IDataBase *pDestDB, const UID &src, const UID &dest) = 0;
	virtual UID			GetDestUID(IDataBase *pSrcDB, IDataBase *pDestDB, UID src) const = 0;
	virtual bool16		GetMappingFailed() const = 0;
	virtual	void		SetMappingFailed(bool16 mappingFailed) = 0;
};

#endif	//__IMappingSession_h__ 
