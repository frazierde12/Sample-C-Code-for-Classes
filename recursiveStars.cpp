#include <iostream>
using namespace std;

void  printStars(int n)
{
  if (n == 0)
    {
      return;
    }
  else
    {
      for(int i = 1; i<=n;i++)
	{
	  cout << "*";
	}
      cout << endl;
      printStars(n-1);
      for(int i = 1; i<=n;i++)
	{
	  cout << "*";
	}
      cout << endl;
    }

}

int main()
{

  printStars(10);


  return 0;
}
