#include <iostream>
using namespace std;

void upAndBack(int n)
{
  if (n == 0)
    {
      return;
    }
  else
    {
      cout << n << " ";
      upAndBack(n-1);
      cout << n << " ";
    }
  return;
}

int main()
{
  upAndBack(5);
  return 0;
}

