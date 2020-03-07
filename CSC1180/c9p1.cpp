#include <iostream>
#include <array>

using namespace std;

int main()
{

  const size_t NSIZE = 10;
  int sum{0};
  int big, small; 

  array<int, NSIZE> n;

  for (size_t i = 0; i <= NSIZE; i++)
    {
      cout << "Enter a number: ";
      cin >> n[i];
      sum = sum + n[i];
    }

  cout << "Average is : " << sum/NSIZE << endl;
  return 0;
}

