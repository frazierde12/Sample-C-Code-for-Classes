#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long n);

int main()
{

  for(unsigned int c=0; c <=10 ; c++)
    {
      cout << "fibonacci(" << c << ") = " << fibonacci(c) << endl;
    }
  
  return 0;
}

unsigned long fibonacci(unsigned long n)
{
  // base cases fib(0) = 0  fib(1) = 1
  if (n == 0 || n == 1)
    {
      return n;
    }
  // recursive step fib(n) = f(n-1) + fib(n-2)
  else
    {
      return fibonacci(n-1) + fibonacci(n-2);
    }
}
  

