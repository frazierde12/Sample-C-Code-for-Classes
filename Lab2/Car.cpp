#include <iostream>
#include "Car.h"

using namespace std;

void Car::move()
{
  int d = Vehicle::getDistance();
  d = d + 10;
  Vehicle::setDistance(d);
  cout << "Car has " << doors << " doors. New distance is: " << d << endl;
  
}
Car::Car(int u, int v)
  :Vehicle(u)
{
  doors = v;
}

  
