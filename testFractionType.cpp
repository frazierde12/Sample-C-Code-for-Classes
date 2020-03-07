#include <iostream>
#include "fractionType.cpp"

using namespace std;

int main()
{
  fractionType f1(1,4);
  fractionType f2(1,4);
  fractionType f3;
  // print f1 and f2
  cout << "F1\t";
  f1.printFrac();
  cout << "F2\t";
  f2.printFrac();

  // test add
  cout << "F1 + F2" << endl;
  f3 = f1 + f2;
  f3.printFrac();
  
  // test mult
  cout << "F1 * F2" << endl;
  f3 = f1 * f2;
  f3.printFrac();

  // test divide
  cout << "F1 / F2" << endl;  
  f3 = f1 / f2;
  f3.printFrac();
  
  return 0;
}

