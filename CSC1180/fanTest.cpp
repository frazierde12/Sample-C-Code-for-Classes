#include <iostream>
#include "Fan.h"
#include "utilities.h"
using namespace std;

int main()
{
  ClearScreen();
  Fan f1;
  f1.setSpeed(3);
  f1.setOn(true);
  f1.setRadius(10);
  
  Fan f2;

  f2.setSpeed(2);
  f2.setOn(false);
  f2.setRadius(5);  

  cout << f1.getSpeed() << '\t' << f1.getOn() << '\t' << f1.getRadius() << endl;
  cout << f2.getSpeed() << '\t' << f2.getOn() << '\t' << f2.getRadius() << endl;  

  
  return 0;
  
}

