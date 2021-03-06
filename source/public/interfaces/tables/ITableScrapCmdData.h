//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/tables/ITableScrapCmdData.h $
//  
//  Owner: Peter Boctor
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
#ifndef __ITABLESCRAPCMDDATA__
#define __ITABLESCRAPCMDDATA__

#include "IPMUnknown.h"
#include "CommandID.h"
#include "TablesID.h"

class IDataExchangeHandler;
class GridArea;

/** 
	The table scrap information used by commands when copy/pasting table cells on the scrap
	@ingroup tables_cmd
*/

class ITableScrapCmdData : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITABLESCRAPCMDDATA };
	
	/** 
		Sets the information the command needs to act
		@param	tableModel		the table mode UIDRef
		@return	whichCells		the cell range Grid Area
		@return	destinationHandler	The IDataExchangeHandler see @GetDestinationHandler
	*/
	virtual void		Set(UIDRef tableModel, GridArea whichCells, IDataExchangeHandler* destinationHandler) = 0;
	
	/** 
		Returns the table mode this command acted on
		@return	UIDRef		the table mode ref
	*/
	virtual UIDRef		GetTableModel() const = 0;
	/** 
		Returns the cell range this command acted on
		@return	GridArea		the cell range
	*/
	virtual GridArea	GetRange() const = 0;
	
	/** 
		Commands often need access to the dataHandler that will be the target of a copy-to-scrap command.
	 	but the lifetime data handlers is very short because we revert scrap databases frequently.
	 	ReleaseDestinationHandler should be called soon after the command has completed,
		and definitely before the affected scrap gets reverted.
	*/
	virtual void ReleaseDestinationHandler() = 0;

	/** 
		Commands often need access to the dataHandler that will be the target of a copy-to-scrap command.
	 	but the lifetime data handlers is very short because we revert scrap databases frequently.
	 	ReleaseDestinationHandler should be called soon after the command has completed,
		and definitely before the affected scrap gets reverted.
		@return	IDataExchangeHandler
	*/
	virtual IDataExchangeHandler*	GetDestinationHandler() const = 0;	
};


#endif

