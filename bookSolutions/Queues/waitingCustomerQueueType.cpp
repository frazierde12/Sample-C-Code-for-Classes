#ifndef WAIT_CUSTOMER_TYPE_H
#define WAIT_CUSTOMER_TYPE_H
#include "customerType.cpp"
#include "queueType.h"

class waitingCustomerQueueType: public queueType<customerType>
{
public:
  waitingCustomerQueueType(int size = 100);
  void updateWaitingQueue();
};

waitingCustomerQueueType::waitingCustomerQueueType(int size)
  :queueType<customerType>(size)
{

}

void waitingCustomerQueueType::updateWaitingQueue()
{
  customerType cust;
  cust.setWaitingTime(-1);
  int wTime=0;
  addQueue(cust);
  while(wTime != -1)
    {
      cust=front();
      deleteQueue();

      wTime=cust.getWaitingTime();
      if(wTime == -1)
	{
	  break;
	}
      cust.incrementWaitingTime();
      addQueue(cust);
    }
}

#endif
