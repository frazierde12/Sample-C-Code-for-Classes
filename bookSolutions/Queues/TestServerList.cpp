#include <iostream>
#include "serverListType.cpp"
#include "serverType.cpp"
#include "customerType.cpp"
using namespace std;

int main()
{
  serverListType sl(3);
  customerType c1(1);
  customerType c2(2);
  customerType c3(3);  

  cout << "Free Server " << sl.getFreeServerID() << endl;
  cout << "Number of Busy Servers " << sl.getNumberOfBusyServers() << endl;

  sl.setServerBusy(0, c1);

  cout << "Free Server " << sl.getFreeServerID() << endl;
  cout << "Busy Servers " << sl.getNumberOfBusyServers() << endl;

  sl.setServerBusy(sl.getFreeServerID(), c2);

  cout << "Free Server " << sl.getFreeServerID() << endl;
  cout << "Busy Servers " << sl.getNumberOfBusyServers() << endl;

  sl.setServerBusy(sl.getFreeServerID(), c3);

  sl.updateServers(cout);  
  return 0;
}

