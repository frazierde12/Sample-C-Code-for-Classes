#include <iostream>
#include <array>
#include "GradeBook.h"

using namespace std;

int main()
{
  string courseName = "CSC1180";
  const array<int, GradeBook::students> grades
  {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
  
  GradeBook myGradeBook(courseName,grades);
  cout << myGradeBook.getCourseName() << endl;
  myGradeBook.setCourseName("CSC1180 - Section 1");
  cout << myGradeBook.getCourseName() << endl;
  cout << myGradeBook.getAverage() << endl;  

  string courseName2 = "CSC1180 - Section 2";
  const array<int, GradeBook::students> grades2
  {100, 78, 94, 100, 83, 78, 85, 91, 76, 87};
  
  GradeBook myGradeBook2(courseName2,grades2);

  cout << myGradeBook2.getCourseName() << endl;
  cout << myGradeBook2.getAverage() << endl;
  return 0;
}

