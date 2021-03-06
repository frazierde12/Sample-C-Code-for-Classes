#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
  num = 1;
  den = 1;
}

Fraction::Fraction(int n, int d)
{
  num = n;
  den = d;
}

  // overload the + operator
Fraction Fraction::operator+(const Fraction& otherFraction) const
{
  // num = a
  // den = b
  // otherFraction.num = c
  // otherFraction.den = d
  // temp.num = (num * otherFraction.den)+(den * otherFraction.num)
  // temp.den = den * otherFraction.den
  
  Fraction temp;
  temp.num = (num * otherFraction.den)+(den * otherFraction.num);
  temp.den = den * otherFraction.den;  
  return temp;
}

void Fraction::printFrac()
{
  cout << num << "/" << den << endl;
}

