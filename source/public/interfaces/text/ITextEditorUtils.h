//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/interfaces/text/ITextEditorUtils.h $
//  
//  Owner: Bernd Paradies
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

#pragma once
#ifndef __ITextEditorUtils__
#define __ITextEditorUtils__

#include "Utils.h"
#include "RangeData.h"
#include "ICursorMgr.h"

#include "TextEditorID.h"			// default IID

class CursorSpec;
class IControlView;
class ITextModel;
class ITextParcelList;
class ITextStoryThread;
class ParcelKey;
class ITextVariableTable;
class PMString;

/** Utilities related to the text editor.
	e.g.
	<pre>Utils&lt;ITextEditorUtils&gt;()->HitTestStoryThread( ... ) ;</pre>
	@ingroup texteditor_util
*/
class ITextEditorUtils : public IPMUnknown
{
public:
	enum { kDefaultIID = IID_ITEXTEDITORUTILS };

	/** Compute the cursor spec for the given matrix. Returns one of eight different cursor depending on degree of rotation in matrix.
	@param innerToPBMatrix IN the matrix for the object in question
	@param spec OUT the returned cursor spec to match the given matrix.
	@return the appropriate I-Beam cursor given an innerToPasteboard matrix.
	*/
	virtual void GetIBeamCursor(const PMMatrix& innerToPBMatrix, CursorSpec& spec) = 0;

	/**	Compute the pointer cursor to use with the given modifier keys. Used when IBeam or TOP tool is active, but user
		has toggled to pointer tool with command/ctrl key (and possibly other modifiers) down.
		@param currentPt global mouse point
		@param view the view the point is in
		@param modifiers the cursor modifier keys
		@param defaultCursor the default cursor to use
		@return CursorSpec the new cursor to use
	 */
	virtual CursorSpec GetPointerCursorForTextTool(const SysPoint currentPt, IControlView* view, ICursorMgr::eCursorModifierState modifiers, CursorSpec defaultCursor) = 0;

	/** Find the text index of the hit character in a story thread. Works in layout and galley view.
	@param storyThread IN the story thread to hit test.
	@param parcelKey IN the ParcelKey to use for hittesting.
	@param view IN the control view to use for hittesting.
	@param viewLoc IN the pasteboard coordinates of the point to hit test.
	@param nextLine OUT text index of the first character in the next line after the line hit (useful for the selection code)
	@return text index of last character in the hit line. Returns -1 if no hit (e.g. parcel is from text that damaged)
	*/
	virtual PMReal HitTestStoryThread(ITextStoryThread* storyThread, ParcelKey key, IControlView* view, const PMPoint &viewLoc, TextIndex *nextLine) = 0;

	/** Interpret the result from HitTestStoryThread an return a range (of length 0) to be used by text selection tracking code. Works in layout and galley view.
	@param storyThread IN the story thread to hit test.
	@param view IN the control view to use for hittesting.
	@param charHit IN/OUT the value returned from HitTestStoryThread.
	@param nextLine IN text index of the first character in the next line after the line hit (as generated from HitTestStoryThread)
	@param useCharHitForParagraphSnap OUT -- used only by the TextSelectionSuite for when to snap the paragraph
	@return text range (of length 0) adjusted for where the cursor caret will be.
	*/
	virtual RangeData AdjustHitTestTextIndex(ITextStoryThread* storyThread, IControlView* view, PMReal& charHit, const TextIndex nextLine, bool16* useCharHitForParagraphSnap = nil) = 0;

	/** Convert a model text range to a display text range. In Galley and Story, text model and text display indices can differ.
	@param model IN the text model.
	@param view IN the control view to use for hittesting.
	@param hitIndex IN the text model index to adjust to display index.
	@param rangeToConvert IN the text model range to convert to a display text range
	@return the display text range.
	*/
	virtual RangeData PrepareToConvertToDisplay(ITextModel *model, IControlView *view, TextIndex hitIndex, RangeData rangeToConvert) = 0;

	/** Invoke the dialog to manage text variables.
	@param varTable IN the variable table to manage.
	@param varName IN if non-empty, the variable to select in the list within the dialog.
	*/
	virtual ErrorCode ManageVariables(ITextVariableTable* varTable, const PMString* varName) = 0;

	/** Activate TextEditor View
	This method represents code pulled out of CreateMultiColumnItemCmd to
	activate the text editor view (by selecting text) after the MCF was
	created. The restrictions are: 1) the specified splineRef must NOT be for
	a TOP, 2) the MCF which is the child of the specified spline must own the
	first TextFrameColumn in its IFrameList, and 3) the active tool has to be
	ITool::kTextSelection.
	@param view Pointer to IControlView
	@param splineRef UIDRef of object with IGraphicFrameData interface
	@return kTrue if the editor was activated, kFalse otherwise.
	*/
	virtual bool16 ActivateTextEditorView(IControlView* view,
										const UIDRef& splineRef) const = 0;

};

#endif	// __ITextEditorUtils__

