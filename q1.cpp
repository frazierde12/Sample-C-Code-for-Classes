#include <iostream>
using namespace std;

class Polygon
{
public:
  virtual int area() = 0;
  void print()
  {
    cout << "Number of sides: " << numSides << endl;
  }

protected:
  int numSides;
  
};

class Rectangle: public Polygon
{
public:
  int area()
  {
    return length * width;
  }
  void print()
  {
    Polygon::print();
    cout << length << "x" << width << endl;
  }

  Rectangle(int l, int w)
  {
    numSides = 4;
    length = l;
    width = w;
  }

private:
  int length;
  int width;

  
};

int main()
{
  Rectangle r1(10, 12);
  r1.print();
  cout << r1.area() << endl;
  

  return 0;
}

