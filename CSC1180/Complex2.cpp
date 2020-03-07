#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

// Constructor(s)
Complex::Complex(int r , int i)
{
  realPart = r;
  imaginaryPart = i;
}

  // Accessors
int Complex::getReal()const
{
  return realPart;
}
int Complex::getImaginary()const;
  
  // Mutators
void Complex::setReal(int r);
void Complex::setImaginary(int i);

std::string Complex::printComplex()
{
  return  "( " + to_string(realPart) + " + " +  to_string(imaginaryPart) + "c)";
}
Complex Complex::add(Complex cc)
{
  int r, i;
  // add real parts
  r = realPart + cc.getReal();
  // add the imaginary parts
  i = imaginaryPart + cc.getImaginary();
  // create a new Complex
  Complex cn(r,i);
  // return new Complex
  return cn;
}
  
private:
  // member data
  int realPart;
  int imaginaryPart;
  

