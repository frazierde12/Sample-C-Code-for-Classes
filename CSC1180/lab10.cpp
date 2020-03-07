#include <iostream>
#include <array>
using namespace std;
const size_t ROWS{2};
const size_t COLS{3};

void printArray(const array<array<int, COLS>, ROWS>& n);
int sum(const array<array<int, COLS>, ROWS>& n);

int main()
{
  array<array<int, COLS>, ROWS> a{1, 2, 3, 4, 5, 6};
  printArray(a);

  cout << "Sum of the matrix is: " << sum(a) << endl;
  return 0;
}

void printArray(const array<array<int, COLS>, ROWS>& n)
{
  for (size_t i = 0; i < ROWS; i++)
    {
      for (size_t j = 0; j < COLS; j++)
	{
	  cout << n[i][j] << '\t';
	}
      cout << endl;
    }
}

int sum(const array<array<int, COLS>, ROWS>& n)
{
  int sum = 0;
  for (size_t i = 0; i < ROWS; i++)
    {
      for (size_t j = 0; j < COLS; j++)
	{
	  sum = sum + n[i][j];
	}
    }
  return sum;
}
