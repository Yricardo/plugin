//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/customactionfilter/CstAFltActionFilter.h $
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

#ifndef __CstAFltActionFilter__
#define __CstAFltActionFilter__

#include "IActionFilter.h"

/** Filters actions in a configurable way, with the	help of ActionFilterHelper.
 * 
 * 	@ingroup customactionfilter
 * 	@author Ken Sadahiro
*/
class CstAFltActionFilter : public CPMUnknown<IActionFilter>
{
public:
	/** Constructor.
		@param boss interface ptr from boss object on which this interface is aggregated.
	*/
	CstAFltActionFilter(IPMUnknown* boss);

	/** Destructor.
	*/
	virtual ~CstAFltActionFilter(void)
	{
	}

	/** FilterAction
		@see IActionFilter
	*/
	virtual void FilterAction(ClassID* componentClass, 
							  ActionID* actionID,   
							  PMString* actionName,
							  PMString* actionArea, 
							  int16* actionType, 
							  uint32* enablingType, 
							  bool16* userEditable);

};
#endif // __CstAFltActionFilter__
