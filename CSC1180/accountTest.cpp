#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main()
{
  int c{-1};
  int amount{0};
  Account acct1("Jane Green", 50);

  // display the initial balance

  cout << "Account 1 : " << acct1.getBalance() << endl;


  // sample transactions

  while (c != 0)
    {
      cout << "1-deposit 2-withdrawal 0-exit\n";
      cin >> c;

      cout << "Enter the amount: ";
      cin >> amount;

      // test for less than 0
      
      if (c == 1)
	{
	  //deposit
	  acct1.deposit(amount);

	}
      else if (c == 2)
	{
	  //withdrawal
	  acct1.withdrawal(amount);
	}
      cout << "Balance: " << acct1.getBalance() << endl;
    }
    
  
  return 0;
}

