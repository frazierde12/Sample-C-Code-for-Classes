#include "matrixType.h"

void matrixType::setMatrix() const{
  cout << "This matrix has " << a
       << " rows and " << b << " columns.\n";
  cout << "Enter data for this matrix: \n";
  if (a > 0 && b > 0) {
    for (int i = 0; i < a; i++) {

      for (int j = 0; j < b; j++) {
	cin >> matrix[i][j];
      }
    }
  }
}

int matrixType::getCol() {
  return b;
}

int matrixType::getRow() {
  return a;
}


bool matrixType::canMulti(int row, int col) {
  if (row == col)
    return true;
  else return false;

}
ostream& operator<<(ostream& os, const matrixType& m) {

  for (int i = 0; i < m.a; i++) {
    for (int j = 0; j < m.b; j++) {

      os << m.matrix[i][j] << "\t";

    }
    os << endl;
  }

  return os;
}

matrixType matrixType::operator+(const matrixType& x)  {

  //row==row    colmn==colmn
  if (a == x.a && b == x.b) {

    matrixType sum(a, b);
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++)
	sum.matrix[i][j] = matrix[i][j] + x.matrix[i][j];

    }
    return sum;
  }
  else { cout << "Matrices cannot be added! They must be of equal size.\n";
    return x;
  }

}

matrixType matrixType::operator-(const matrixType& x) {

  if (a == x.a && b == x.b) {

    matrixType difference(a, b);
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++)
	difference.matrix[i][j] = matrix[i][j] - x.matrix[i][j];
    }
    return difference;
  }
  else { cout << "Matrices cannot be subtracted! They must be of equal size. \n";
    return x;
  }

}
matrixType matrixType::operator*(const matrixType& x) {

  if (canMulti(a, x.b)) {
    matrixType product(a, b);
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < b; j++) {
	product.matrix[i][j] = 0;
      }

      for (int k = 0; k < b; k++) {
	for (int j = 0; j < b; j++) {
	  product.matrix[i][j] += matrix[i][k] * x.matrix[k][j];
	}
      }
    }
    return product;
  }

  else {
    cout << "Cannot multiply these matrices! Size of rows are not equal to size of columns in the matrix.\n";

    return x;

  }
}


matrixType matrixType::operator=(const matrixType& rightObj) {
  if (rightObj.a != 0 && rightObj.b != 0) {
    if (a == 0 && b == 0) {
      a = rightObj.a;
      b = rightObj.b;
      if (a != 0 && b != 0) {
	matrix = new int*[a];

	for (int i = 0; i < a; i++) {
	  matrix[i] = new int[b];
	  assert(matrix[i]);

	}
      }

    }
  }
  if(rightObj.a == 0 && rightObj.b==0)
    {
      return *this;
    }


  if (rightObj.a != 0 && rightObj.b != 0) {
    if (this != &rightObj) {
      for (int i = 0; i < a; i++) {
	for (int j = 0; j < b; j++) {
	  matrix[i][j] = rightObj.matrix[i][j];
	}
      }
    }
    return *this;
  }
}


matrixType::matrixType() {
  a = 0;
  b = 0;

}

matrixType::matrixType(int row, int column){
  a = row;
  b = column;
  if (a != 0 && b != 0) {
    matrix = new int*[a];

    for (int i = 0; i < row; i++) {
      matrix[i] = new int[column];
      assert(matrix[i]);

    }
  }

  else { cout << "\nValues must be greater than 0 \n"; }

}

matrixType::matrixType(const matrixType& otherMatrix) {
  a = otherMatrix.a;
  b = otherMatrix.b;
  matrix = new int*[a]; //should not need to check for positive a/b here
  for(int i = 0; i < a; i++){
    matrix[i] = new int[b];
    assert(matrix[i]);

  }

  //copy contents
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      matrix[i][j] = otherMatrix.matrix[i][j];
    }
  }
}

matrixType::~matrixType() {
  for (int i = 0; i < a; i++){
    delete[] matrix[i];
  }
  delete[] matrix;
}
