//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/IkfStyleMap.h $
//  
//  Owner: Margret_Albrecht
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
#ifndef __IkfStyleMap__
#define __IkfStyleMap__


#include "IPMUnknown.h"


/** Identification of cached kfstyles
	@ingroup text_kern
*/
class IkfStyleMap : public IPMUnknown
{
	public:
  		virtual void  		SetkfStyleID(int32)= 0;
  		virtual void		SetkfStyleIndex(int32)= 0;
  		virtual int32   		GetkfStyleID()= 0;
		virtual int32 		GetkfStyleIndex()= 0;
};


#endif		// __IkfStyleMap__