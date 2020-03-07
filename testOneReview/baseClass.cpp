#include <iostream>
#include "baseClass.h"

using namespace std;

void baseClass::print()
{
  cout << "In base class x = " << x << endl;
}
baseClass::baseClass(int u)
{
  x = u;
}

