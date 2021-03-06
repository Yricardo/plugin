//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/printselection/IPrnSelSuite.h $
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

#ifndef __IPrnSelSuite_h__
#define __IPrnSelSuite_h__

// Interface includes:
#include "IPMUnknown.h"

// Project includes:
#include "PrnSelID.h"

/** From SDK sample; a suite interface used to gather selected page and pagitem information.
	The information, i.e., the UIDs of object need to print, is collect
	and stored in interface IPrnSelData.

	@ingroup printselection
*/
class IPrnSelSuite : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_IPRNSELSUITE };

	/**	Populates 2 data structures: (1)page UIDs for pages that contained
		selected items and (2)page item UIDs of selected page items.
	*/
	virtual void StoreSelectionData(void) = 0;

	/** Can the print selection flag be retrieved?
	 * 	@return kTrue if it can be retrieved (i.e. a selection is available), 
	 * 			kFalse if not. 
	 */
	virtual bool16 CanGetPrintSelectionFlag(void) = 0;

	/** Get the print selection flag. 
	 * 	@return The current flag value 
	 */
	virtual bool16 GetPrintSelectionFlag(void) = 0;

	/** Can the print selection flag be set?
	 * 	@return kTrue if it can be set (i.e. a selection is available), 
	 * 			kFalse if not. 
	 */
	virtual bool16 CanSetPrintSelectionFlag(void) = 0;

	/** Set the print selection flag. 
	 * 	@param printSelection IN Set the print selection flag.
	 * 	@return kSuccess if success, other value if error. 
	 */
	virtual ErrorCode SetPrintSelectionFlag(const bool16 printSelection) = 0;
};
                
#endif
