#include <iostream>
using namespace std;

//function protype
void sortInPlace(int &x, int &y, int &z);

int main()
{


  
  return 0;
}

void sortInPlace(int &x, int &y, int &z)
{
  int max = x;
  int min = x;

  // find max - assume that x is max
  if (y > max)
    {
      max = y;
    }

  if (z > max)
    {
      max = z;
    }

  // find min
  if (y < min)
    {
      min = y;
    }

  if (z < min)
    {
      min = z;
    }

  // work out the mid or y

  // x is mid

  if (y == max && z == min)
    {
      y = x;
      x = min;
      z = max;
      
    }

  if (z == max && y == min)
    {
      y = x;
      x = min;
      z = max;
    }  


  // y is mid

  

  // z is mid

  

}
