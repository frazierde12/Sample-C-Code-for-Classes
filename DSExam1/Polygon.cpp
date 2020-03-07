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
    cout << "Number of sides is: " << numSides << endl;
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
    Polygon:: print();
    cout << "Size of Rectange is: " << length << "x" << width << endl;
  }

  
  Rectangle(int l, int w)
  {
    numSides = 4;
    length = l;
    width = w;
  }

};

int main()
{
  Rectangle r(3,4);
  r.print();
  cout << r.area() << endl;

  return 0;
}
