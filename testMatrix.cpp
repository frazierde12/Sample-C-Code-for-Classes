#include <iostream>
#include "Matrix.cpp"

using namespace std;

int main()
{
  Matrix m1(2,3,1);
  Matrix m2(2,3,2);
  Matrix m3(2,3,0);

  m3 = m1 + m2;
  cout << "Matrix 1" << endl;
  m1.print();
  cout << "\n+\n";
  cout << "Matrix 2" << endl;
  m2.print();
  cout << "\n=\n";
  cout << "Matrix 3" << endl;
  m3.print();
  return 0;
}

