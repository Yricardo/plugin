//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/basicdialog/BscDlgDialogController.cpp $
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

// Interface includes:

// General includes:
#include "CDialogController.h"
#include "SystemUtils.h"
#include "ISelectionManager.h" 
#include "ITextEditSuite.h"
#include "IActiveContext.h" 
#include "IApplication.h"
// Project includes:
#include "BscDlgID.h"
#include "ISession.h"
#include "ILayoutUIUtils.h"
#include "ITextFrameFacade.h"
#include "IDocument.h"
#include "IDocumentList.h"
#include "IApplication.h"
#include "Utils.h"
#include "IDataBase.h"
#include "CAlert.h"
#include <stdlib.h>
#include <string> 

/** Implements IDialogController based on the partial implementation CDialogController; 
	its methods allow for the initialization, validation, and application of dialog widget values.
  
	The methods take an additional parameter for 3.0, of type IActiveContext.
	See the design document for an explanation of the rationale for this
	new parameter and the renaming of the methods that CDialogController supports.
	
	
	@ingroup basicdialog
	
*/
class BscDlgDialogController : public CDialogController
{
	public:
		/**
			Constructor.
			@param boss interface ptr from boss object on which this interface is aggregated.
		*/
		BscDlgDialogController(IPMUnknown* boss) : CDialogController(boss) {}

		/**
			Initializes each widget in the dialog with its default value.
			Called when the dialog is opened.
			@param dlgContext
		*/
		virtual void InitializeDialogFields( IActiveContext* dlgContext);

		/**
			Validate the values in the widgets. 
			By default, the widget with ID kOKButtonWidgetID causes 
			this method to be called. When all widgets are valid, 
			ApplyFields will be called.		
			@param myContext
			@return kDefaultWidgetId if all widget values are valid, WidgetID of the widget to select otherwise.

		*/
		virtual WidgetID ValidateDialogFields( IActiveContext* myContext);

		/**
			Retrieve the values from the widgets and act on them.
			@param myContext
			@param widgetId identifies the widget on which to act.
		*/
		virtual void ApplyDialogFields( IActiveContext* myContext, const WidgetID& widgetId);
};

/* CREATE_PMINTERFACE
 Binds the C++ implementation class onto its 
 ImplementationID making the C++ code callable by the 
 application.
*/
CREATE_PMINTERFACE(BscDlgDialogController, kBscDlgDialogControllerImpl)

/* ApplyFields
*/
void BscDlgDialogController::InitializeDialogFields( IActiveContext* dlgContext) 
{
	#pragma unused(dlgContext)
	// Put code to initialize widget values here.
}

/* ValidateFields
*/
WidgetID BscDlgDialogController::ValidateDialogFields( IActiveContext* myContext) 
{
	#pragma unused(myContext)
	WidgetID result = kNoInvalidWidgets;

	// Put code to validate widget values here.

	return result;
}

/* ApplyFields
*/
void BscDlgDialogController::ApplyDialogFields(IActiveContext* myContext, const WidgetID& widgetId)
{
	//prepare string
	PMString editBoxString = this->GetTextControlData(kBscDlgTextEditBoxWidgetID);
	PMString dropDownListSelection = this->GetTextControlData(kBscDlgDropDownListWidgetID);
	dropDownListSelection.Translate();
	PMString resultString = editBoxString;
	resultString.Append('\t');
	resultString.Append(dropDownListSelection);
	resultString.Append('\r');

	//je declare TextEditInterfacePtr
	InterfacePtr<ITextEditSuite> textEditSuite(myContext->GetContextSelection(), IID_ITEXTEDIT_ISUITE);
	//declare IApplicationInterfacePtr
	InterfacePtr<IApplication> app(GetExecutionContextSession()->QueryApplication());
	//declare IDocumentListInterfacePtr
	InterfacePtr<IDocumentList> oDocumentList(app->QueryDocumentList());

	if (textEditSuite && textEditSuite->CanEditText()) { //si un document est ouvert et une boite de texte aussi (on peut donc écrire)
		ErrorCode status = textEditSuite->InsertText(WideString(resultString));
		ASSERT_MSG(status == kSuccess, "WFPDialogController::ApplyFields: can't insert text");
		return;
	}

	if (oDocumentList->GetDocCount() > 0) {//si y'a un doc ouvert sur InDesign


		//debug
		/* PMString string1("nb docs : ");
		char buffer[3];
		itoa(int(oDocumentList->GetDocCount()), buffer, 10);//convert int32 to char[]
		PMString string2(buffer);//string to PMstring
		string1.Append('\t');
		string1.Append(string2);
		string1.Append('\r');
		CAlert::InformationAlert(string1);//debug */

		//iDocument *iDoc = Utils<ILayoutUIUtils>()->GetFrontDocument();


		//if(iDoc) {//à ce stade là, si la condition passe, on sait qu'il y a des documents ouverts dont un actif, il manque donc la zone de texte.

			//Utils<Facade::ITextFrameFacade>()->CreateTextFrame();//on crée donc la zone de texte
		
			/* CreateTextFrame(UIDRef parent, UIDRef &newFrame, const PMRect &boundary, bool16 noGraphicAttr, bool16 isHorizontal, bool16 isFrameGrid, bool16 isLeftToRight, ClassID frameItem = kFrameItemBoss) = 0 */

			//et on écrit
			//ErrorCode status = textEditSuite->InsertText(WideString(resultString));
			//return;

		//}

		//autrement il y a des documents ouvert mais pas de documents actif...
		//on rend le premier doc actif
		//myContext::ChangeContextDocument(oDocumentList->GetNthDoc(0));
		//on crée une text frame
		//Utils<Facade::ITextFrameFacade>()->CreateTextFrame;
		//on écrit
		//ErrorCode status = textEditSuite->InsertText(WideString(resultString));
	
		//return;

	}
		
	//sinon on créé un document

}



/*Facade::ITextFrameFacade::CreateTextFrame(UIDRef 	parent,
	UIDRef & 	newFrame,
	const PMRect & 	boundary,
	bool16 	noGraphicAttr,
	bool16 	isHorizontal,
	bool16 	isFrameGrid,
	bool16 	isLeftToRight,
	ClassID 	frameItem = kFrameItemBoss
	)*/
// End, BscDlgDialogController.cpp.

/*UIDRef::UIDRef(IDataBase * 	db,
	UID 	id
	)*/

