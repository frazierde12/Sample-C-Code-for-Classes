//Header file: queueType.h
#ifndef H_QueueType
#define H_QueueType
#include<iostream>
#include<cassert>
#include"queueADT.h"
using namespace std;

template<class Type>
class queueType: public queueADT<Type>
{
public:
  bool isEmptyQueue() const;

  bool isFullQueue() const;

  void initializeQueue();

  Type front() const;

  Type back()const;

  void addQueue(const Type& queueElement);

  void deleteQueue();

  queueType(int queueSize = 100);
  // constructor
  
 private:
  int maxQueueSize;
  int count;        // store number of elements in queue
  int queueFront;   // points to first element
  int queueRear;    // points to last element
  Type *list;       // pointer to the array that holds
                    // the queue elements
};

template <class Type>
bool queueType<Type>::isEmptyQueue()const
{
  return(count == 0);
} //end isEmptyQueue

template <class Type>
bool queueType<Type>::isFullQueue()const
{
  return(count == maxQueueSize);
} //end isFullQueue

template<class Type>
void queueType<Type>::initializeQueue()
{
  queueFront = 0;
  queueRear = maxQueueSize-1;
  count = 0;
} //end initializeQueue

template <class Type>
Type queueType<Type>::front()const
{
  assert(!isEmptyQueue());
  return list[queueFront];
} //end front

template <class Type>
Type queueType<Type>::back()const
{
  assert(!isEmptyQueue());
  return list[queueRear];
} //end back

template <class Type>
void queueType<Type>::addQueue(const Type& newElement)
{
  if(!isFullQueue())
    {
      queueRear=(queueRear+1)%maxQueueSize;
      //use the mod operator to advance queueRear
      //because the array is circular
      count++;
      list[queueRear] = newElement;
    }
  else
    {
      cout<< "Cannot add to a full queue." <<endl;
    }
} //end addQueue

template <class Type>
void queueType<Type>::deleteQueue()
{
  if(!isEmptyQueue())
    {
      count--;
      queueFront=(queueFront+1)%maxQueueSize;
      //use the mod operator to advance queueFront
      //because the array is circular
    }
  else
    {
      cout<< "Cannot remove from an empty queue." <<endl;
    }
} //end deleteQueue

template <class Type>
queueType<Type>::queueType(int queueSize)
{
  if(queueSize<=0)
    {
      cout<< "Size of the array to hold the queue must "
	  << "be positive." <<endl;
      cout<< "Creating an array of size 100." <<endl;
      maxQueueSize=100;
    }
  else
    {
      maxQueueSize = queueSize;
    }
  queueFront = 0;
  queueRear = maxQueueSize - 1;
  count = 0;
  list=new Type[maxQueueSize];
  
} //end constructor

template <class Type>
queueType<Type>::~queueType()
{
  delete [] list;
}

#endif
