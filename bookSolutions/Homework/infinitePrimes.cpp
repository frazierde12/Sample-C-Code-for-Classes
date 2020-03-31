#include <iostream>
#include "myStack.h"
using namespace std;


int main()
{
  stackType<int> s(100);

  int n;
  int c = 2;

  cout << "Enter an Integer: ";
  cin >> n;
  
  while ( n != 1)
    {
      // try the primes
      while (n%c == 0)
	{
	  s.push(c);
	  n = n/c;
	} // end inner while
      // move to the next prime
      c = c + 1;

    } // end outer while

  while(!s.isEmptyStack())
    {
      cout << s.top();
      s.pop();
      if(!s.isEmptyStack())
	{
	  cout << " x ";
	}
    }
  cout << endl;
  

  return 0;
}
