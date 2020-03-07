#include <iostream>
#include "Matrix.h"

using namespace std;
Matrix::Matrix(int r, int c, int k)
{
  row = r;
  col = c;
  for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
	  {
            M[i][j] = k;
        }
    }
}

void Matrix::print()
  {
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
	  {
            cout << M[i][j] << " ";
        }
	cout << endl;
    }
  }

Matrix Matrix::operator+(const Matrix& rightM) const
{
  Matrix Temp(row, col, 0);
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
	  {
            Temp.M[i][j] = M[i][j] + rightM.M[i][j];
        }
    }
    return Temp;
}
