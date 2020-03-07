// convertTemp
// Convert degrees Farenheit to Celcius
// c = (f - 32) * (5 / 9)

#include <iostream>
using namespace std;

int main()
{
  // declare variables
  double f{0}; // degrees in Farenheit
  double c{0}; // degrees in Celcius

  // ask user for f
  cout << "Enter the degrees in Farenheit: ";
  cin >> f;

  if (f >= 75)
    {
      cout << "Hot\n";
    }
  else
    {
      cout << "Not\n";
    }
  
  // do the conversion

  c = (f - 32) * (5.0/9.0);

  // print the results

  cout << ">>>" << f << " degrees Farenheit is " << c << " degrees Celcius\n";

  
  return 0;
  
}
