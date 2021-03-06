//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IGraphicStyleAttrIterator.h $
//  
//  Owner: Michael_Martz
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
//  
//  NOTE:	This interface is obsolete.
//  There's no associated IID, the implementation is not part of the project.
//  There's no usage anywhere in the code.
//  
//========================================================================================

#pragma once
	#ifndef _IGraphicStyle_AttributeIterator_
	#define _IGraphicStyle_AttributeIterator_
//===================================================================================
//___________________________________________________________________________________
//	INCLUDES
//___________________________________________________________________________________
	#include "IPMUnknown.h"
	#include "IGraphicStyleAttrBossList.h"
	#include "IGraphicStyleServiceReference.h"
//===================================================================================
//___________________________________________________________________________________
//	CLASS DECLARATIONS
//___________________________________________________________________________________

	/**	This interface is obsolete.
	*/
	class IGraphicStyleAttributeIterator : public IPMUnknown
		{
		public:
			virtual void			Initialize					(ServiceID, IGraphicStyleAttributeBossList*) = 0;
		
		//___________________________________________________________________________
		//	Iteration
		//___________________________________________________________________________
		public:
			virtual uint16			GetAttributeCount			(void) const = 0;
			virtual void			Reset						(void) = 0;

			virtual IGraphicStyleServiceReference*		QueryNextAttribute			(void) = 0;
		};

#endif // _IGraphicStyle_AttributeIterator_
