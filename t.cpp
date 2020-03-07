#include <iostream>
using namespace std;

int main()
{

  int *p = new int(8);
  int *y = p;
  *y = 10;  
  cout << p << '\t' << *p << '\t' << y << '\t' << *y <<endl;  
  return 0;
}

