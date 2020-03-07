#include <iostream>
#include "linkedStack.h"

using namespace std;

int main()
{
  linkedStackType<int> stack;
  linkedStackType<int> newStack;

  stack.push(34);
  stack.push(43);
  stack.push(27);
  
  newStack = stack;
  
  while (!stack.isEmptyStack())
    {
      cout << stack.top() << endl;
      stack.pop();
    }
  
  return 0;
}
