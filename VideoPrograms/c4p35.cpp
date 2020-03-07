// Factorial

#include <iostream>
using namespace std;

int main()
{

  // declare variables

  int n{0};
  int c{0};
  int fact{1};

  // ask user for n
  cout << "Enter an integer: " ;
  cin >> n;
  c = n;

  while (c > 1)
    {

      fact = fact * c;
      c--;
    }

  cout << "The factorial of " << n << " is " << fact << endl;
  
  return 0;
}

