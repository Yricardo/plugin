//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/basicshape/examplefiles/scripts/javascript/basicshape.jsx $
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
//  exercises scriptable features of the plug-in.
//  
//  The results of the script are logged in a file called 
//  basicshape.jsx-log.txt in the folder that contains
//  the script. Check the log file for the results.
//  
//  Close all open files.
//  
//========================================================================================

CloseAll();

//Get a reference to the folder containing the running script.
var myScriptFileName = app.activeScript;
var myScriptFile = File(myScriptFileName);
var myFolder = myScriptFile.parent + "/";

// Open log file alongside the script.
var myLogFile = myScriptFile + "-log.txt";
var sink;
sink = new File(myLogFile);
sink.open("w");

// Local variables used to track status.
var myError = false;
var myName = "";

myName = "Create a BasicShape";
sink.writeln(myName);
app.documents.add();
app.documents[0].spreads[0].basicShapes.add();
if (app.documents[0].spreads[0].basicShapes.length != 1) {
	sink.writeln(" error");
	myError = true;
}
app.documents[0].spreads[0].basicShapes[0].geometricBounds = ["0p0", "0p0", "36p0", "36p0"];

myName = "Put two rectangles in the BasicShape";
sink.writeln(myName);
app.documents[0].spreads[0].basicShapes[0].rectangles.add();
app.documents[0].spreads[0].basicShapes[0].rectangles.add();
if (app.documents[0].spreads[0].basicShapes[0].rectangles.length != 2) {
	sink.writeln(" error");
	myError = true;
}
app.documents[0].spreads[0].basicShapes[0].rectangles[0].geometricBounds = ["6p0", "6p0", "15p0", "15p0"];
app.documents[0].spreads[0].basicShapes[0].rectangles[1].geometricBounds = ["6p0", "21p0", "15p0", "30p0"];

myName = "Put two ovals in the BasicShape";
sink.writeln(myName);
app.documents[0].spreads[0].basicShapes[0].ovals.add();
app.documents[0].spreads[0].basicShapes[0].ovals.add();
if (app.documents[0].spreads[0].basicShapes[0].ovals.length != 2) {
	sink.writeln(" error");
	myError = true;
}
app.documents[0].spreads[0].basicShapes[0].ovals[0].geometricBounds = ["21p0", "6p0", "30p0", "15p0"];
app.documents[0].spreads[0].basicShapes[0].ovals[1].geometricBounds = ["21p0", "21p0", "30p0", "30p0"];

// Report results of script.
if (myError) {
	alert("DONE WITH ERRORS");
	sink.writeln("DONE WITH ERRORS");
	alert("Check log file: "  + myLogFile);}
else {
	alert("DONE");
	sink.writeln("DONE");
}  

// Close the log.
sink.close();

/*
*/
function CloseAll() 
{
	while	(app.documents.length >	0)  {
		app.documents[0].close(SaveOptions.NO);	
	}
	if (app.name !=	"Adobe InCopy")	{
		while (app.books.length	> 0) {
			app.books[0].close(SaveOptions.NO);	
		}
		while (app.libraries.length	> 0) {
			app.libraries[0].close(); 
		}
	}
}