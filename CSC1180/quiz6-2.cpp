#include <iostream>
#include <array>
using namespace std;

int main()
{
  const int NSIZE=5;
  array <int, NSIZE> n;

  for (size_t i = 0; i < NSIZE; i++)
    {
      n[i] = i + 1;
    }

  
  for (size_t i = 0; i < NSIZE; i++)
    {
      cout << n[i] << endl;
    }

  return 0;
}

