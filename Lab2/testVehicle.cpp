#include <iostream>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Bike.cpp"

using namespace std;

int main()
{
  Car c(0, 4);
  c.move();
  Bike b(0, 10);
  b.move();
  return 0;
}

