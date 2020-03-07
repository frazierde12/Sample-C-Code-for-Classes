#ifndef R_H
#define R_H

class r
{

public:

  // Constructor(s)
  r(std::string s);

  // Accessors
  std::string getRoman();
  int getDecimal();
  
  // Helper
  int c2(char d);
  void convert()

  
private:
  // member data
  std::string rn;
  int n;
};
#endif
