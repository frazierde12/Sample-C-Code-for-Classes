#include <iostream>
#include "waitingCustomerQueueType.cpp"
#include "customerType.cpp"

using namespace std;

int main()
{
  customerType c(123);
  customerType c2(222);
  
  waitingCustomerQueueType w(100);
  w.addQueue(c);
  w.addQueue(c2);

  cout << w.front().getCustomerNumber() << endl;
  w.deleteQueue();
  cout << w.front().getCustomerNumber() << endl;  
  
  return 0;
}

