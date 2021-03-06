#include <iostream>
#include "customerType.cpp"
using namespace std;

int main()
{
  customerType c1(1,2,3,4);
  customerType c2(2);

  //check mutators
  c2.setCustomerInfo(2,4,6,8);
  c2.setWaitingTime(5);

  // check accessors
  cout << "Customer 1" << endl;
  cout << c1.getCustomerNumber() << " ";
  cout << c1.getArrivalTime() << " ";
  cout << c1.getWaitingTime() << " ";
  cout << c1.getTransactionTime() << endl;

  cout << "Customer 2" << endl;
  cout << c2.getCustomerNumber() << " ";
  cout << c2.getArrivalTime() << " ";
  cout << c2.getWaitingTime() << " ";
  cout << c2.getTransactionTime() << endl;    
  
  
  

  return 0;
}

