// Matrix addition
// Arrays must be same size

#include <iostream>
#include <array>
using namespace std;

const int ROWS = 2;
const int COLS = 4;

void printArray(const array<array<int, COLS>, ROWS>& n);

int main()
{

  // create matrices

  array<array<int, COLS>, ROWS> x {1,1,1,1,1,1,1,1};
  array<array<int, COLS>, ROWS> y {2,2,2,2,2,2,2,2};
  array<array<int, COLS>, ROWS> z {};

  printArray(x);
  cout << "\t+" << endl;
  printArray(y);
  cout << "\t=" << endl;  

  // add x and y
for (size_t i = 0; i < ROWS; i++)
    {
      for (size_t j = 0; j < COLS; j++)
	{
	  z[i][j] = x[i][j] + y[i][j];
	}
      cout << endl;
    }  
 printArray(z);

  
  return 0;
}

void printArray(const array<array<int, COLS>, ROWS>& n)
{
  for (size_t i = 0; i < ROWS; i++)
    {
      for (size_t j = 0; j < COLS; j++)
	{
	  cout << n[i][j] << " ";
	}
      cout << endl;
    }
}
