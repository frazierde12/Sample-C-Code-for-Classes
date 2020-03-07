// Factorial
// 5! = 5 * 4 * 3 * 2 * 1

#include <iostream>
using namespace std;

int main()
{
  // declare variables
  int n{0};
  int fact{1};
  int x{0};

  cout << "Enter an Integer: ";
  cin >> n;
  x = n;
  
  while(n > 1)
    {
      fact = fact * n;
      n = n - 1;
    }
  cout << x << " factorial is " << fact << endl;

  

  return 0;
}
