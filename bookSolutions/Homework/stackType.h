//Headerfile: stackType.h
#ifndef H_StackType
#define H_StackType
#include<iostream>
#include<cassert>
#include "stackADT.h"
using namespace std;

template <class Type>
class stackType : public stackADT<Type>
{
 public:
  const stackType<Type>& operator=(const stackType<Type>&);
 //Overload the assignment operator.

  void initializeStack();
  //Function to initialize the stack to an empty state.
  //Postcondition: stackTop=0;

  bool isEmptyStack()const;
  //Function to determine whether the stack is empty.
  //Postcondition: Returns true if the stack is empty,
  //otherwise returns false

  bool isFullStack()const;
  //Function to determine whether the stack is full.
  //Postcondition: Returns true if the stack is full,
  //otherwise returns false.

  void push(const Type& newItem);
  //Function to add new Item to the stack.
  //Precondition: The stack exists and is not full.
  //Postcondition: The stack is changed and new Item is
  //added to the top of the stack.

  Type top()const;
  //Function to return the top element of the stack.
  //Precondition: The stack exists and is not empty.
  //Postcondition: If the stack is empty, the program
  //terminates; otherwise, the top element of the stack
  //is returned.

  void pop();
  //Function to remove the top element of the stack.
  //Precondition: The stack exists and is not empty.
  //Postcondition: The stack is changed and the top element is
  //removed from the stack.

  stackType(int stackSize=100);
  //Constructor
  //Create an array of the size stackSize to hold
  //the stack elements. The default stack size is 100.
  //Postcondition: Thev ariable list contains the baseaddress
  // of the array, stackTop=0, and maxStackSize=stackSize


  stackType(const stackType<Type>& otherStack);
  //Copy constructor

  ~stackType();
  //Destructor
  //Remove all the elements from the stack.
  //Postcondition: The array (list) holding the stack
  //elements isd eleted.

 private:
  int maxStackSize; //variable to store the maximum stack size
  int stackTop;  //variable to point to the top of the stack
  Type *list;  //pointer to the array that holds the stack elements

  void copyStack(const stackType<Type>& otherStack);
  //Function to make a copy of otherStack.
  //Postcondition: A copy of otherStack is created and assigned
  //to this stack.
};
#endif
