#include <iostream>
using namespace std;

void printArray()
{
  for (size_t i = 0; i < 10; i++)
    {
      cout << array[i] << endl;
    }
}

int main()
{
  int size = 10;
  int *array = new int[size];

  for (size_t i = 0; i < 10; i++)
    {
      array[i] = i;
    }

  for (size_t i = 0; i < 10; i++)
    {
      cout << array[i] << endl;
    }

  printArray();
  return 0;
}

