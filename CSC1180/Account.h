#include <string>

class Account
{
 public:
  Account(std::string accountName)
    {
      name = accountName;
      balance = 0;

    }

  Account(std::string accountName, int b)
    {
      name = accountName;
      if (b < 0)
	{
	  balance = -1;
	}
      else
	{
	    balance = b;
	}

    }  

  
  std::string getName() const
    {
      return name;
    }

  int getBalance() const
  {
    return balance;
  }

  void setName(std::string accountName)
  {
    name = accountName;
  }

  void deposit(int amount)
  {
    if (amount > 0)
      {
	balance = balance + amount;
      }
  }
  
  void withdrawal(int amount)
  {
    if (amount > balance)
      {
	std::cout << "Insufficient Funds\n";
      }
    else
      {
	balance = balance - amount;
      }

  }
  
 private:
  std::string name; // contains the name of the account
  int balance;
};
