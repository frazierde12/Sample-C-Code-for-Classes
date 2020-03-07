#include <iostream>
#include <array>
using namespace std;

const size_t NSIZE = 10;
int max(const array<int, NSIZE>& n);

int main()
{

  // create the array
  array<int, NSIZE> a1;

  for (size_t i = 0; i < NSIZE; i++)
    {
      cout << "Enter a number: ";
      cin >> a1[i];
    }

  for (size_t i =0; i < NSIZE; i++)
    {
      for(size_t j = i+1; j<NSIZE; j = j+1)
	{
	  cout << a1[i] << '\t' << a1[j] << endl;
	}
    }

  
  
  return 0;
}





