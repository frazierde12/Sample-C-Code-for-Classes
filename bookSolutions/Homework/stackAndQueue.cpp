#include <iostream>
#include <string>
#include "myStack.h"
#include "linkedQueueType.h"
using namespace std;

int main()
{
  stackType<int> s(100);
  linkedQueueType<int> q();

  s.push(5);
  q.addQueue(5);
  
  
  return 0;

}
