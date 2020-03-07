#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  // declare variables
  int count{0};
  int number{0};
  int largest{0};

  cout << "Enter an Integer: ";
  cin >> number;
  largest = number;
  
  while (count < 9)
    {
      cout << "Enter an Integer: ";
      cin >> number;

      if (number > largest)
	{
	  largest = number;
	}


      count++;
    }
  cout << "Largest is " << largest << endl;
  
  return 0;
}
