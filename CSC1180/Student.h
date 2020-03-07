#include <string>
#include <iostream>
class Student
{

public:

  // Constructor(s)
  Student(std::string f, std::string l)
    {
      first = f;
      last = l;
      for(size_t i = 0; i < 10; i++)
	{
	  grades[i] = 0;
	}
    }
      

  // Accessors
  std::string getName()
    {
      return first + " " + last;
    }
  
  // Mutators
  void addGrade(int i)
  {
    int g;
    std::cout << "enter the grade:";
    std::cin >> g;
    grades[i] = g;
  }

  void displayGrades()
  {
    std::cout << std::endl;
    std::cout << "===============================" << std::endl;
    std::cout << getName() << std::endl;
    std::cout << "===============================" << std::endl;    
    
    for(size_t i = 0; i < 10; i++)
      {
	std::cout << i+1 << '\t' << grades[i] << std::endl;
      }
  }

  int calculateGrade()
  {
    int count{0};
    int sum{0};
    for (size_t i = 0; i < 10; i++)
      {
	if (grades[i] != 0)
	  {
	    count++;
	    sum = sum + grades[i];
	  }
      }
    return sum/count;
  }
  
private:
  // member data
  std::string last;
  std::string first;
  int grades[10];

};
