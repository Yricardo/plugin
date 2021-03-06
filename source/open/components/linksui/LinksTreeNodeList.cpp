//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/open/components/linksui/LinksTreeNodeList.cpp $
//  
//  Owner: Paul Sorrick
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

// ----- Interfaces -----
#include "ILinksTreeNodeList.h"

// ----- Includes -----
#include "CPMUnknown.h"
#include "LinksUIID.h"
#include "UIDList.h"


LinkTreeEntry::LinkTreeEntry( const UIDRef& linkUIDRef, const UID& linkResourceUID, const LinkTreeEntry *parentEntry):
fLinkUIDRef(linkUIDRef),fResourceUID(linkResourceUID),fParentEntry(parentEntry)
{
//	TRACEFLOW("Links:LinksUI","Constructing LinkTreeEntry with link UID %d, linkResourceUID %d\n",linkUID,linkResourceUID);
}

LinkTreeEntry::~LinkTreeEntry()
{
}

void LinkTreeEntry::SetChildEntries(const K2Vector<LinkTreeEntry*> children)
{
	fChildren = children;
}


// Non-persistent version
class LinksTreeNodeList : public CPMUnknown<ILinksTreeNodeList>
{
public:
	LinksTreeNodeList(IPMUnknown *boss) : 
		CPMUnknown<ILinksTreeNodeList>(boss),fRootNode(nil)		{}
	
	virtual ~LinksTreeNodeList()
		{ ClearAllEntries(); }

	virtual void AddEntireTree(LinkTreeEntry* rootNode);
	virtual const LinkTreeEntry* GetRootLinkEntry() const { return fRootNode; }
	virtual bool IsTreeFlat() const;
	virtual  const LinkTreeEntry* FindEntryForLink(UIDRef linkUIDRef) const;
			
private:
	void ClearAllEntries();
	LinkTreeEntry *fRootNode;
};


// Non-persisent version
CREATE_PMINTERFACE(LinksTreeNodeList, kLinksTreeNodeListImpl)


bool LinksTreeNodeList::IsTreeFlat() const
{
	if(fRootNode)
	{
		K2Vector<LinkTreeEntry*> childEntries = fRootNode->GetChildEntries();
		for(K2Vector<LinkTreeEntry*>::const_iterator childElementIter = childEntries.begin(); childElementIter != childEntries.end(); ++childElementIter)
		{
			if((*childElementIter)->GetChildEntries().Length())
				return false;
		}
		return true;
	}
	else
		return true;
}
 
 
 void LinksTreeNodeList::AddEntireTree(LinkTreeEntry* rootNode)
 {
	ClearAllEntries();
	fRootNode = rootNode;
 }
 
void DeleteEntryAndChildren(LinkTreeEntry* someTreeEntry)
{
	K2Vector<LinkTreeEntry*> childEntries = someTreeEntry->GetChildEntries();
	for(K2Vector<LinkTreeEntry*>::const_iterator childElementIter = childEntries.begin(); childElementIter != childEntries.end(); ++childElementIter)
	{
		DeleteEntryAndChildren(*childElementIter);
	}
	delete someTreeEntry;
}

void LinksTreeNodeList::ClearAllEntries()
{
	if(fRootNode)
		DeleteEntryAndChildren(fRootNode);
	fRootNode = nil;
}

const LinkTreeEntry* FindUIDInSubtree(LinkTreeEntry* someTreeEntry,UIDRef linkUIDRef)
{
	if(linkUIDRef == someTreeEntry->GetLinkUIDRef())
		return someTreeEntry;
		
	K2Vector<LinkTreeEntry*> childEntries = someTreeEntry->GetChildEntries();
	for(K2Vector<LinkTreeEntry*>::const_iterator childElementIter = childEntries.begin(); childElementIter != childEntries.end(); ++childElementIter)
	{
		const LinkTreeEntry* result = FindUIDInSubtree(*childElementIter,linkUIDRef);
		if(result != nil)
			return result;
	}
	return nil;
}

const LinkTreeEntry* LinksTreeNodeList::FindEntryForLink(UIDRef linkUIDRef) const
{
	return FindUIDInSubtree(fRootNode,linkUIDRef);
}



