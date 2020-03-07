// add3.cpp - program to add two numbers and display the sum
// David Frazier


#include <iostream>
using namespace std;

int main()
{
  // variable declaration
  int number1{0};
  int number2{0};
  int sum{0};

  // ask user for integers

  cout << "Enter the first integer: ";
  cin >> number1;
  
  cout << "Enter the second integer: ";
  cin >> number2;

  // calculate sum
  
  sum = number1 + number2;

  // print results
  
  cout << number1 << " + " << number2 << " = " << sum << endl; 

  
  return 0;
}
