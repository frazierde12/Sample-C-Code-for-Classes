class Point
{

public:

  // Constructor(s)
  Point()
    {
      x = 1;
      y = 1;
    }

  Point(int a, int b)
    {
      x = a;
      y = b;
    }

  // Accessors
  int getX() const
  {
    return x;
  }

  int getY() const
  {
    return y;
  }  
  // Mutators

  void setX(int a)
  {
    x = a;
  }

  void setY(int b)
  {
    y = b;
  }  

  int quadrant()
  {
    if ((x > 0) && (y>0))
      {
	return 1;
      }

    if ((x < 0) && (y>0))
      {
	return 2;
      }

    if ((x < 0) && (y<0))
      {
	return 3;
      }

    if ((x > 0) && (y<0))
      {
	return 4;
      }    
  }
  
private:
  // member data
  int x;
  int y;
};
