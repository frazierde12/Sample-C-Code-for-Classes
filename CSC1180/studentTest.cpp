#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void printMenu(Student);
int main()
{
  int choice = 0;
  int g;

  string f, l;
  cout << "Enter first name: ";
  cin >> f;
  cout << "Enter last name: ";
  cin >> l;
  Student s1(f,l);
  
  while (choice != 4)
    {

      printMenu(s1);
      cout << "==>";
      cin >> choice;

      if(choice == 1)
	{
	  cout << "Which grade do you want to enter 1-10?";
	  cin >> g;
	  s1.addGrade(g-1);
	}
      else if(choice == 2)
	{
	  s1.displayGrades();
	}
      else if (choice == 3)
	{
	  cout << "Final Grade is " << s1.calculateGrade() << endl;
	}
    }
  
  return 0;
}

void printMenu(Student s)
{
  // display menu
  cout << endl << endl << endl << endl << endl;  
  cout << "Gradebook for " << s.getName() << endl ;
  cout << "1. Add a Grade" << endl;
  cout << "2. Display Grades" << endl;
  cout << "3. Calculate Final Grade" << endl;
  cout << "4. Exit" << endl;
  
}
