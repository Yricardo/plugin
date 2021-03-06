//========================================================================================
//  
//  $File: //depot/devtech/nevis/plugin/source/public/includes/K2VectorBase.h $
//  
//  Owner: Mat Marcus and Jesse Jones
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
//  Summary: K2Vector is an implementation of STL's vector class with two differences:
//  1) the K2Vector(uint32) ctor reserves space instead of resizing the array 2) a number
//  of deprecated methods have been added for backward compatibility.
//  
//  So, why do we need to define our own vector class? The problem with the compiler provided
//  STL implementations is that they are not interface classes and we have no control over the
//  implementation. So, if an interface in Public returns a reference to a std::vector a plugin
//  compiled with a different version of the compiler may experience difficulties since the
//  internals of the vector may have changed.
//  
//========================================================================================

#pragma once
#ifndef __K2VectorBase__
#define __K2VectorBase__

#include <algorithm>
#include <typeinfo>
#include <limits>
#include <cstddef>
#include "K2Assert.h"
#include "K2Allocator.h"
#include "K2Iterator.h"
#include "MetaProgramming.h"
#include "K2VectorHelpers.h"

namespace K2Meta {

	template <typename T>
	struct IS_INTEGER {
		enum { RET = std::numeric_limits<T>::is_integer};
	};

	template <typename T, typename U>
	struct ITER_TAG_EQUALS {
		enum {RET = IS_SAME_TYPE<T, typename std::iterator_traits<U>::iterator_category>::RET};
	};

	template <typename T>
	class IS_INPUT_ITERATOR {
		typedef typename IF_IS_PTR<T,
							META_FALSE,
							ITER_TAG_EQUALS<std::input_iterator_tag, T>
							//IS_SAME_TYPE<std::input_iterator_tag, std::iterator_traits<T>::iterator_category>
						 >::RET RESULT;
	public:
		enum { RET =  RESULT::RET};
	};

}

template <class T, class A>
class K2Vector;

namespace K2Internals {
// ===================================================================================
//	K2VectorBase
// ===================================================================================


				struct GET_INT_TAG {typedef VectorHelpers::IntegerTag RET;};

				template <typename Arg>
				struct GET_ITER_TAG {
					typedef typename K2Meta::IF<K2Meta::IS_INPUT_ITERATOR<Arg>::RET,
										VectorHelpers::InputIterTag,
										VectorHelpers::ForwardIterTag
									  >::RET RET;
				};

				template <typename Arg>
				struct CHOOSE_HELPER {
					typedef  typename K2Meta::IF<K2Meta::IS_INTEGER<Arg>::RET,
						GET_INT_TAG,
						GET_ITER_TAG<Arg>
					>::RET RESULT1;			// introduce a dummy typedef for MSVC...
					typedef typename RESULT1::RET RET;
				};


template <class T, class Allocator = K2Allocator<T> >
class K2VectorBase {
	enum { kInitialAllocSize = 8};
	friend class K2Vector<T, Allocator>;
public:
	typedef	object_type 				data_type;

	typedef T			 				value_type;
	typedef value_type* 				pointer;
	typedef const value_type* 			const_pointer;
	typedef value_type* 				iterator;
	typedef const value_type* 			const_iterator;
	typedef value_type& 				reference;
	typedef const value_type& 			const_reference;
	typedef uint32 						size_type;
	typedef std::ptrdiff_t 				difference_type;
  	typedef Allocator					allocator_type;

	typedef K2Reverse_iterator<iterator, value_type, difference_type, pointer, reference>       			reverse_iterator;
	typedef K2Reverse_iterator<const_iterator, value_type, difference_type, const_pointer, const_reference> const_reverse_iterator;


				~K2VectorBase()						{this->DoCleanup();}

public:
	explicit 	K2VectorBase(const Allocator& a = Allocator());
	explicit 	K2VectorBase(size_type capacity);			  	// different than standard STL -- reserves size n
				K2VectorBase(size_type count, const T& value, const Allocator& a = Allocator());







				template <class InputIterator>
				K2VectorBase(InputIterator first, InputIterator last, const Allocator& a)
				: fAllocator(a)
				{
					fArray = InitialArrayValue();
					fLength = 0;
					VectorHelpers::initialize(first, last, this, Hole(), typename CHOOSE_HELPER<InputIterator>::RET());

				}

				template <class InputIterator>
				K2VectorBase(InputIterator first, InputIterator last)
				: fAllocator(Allocator())
				{
					fArray = InitialArrayValue();
					fLength = 0;
					VectorHelpers::initialize(first, last, this, Hole(), typename CHOOSE_HELPER<InputIterator>::RET());
				}


				void initialize(size_type count, const T& value);
				void fill_assign(size_type, const T&);
				void fill_insert(iterator, size_type, const T&);



				class Hole;
				friend class K2VectorBase<T, Allocator>::Hole;
				class Hole {										// used by 'K2VectorHelpers.h" to get at the K2Vector internals
					friend class K2VectorBase<T, Allocator>;
				public:
					K2EmptyMemberOpt<Allocator, size_type>& AllocatorRef(K2VectorBase<T, Allocator>* v)
						{ return v->fAllocator; }
					size_type& LengthRef(K2VectorBase<T, Allocator>* v)
						{ return v->fLength; }
					pointer& ArrayRef(K2VectorBase<T, Allocator>* v)
						{ return v->fArray; }
					static inline size_type InitialAllocSize()
						{ return K2VectorBase<T, Allocator>::kInitialAllocSize; }
				private:
					Hole() {}
				};


				K2VectorBase(const K2VectorBase& rhs);
				void CopyConstructHelper(const K2VectorBase& rhs);

public:
	iterator               begin()					{return fArray;}
	const_iterator         begin() const			{return fArray;}
	iterator               end()					{return fArray + fLength;}
	const_iterator         end() const				{return fArray + fLength;}
	reverse_iterator       rbegin()					{return reverse_iterator(end());}
	const_reverse_iterator rbegin() const			{return const_reverse_iterator(end());}
	reverse_iterator       rend()					{return reverse_iterator(begin());}
	const_reverse_iterator rend() const				{return const_reverse_iterator(begin());}

	size_type 	size() const						{return fLength;}
	size_type 	max_size() const					{return static_cast<size_type>(fAllocator.max_size());}
	size_type 	capacity() const					{return fArray == (pointer)fPrivateBuffer ? kPrivateBufferBytes / sizeof (value_type) : fAllocator.f;}
	bool16      empty() const						{return fLength == 0;}

	allocator_type get_allocator() const			{return fAllocator;}
	K2VectorBase& operator=(const K2VectorBase& rhs);
	void      	reserve(size_type capacity);

	template <class InputIter>
	void		assign(InputIter first, InputIter last)
				{
					VectorHelpers::assign(first, last, this, Hole(), typename CHOOSE_HELPER<InputIter>::RET());
				}
	void 		assign(size_type count, const T& u) { fill_assign(count, u); }


	reference       operator[](size_type i)			{ASSERT(i < fLength); return fArray[i];}
	const_reference operator[](size_type i) const 	{ASSERT(i < fLength); return fArray[i];}
	const_reference at(size_type i) const			{ASSERT(i < fLength); return fArray[i];}
	reference       at(size_type i)					{ASSERT(i < fLength); return fArray[i];}
	reference       front()							{ASSERT(fLength > 0); return fArray[0];}
	const_reference front() const					{ASSERT(fLength > 0); return fArray[0];}
	reference       back()							{ASSERT(fLength > 0); return fArray[fLength - 1];}
	const_reference back() const					{ASSERT(fLength > 0); return fArray[fLength - 1];}

	void 		push_back(const T& x);
	void 		pop_back();
	iterator 	insert(iterator position, const T& x);
	void     	insert(iterator position, size_type n, const T& x);
	template <class InputIter>
	void		insert(iterator pos, InputIter first, InputIter last)
				{
					VectorHelpers::insert(pos, first, last, this, Hole(), typename CHOOSE_HELPER<InputIter>::RET());
				}
	iterator 	erase(iterator position);
	iterator 	erase(iterator first, iterator last);
	void     	swap(K2VectorBase&);
	void     	clear();
	//void      resize(size_type sz);
	void      	resize(size_type newsize, const T& value);

#ifdef ID_DEPRECATED
		// deprecated methods
		int32 		Length() const						{return size();}

		int32 		Location(const T& x) const;

#endif //ID_DEPRECATED

//	void 		PreventInstantiation()				{fAllocator.Instantiate_K2Vector_Not_K2VectorBase();}

public:													// can't be private: the methods aren't exported on Windows
	void 		DoCleanup();
	size_type 	DoGetCapacity(size_type newLength);
	void 		DoReset(pointer newData, size_type newLength, size_type newCap);

private:
	K2EmptyMemberOpt<Allocator, size_type> fAllocator;  // f is capacity, except when fArray is fPrivateBuffer
	size_type 	fLength;
	pointer 	fArray;

	enum {kPrivateBufferBytes = 32};

	union {
		double	forAlignmentPurposes;
		char	fPrivateBuffer [kPrivateBufferBytes];
	};

	pointer InitialArrayValue() const { return kPrivateBufferBytes / sizeof (value_type) ? (pointer)fPrivateBuffer : 0; }
};

// ===================================================================================
//	Inlines
// ===================================================================================
template <typename T>
inline bool16 operator==(const K2VectorBase<T>& lhs, const K2VectorBase<T>& rhs)	{return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(), rhs.begin());}

template <typename T>
inline bool16 operator!=(const K2VectorBase<T>& lhs, const K2VectorBase<T>& rhs)	{return !(lhs == rhs);}

template <typename T>
inline bool16 operator< (const K2VectorBase<T>& lhs, const K2VectorBase<T>& rhs)	{return std::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());}

template <typename T>
inline bool16 operator> (const K2VectorBase<T>& lhs, const K2VectorBase<T>& rhs)	{return rhs < lhs;}

template <typename T>
inline bool16 operator>=(const K2VectorBase<T>& lhs, const K2VectorBase<T>& rhs)	{return !(lhs < rhs);}

template <typename T>
inline bool16 operator<=(const K2VectorBase<T>& lhs, const K2VectorBase<T>& rhs)	{return !(rhs < lhs);}

template <class T, class Allocator>
inline K2VectorBase<T, Allocator>::K2VectorBase(const K2Internals::K2VectorBase<T, Allocator>& rhs)
	: fAllocator(rhs.fAllocator, rhs.fLength)
{
	CopyConstructHelper(rhs);
}

template <class T, class Allocator>
inline K2VectorBase<T, Allocator>::K2VectorBase(const Allocator& a)
	: fAllocator(a),
	  fLength(0),
	  fArray(InitialArrayValue())
{
}

template <class T, class Allocator>
inline K2VectorBase<T, Allocator>::K2VectorBase(size_type n)
	: fAllocator(Allocator()),
	  fLength(0),
	  fArray(InitialArrayValue())
{
	reserve(n);			// this is unlike STL which creates a vector with n elements
}

template <class T, class Allocator>
inline K2VectorBase<T, Allocator>::K2VectorBase(size_type n, const T& value, const Allocator& a)
	: fAllocator(a),
	  fLength(0),
	  fArray(InitialArrayValue())
{
	initialize(n, value);
}



template <class T, class Allocator>
inline typename K2VectorBase<T, Allocator>::iterator
K2VectorBase<T, Allocator>::insert(iterator position, const T& x)
{
	size_type pos = size_type(position - fArray);
	insert(position, 1, x);
	return fArray + pos;
}


template <class T, class Allocator>
inline void
K2VectorBase<T, Allocator>::insert(iterator position, size_type count, const T& x)
{
	fill_insert(position, count, x);
}
#ifdef ID_DEPRECATED
// K2Vector methods fall into two groups: those that are small and
// need to be fast which are inlined and the others which are
// outlined. To minimize code bloat the outlined methods are
// defined in the tpp file and Public explicitly instantiates
// and exports the collections of many common types. Location
// is a bit of a problem because it's large enough (80 bytes in
// release) that we'd like to outline it, but that forces clients
// to declare operator== even if they never use Location). To get
// around this we'll outline it, but define it in the header which
// means that each plugin that calls Location will bloat a bit.
	template <class T, class Allocator>
	int32 K2VectorBase<T, Allocator>::Location(const T& value) const
	{
		const_iterator i = K2find(begin(), end(), value);
		int32 index = i != end() ? i - begin() : -1;
		return index;
	}
#endif //ID_DEPRECATED


template <class T, class Allocator>
inline void swap(K2VectorBase<T, Allocator>& x, K2VectorBase<T, Allocator>& y)
{
	x.swap(y);
}
}//namespace K2Internals

#endif	// __K2VectorBase__

