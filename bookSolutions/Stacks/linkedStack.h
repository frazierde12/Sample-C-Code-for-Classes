//Header file: listedStack.h
#ifndef H_StackType
#define H_StackType
#include<iostream>
#include<cassert>
#include"stackADT.h"
using namespace std;

template <class Type>
struct nodeType
{
  Type info;
  nodeType<Type> *link;
};


template <class Type>
class linkedStackType: public stackADT<Type>
{
 public:
  const linkedStackType<Type>& operator=(const linkedStackType<Type>&);
  //Overloadtheassignmentoperator.

  void initializeStack();
  //Functiontoinitializethestacktoanemptystate.

  bool isEmptyStack() const;
  //Functiontodeterminewhetherthestackisempty.

  bool isFullStack() const;
  //Functiontodeterminewhetherthestackisfull.

  void push(const Type &newItem);
  //FunctiontoaddnewItemtothestack.

  Type top()const;
  //Functiontoreturnthetopelementofthestack.

  void pop();
  //Functiontoremovethetopelementofthestack.


  linkedStackType();
  //Constructor

  linkedStackType(const linkedStackType<Type>& otherStack);
  // copy constructor

  ~linkedStackType();
  //Destructor

 private:
  nodeType<Type> *stackTop;
  void copyStack(const linkedStackType<Type>&otherStack);
};

//Place the definitions of the member functions as discussed here.
template <class Type>
const linkedStackType<Type>& linkedStackType<Type>::operator= (const linkedStackType<Type>& otherStack)
{
  if(this != &otherStack)  //avoid self-copy
    {
    copyStack(otherStack);
    }
  return *this;
} //endoperator=

 template <class Type>
 void linkedStackType<Type>::initializeStack()
{
  nodeType<Type> *temp;
  while (stackTop != NULL)
    {
      temp = stackTop;   // find current node pointer
      stackTop = stackTop->link;  // move to the link
      delete temp;     // kill it
    }
} //endinitializeStack

template <class Type>
bool linkedStackType<Type>::isEmptyStack() const
{
  return (stackTop == NULL);
} //endisEmptyStack


template <class Type>
bool linkedStackType<Type>::isFullStack() const
{
  return false;
} //endisFullStack

template <class Type>
void linkedStackType<Type>::push(const Type& newItem)
{
  nodeType<Type> *newNode;
  newNode = new nodeType<Type>;

  newNode->info = newItem;
  newNode->link = stackTop;
  stackTop = newNode;
}//endpush

template <class Type>
Type linkedStackType<Type>::top() const
  {
    assert(stackTop != NULL); //if stack is empty, terminate the
                           //program
    return stackTop->info; //return the element of the stack
                            //indicated by stackTop - 1
  } //endtop

template <class Type>
void linkedStackType<Type>::pop()
 {
   nodeType<Type> *temp;
   
   if(stackTop != NULL)
     {
       temp = stackTop;
       stackTop = stackTop->link;
       delete temp;
     }
   else
     {
       cout << "Cannot remove froman empty stack." << endl;
     }
 } //endpop

 template <class Type>
 void linkedStackType<Type>::copyStack(const linkedStackType<Type>& otherStack)
 {
   nodeType<Type> *newNode, *current, *last;

   if (stackTop != NULL)
     {
       initializeStack();
     }
   if (otherStack.stackTop == NULL)
     {
       stackTop = NULL;
     }
   else
     {
       stackTop = new nodeType<Type>;

       current = otherStack.stackTop;
       stackTop->info = otherStack.stackTop->info;
       stackTop->link = NULL;
       last = stackTop;
       current= current->link;

       while(current != NULL)
	 {
	   newNode = new nodeType<Type>;

	   newNode->info = current->info;
	   newNode->link = NULL;
	   last->link = newNode;
	   last = newNode;
	   current = current->link;
	 } // end while
     } // end else
 } // end copystack

template <class Type>
linkedStackType<Type>::linkedStackType()
{
  stackTop = NULL;

 }//endconstructor

template <class Type>
linkedStackType<Type>::linkedStackType(const linkedStackType<Type>& otherStack)
{
  stackTop = NULL;
  copyStack(otherStack);
} // end copy constructor
 
 template <class Type>
 linkedStackType<Type>::~linkedStackType() //destructor
 {
   initializeStack();
 } //end destructor
#endif


