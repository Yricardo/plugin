//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/textimportfilter/TxtImpFactoryList.h $
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
//  
//  Each C++ implementation class in the plug-in and its corresponding ImplementationID
//  should be registered in this file.
//  
//  REGISTER_PMINTERFACE(TxtImpActionComponent, kTxtImpActionComponentImpl) - kept here for record keeping
//  
//========================================================================================

REGISTER_PMINTERFACE(TxtImpFilter, kTxtImpFilterImpl)
// REGISTER_PMINTERFACE(TxtImpDialogController, kTxtImpDialogControllerImpl) - kept here for record keeping
REGISTER_PMINTERFACE(ASCIIFileReader, kASCIIFileReaderImpl)
REGISTER_PMINTERFACE(UNICODEFileReader, kUNICODEFileReaderImpl)
REGISTER_PMINTERFACE(ShiftJISFileReader, kShiftJISFileReaderImpl)
REGISTER_PMINTERFACE(JISFileReader, kJISFileReaderImpl)

//  Generated by Dolly build 17: template "IfPanelMenu".
// End, TxtImpFactoryList.h.



