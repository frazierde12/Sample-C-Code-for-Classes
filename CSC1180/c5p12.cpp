#include <iostream>
using namespace std;

int main()
{
  int prod{1};
  for (int i = 1; i <= 15; i+=2)
    {
      prod = prod*i;
    }
  cout << prod << endl;
  
  return 0;
}

