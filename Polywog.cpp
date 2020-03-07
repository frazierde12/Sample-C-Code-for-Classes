#include <iostream>
using namespace std;

class Polygon
{
protected:
  int numSides;

public:
  virtual int area()=0;
  void print()
  {
    cout << "Number of sides " << numSides << endl;
  }
};

class Rectangle: public Polygon
{
private:
  int length;
  int width;

public:
  int area()
  {
    return length * width;
  }

  void print()
  {
    Polygon::print();
    cout << "Size of rectangle is : " << length << "x" << width << endl;
  }

  Rectangle(int l, int w)
  {
    numSides = 4;
    lenght = l;
    width = w;
  }    
};

int main()
{

  Rectangle r1(10, 12);
  r1.print();
  cout << r1.area() << endl;
  
  return 0;
}

