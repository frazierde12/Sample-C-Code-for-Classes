// Fig 4.10 Class average

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  unsigned int grade{1};
  int total{0};
  double average{0.0};
  unsigned int gradeCount{0};
  
  // processing phase using iteration
  while (grade != 0)
    {
      cout << "Enter grade (0 to end): ";
      cin >> grade;
      // input validation
      while (grade > 100)
	{
	  cout << "ERROR: grade must be less than 100!\n";
	  cout << "\nEnter grade: ";
	  cin >> grade;
	}
      total = total + grade;
      gradeCount = gradeCount + 1;
    }

  // calculate average
  average = static_cast<double>(total)/(gradeCount - 1);
  cout << "\nTotal of all " << gradeCount << " grades is " << total;
  cout << "\nClass average is:" << setprecision(2) << fixed <<  average << endl;
  
  return 0;
}
