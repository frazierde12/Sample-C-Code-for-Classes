#include <string>
using namespace std;

class Person
{

public:

  void print() const;

  void setName(string first, string last);

  string getFirstName() const;

  string getLastName() const;

  Person();

  Person(string first, string last);

  
private:
  // member data
  string firstName;
  string lastName;
  
};
