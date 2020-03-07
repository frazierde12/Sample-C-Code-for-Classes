// Speed can only be 1, 2 or 3
class Fan
{

public:

  // Constructor(s)
  Fan()
    {
      speed = 1;
      on = false;
      radius = 5;
    }

  // Accessors
  int getSpeed() const
  {
    return speed ;
  }

  std::string  getOn() const
  {
    if (on)
      {
	return "On";
      }
    else
      {
	return "Off";
      }

  }

  double getRadius() const
  {
    return radius;
  }   

  // Mutators
  void setSpeed(int s)
  {
    if (s < 1 || s >= 3)
      {
	s = 1;
      }
    speed = s;
  }

  void setOn(bool o)
  {
    on = o;
  }

  void setRadius(double r)
  {
    radius = r;
  }
  
private:
  // member data

  int speed;
  bool on;
  double radius;
};
