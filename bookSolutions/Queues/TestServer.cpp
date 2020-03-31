#include <iostream>
#include "customerType.cpp"
#include "serverType.cpp"
using namespace std;

int main()
{
  serverType s;
  customerType c(123);
  if(s.isFree())
    {
      cout << "Free" << endl;
    }
  else
    {
      cout << "Busy" << endl;
    }
  s.setBusy();
  if(s.isFree())
    {
      cout << "Free" << endl;
    }
  else
    {
      cout << "Busy" << endl;
    }  

  s.setCurrentCustomer(c);
  cout << s.getCurrentCustomerNumber() << endl;
  
  

  return 0;
}

