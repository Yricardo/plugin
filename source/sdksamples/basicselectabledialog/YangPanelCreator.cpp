//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/basicselectabledialog/YangPanelCreator.cpp $
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

#include "VCPlugInHeaders.h"

// Implementation includes:
#include "cpanelcreator.h"

// Project includes:
#include "BscSlDlgID.h"

/**	We override CPanelCreator::GetPanelRsrcID() so we 
  	can provide a specific service ID and resource ID for our panel.
	This is one of the key components that allows the switching mechanism.
	This implements IPanelCreator, and uses the partial implementation CPanelCreator.
	@see GetPanelRsrcID
	@ingroup basicselectabledialog
	
*/
class YangPanelCreator : public CPanelCreator
{
public:
	/**	Constructor.
		@param boss IN interface ptr from boss object on which this interface is aggregated.
	*/
	YangPanelCreator(IPMUnknown* boss) : CPanelCreator(boss) {}

	/** Destructor.
	*/
	virtual ~YangPanelCreator() {}

	/** Returns the resource ID of the panel that is used in finding the
		service IDs resource and the panel view resource.
		Called by CPanelCreator::GetServiceIDs and CPanelCreator::GetPanelViewRsrcID.
		@return resource ID containing service IDs resource and panel view resource.
	*/
	virtual RsrcID GetPanelRsrcID() const;
};

/* CREATE_PMINTERFACE
 Binds the C++ implementation class onto its ImplementationID 
 making the C++ code callable by the application.
*/
CREATE_PMINTERFACE(YangPanelCreator, kYangPanelCreatorImpl)

/* GetPanelRsrcID
*/
RsrcID YangPanelCreator::GetPanelRsrcID() const
{
	return kYangPanelCreatorResourceID;
}

// End, YangPanelCreator.cpp



