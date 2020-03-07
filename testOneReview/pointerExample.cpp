#include <iostream>
using namespace std;

int main()
{
  int *p = NULL;
  int x = 5;
  p = &x;
  cout << *p << endl;

  int *y = new int(7);
  cout << *y << endl;

  delete y;

  //dynamic array
  int *a;
  a = new int[10];

  *a = 10; // stores 10 in first location
  a[1] = 20; // stores 20 in second location

  delete [] a;


  return 0;
}

