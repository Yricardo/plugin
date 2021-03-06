//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/architecture/IWorkspace.h $
//  
//  Owner: Frits Habermann
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
#ifndef __IWORKSPACE__
#define __IWORKSPACE__

#include "IPMUnknown.h"
#include "WorkspaceID.h"


/** IWorkspace is a handle used for accessing preferences: either application
	preferences, or document preferences- you should not need to call any methods 
	here.

	Provides an abstract interface for the concept of a "Workspace". Most people will add their own interfaces to
	the boss object where the IWorkspace resides rather than add to the workspace itself. This interface, then, provides a
	startup, shutdown methodology which can be added to. However, designers should instead use the service manager
	and create a startup/shutdown service instead of overriding implementations of IWorkspace. This interface then
	becomes mainly a marker to see if a particular boss is considered a workspace or not.

	@ingroup arch_session
	@see IStartupShutdownService 
	@see kWorkspaceBoss (session workspace)
	@see kDocWorkspaceBoss (document workspace)
*/
class IWorkspace : public IPMUnknown
{
public:
 	enum { kDefaultIID = IID_IWORKSPACE };
 
	virtual void	Startup() = 0;
	virtual void	Shutdown() = 0;
};

#endif