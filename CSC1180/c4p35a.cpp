// factorial
// 5! = 5 * 4 * 3 * 2 * 1

#include <iostream>
using namespace std;

int main()
{
  // declare variables
  int n{0};
  int fact{0};

  // ask for n
  cout << "Enter an integer: ";
  cin >> n;

  fact = n;
    while(n > 2)
    {
      fact = fact * (n-1);
      n--;
    }

  cout << "Factorial is: " << fact <<  endl;


  return 0;
  
}
