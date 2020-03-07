#include <string>

#ifndef STUDENT_H
#define STUDENT_H

class S
{

public:

  // Constructor(s)

  S(std::string, std::string); 

  // Accessors
  std::string getName() const;
    
  // Mutators
  void addGrade(int);
  void displayGrade();
  int calculateGrade();
  
private:
  // member data

  std::string first;
  std::string last;
  int grades[10];
  
};
#endif
