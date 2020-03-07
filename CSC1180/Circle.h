#iclude <string>
class Circle
{

public:

  // Constructor(s)

  Circle()
    {
      radius = 1;
      color = "Red";
    }
  
  Circle(double r)
    {
      if (r <= 0)
	{
	  r = 1;
	}
      radius = r;
      color = "Red";
    }

  Circle(std::string  c)
    {
      radius = 1;
      color = c;
    }

  Circle(double r, std::string c)
    {
      if (r <= 0)
	{
	  r = 1;
	}
      radius = r;
      color = c;
    }
  


  

  // Accessors
  double getRadius() const
  {
    return radius ;
  }

  // Mutators
  void setRadius(double r)
  {
      if (r <= 0)
	{
	  r = 1;
	}    
    radius = r;
  }

  double area()
  {
    return radius * radius * 3.14159;
  }
  
private:
  // member data
  double radius;
  std::string color;

};
