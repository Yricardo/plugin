//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/layout/INewHyperlinkPageDestCmdData.h $
//  
//  Owner: Jianlan Song
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

#include "HyperlinkID.h"
#include "IPMUnknown.h"

// ===================================================================================
//	class INewHyperlinkPageDestCmdData
// ===================================================================================
/** Command data interface, set/get the page destination data for the command kNewHyperlinkPageDestCmdBoss
*/
class INewHyperlinkPageDestCmdData : public IPMUnknown {

//-----------------------------------
//	Constants
//
public:
	enum {kDefaultIID = IID_INEWHYPERLINKPAGEDESTCMDDATA};

//-----------------------------------
//
public:

	/**	Get destination unique key
		@return int32 unique key
	 */
	virtual int32 GetUniqueKey() const = 0;
	/**	Set unique key value
		@param unique key
	 */
	virtual void SetUniqueKey(int32 uniqueKey) = 0;
		
};

