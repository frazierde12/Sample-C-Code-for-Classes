#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  // declare variables
  int result{0};
  int passed{0};
  int failed{0};
  int counter{0};
  
  // counter controlled loop
  while (counter < 10)
    {
      // ask user for result
      cout << "Enter result: ";
      cin >> result;
      
      // determine if a 1 or 2 was entered
      // increment right counter either passed or failed
      
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
      
      counter = counter + 1;
    }
  
  // print results
  cout << "\nResults ************************\n";
  cout << passed << " students passed the exam.\n";
  cout << failed << " students failed the exam.\n\n";
						    
  // determine if more than 8 passed
  if (passed > 8)
    {
      cout << "Bonus to instructor!\n\n";
    }
  
  return 0;
}
