// compound interest
// a = p(1+r)^n where n is number of years

#include <iostream>
#include <cmath> // x^4 = pow(x,4)
#include <iomanip>

using namespace std;

int main()
{
  // declare variables
  double p{1000};
  double a{0};
  double r{.05};
  int years{0};

  cout << "Enter the principal: ";
  cin >>p;

  cout << "Enter the interest rate in decimal:";
  cin >> r;

  cout << "Enter the number of years:";
  cin >> years;

  
  cout << "\n\nYear\tAmount\n";
  for (int n = 1; n <= years; n++)
    {
      a = p * pow((1+r),n);
      cout << setprecision(2) << fixed<<n << '\t' << a << endl; 

    }
  cout << endl <<endl;
  
  return 0;
}
