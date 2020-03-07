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
  int grade;

  cout << "Enter the integer grades in the range 0-100\n"
       << "When done type Enter then Ctrl-D\n";

  while (cin >> grade)
    {
      total = total + grade;
      gradeCounter++;

      switch(grade/10)
	{
	case 9: // scored in the 90s
	case 10: // scored a 100
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

	}// end switch

    } // end while

  cout << "A\t"<<aCount<<endl;
  cout << "B\t"<<bCount<<endl;
  cout << "C\t"<<cCount<<endl;
  cout << "D\t"<<dCount<<endl;
  cout << "F\t"<<fCount<<endl;        

  return 0;
}

