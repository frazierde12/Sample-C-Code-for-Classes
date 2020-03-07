#include <iostream>
#include "baseClass.cpp"
#include "derivedClass.cpp"

void callPrint(baseClass& p)
{
  p.print();
}

using namespace std;

int main()
{
  baseClass one(5);
  derivedClass two(3, 15);

  one.print();
  two.print();
  cout << "\nPrint from function\n";
  callPrint(one);
  callPrint(two);
  return 0;
}

