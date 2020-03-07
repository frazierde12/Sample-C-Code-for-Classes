#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;

Complex::Complex(int r, int i)
  {
    realPart = r;
    imaginaryPart = i;
  }

  // Accessors
int Complex::getReal()const
{
  return realPart;
}
int Complex::getImaginary()const
{
  return imaginaryPart;
}
  
  // Mutators
void Complex::setReal(int r)
{
  realPart = r;
}
void Complex::setImaginary(int i)
{
  imaginaryPart = i;
}

string Complex::printComplex()
{
  return to_string(realPart) + " + " + to_string(imaginaryPart) + "i";
}
Complex Complex::add(Complex c)
{
  Complex cc(0,0);
  cc.setReal(realPart + c.getReal());
  cc.setImaginary(imaginaryPart + c.getImaginary());
  return cc;
}
  
