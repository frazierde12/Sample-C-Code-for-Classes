#include <iostream>
#include "Fraction.cpp"

using namespace std;

int main()
{
  Fraction f1(1,4);
  Fraction f2(1,4);
  Fraction f3;

  // print the fractions
  f1.printFrac();
  f2.printFrac();
  f3.printFrac();  

  // test the additon
  f3 = f1 + f2;

  // print the results
  cout << "1/4 + 1/4 = ";
  f3.printFrac();
  
  return 0;
}

