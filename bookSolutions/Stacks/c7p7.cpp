#include <iostream>
#include <string>
#include "myStack.h"
using namespace std;

int main()
{
  stackType<int> pf(100);
  stackType<int> temp(100);  
  int p[] = {1,2,3,5,7,11,13,17,19,23, 29};

  int n, num, err;
  int c =0;
  cout << "Enter an integer: ";
  cin >> num,
  n = num;

  while (n != 1)
    {
      c = c+1;
      if (c>10)
	{
	  err = 1;
	  break;
	}
      while(n%p[c] == 0)
	{
	  pf.push(p[c]);
	  n = n/p[c];
	}
    }
  if (err == 1)
    {
      cout << "Out of Primes, cannot do factorization" << endl;
      return 0;
    }
  cout << "Prime Factorization of " <<  num << " is:" << endl; 
  temp = pf;
  while (!temp.isEmptyStack())
    {
      cout << temp.top();
      temp.pop();
      if (!temp.isEmptyStack())
	{
	  cout << " x ";
	}
    }
  cout << endl;

  


  return 0;

}
