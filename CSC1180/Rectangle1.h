#include <string>
class Rectange
{
 public:
  Rectangle(double h, double l, std::string c)
    {
      height = h;
      length = l;
      color = c;
    }

  // accessors
  std::string getHeight() const
  {
    return "height mm";
  }

  double getLength() const
  {
    return length;
  }

  std::string getColor() const
  {
    return color;
  }

  // mutators
  void setHeight(double h)
  {
    if(h <=0 || h >400)
      {
	// error condition
	height = -1;
      }
    else
      {
	height = h;
      }
  }

  void setLength(double l)
  {
    while(l <=0 || l >400)
      {
	// error
	cout << "Height must be between 1 and 400\n";
	cout << "Enter new height: ";
	cin >> l;
	  
      }
    length = l;
  }

  void setColor(std::string c)
  {
    color = c;
  }  

  // other function
  double area()
  {
    return height * lenght;
  }

 private:
  double height;
  double length;
  std::string color;

};
