class Fraction
{

public:

  // Constructor(s)
  Fraction();
  Fraction(int n, int d);

  // overload the + operator
  Fraction operator+(const Fraction& otherFraction) const;

  void printFrac();
  
private:
  // member data
  int num;
  int den;

};
