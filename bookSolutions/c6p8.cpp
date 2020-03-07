//Chapter 6: Programming Exercise 8

#include <iostream>

using namespace std;

void reverseDigits(int num, int& revNum, int& multip);

int main()
{
  int number;
  int reverseNumber;
  int multiplier = 1;
  bool isNegative = false;

  cout << "Enter an integer: ";
  cin >> number;
  cout << endl;

  if (number < 0)
    {
      isNegative = true;
      number = -number;
    }

  reverseDigits(number, reverseNumber, multiplier);

  if (isNegative)
    reverseNumber = - reverseNumber;

  cout << number << " after digits reversed = "
       << reverseNumber << endl;

  return 0;
}

void reverseDigits(int num, int& revNum, int& multip)
{

  if (num < 10)
    revNum = num;
  else
    {
      reverseDigits(num / 10, revNum, multip);
      multip = 10 * multip;
      revNum = (num % 10 )* multip + revNum;
    }
}


