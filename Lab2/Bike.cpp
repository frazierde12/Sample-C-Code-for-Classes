#include <iostream>
#include "Bike.h"

using namespace std;

void Bike::move()
{
  int d = Vehicle::getDistance();
  d = d + 3;
  Vehicle::setDistance(d);
  cout << "Bike has " << gears << " gears.  New distance is: " << d << endl;
  
}
Bike::Bike(int u, int v)
  :Vehicle(u)
{
  gears = v;
}

  
