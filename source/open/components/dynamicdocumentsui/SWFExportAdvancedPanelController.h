//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/dynamicdocumentsui/SWFExportAdvancedPanelController.h $
//  
//  Owner: DBerggren
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

#include "CDialogController.h"

class ISWFExportPreferences;

//========================================================================================
// CLASS SWFExportAdvancedPanelController
//========================================================================================

class SWFExportAdvancedPanelController : public CDialogController
{
	typedef CDialogController Inherited;

	public:
		// ----- Popup Indexes -----
		enum {
			// Text
			kFlashTextIndex				= 0,
			kVectorTextIndex,
			kRasterTextIndex,

			// Image Compression
			kJPGIndex					= 0,
			kPNGIndex,
			kAutoIndex,

			// Quality
			kMinQualityIndex			= 0,
			kLowQualityIndex,
			kMedQualityIndex,
			kHighQualityIndex,
			kMaxQualityIndex
		};

		// ----- Initialization -----
		SWFExportAdvancedPanelController(IPMUnknown *boss);
		virtual	~SWFExportAdvancedPanelController();
	
		// ----- Dialog protocol -----
		virtual void InitializeDialogFields( IActiveContext* ac);
		virtual void ResetDialogFields(IActiveContext* ac);
		void ClosingDialog(IActiveContext* lastChanceToUseMyContext);

	private:
		// ----- Private methods -----
		void InitializeFrameRate(ISWFExportPreferences* iData) const;
		void InitializeExportText(ISWFExportPreferences* iData) const;
		void InitializeImageHandling(ISWFExportPreferences* iData) const;
};


// End, SWFExportAdvancedPanelController.h.
