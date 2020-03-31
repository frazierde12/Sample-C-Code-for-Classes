//Header file: queueType.h
#ifndef H_QueueType
#define H_QueueType
#include<iostream>
#include<cassert>
#include"queueADT.h"
using namespace std;

template <class Type>
struct nodeType
{
  Type info;
  nType<Type> *link;
};

template<class Type>
class linkedQueueType: public queueADT<Type>
{
public:
				   
  bool isEmptyQueue() const;

  bool isFullQueue() const;

  void initializeQueue();

  Type front() const;

  Type back()const;

  void addQueue(const Type& queueElement);

  void deleteQueue();

  linkedQueueType();
  // constructor
  
 private:
  nType<Type> *queueFront;
  nType<Type> *queueRear;
};

template <class Type>
bool linkedQueueType<Type>::isEmptyQueue()const
{
  return(queueFront == NULL);
} //end isEmptyQueue

template <class Type>
bool linkedQueueType<Type>::isFullQueue()const
{
  return false;
} //end isFullQueue

template <class Type>
void linkedQueueType<Type>::initializeQueue()
{
  nType<Type> *temp;
  while(queueFront != NULL)
    {
      temp=queueFront;
      queueFront=queueFront->link;
      delete temp;
    }
  queueRear=NULL;
} // endinitializeQueue

template <class Type>
void linkedQueueType<Type>::addQueue(const Type &newElement)
{
  nodeType<Type> *newNode;
  newNode = new nType<Type>;
  newNode->info=newElement;
  newNode->link=NULL;
  if(queueFront==NULL) 
    {
      queueFront = newNode;
      queueRear = newNode;
    }
  else
    {
      queueRear->link = newNode;
      queueRear = queueRear->link;
    }
} // end addQueue

template <class Type>
Type linkedQueueType<Type>::front()const
{
  assert(queueFront != NULL);
  return queueFront->info;
} // end front

template <class Type>
Type linkedQueueType<Type>::back()const
{
  assert(queueRear != NULL);
  return queueRear->info;
} //end back

template <class Type>
void linkedQueueType<Type>::deleteQueue()
{
  nType<Type> *temp;
  if(!isEmptyQueue())
    {
      temp = queueFront;
      queueFront = queueFront->link;
      delete temp;
      if(queueFront==NULL)
	{
	queueRear=NULL;
	}
    }
  else
    {
    cout << "Cannot remove from an empty queue" <<endl;
    }
} //end deleteQueue

template <class Type>
linkedQueueType<Type>::linkedQueueType()
{
  queueFront = NULL;
  queueRear = NULL;
} //end default constructor
#endif
