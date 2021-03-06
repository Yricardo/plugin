//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/basicpersistinterface/BPIData.cpp $
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

// API includes
#include "CPMUnknown.h"

// Project includes:
#include "BPIID.h" 
#include "IBPIData.h"

/** Non persistent implementation of IBPIData used by clients who
	just want to pass IBPIData parameters around at run time and don't
	need their value stored persistently.

	@ingroup basicpersistinterface
	
	@see kBPISetDataCmdBoss
*/
class BPIData : public CPMUnknown<IBPIData>
{
public:
	/**
		Constructor.
		@param boss interface ptr from boss object on which this interface is aggregated.
	*/
	BPIData(IPMUnknown* boss);
	
	/** Destructor
	 */
	virtual ~BPIData() {};

	/** See IBPIData.
	*/
	virtual const WideString&	Get();

	/** See IBPIData.
	*/
	virtual void Set
	(
		const WideString& value 
	);

private:
	WideString	fData;

};

/* Makes the implementation available to the application.
*/
CREATE_PMINTERFACE(BPIData, kBPIDataImpl)

/* Constructor
*/
BPIData::BPIData(IPMUnknown* boss)
: CPMUnknown<IBPIData>(boss) , fData("") 
{
}

/*
*/
void BPIData::Set (const WideString& value)
{
	fData = value;
}

/*
*/
const WideString& BPIData::Get()
{
	return fData;
}

// End BPIData.cpp


