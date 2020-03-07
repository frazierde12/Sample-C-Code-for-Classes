// derived from the person class
#include "Person.h"

class partTimeEmployee: public Person
{
 public:
  void print() const;
  // Function to output the first name, last name and the wages.
  // Postcondition: Outputs stuff

  double calculatePay() const;

  void setNameRateHours(string first, string last, double rate, double hours);

  partTimeEmployee(string first="", string last="", double rate =0, double hours = 0);

 private:
  double payRate;
  double hoursWorked;
};
