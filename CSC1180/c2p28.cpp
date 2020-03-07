// Body Mass Calculator
// BMI = (weight*703)/(height*height)
#include <iostream>
using namespace std;

int main()
{
  // declare variables
  double height{0};
  double weight{0};
  double bmi{0};

  cout << "Enter height in inches: ";
  cin >> height;
  
  cout << "Enter weight in pounds:";
  cin >> weight;

  
  // calculate BMI
  bmi = (weight*703)/(height*height);
  
  cout << "Body Mass Index is " << bmi << endl;
  
  return 0;  
  
}
