#include <iostream>
using namespace std;

int passByValue(int x);
void passByReference(int &x);

int main()
{

  int v = 10;
  int r = 20;

  cout << "Before calling byValue\n";
  cout << "v is " << v << endl;
  cout << "After calling byValue\n";
  cout << passByValue(v) << endl;
  cout << "v is " << v << endl;

  cout << "\n*******\n";
  
  cout << "Before calling byRef\n";
  cout << "r is " << r << endl;
  cout << "After calling byRef\n";
  passByReference(r);
  cout << "r is " << r << endl;  
  

  
  return 0;
}

int passByValue(int x)
{
  return 3*x;
}

void passByReference(int &x)
{
  x = 3*x;
}

