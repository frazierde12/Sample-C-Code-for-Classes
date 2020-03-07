#include <iostream>
using namespace std;

bool isPrime(int p, int i=2);

int main()
{
  int n;
  cout << "Enter an Integer: ";
  cin >> n;

  if (isPrime(n))
    {
      cout << n << " is Prime\n";
    }
  else
    {
      cout << n << " is not Prime\n";
    }

  return 0;
}

bool isPrime(int p, int i)
{
  cout << "###" << p << '\t' << i << endl;
  if (i == p)
    {
      return 1;
    }
  if (p%i == 0)
    {
      return 0;
    }

  return isPrime(p, i+1);
}
