#include <string>
#include <array>
#include <iostream>

class GradeBook
{

public:
  static const size_t students{10};

  // Constructor(s)

  GradeBook(const std::string& name, const std::array<int, students>& gradesArray)
    {
      courseName = name;
      grades = gradesArray;
    }

  void setCourseName(const std::string& name)
  {
    courseName = name;
  }

  const std::string& getCourseName() const
  {
    return courseName;
  }

  // determine average grade for class
  double getAverage() const
  {
    int total{0};

    for (int grade : grades)
      {
	total = total + grade;
      }
    return static_cast<double>(total)/students;
    
  }

private:
  // member data
  std::string courseName;
  std::array<int, students> grades;
};
