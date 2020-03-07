#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

// Constructor(s)
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

std::string Complex::printComplex()
{
  return "(" + to_string(realPart) + " + " + to_string(imaginaryPart) + "i)";
}

Complex Complex::operator+(Complex c)
{
  int r, i;
  // c3 = c1.add(c2)
  // 
  // calculate the real part
  r = this.realPart + c.getReal();
    
  // calculate the imaginary part
  i = imaginaryPart + c.getImaginary();
  
  // create a new Complex object
  Complex cc(r,i);
  // return it
  return cc;
}
  

