//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/components/server/gsoap/soapStub.h $
//  
//  Owner: ???
//  
//  $Author: devtecbj $
//  
//  $DateTime: 2013/08/08 10:33:08 $
//  
//  $Revision: #1 $
//  
//  $Change: 856052 $
//  
//  Copyright 1997-2010 Adobe Systems Incorporated. All rights reserved.
//  
//  NOTICE:  Adobe permits you to use, modify, and distribute this file in accordance 
//  with the terms of the Adobe license agreement accompanying it.  If you have received
//  this file from a source other than Adobe, then your use, modification, or 
//  distribution of it requires the prior written permission of Adobe.
//  
//  
//  soapStub.h
//  Generated by gSOAP 2.7.9l from /Users/lmillett/thyme/source/components/soapserver/server/SSLibFunctions.h
//  Copyright(C) 2000-2007, Robert van Engelen, Genivia Inc. All Rights Reserved.
//  This part of the software is released under one of the following licenses:
//  GPL, the gSOAP public license, or Genivia's license for commercial use.
//  
//========================================================================================

#ifndef soapStub_H
#define soapStub_H
#ifndef __SSLibFunctions__
#define __SSLibFunctions__
#ifndef SSLIB
#include <vector>
#endif
#include <vector>
#include <string>
#endif
#include "stdsoap2.h"

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not redeclare */

#endif

#ifndef SOAP_TYPE_IDSP_ScriptArg
#define SOAP_TYPE_IDSP_ScriptArg (25)
/* IDSP-ScriptArg */
struct IDSP_ScriptArg
{
public:
	std::string name;	/* required element of type xsd:string */
	std::string value;	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_IDSP__RunScriptParameters
#define SOAP_TYPE_IDSP__RunScriptParameters (27)
/* IDSP:RunScriptParameters */
struct IDSP__RunScriptParameters
{
public:
	char *scriptText;	/* optional element of type xsd:string */
	char *scriptLanguage;	/* optional element of type xsd:string */
	char *scriptFile;	/* optional element of type xsd:string */
	std::vector<struct IDSP_ScriptArg >*scriptArgs;	/* optional element of type IDSP-ScriptArg */
};
#endif

#ifndef SOAP_TYPE_IDSP__Data
#define SOAP_TYPE_IDSP__Data (30)
/* IDSP:Data */
struct IDSP__Data
{
public:
	int __type;	/* any type of element <data> (defined below) */
	void *data;	/* transient */
};
#endif

#ifndef SOAP_TYPE_IDSP__List
#define SOAP_TYPE_IDSP__List (33)
/* Sequence of IDSP:List schema type: */
struct IDSP__List
{
public:
	struct IDSP__Data *__ptr;
	int __size;
};
#endif

#ifndef SOAP_TYPE_IDSP__Object
#define SOAP_TYPE_IDSP__Object (35)
/* IDSP:Object */
struct IDSP__Object
{
public:
	int __type;	/* any type of element <specifierData> (defined below) */
	void *specifierData;	/* transient */
	unsigned long objectType;	/* required element of type xsd:unsignedLong */
	unsigned long specifierForm;	/* required element of type xsd:unsignedLong */
	struct IDSP__Object *start;	/* optional element of type IDSP:Object */
	struct IDSP__Object *end;	/* optional element of type IDSP:Object */
};
#endif

#ifndef SOAP_TYPE_IDSP__ObjectList
#define SOAP_TYPE_IDSP__ObjectList (38)
/* Sequence of IDSP:ObjectList schema type: */
struct IDSP__ObjectList
{
public:
	struct IDSP__Object *__ptr;
	int __size;
};
#endif

#ifndef SOAP_TYPE_IDSP__Field
#define SOAP_TYPE_IDSP__Field (39)
/* IDSP:Field */
struct IDSP__Field
{
public:
	unsigned long id;	/* required element of type xsd:unsignedLong */
	struct IDSP__Data *data;	/* optional element of type IDSP:Data */
};
#endif

#ifndef SOAP_TYPE_IDSP__Record
#define SOAP_TYPE_IDSP__Record (40)
/* Sequence of IDSP:Record schema type: */
struct IDSP__Record
{
public:
	struct IDSP__Field *__ptr;
	int __size;
};
#endif

#ifndef SOAP_TYPE_IDSP__RunScriptResponse
#define SOAP_TYPE_IDSP__RunScriptResponse (42)
/* IDSP:RunScriptResponse */
struct IDSP__RunScriptResponse
{
public:
	int errorNumber;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
	char *errorString;	/* optional element of type xsd:string */
	struct IDSP__Data *scriptResult;	/* optional element of type IDSP:Data */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (43)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	unsigned int IDSP__sessionID;	/* required element of type IDSP:SessionID */
};
#endif

#ifndef SOAP_TYPE_IDSP__Result
#define SOAP_TYPE_IDSP__Result (44)
/* IDSP:Result */
struct IDSP__Result
{
public:
	int errorCode;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_IDSP__RunScript
#define SOAP_TYPE_IDSP__RunScript (48)
/* IDSP:RunScript */
struct IDSP__RunScript
{
public:
	struct IDSP__RunScriptParameters *runScriptParameters;	/* optional element of type IDSP:RunScriptParameters */
};
#endif

#ifndef SOAP_TYPE_IDSP__BeginSessionResponse
#define SOAP_TYPE_IDSP__BeginSessionResponse (51)
/* IDSP:BeginSessionResponse */
struct IDSP__BeginSessionResponse
{
public:
	unsigned int sessionID;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type IDSP:SessionID */
};
#endif

#ifndef SOAP_TYPE_IDSP__BeginSession
#define SOAP_TYPE_IDSP__BeginSession (52)
/* IDSP:BeginSession */
struct IDSP__BeginSession
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_IDSP__EndSession
#define SOAP_TYPE_IDSP__EndSession (55)
/* IDSP:EndSession */
struct IDSP__EndSession
{
public:
	unsigned int sessionID;	/* required element of type IDSP:SessionID */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (56)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (58)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (59)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (60)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (4)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE_xsd__string
#define SOAP_TYPE_xsd__string (7)
typedef char *xsd__string;
#endif

#ifndef SOAP_TYPE_xsd__anyURI
#define SOAP_TYPE_xsd__anyURI (8)
typedef char *xsd__anyURI;
#endif

#ifndef SOAP_TYPE_xsd__float
#define SOAP_TYPE_xsd__float (10)
typedef float xsd__float;
#endif

#ifndef SOAP_TYPE_xsd__double
#define SOAP_TYPE_xsd__double (12)
typedef double xsd__double;
#endif

#ifndef SOAP_TYPE_xsd__int
#define SOAP_TYPE_xsd__int (14)
typedef long xsd__int;
#endif

#ifndef SOAP_TYPE_xsd__boolean
#define SOAP_TYPE_xsd__boolean (16)
typedef bool xsd__boolean;
#endif

#ifndef SOAP_TYPE_xsd__dateTime
#define SOAP_TYPE_xsd__dateTime (17)
typedef char *xsd__dateTime;
#endif

#ifndef SOAP_TYPE_xsd__long
#define SOAP_TYPE_xsd__long (19)
typedef LONG64 xsd__long;
#endif

#ifndef SOAP_TYPE_IDSP__Enumeration
#define SOAP_TYPE_IDSP__Enumeration (20)
typedef long IDSP__Enumeration;
#endif

#ifndef SOAP_TYPE_IDSP__Unit
#define SOAP_TYPE_IDSP__Unit (21)
typedef double IDSP__Unit;
#endif

#ifndef SOAP_TYPE_IDSP__NullObject
#define SOAP_TYPE_IDSP__NullObject (22)
typedef long IDSP__NullObject;
#endif

#ifndef SOAP_TYPE_IDSP__SessionID
#define SOAP_TYPE_IDSP__SessionID (24)
typedef unsigned int IDSP__SessionID;
#endif


/******************************************************************************\
 *                                                                            *
 * Typedef Synonyms                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operations                                                         *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 IDSP__RunScript(struct soap*, struct IDSP__RunScriptParameters *runScriptParameters, struct IDSP__RunScriptResponse &runScriptResponse);

SOAP_FMAC5 int SOAP_FMAC6 IDSP__BeginSession(struct soap*, unsigned int &sessionID);

SOAP_FMAC5 int SOAP_FMAC6 IDSP__EndSession(struct soap*, unsigned int sessionID, struct IDSP__Result *result);

/******************************************************************************\
 *                                                                            *
 * Stubs                                                                      *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call_IDSP__RunScript(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct IDSP__RunScriptParameters *runScriptParameters, struct IDSP__RunScriptResponse &runScriptResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_IDSP__BeginSession(struct soap *soap, const char *soap_endpoint, const char *soap_action, unsigned int &sessionID);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_IDSP__EndSession(struct soap *soap, const char *soap_endpoint, const char *soap_action, unsigned int sessionID, struct IDSP__Result *result);

/******************************************************************************\
 *                                                                            *
 * Skeletons                                                                  *
 *                                                                            *
\******************************************************************************/

SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_IDSP__RunScript(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_IDSP__BeginSession(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve_IDSP__EndSession(struct soap*);

#endif

/* End of soapStub.h */
