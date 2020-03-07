// add.cpp - Adds two integers input by the user
// Name: David Frazier

#include <iostream>
using namespace std;

int main()
{
  // variable declaration
  int number1{0};
  int number2{0};
  int sum{0};

  // ask for user input
  cout << "Enter first integer: ";
  cin >> number1;

  cout << "Enter second integer: ";
  cin >> number2;  

  // calculate sum
  sum = number1 + number2;


  // output results
  cout << number1<< " + " << number2 <<" = " << sum << endl;
  return 0;
}
