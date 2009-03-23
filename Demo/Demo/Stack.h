// Copyright (C) 2003 by Daniel Junges 
// http://junges.gmxhome.de/
// Written by Daniel Junges daniel-junges@gmx.net
// All rights reserved
//
// This is free software.
// This code may be used in compiled form in any way you desire. :-)
//
// Release Date and Version:
// Version: 1.0 Mars 2003
//////////////////////////////////////////////////////////////////////
// 

#ifndef _H_TEMPLATE_H_
#define _H_TEMPLATE_H_


template <class T> class CStack : public CArray<T,T>
{
public:
 // Add element to top of stack
 void Push( T newView ){ 
  Add( newView );
 }
 // Peek at top element of stack
 T Peek(int index=-1){ 
  return ( index >= GetSize() || 
    GetSize()==0) ? NULL : ElementAt( ( index==-1?GetSize()-1:index) ); 
 }
 // Pop top element off stack
 T Pop(){ 
  T item = Peek();
  if(item) RemoveAt(GetSize()-1);
  return item; 
 }
};


#endif