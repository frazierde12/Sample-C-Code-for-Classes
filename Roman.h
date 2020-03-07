#ifndef ROMAN_H
#define ROMAN_H

class Roman
{

public:

  // Constructor(s)
  Roman(std::string s);

  // Accessors
  std::string getRoman() const;
  int getDecimal() const;

  // Mutators
  int convertDigit(char d);
  void convert();

  
private:
  // member data
      std::string rn;
      int n;
};
#endif
