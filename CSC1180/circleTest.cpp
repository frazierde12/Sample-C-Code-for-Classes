#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{

  Circle c1;
  Circle c2(3.4);

  cout << c1.getRadius() << '\t' << c2.getRadius() << endl;

  c1.setRadius(-3);
  c2.setRadius(5);

  cout << c1.getRadius() << '\t' << c2.getRadius() << endl;  

  cout << c1.area() << '\t' << c2.area() << endl;
  
  return 0;
}

