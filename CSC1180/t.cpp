#include <iostream>
using namespace std;

template <typename T>
T addIT(T value1, T value2);

int main()
{
  cout << addIT(2,3) << endl;
  cout << addIT(2.5,3.7) << endl;  
  
  return 0;
}


template <typename T>
T addIT(T value1, T value2)
{
  return value1 + value2;
}
