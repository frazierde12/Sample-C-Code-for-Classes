#include <iostream>
#include "myStack.h"

using namespace std;

int main()
{
  stackType<int> pf(50);
  int p[] = {2,3,5,7,11,13,17,19,23,27};

  int n;
  int c = 0;

  cout << "Enter an Integer: ";
  cin >> n;
  
  while(n != 1)
    {

      while(n%p[c] == 0)
	{
	  pf.push(p[c]);
	  n = n/p[c];
	} // end inner while
      c++;
      if (c > 9)
	{
	  cout << "Out of Primes: Cannot factor\n";
	  return 0;
	}

    } // end outer while

  while(!pf.isEmptyStack())
    {
      cout << pf.top();
      pf.pop();
      if(!pf.isEmptyStack())
	{
	  cout << " x ";
	}
    }
  cout << endl;


  return 0;
}
