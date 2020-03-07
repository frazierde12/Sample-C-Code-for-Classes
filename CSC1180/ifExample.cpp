#include <iostream>
using namespace std;

int main()
{
  // declare variables
  int grade{0};
  cout << "Enter the grade as an integer: ";
  cin >> grade;

  if (grade >= 90)
      cout << "A\n";
  else

      if (grade >= 80)
	  cout << "B\n";
  else
	  if (grade >= 70)
	      cout << "C\n";
    

  return 0;
} // end main
