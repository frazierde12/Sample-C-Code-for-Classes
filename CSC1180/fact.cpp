#include <iostream>
#include <iomanip>

using namespace std;

unsigned long fact(unsigned long n);

int main()
{
  for(unsigned int c = 0; c<=10; c++)
    {
      cout  << c << '\t' <<  fact(c) << endl;
    }

  return 0;
}

unsigned long fact(unsigned long n)
{
  // base case
  if (n == 0 || n == 1)
    {
      return 1;
    }
  // recursive step
  else
    {
      return n*fact(n-1);
    }
  
}

