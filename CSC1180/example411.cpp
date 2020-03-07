#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //declare variables
  int result{0};
  int passed{0};
  int failed{0};
  int c{0};
  
  // counter while loop
  while (c < 10)
    {
      // ask the user for the results
      cout << "Enter results: ";
      cin >> result;
      
      // if a 1 is entered increment the passed, if not
      // increment the failed
      if (result == 1)
	{
	  // student passed
	  passed = passed + 1;
	}
      else
	{
	  // student failed
	  failed = failed + 1;
	}
      
      c = c + 1;
    }


  // print out the results
  cout << "\nResults **************************\n";
  cout << passed << " students passed\n";
  cout << failed << " students failed\n\n";
  
  
  // see if bonus message gets printed

  if (passed > 8)
    {
      cout << "Bonus to instructor!\n";
    }
  return 0;
}
