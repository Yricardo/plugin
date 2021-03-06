//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/hiddentext/HidTxtModelModifyTextCmd.cpp $
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
#include "INewUIDCmdData.h"
#include "IRangeData.h"
#include "ITextModel.h"
#include "ITextModelCmds.h"
#include "IInsertTextData.h"
#include "IPageItemUtils.h"

// General includes:
#include "Command.h"
#include "CmdUtils.h"
#include "CommandID.h"
#include "Trace.h"
#include "Utils.h"


// Project includes:
#include "HidTxtID.h"
#include "IHidTxtModel.h"

/** Command implementation that modifies hidden text, i.e.
	the text stored in the story thread owned by a 
	kHidTxtModelBoss object.

	
	@ingroup hiddentext
 */
class HidTxtModelModifyTextCmd : public Command
{
	public:
		/** Constructor.
			@param boss refers to boss class on which this interface is aggregated
		 */
		HidTxtModelModifyTextCmd(IPMUnknown* boss);
		/** Destructor.
		 */
		virtual ~HidTxtModelModifyTextCmd();	
		
	protected:
		/** Modify the text currently stored in the
			hidden text model.
		 */
		virtual void		Do();
		
		/** Notify.
		 */
		virtual void		DoNotify();
		
		/** @return the command name.
		 */
		virtual PMString*	CreateName();

	private:
		UIDRef				fHidTxtModelUIDRef;

	private:
		/** Process commands generated by ITextModelCmds to update the stored text.
			@param hidTxtModel
			@param text
		 */
		ErrorCode			ModifyHiddenText(IHidTxtModel* hidTxtModel, const boost::shared_ptr<WideString>& text) const;
};

/*
*/
CREATE_PMINTERFACE(HidTxtModelModifyTextCmd, kHidTxtModelModifyTextCmdImpl)

/*
*/
HidTxtModelModifyTextCmd::HidTxtModelModifyTextCmd(IPMUnknown* boss) : Command(boss),
		fHidTxtModelUIDRef(nil, kInvalidUID)
{
	TRACEFLOW("HiddenText", "HidTxtModelModifyTextCmd::Constructor()-->In/Out\n");
}

/*
*/
HidTxtModelModifyTextCmd::~HidTxtModelModifyTextCmd()
{
	TRACEFLOW("HiddenText", "HidTxtModelModifyTextCmd::Destructor()-->In/Out\n");
}

/*
*/
void HidTxtModelModifyTextCmd::Do()
{
	TRACEFLOW("HiddenText", "HidTxtModelModifyTextCmd::Do()-->In\n");
	ErrorCode status = kFailure;
	do {
		// Validate parameters.
		const UIDList& itemList = this->GetItemListReference();
		ASSERT(itemList.Length() == 1);
		if (itemList.Length() != 1) {
			break;
		}
		fHidTxtModelUIDRef = itemList.GetRef(0);
		InterfacePtr<IHidTxtModel> hidTxtModel(fHidTxtModelUIDRef, UseDefaultIID());
		ASSERT(hidTxtModel != nil);
		if (hidTxtModel == nil) {
			break;
		}
		InterfacePtr<IInsertTextData> insertTextData(this, UseDefaultIID());
		ASSERT(insertTextData != nil);
		if (insertTextData == nil) {
			break;
		}
		status = this->ModifyHiddenText(hidTxtModel, insertTextData->GrabInsertData());
	} while(false);

	TRACEFLOW("HiddenText", "HidTxtModelModifyTextCmd::Do()-->Out status=%d\n", status);

}

/*
*/
void HidTxtModelModifyTextCmd::DoNotify()
{
	TRACEFLOW("HiddenText", "HidTxtModelModifyTextCmd::DoNotify()-->In\n");
	Utils<IPageItemUtils> pageItemUtils;
	ASSERT(pageItemUtils);
	if (pageItemUtils && fHidTxtModelUIDRef.GetDataBase()) {
		pageItemUtils->NotifyDocumentObservers(fHidTxtModelUIDRef.GetDataBase(), ::GetClass(this), IHidTxtModel::kDefaultIID, this);
	}
	TRACEFLOW("HiddenText", "HidTxtModelModifyTextCmd::DoNotify()-->Out\n");
}

/*
*/
PMString* HidTxtModelModifyTextCmd::CreateName()
{
	return new PMString(kHidTxtModelModifyTextCmdStringKey);
}

/*
*/
ErrorCode HidTxtModelModifyTextCmd::ModifyHiddenText(IHidTxtModel* hidTxtModel, const boost::shared_ptr<WideString>& text) const
{
	TRACEFLOW("HiddenText", "HidTxtModelModifyTextCmd::ModifyHiddenText()-->In\n");
	ErrorCode status = kFailure;

	do {
		ASSERT(hidTxtModel != nil);
		if (hidTxtModel == nil) {
			break;
		}
		TextIndex hiddenTextStart = kInvalidTextIndex;
		int32 hiddenTextSpan = 0;
		bool16 found = hidTxtModel->GetHiddenTextRange(hiddenTextStart, hiddenTextSpan);
		ASSERT(found == kTrue && hiddenTextStart != kInvalidTextIndex && hiddenTextSpan > 0);
		if (!(found == kTrue && hiddenTextStart != kInvalidTextIndex && hiddenTextSpan > 0)) {
			break;
		}
		InterfacePtr<ITextModel> textModel(hidTxtModel->QueryTextModel());
		ASSERT(textModel != nil);
		if (textModel == nil) {
			break;
		}
		// saCS use ITextModelCmds instead of ITextModel
		InterfacePtr<ITextModelCmds> textModelCmds(textModel, UseDefaultIID());
		ASSERT(textModelCmds != nil);
		if (textModelCmds == nil) {
			break;
		}
		if (hiddenTextSpan > 1) {
 			// Replace (taking care never to replace the terminating kTextChar_CR character).
			InterfacePtr<ICommand> replaceTextCmd(textModelCmds->ReplaceCmd(hiddenTextStart, hiddenTextSpan - 1, text));
			status = CmdUtils::ProcessCommand(replaceTextCmd);
		}
		else {
			// Insert (the thread contains the terminating kTextChar_CR character).
			InterfacePtr<ICommand> insertTextCmd(textModelCmds->InsertCmd(hiddenTextStart, text));
			status = CmdUtils::ProcessCommand(insertTextCmd);
		}

	} while(false);

	TRACEFLOW("HiddenText", "HidTxtModelModifyTextCmd::ModifyHiddenText()-->Out status=%d\n", status);
	return status;
}

// End, HidTxtModelModifyTextCmd.cpp