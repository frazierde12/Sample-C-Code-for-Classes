// fig 4.10 - class average

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int total{0};
  unsigned int grade{1};
  double average{0.0};
  unsigned int c{0};

  
  while(grade != 0)
    {
      cout << "Enter grade (0 to end): ";
      cin >> grade;
      // input validation - grade should be less than 100
      while (grade > 100)
	{
	  cout << "ERROR Grade must be less than 100\n";
	  cout << "Enter grade: ";
	  cin >> grade;
	}
      total = total + grade;
      c = c + 1;
      
    }
  c = c - 1;
  average = static_cast<double>(total)/c;
  cout << "\nTotal of all " << c << " grades is " << total;
  cout << setprecision(10) << fixed << "\nAverage is :" << average << endl;
  
  return 0;
}
