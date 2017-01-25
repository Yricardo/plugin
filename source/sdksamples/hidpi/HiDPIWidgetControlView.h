//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/hidpi/HiDPIWidgetControlView.h $
//  
//  Owner: Neelabh Sunny
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2014/06/13 15:26:03 $
//  
//  $Revision: #1 $
//  
//  $Change: 879733 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//  
//  Each C++ implementation class in the plug-in and its corresponding ImplementationID
//  should be registered in this file.
//  
//========================================================================================
#ifndef __HiDPIWidgetControlView_h__
#define __HiDPIWidgetControlView_h__

#include "DVControlView.h"

class HiDPIWidgetControlView : public DVControlView
{
public:

	/** Constructor. */
	HiDPIWidgetControlView(IPMUnknown* iBossP) : DVControlView(iBossP) {}
	
	virtual void ReadWrite(IPMStream* iStreamP, ImplementationID iImpID);

	/** Draw function actually draws PNG image within icon */
	virtual void Draw(IViewPort* iViewPortP, SysRgn iUpdateRgn);
};

#endif