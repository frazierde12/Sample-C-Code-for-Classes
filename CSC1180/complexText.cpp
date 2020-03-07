#include <iostream>
#include <string>
#include "Complex.cpp"
using namespace std;

int main()
{
  Complex c1(2,5);
  Complex c2(3,6);


  Complex c3(1,1);
  c3 = c1.add(c2);

  cout << "(" << c1.printComplex() << ")"  << " + " << "(" <<c2.printComplex() << ")";
  cout << " = " << c3.printComplex() << endl;
  return 0;
}

