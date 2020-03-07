// Sum of Natural Numbers up to n
//   sumNum(5) = 5 + 4 + 3 + 2 + 1
// base case ==> sumNum(1) = 1
// recursive step ==> sumNum(n) = n + sumNum(n-1)

#include <iostream>
#include "utilities.h"

using namespace std;

// function prototype
int sumNum(int n);


int main()
{
  cout << sumNum(5) << endl;
  return 0;
}

// function def
int sumNum(int n)
{
  ClearScreen();
  if (n == 1)
    {
  // base case
      return 1;
    }
  else
    {
  // recursive step
      return n + sumNum(n-1);
    }
}

