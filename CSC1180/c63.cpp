#include <iostream>
using namespace std;

// function prototypes
int maximum(int x, int y, int z);
void boo();

int main()
{
  boo();
  int x, y,z,mv;
  
  cout << "Enter three ints: ";
  cin >> x >> y >> z;
  mv = maximum(x, y, "z");

  cout << mv << endl;
  cout << x << endl;
  
  return 0;
}

// function definition
int maximum(int x, int y, int z)
{
  int maxValue{x};
  if (y > maxValue)
    {
      maxValue = y;
    }
  if (z > maxValue)
    {
      maxValue = z;
    }
  x = 1000;
  return maxValue;
}
void boo()
{
  cout << "Boo!!!\n";
}

