//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/customactionfilter/ActionMapper.cpp $
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


#include "ActionMapper.h"

ActionMapper* ActionMapper::actionMapperPtr=nil;


void 
ActionMapper::ActionMapperDestroy(){
	if (actionMapperPtr != nil){
		delete actionMapperPtr;
		actionMapperPtr = nil;
	}
}

ActionMapper *
ActionMapper::ActionMapperFactory(){
	if (ActionMapper::actionMapperPtr == nil){
		ActionMapper::actionMapperPtr = new ActionMapper();
	}
	return ActionMapper::actionMapperPtr;
}

void
ActionMapper::AddAction(ActionID actionID, ClassID classID){
	if (this->LookUpAction(actionID) == kInvalidClass)
		action2ClassMapping.push_back(K2Pair<ActionID,ClassID>(actionID,classID));
}


ClassID
ActionMapper::LookUpAction(ActionID actionID){
	ClassID retVal = kInvalidClass;
	K2Vector<K2Pair<ActionID,ClassID> >::iterator iter = action2ClassMapping.begin();
	for (; iter!= action2ClassMapping.end(); iter++){
		if ((*iter).first == actionID){
			retVal = (*iter).second;
		}
	}
	return retVal;
}

