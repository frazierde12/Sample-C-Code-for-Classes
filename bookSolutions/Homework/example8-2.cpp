#include<iostream>
#include<queue>
using namespace std;
int main()
{
  queue<int> intQueue;
  intQueue.push(26);
  intQueue.push(18);
  intQueue.push(50);
  intQueue.push(33);
  cout<< "The front element of intQueue: " << intQueue.front() << endl;
  cout<< "The last element of intQueue: " <<intQueue.back() << endl;
  intQueue.pop();

  cout<< "After the pop operation, the "
      << "front element of intQueue: "
      << intQueue.front()<<endl;

  cout << "intQueue elements:" ;
  while(!intQueue.empty())
    {
      cout << intQueue.front() << " " ;
      intQueue.pop();
    }
  cout << endl;
  return 0;
}
