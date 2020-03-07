#include <iostream>
#include "Date.h"

using namespace std;

void Date::setDate(int month, int day, int year)
{
  dMonth = month;
  dDay = day;
  dYear = year;
}

int Date::getDay() const
{
  return dDay;
}

int Date::getMonth() const
{
  return dMonth;
}

int Date::getYear() const
{
  return dYear;
}

void Date::printDate() const
{
  cout << dMonth << "-" << dDay << "-" << dYear;
}

Date::Date(int month = 1, int day = 1, int year = 1900)
{
  setDate(month, day, year);
}
