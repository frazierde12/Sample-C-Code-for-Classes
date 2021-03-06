#ifndef H_matrixType
#define H_matrixType

#include <iostream>

using namespace std;

class matrixType
{
  friend ostream& operator<<(ostream&, const matrixType&);
  friend istream& operator>>(istream&, matrixType&);

 public:
  const matrixType& operator=(const matrixType &right);
  //overload assignment operator

  void setMatrix();

  matrixType();
  matrixType(int rows, int columns);

  matrixType(const matrixType &copy);
  //copy constructor

  matrixType operator+(matrixType right);
  matrixType operator-(matrixType right);
  matrixType operator*(matrixType right);

 private:
  int matrix[100][100];
  int rowSize;
  int columnSize;
};

#endif

