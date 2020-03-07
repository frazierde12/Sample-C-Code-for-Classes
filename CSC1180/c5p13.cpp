// factorial
// 5! = 5 * 4 * 3 * 2 * 1 = 120

#include <iostream>
using namespace std;

int main()
{
  long fact{1};
  for (int c=1; c<=20; c++)
    {
      for (int n=c; n>1; n=n-1)
	{
	  fact = fact * n;
	}
      cout << c << "! = " << fact << endl;
      fact = 1;
    }
  return 0;
}

