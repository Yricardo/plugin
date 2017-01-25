//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/graphics/IGraphicAttrClassID.h $
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
//========================================================================================

	#ifndef _IGraphicAttribute_ClassID_
	#define _IGraphicAttribute_ClassID_
//===================================================================================
//___________________________________________________________________________________
//	INCLUDES
//___________________________________________________________________________________
	#include "GraphicStylesID.h"
	#include "IPMUnknown.h"
//===================================================================================
//___________________________________________________________________________________
//	CLASS DECLARATION
//___________________________________________________________________________________
	
	/**	A graphic attribute data interface for the ClassID data.
	*/
	class IGraphicAttrClassID : public IPMUnknown
		{
		public:
			enum { kDefaultIID = IID_IGRAPHICATTR_CLASSID };

		//___________________________________________________________________________
		//	Accessor memeber functions
		//___________________________________________________________________________
		public:

			/**	Set the ClassID data.
				@param classID specifies the class ID to set.
			*/
			virtual void		SetClassID				(const ClassID& classID) = 0;

			/**	Returns the class ID value.
			*/
			virtual ClassID		GetClassID				(void) const = 0;
		};
		
#endif // _IGraphicAttribute_ClassID_
