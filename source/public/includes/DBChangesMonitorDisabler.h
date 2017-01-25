//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/DBChangesMonitorDisabler.h $
//  
//  Owner: Habib Khalfallah
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
#ifndef __DBChangesMonitorDisabler__
#define __DBChangesMonitorDisabler__

#pragma export on

/** Private; for internal use only.
*/
class PUBLIC_DECL DBChangesMonitorDisabler
{
public:
	DBChangesMonitorDisabler(IDataBase* db);
	DBChangesMonitorDisabler(const DBChangesMonitorDisabler& copy);
	DBChangesMonitorDisabler & operator = (const DBChangesMonitorDisabler& copy);
	~DBChangesMonitorDisabler();
private:
		bool fBeforeState;
		InterfacePtr<IPMUnknown> fDBMonitor;
};

#endif
