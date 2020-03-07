#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
  deque<int> intDeq;
  ostream_iterator<int> screen(cout, " ");

  // add elements to the end of the deque
  intDeq.push_back(13);
  intDeq.push_back(75);
  intDeq.push_back(28);
  intDeq.push_back(35);

  // print
  copy(intDeq.begin(), intDeq.end(), screen);
  cout << endl;
  
  intDeq.push_front(0);
  intDeq.push_back(100);

  copy(intDeq.begin(), intDeq.end(), screen);  
  cout << endl;

  // remove first two items
  cout << "After removing first two\n";
  intDeq.pop_front();
  intDeq.pop_front();

  copy(intDeq.begin(), intDeq.end(), screen);  
  cout << endl;

  // remove last two items
  intDeq.pop_back();
  intDeq.pop_back();

  cout << "After removing last two\n";
  copy(intDeq.begin(), intDeq.end(), screen);  
  cout << endl;  

  // add an iterator
  deque<int>::iterator deqIt;
  deqIt = intDeq.begin();
  ++deqIt;
  intDeq.insert(deqIt, 444);
  copy(intDeq.begin(), intDeq.end(), screen);  
  cout << endl;    
  
  return 0;
}

