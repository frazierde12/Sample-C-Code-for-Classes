#include <iostream>
#include "myStack.h"
using namespace std;


int main()
{
  int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  stackType<int> s(100);

  int n;
  int c = 0;

  cout << "Enter an Integer: ";
  cin >> n;
  
  while ( n != 1)
    {
      // try the primes
      while (n%p[c] == 0)
	{
	  s.push(p[c]);
	  n = n/p[c];
	} // end inner while
      // move to the next prime
      c = c + 1;
      if (c > 9)
	{
	  cout << "Out of primes. Cannot continue.\n";
	  return 0;
	}
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
