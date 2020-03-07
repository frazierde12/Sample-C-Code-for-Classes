#include <iostream>
#include "baseClass.cpp"
#include "derivedClass.cpp"

using namespace std;

int main()
{
  baseClass one(5);
  derivedClass two(3, 15);

  one.print();
  two.print();
  
  return 0;
}

