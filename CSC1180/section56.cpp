// section 5.6
// a = p(1+r)^n
#include <iostream>
#include <iomanip>
#include <cmath> // for pow function
using namespace std;

int main()
{

  // declare variables
  double a{0.0};
  double rate{.05};
  double principal{1000};

  cout << fixed << setprecision(2);
  cout << "Year\tAmount\n";
  for(int year=1; year <= 10; year++)
    {
      a = principal*pow(1.0 + rate, year);
      cout << setw(4) << year << setw(20) << a <<  endl;
    }


  
  return 0;
}
