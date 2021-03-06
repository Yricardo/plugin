//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/text/CDynamicSpellCheckCache.h $
//  
//  Owner: Heath Horton
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
//  
//  Proj:	SpellingPanel
//  
//========================================================================================

#pragma once
#ifndef _H_CDynamicSpellCheckCache
#define _H_CDynamicSpellCheckCache

#include "IDynamicSpellCheckCache.h"

class PUBLIC_DECL CDynamicSpellCheckCache : public IDynamicSpellCheckCache
{
public:
	CDynamicSpellCheckCache(IPMUnknown* boss);
	virtual ~CDynamicSpellCheckCache();
	
	virtual bool16 		GetCacheFlag(){ return fCacheFlag;}
	virtual void 		SetCacheFlag(bool16 flag);	

	virtual K2Vector<DSCCache>*	GetCache() { return fCache;};
	virtual void		SetCache(K2Vector<DSCCache>* cache);

private:
	bool16		fCacheFlag;
	K2Vector<DSCCache>*	fCache;
	
	DECLARE_HELPER_METHODS()
};


#endif /* _H_IDynamicSpellCheckCache */