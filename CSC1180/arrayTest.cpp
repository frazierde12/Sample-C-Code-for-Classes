#include <iostream>
#include <array>

using namespace std;

const size_t NSIZE = 5;
const size_t ROWS = 3;
const size_t COLS = 3;
void printArray(const array<int, NSIZE>& a);
void printArray2(const array<array<int, COLS>, ROWS>& b);

int main()
{

  // single dimension array
  array <int, NSIZE> n;

  // ask the user for the data

for (size_t i = 0; i < NSIZE; i++)
    {
      cout << "Enter a number: ";
      cin >> n[i];

    }  

 printArray(n);

 // two dimension array
 array<array<int, COLS>, ROWS> x{1,2,3,4,5,6,7,8,9};
 cout << "*****" << endl;
 printArray2(x);
 
 return 0;
}

void printArray(const array<int, NSIZE>& a)
{
  for(size_t i = 0; i < NSIZE; i++)
    {
      cout << a[i] << endl;
    }
}

void printArray2(const array<array<int, COLS>, ROWS>& b)
{
  for (size_t i = 0; i < ROWS; i++)
    {
      for (size_t j = 0; j < COLS; j++)
	{
	  cout << b[i][j] << '\t';
	}
      cout << endl;
    }
}

