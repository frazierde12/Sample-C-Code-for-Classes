#include <iostream>
using namespace std;

int main()
{
  int x = 5;
  int *p = &x;

  cout << x << '\t' << &x << endl;
  cout <<p << '\t' << *p << endl;
  cout << "*******\n";
  *p = 15;
  cout << x << '\t' << &x << endl;
  cout <<p << '\t' << *p << endl;

  int *a = new int[10];
  a[0] = 12;
  
  cout << a+1 << endl;

  delete [] a; 
  
  return 0;
}

