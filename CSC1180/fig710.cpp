#include <iostream>
#include <array>
using namespace std;
const size_t arraySize = 3;

void staticArrayInit();

int main()
{
  staticArrayInit();
  cout << "--------\n";
  staticArrayInit();
  cout << "--------\n";  
  staticArrayInit();  
  return 0;
}

void staticArrayInit()
{
  static array<int, arraySize> array1{};

  // print out as entering
  for(size_t i = 0; i <arraySize; i++)
    {
      cout << array1[i] << " , ";
    }
  cout << endl;

    for(size_t i = 0; i <arraySize; i++)
    {
      array1[i]= array1[i] + 5;
    }
  // print out as exiting
  for(size_t i = 0; i <arraySize; i++)
    {
      cout << array1[i] << " , ";
    }
  cout << endl;
    
}



