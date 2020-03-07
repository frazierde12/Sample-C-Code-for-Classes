#include <iostream>
#include <array>
#include "GradeBook.h"

using namespace std;

int main()
{
  const array<int, GradeBook::students> grades
  {87, 58, 94, 100, 83, 78, 85, 91, 76, 87};

  string courseName{"CSC1180"};

  GradeBook myGradeBook(courseName, grades);
  cout << myGradeBook.getAverage() << endl;

  
    
  return 0;
}

