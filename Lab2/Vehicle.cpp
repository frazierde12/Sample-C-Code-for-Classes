#include <iostream>
#include "Vehicle.h"

using namespace std;

void Vehicle::setDistance(int u)
{
  distance = u;
}

int Vehicle::getDistance()const
{
  return distance;
}

Vehicle::Vehicle(int u)
{
  distance = u;
}
