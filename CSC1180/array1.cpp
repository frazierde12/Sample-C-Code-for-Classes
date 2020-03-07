#include <iostream>
#include <array>
using namespace std;

const size_t NSIZE = 10;

int main()
{

  int sum{0};
  // create the array
  array<int, NSIZE> a1;

  for (size_t i = 0; i < NSIZE; i++)
    {
      cout << "Enter a number: ";
      cin >> a1[i];
    }

  for (size_t i = 0; i < NSIZE; i++)
    {
      sum = sum + a1[i];
    }  

  cout << "Average is: " << sum/NSIZE << endl;
  
  return 0;
}

