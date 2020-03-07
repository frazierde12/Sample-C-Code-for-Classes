#include <iostream>
#include <array>
using namespace std;

int main()
{
  const int NSIZE=5;
  array <int, NSIZE> n{1,2,3,4,5};
  for (size_t i = 0; i < NSIZE; i++)
    {
      cout << n[i] << endl;
    }

  return 0;
}

