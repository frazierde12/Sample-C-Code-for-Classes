#include <iostream>
using namespace std;

bool isPrime(int p, int i=2)
{
  cout << "#####" << p  << '\t' << i << endl;
  if (i == p)
    {
      // we have a Prime number
      return 1;
    }
  if (p%i == 0)
    {
      // we do NOT have a prime number
      return 0;
    }

  return isPrime(p, i+1);

}


int main()
{
  int n;
  cout << "Enter an integer: ";
  cin >> n;

  if (isPrime(n))
    {
      cout << n << " is Prime\n";
    }
  else
    {
      cout << n << " is Not Prime\n";
    }

  return 0;
}

