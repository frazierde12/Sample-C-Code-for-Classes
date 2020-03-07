#include <iostream>
#include <array>
using namespace std;

const size_t ROWS{5};
const size_t COLS{5};



int max(const array<array<int, COLS>, ROWS>& n);
void printArray(const array<array<int, COLS>, ROWS>& n);



int main()
{
  array<array<int, COLS>, ROWS> n{};
  for (size_t i = 0; i < ROWS; i++)
    {
      for (size_t j = 0; j < COLS; j++)
	{
	  cout << "Enter a number: ";
	  cin >> n[i][j];
	}
    }
    
  cout << "Max of the array is " << max(n) << endl;
  
  return 0;
}


int max(const array<array<int, COLS>, ROWS>& n)
{
  int m = n[0][0];
  for (size_t i = 0; i < ROWS; i++)
    {
      for (size_t j = 0; j < COLS; j++)
	{
	  if (m < n[i][j])
	    {
	      m = n[i][j];
	    }
	}
    }
  return m;
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
