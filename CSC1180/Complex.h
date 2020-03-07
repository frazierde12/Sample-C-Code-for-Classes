#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{

public:

  // Constructor(s)
  Complex(int, int);

  // Accessors
  int getReal()const;
  int getImaginary()const;
  
  // Mutators
  void setReal(int);
  void setImaginary(int);

  std::string printComplex();
  Complex operator+(Complex);
  
private:
  // member data
  int realPart;
  int imaginaryPart;
  
};

#endif
