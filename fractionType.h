class fractionType 
{

public:

  // Constructor(s)
  fractionType();
  fractionType(int n, int d);

  // print function
  void printFrac();
  
  // overide arithemetic operators
  fractionType operator+(const fractionType& of) const;
  fractionType operator*(const fractionType& of) const;
  fractionType operator/(const fractionType& of) const;    
  
private:
  // member data
  int num;
  int den;
  
};
