//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/candlechartui/ChartUIBrowseCSVFile.cpp $
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

// General includes:
#include "SDKFileHelper.h"

// Project includes:
#include "ChartUIBrowseCSVFile.h"
#include "CdlChtUIID.h"


/*	BrowseFile
*/
bool16 ChartUIBrowseCSVFile::BrowseFile(IDFile& outFile)
{
	bool16 succeededInLoadingFile = kFalse;

	do {
		// Browse for CSV data file to load 
		SDKFileOpenChooser fileChooser;
		fileChooser.SetTitle(kCdlChtUISelectDataFileStringKey);
		fileChooser.AddFilter(kCSVFileTypeInfoID, kCdlChtUICSVFilterStringKey);
		fileChooser.ShowDialog();
		if (!fileChooser.IsChosen()) {
			break;
		}
		outFile = fileChooser.GetIDFile();
		succeededInLoadingFile = kTrue;
	} while(kFalse);
	return succeededInLoadingFile;
}


// End, ChartUIBrowseCSVFile.cpp.
