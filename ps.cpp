#include <iostream>
using namespace std;

void printStars(int n, int s)
{
  if (n == 0)
    {
      return;
    }
  else
    {
      for (int i = 0; i<s; i++)
	{
	  cout << "*";
	}
      cout << endl;
      printStars(n-1, s+1);
      for (int i = 0; i<s; i++)
	{
	  cout << "*";
	}
      cout << endl;
    }
}

int main()
{

  printStars(10, 1);
  return 0;
}

