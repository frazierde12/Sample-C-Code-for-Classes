#include <iostream>
#include "Point.h"

using namespace std;

int main()
{

  Point p1;
  Point p2(3,4);

  cout << p1.getX() << '\t' << p1.getY() << endl;
  p1.setX(-10);
  p1.setY(-5);
  cout << p1.getX() << '\t' << p1.getY() << endl;    

  cout << p1.quadrant() << endl;
  cout << p2.quadrant() << endl;  
    
  return 0;
}

