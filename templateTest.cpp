#include <iostream>
using namespace std;
template <class Type>
Type switch(Type &a, Type &b)
{
  Type temp;
  temp = a;
  a = b;
  b = temp;
}




int main()
{
  cout << sum(3,4) << endl;
  cout << sum(4.3, 5.8) << endl;
  
  

  return 0;
}

