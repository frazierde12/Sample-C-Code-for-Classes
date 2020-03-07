class Rectangle
{

public:
  // Constructor(s)
  Rectangle()
    {
      length = 1;
      height = 1;
    }

  Rectangle(int l, int h)
    {
      length = l;
      height = h;
    }

  // Accessors

  int getLength() const
  {
    return length;
  }

    int getHeight() const
  {
    return height;
  }

  // Mutators

    void setLength(int l)
    {
      length = l;
    }

    void setHeight(int h)
    {
      height = h;
    }

    int area()
    {
      return length * height;
    }

    bool isSquare()
    {
      if (length == height)
	{
	  return true;
	}
      else
	{
	  return false;
	}
    }
  
private:
  // member data
  int length;
  int height;
};
