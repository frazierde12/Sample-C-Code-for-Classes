#include <iostream>
using namespace std;

int main()
{
  // declare variables
  int s{0};
  int n{0};
  int smallest{99999999};

  cout << "Enter a list of numbers, the first is the number of number: ";
  cin >> s;

  for(int c = 0; c <= s; c++)
    {
      cin >> n;
      if (n < smallest)
	{
	  smallest = n;
	}
      
    }
  cout << "Smallest is " << smallest << endl;  

    
  return 0;
}

