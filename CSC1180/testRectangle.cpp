#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
  Rectangle r1;
  Rectangle r2(5,7);

  cout << r2.getLength() << '\t' << r2.getHeight() << endl;
  r2.setLength(4);
  r2.setHeight(8);
  cout << r2.getLength() << '\t' << r2.getHeight() << endl;    

  cout << r1.area() << '\t' << r2.area() << endl;

  if (r1.isSquare())
    {
      cout << "Square\n";
    }
  else
    {
      cout << "Not Square\n";
    }

  if (r2.isSquare())
    {
      cout << "Square\n";
    }
  else
    {
      cout << "Not Square\n";
    }  
  return 0;
}

