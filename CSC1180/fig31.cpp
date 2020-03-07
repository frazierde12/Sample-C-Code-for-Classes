// fig 3.1
#include <iostream>
#include <string>
#include "Account.h"

using namespace std;


int main()
{
  Account myAccount("Bob");
 
  cout << "Initial account name is: " << myAccount.getName();

  cout << "\nPlease enter the account name: ";
  string theName;
  getline(cin, theName);
  
  myAccount.setName(theName);
  
  cout << myAccount.getName() << endl;
  
  return 0;
}

