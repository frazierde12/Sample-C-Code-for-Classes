// p 17 - find largest of 10 input numbers

#include <iostream>
using namespace std;

int main()
{
  // declare variables
  int n{0};
  int c{0};
  int largest{0};

  cout << "Enter an integer: ";
  cin >> n;
  largest = n;
  c = 1;

  while (c < 10)
    {
      cout << "Enter an integer: ";
      cin >> n;
      if ( n > largest)
	{
	  largest = n;
	}
      c = c + 1;
    }

  cout << "Largest is "<< largest << endl;
  
  return 0;
}
