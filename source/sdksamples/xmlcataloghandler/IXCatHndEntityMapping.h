//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/sdksamples/xmlcataloghandler/IXCatHndEntityMapping.h $
//  
//  Owner: Ian Paterson
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

#ifndef __IXCatHndEntityMapping_h__
#define __IXCatHndEntityMapping_h__
#include "IPMUnknown.h"
#include "XCatHndID.h"

/** Stores information needed to map PUBLIC identifiers to URIs.

	Stores entity mapping and related information (list of xml:base values) 
	persistently. 

	We store not only individual
	PUBLIC to URI mappings, but we store a list of xml:base values.
	We use xml:base value to specify a path in the local file system
	where resources related to a particular document type can be found.
	We can store multiple of these, since we might have resources for
	different XML vocabularies in different places. 

	XML Base is a W3C TR: see http://www.w3.org/TR/xmlbase/ that
	is used in the XML Catalogs: see http://www.oasis-open.org/committees/entity/spec-2001-08-06.html 

	We're using xml:base here as paths in local file system in platform format, and not worrying
	too much about having conforming URLs (file:/// etc)
	@ingroup xmlcataloghandler
*/
class IXCatHndEntityMapping : public IPMUnknown {
public:
	enum { kDefaultIID = IID_IXCATHNDENTITYMAPPING};


	/**	Add an associative mapping between PUBLIC ID and a SYSTEM ID
		@param publicID 
		@param systemID 
	 */
	virtual void AddMapping(const WideString& publicID, const WideString& systemID)=0;

	/**	Retrieve a URI pointing to local system for given PUBLIC identifier
		@param publicID 
		@return WideString 
	 */
	virtual WideString GetUri(const WideString& publicID) const = 0;

	/**	Count of entries in PUBLIC/URI map
		@param none
		@return int32 
	 */
	virtual int32 GetMapSize() const=0;

	/**	Get PUBLIC identifier (key) by index
		@param index 
		@return WideString 
	 */
	virtual WideString GetNthPublicIdentifier(int32 index) const = 0;

	/**	Copy one map to this
		@param srcMapping 
	 */
	virtual void Copy(const IXCatHndEntityMapping* srcMapping)=0;

	/** Get size of the list of xml:base paths stored
	*/
	virtual int32 GetXMLBaseCount() const = 0;

	/** Get the nth xml:base we found in our catalog
	*/
	virtual WideString GetNthXMLBase(int32 n) const = 0;

	/** Add another xml:base to the list stored
	*/
	virtual void AddXMLBase(const WideString& xmlBase) = 0;

};

#endif // __IXCatHndEntityMapping_h__

//  Code generated by DollyXS code generator
