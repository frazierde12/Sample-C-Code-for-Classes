#include <iostream>
#include <array>

using namespace std;

const size_t ROWS = 5;
const size_t COLS = 5;

void printArray(const array<array<int, COLS>, ROWS>& a);

int main()
{
  array<array<int, COLS>, ROWS>  n;

  for (size_t i = 0; i < ROWS; i++)
    {
      for (size_t j = 0; j < COLS; j++)
	{
	  cout << "Enter a number: ";
	  cin >> n[i][j];
	}// end cols for loop

    }// end row for loop

  printArray(n);

  
  return 0;
}

void printArray(const array<array<int, COLS>, ROWS>& a)
{
  for (size_t i = 0; i < ROWS; i++)
    {
      for (size_t j = 0; j < COLS; j++)
	{
	  cout << a[i][j] << '\t';
	}// end cols for loop
      cout << endl;
    }// end row for loop
  
}

