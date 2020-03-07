// user enters 10 numbers
// use while loop to determine largest
// name

#include <iostream>
using namespace std;

int main()
{
  // declare variables
  int c{0};
  int n{0};
  int largest{0};

  cout <<"Enter number " << c+1 << ": ";
  cin >> n;
  c++;
  largest = n;
  
  while (c < 10) 
    {
      cout <<"Enter number " << c+1 << ": ";
      cin >> n;
      // determine if new number is the largest
      if (n > largest)
	{
	  largest = n;
	}
      c++;
    }
  // print out the results
  cout << "Largest number enterd is " << largest << endl;
  return 0;
}

