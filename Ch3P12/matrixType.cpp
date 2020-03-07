

#include <iostream>
#include <iomanip>
#include "matrixType.h"

using namespace std;

matrixType::matrixType()
{
  rowSize = 0;
  columnSize = 0;

  for (int i = 0; i < 100; i++)
    for (int j = 0; j < 100; j++)
      matrix[i][j] = 0;
}

matrixType::matrixType(int rows, int columns)
{
  rowSize = rows;
  columnSize = columns;

  for (int i = 0; i < 100; i++)
    for (int j = 0; j < 100; j++)
      matrix[i][j] = 0;
}


matrixType::matrixType(const matrixType &copy)  //copy constructor
{
  rowSize = copy.rowSize;
  columnSize = copy.columnSize;

  for (int i = 0; i < rowSize; i++)
    for (int j = 0; j < columnSize; j++)
      matrix[i][j] = copy.matrix[i][j];
}


//overload the assignment operator
const matrixType& matrixType::operator=(const matrixType &right)
{
  if (this != &right) //avoid self copy
    {
      rowSize = right.rowSize;
      columnSize = right.columnSize;

      for (int i = 0; i < rowSize; i++)
	for (int j = 0; j < columnSize; j++)
	  matrix[i][j] = right.matrix[i][j];
    }

  return *this;
}

void matrixType::setMatrix()
{
  cout << "This matrix has " << rowSize << " rows and "
       << columnSize << " columns" << endl;
  cout << "Enter data for this matrix: " << endl;

  for (int i = 0; i < rowSize; i++)
    for (int j = 0; j < columnSize; j++)
      cin>>matrix[i][j];
}

matrixType matrixType::operator+(matrixType right)
{
  matrixType temp;

  if (rowSize != right.rowSize || columnSize != right.columnSize)
    {
      temp.rowSize = 0;
      temp.columnSize = 0;
      cout << "Cannot add different size matrices";
    }
  else
    {
      temp.rowSize = rowSize;
      temp.columnSize = columnSize;

      for (int i = 0; i < rowSize; i++)
	for (int j = 0; j < columnSize; j++)
	  temp.matrix[i][j] = matrix[i][j] + right.matrix[i][j];
    }

  return temp;
}

matrixType matrixType::operator-(matrixType right)
{
  matrixType temp;

  if (rowSize != right.rowSize || columnSize != right.columnSize)
    {
      temp.rowSize = 0;
      temp.columnSize = 0;
      cout << "Cannot subtract different size matrices";
    }
  else
    {
      temp.rowSize = rowSize;
      temp.columnSize = columnSize;

      for (int i = 0; i < rowSize; i++)
	for (int j = 0; j < columnSize; j++)
	  temp.matrix[i][j] = matrix[i][j] - right.matrix[i][j];
    }
  return temp;
}

matrixType matrixType::operator*(matrixType right)
{
  matrixType temp;

  if (columnSize != right.rowSize)
    {
      temp.rowSize = 0;
      temp.columnSize = 0;
      cout << "Cannot multiply these matrices";
    }
  else
    {
      temp.rowSize = rowSize;
      temp.columnSize = right.columnSize;

      for (int i = 0; i < temp.rowSize; i++)
	for (int j = 0; j < temp.columnSize; j++)
	  {
	    temp.matrix[i][j] = 0;

	    for (int k = 0; k < columnSize; k++)
	      temp.matrix[i][j] += matrix[i][k] * right.matrix[k][j];
	  }
    }
  return temp;
}

//overload the stream insertion operator <<
ostream& operator<<(ostream& os, const matrixType &mat)
{
  for (int i = 0; i < mat.rowSize; i++)
    {
      for (int j = 0; j < mat.columnSize; j++)
	os << setw(6) << mat.matrix[i][j] << " ";
      os << endl;
    }

  os << endl;

  return os;
}

//overload the stream extraction operator >>
istream& operator>>(istream& is, matrixType &mt)
{
  cout << "This matrix has " << mt.rowSize << " rows and "
       << mt.columnSize << " columns" << endl;
  cout << "Enter data for this matrix: " << endl;

  for (int i = 0; i < mt.rowSize; i++)
    for (int j = 0; j < mt.columnSize; j++)
      is >> mt.matrix[i][j];

  return is;
}
