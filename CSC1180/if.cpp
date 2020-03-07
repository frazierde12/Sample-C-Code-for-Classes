// BMI Calculator
// bmi = (w * 703)/(h * h)


#include <iostream>
using namespace std;

int main()
{
  // declare variable

  double h{0};
  double w{0};
  double bmi{0};

  cout << "Enter height in inches: ";
  cin >> h;

  cout << "Enter weight in pounds: ";
  cin >> w;  
  
  // calculate bmi
  bmi = (w * 703)/(h * h);

  cout << "BMI" << '\t' << bmi << endl;
 
  return 0;
}
