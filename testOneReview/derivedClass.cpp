 #include <iostream>
#include "derivedClass.h"

using namespace std;

void derivedClass::print()
{
  cout << "In derived class ***: ";
  baseClass::print();
  cout << "In derived class a = " << a << endl;
  
}
derivedClass::derivedClass(int u, int v)
  :baseClass(u)
{
  a = v;
}

