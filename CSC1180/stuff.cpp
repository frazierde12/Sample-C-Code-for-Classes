// tempConvert.cpp
// convert F to C
// programmer name
//  c = (f - 32) * (5.0/9.0)

#include <iostream>
using namespace std;

int main()
{
  // declare variable

  double f{212}; // degrees in farenheit
  double c{100}; // degrees in celcius

  // ask user for f
  cout << "Enter the degrees in Farenheit: ";
  cin >> f;

  
  // convert f to c
  c = (f - 32) * (5.0/9.0);
  

  // output results
  cout << f << " in Farenheit is " << c << " degrees in Celcius.\n";

  f = f^2;
  return 0;
  
}
