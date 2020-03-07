// Mod Test

ic1.cpp 2.24 Odd or even
ic2.cpp 2.25 Multiples?

#include <iostream>
using namespace std;

int main()
{
  int x{0};

  cout << "Enter an integer: ";
  cin >> x;

  if (x%7 == 0)
    {
      cout << "is divisible by 7\n";
    }
  else
    {
      cout << "is NOT divisible by 7\n";
    }    
    


  return 0;
}
