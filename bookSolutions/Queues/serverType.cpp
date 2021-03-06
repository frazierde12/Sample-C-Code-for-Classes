#ifndef SERVER_TYPE_H
#define SERVER_TYPE_H

#include <string>
#include "customerType.cpp"
using namespace std;

class serverType
{
 public:
  serverType();

  bool isFree() const;

  void setBusy();

  void setFree();

  void setTransactionTime(int t);

  void setTransactionTime();

  int getRemainingTransactionTime() const;

  void decreaseTransactionTime();

  void setCurrentCustomer(customerType cCustomer);

  int getCurrentCustomerNumber() const;

  int getCurrentCustomerArrivalTime() const;

  int getCurrentCustomerWaitingTime() const;

  int getCurrentCustomerTransactionTime() const;

 private:
  customerType currentCustomer;
  string status;
  int transactionTime;
};

serverType::serverType()
{
  status = "free";
  transactionTime = 0;
}

bool serverType::isFree() const
{
  return (status == "free");
}

void serverType::setBusy()
{
  status = "busy";
}

void serverType::setFree()
{
  status = "free";
}

void serverType::setTransactionTime(int t)
{
  transactionTime = t;
}

void serverType::setTransactionTime()
{
  int time;
  time = currentCustomer.getTransactionTime();
  transactionTime = time;
}

void serverType::decreaseTransactionTime()
{
  transactionTime--;
}

int serverType::getRemainingTransactionTime() const
{
  return transactionTime;
}

void serverType::setCurrentCustomer(customerType cCustomer)
{
  currentCustomer = cCustomer;
}

int serverType::getCurrentCustomerNumber() const
{
  return currentCustomer.getCustomerNumber();
}

int serverType::getCurrentCustomerArrivalTime() const
{
  return currentCustomer.getArrivalTime();
}

int serverType::getCurrentCustomerWaitingTime() const
{
  return currentCustomer.getWaitingTime();
}

int serverType::getCurrentCustomerTransactionTime() const
{
  return currentCustomer.getTransactionTime();
}
#endif
