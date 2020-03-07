//Header file: myStack.h
#ifndef H_StackType
#define H_StackType
#include<iostream>
#include<cassert>
#include"stackADT.h"
using namespace std;

//Place the definition of the class template stackType, as given
//previously in this chapter, here.

template <class Type>
class stackType: public stackADT<Type>
{
 public:
  const stackType<Type> &operator=(const stackType<Type>&);
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


  stackType(int stackSize=100);
  //Constructor

  stackType(const stackType<Type>&otherStack);
  //Copyconstructor

  ~stackType();
  //Destructor

 private:
  int maxStackSize; //variable tos tore the maximum stack size
  int stackTop; //variable to point to the top of the stack
  Type *list; //pointer to the array that holds the stack elements
  void copyStack(const stackType<Type>&otherStack);
};

//Place the definitions of the member functions as discussed here.

#endif
