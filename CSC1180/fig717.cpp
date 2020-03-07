#include <iostream>
#include <array>

using namespace std;

const size_t ROWS{2};
const size_t COLS{3};
void printArray(const array<array<int, COLS>, ROWS>& a);

int main()
{
  array<array<int, COLS>, ROWS> array1{1, 2, 3, 4, 5, 6};
  array<array<int, COLS>, ROWS> array2{1, 2, 3, 4, 5};

  printArray(array1);
  cout << endl;
  printArray(array2);

  array2[1][2] = 6;
  return 0;
}

void printArray(const array<array<int, COLS>, ROWS>& a)
{
  for(size_t i=0; i < ROWS; i++)
    {
      for(size_t j=0; j < COLS; j++)
	{
	  cout << a[i][j] << " ";
	}
      cout << endl;
    }
}
