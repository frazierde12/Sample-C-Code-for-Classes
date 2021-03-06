#include <iostream>
#include <string>
#include "partTimeEmployee.h"

using namespace std;

void partTimeEmployee::print() const
{
  Person::print();
  cout << "'s wages are: $" << calculatePay() << endl;
}

double partTimeEmployee::calculatePay() const
{
  return payRate * hoursWorked;

}

void partTimeEmployee::setNameRateHours(string first, string last, double rate, double hours)
{
  Person::setName(first, last);
  payRate = rate;
  hoursWorked = hours;
}

partTimeEmployee::partTimeEmployee(string first, string last, double rate, double hours)
    :Person(first, last)
  {
    payRate = rate;
    hoursWorked = hours;
  }
