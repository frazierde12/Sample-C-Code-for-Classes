#include <iostream>
#include "fractionType.h"

using namespace std;

  // Constructor(s)
fractionType::fractionType()
{
  num = 1;
  den = 1;
}
fractionType::fractionType(int n, int d)
{
  num = n;
  if (d != 0)
    {
      den = d;
    }
  else
    {
      den = 1;
    }
}

  // print function
void fractionType::printFrac()
{
  cout << num << "/" << den << endl;
}

  
  // overide arithemetic operators
fractionType fractionType::operator+(const fractionType& of) const
{
  /*
  a = num of fraction to the left of +
  b = den of fraction to the left of +
  c = of.num   to the right of +
  d = of.den   to the right of +
  */
  fractionType temp;
  temp.num = (num * of.den)+(den * of.num);
  temp.den = den * of.den;
  return temp;

}


fractionType fractionType::operator*(const fractionType& of) const
{
  /*
  a = num of fraction to the left of +
  b = den of fraction to the left of +
  c = of.num   to the right of +
  d = of.den   to the right of +
  */
  fractionType temp;
  temp.num = num *of.num;
  temp.den = den * of.den;
  return temp;
  
}

fractionType fractionType::operator/(const fractionType& of) const
{
  /*
  a = num of fraction to the left of +
  b = den of fraction to the left of +
  c = of.num   to the right of +
  d = of.den   to the right of +
  */
  fractionType temp;
  temp.num = num * of.den;
  temp.den = den * of.num;
  return temp;
  
}
  
