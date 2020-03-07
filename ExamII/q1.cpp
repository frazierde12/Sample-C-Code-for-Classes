#include <iostream>
#include <string>
using namespace std;

int main()
{

  string first, last, name;

  cout << "Enter your first name: ";
  cin >> first;

  cout << "Enter your last name: ";
  cin >> last;

  name = first + " " + last;

  for (size_t i=0; i < name.length(); i++)
    {

      cout << name[i] << endl;
    }
  
  return 0;
}

