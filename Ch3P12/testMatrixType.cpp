#include <iostream>
#include "matrixType.cpp"

using namespace std;

int main()
{
  matrixType matrix1(3,4);
  matrixType matrix2(3,4);
  matrixType matrix3(3,4);
  matrixType matrix4(4,2);
  matrixType matrix5(3,2);

  matrix1.setMatrix();
  matrix2.setMatrix();
  matrix4.setMatrix();

  cout << matrix1 << endl;
  cout << matrix2 << endl;
  cout << matrix4 << endl;

  matrix3 = matrix1 + matrix2;
  matrix5 = matrix1 * matrix4;

  cout << matrix3 << endl;
  cout << matrix5 << endl;

  return 0;
}
