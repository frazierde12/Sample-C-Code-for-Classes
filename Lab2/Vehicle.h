#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
 public:
  virtual void move()=0;
  Vehicle(int u);
  void setDistance(int u);
  int getDistance() const;

 private:
  int distance;
};

#endif
