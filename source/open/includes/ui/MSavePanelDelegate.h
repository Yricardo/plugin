//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/includes/ui/MSavePanelDelegate.h $
//  
//  Owner: sanyam
//  
//  $Author: gmatthew $
//  
//  $DateTime: 2013/06/18 15:15:50 $
//  
//  $Revision: #1 $
//  
//  $Change: 853167 $
//  
//  ADOBE CONFIDENTIAL
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  All information contained herein is, and remains
//  the property of Adobe Systems Incorporated and its suppliers,
//  if any.  The intellectual and technical concepts contained
//  herein are proprietary to Adobe Systems Incorporated and its
//  suppliers and may be covered by U.S. and Foreign Patents,
//  patents in process, and are protected by trade secret or copyright law.
//  Dissemination of this information or reproduction of this material
//  is strictly forbidden unless prior written permission is obtained
//  from Adobe Systems Incorporated.
//  
//========================================================================================

class MSaveFileDialogBase;
@interface MSavePanelDelegate : NSObject<NSOpenSavePanelDelegate>
{
	MSaveFileDialogBase*	fSaveDialogBaseRef;
}

@property(readwrite)MSaveFileDialogBase*	fSaveDialogBaseRef;

- (BOOL)panel:(id)sender validateURL:(NSURL *)url error:(NSError **)outError;

@end
