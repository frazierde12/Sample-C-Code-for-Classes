#include "Shape.cpp"
class Rectangle: public Shape
{

public:
  
  // Constructor(s)
  Rectangle(int s, int l, int w);

  // other functions
  void print();

  
private:
  // member data
  int length;
  int width;

};
