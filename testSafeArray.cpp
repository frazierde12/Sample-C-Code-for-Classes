#include <iostream>
#include "safeArray.cpp"

using namespace std;

int main()
{
  int x;
  safeArray b(10);
  if (b.setIndex(2,10) == -1)
    {
      cout << "ERROR: Array index out of bounds" << endl;
    }
  if (b.setIndex(12,10) == -1)
    {  
      cout << "ERROR: Array index out of bounds" << endl;      
    }
  
  x = b.getIndex(2);
  if (x == -1)
    {
      cout << "ERROR: Array index out of bounds" << endl;
    }
  else
    {
      cout << "Value is " << x << endl;
    }

  x = b.getIndex(12);
  if (x == -1)
    {
      cout << "ERROR: Array index out of bounds" << endl;
    }
  else
    {
      cout << "Value is " << x << endl;
    }  
  
  cout << "Length is " << b.getLength() << endl;  
  return 0;
}

