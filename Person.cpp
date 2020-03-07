#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

void Person::print() const
{
  cout << firstName << " " << lastName; 
}

  void Person::setName(string first, string last)
{
  firstName = first;
  lastName = last;
}

string Person::getFirstName() const
{
  return firstName;
}

string Person::getLastName() const
{
  return lastName;
}


Person::Person()
{
  firstName = "";
  lastName = "";
}

Person::Person(string first, string last)
{
  firstName = first;
  lastName = last;
}

