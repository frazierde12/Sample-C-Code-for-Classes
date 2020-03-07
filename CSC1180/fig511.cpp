#include <iostream>
using namespace std;

int main()
{

  int total{0};
  int gradeCounter{0};
  int aCount{0}; 
  int bCount{0};
  int cCount{0};
  int dCount{0};
  int fCount{0};
  int grade{0};

  cout << "Enter the integer grade between 0 and 100.\n"
       << "When done, press Enter then hit Ctrl-D.\n";

  while (cin >> grade)
    {
      if (grade < 0 || grade > 100)
	{
	  break;
	}
      
      total = total + grade;
      gradeCounter++;

      switch(grade/10)
	{
	case 10:
	case 9:
	  aCount++;
	  break;

	case 8:
	  bCount++;
	  break;

	case 7:
	  cCount++;
	  break;

	case 6:
	  dCount++;
	  break;

	default:
	  fCount++;
	  break;

	}// edn switch
    }// end while

  cout << "A\t" << aCount << endl;
  cout << "B\t" << bCount << endl;
  cout << "C\t" << cCount << endl;
  cout << "D\t" << dCount << endl;
  cout << "F\t" << fCount << endl;   
  return 0;
}

