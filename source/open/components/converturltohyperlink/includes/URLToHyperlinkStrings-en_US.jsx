﻿//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/converturltohyperlink/includes/URLToHyperlinkStrings-en_US.jsx $
//  
//  Owner: Saurabh Deshpande
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

var urlToHyperlinklocale = 'en';		// this is also the fallback for all English locales

//------------------------------------------------------------------------------
// General strings
//------------------------------------------------------------------------------

urlToHyperlinkStrings.DIALOGHEADER[urlToHyperlinklocale] = 'Convert URLs to Hyperlinks';
urlToHyperlinkStrings.SCOPELABEL[urlToHyperlinklocale] = 'Scope';
urlToHyperlinkStrings.SEARCHLABEL[urlToHyperlinklocale] = '&Search:';
urlToHyperlinkStrings.SEARCHDOCUMENTITEM[urlToHyperlinklocale] = 'Document';
urlToHyperlinkStrings.SEARCHSTORYITEM[urlToHyperlinklocale] = 'Story';
urlToHyperlinkStrings.SEARCHSELECTIONITEM[urlToHyperlinklocale] = 'Selection';
urlToHyperlinkStrings.APPLYTOHYPERLINKLABEL[urlToHyperlinklocale] = 'Apply to Hyperlink';
urlToHyperlinkStrings.CHARACTERSTYLELABEL[urlToHyperlinklocale] = '&Character Style:';
urlToHyperlinkStrings.NEWCHARACTERSTYLEITEM[urlToHyperlinklocale] = 'New Character Style...';
urlToHyperlinkStrings.FINDBUTTONTEXT[urlToHyperlinklocale] = '&Find';
urlToHyperlinkStrings.FINDNEXTBUTTONTEXT[urlToHyperlinklocale] = 'Find &Next';
urlToHyperlinkStrings.CONVERTBUTTONTEXT[urlToHyperlinklocale] = 'C&onvert';
urlToHyperlinkStrings.CONVERTALLBUTTONTEXT[urlToHyperlinklocale] = 'Convert &All';
urlToHyperlinkStrings.DONEBUTTONTEXT[urlToHyperlinklocale] = '&Done';

urlToHyperlinkStrings.URLTOHYPERLINLKACTIONNAME[urlToHyperlinklocale] = 'Convert URLs &to Hyperlinks...';
urlToHyperlinkStrings.INDESIGN[urlToHyperlinklocale] = 'Adobe InDesign';

//------------------------------------------------------------------------------
// Message strings
//------------------------------------------------------------------------------

urlToHyperlinkStrings.FINISHEDFINDINGMESSAGE[urlToHyperlinklocale] = 'Finished Finding URLs';
urlToHyperlinkStrings.CONVERTALLFINISHEDMESSAGE[urlToHyperlinklocale] = 'Search is completed. %1 replacement(s) made.';


//------------------------------------------------------------------------------
// Error strings
//------------------------------------------------------------------------------

urlToHyperlinkStrings.NOACTIVEDOCERROR[urlToHyperlinklocale] = 'Error : No Document is open';
urlToHyperlinkStrings.UNEXPECTEDSCOPEERROR[urlToHyperlinklocale] = 'Error : Expected Scope is “%1”... Found: “%2”';
urlToHyperlinkStrings.MISSINGSCRIPTFILEERROR[urlToHyperlinklocale] = 'Error: ConvertURLToHyperlink.jsx* missing; load failed';