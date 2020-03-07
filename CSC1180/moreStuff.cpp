// tempConvert.cpp
// convert F to C
// programmer name
//  c = (f - 32) * (5.0/9.0)

#include <iostream>
using namespace std;

int main()
{
  int x{0};
  int y{0};
  int a{0};

  cout << "Enter a number: ";
  cin >> x;

  cout << "Enter another number: ";
  cin >> y;

  if (y == 0)
    {
      cout << "Second number cannot be zero\n";
    }
  else
    {
      a = x/y;
      cout << x << " / " << y << "=" <<a << endl;
    }
  



  return 0;
}
