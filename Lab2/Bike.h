class Bike: public Vehicle
{
 public:
  void move();
  Bike(int u = 0, int v=0);

 private:
  int gears;
};
