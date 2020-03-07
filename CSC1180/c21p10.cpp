// concatenation two ways

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string first;
  string last;
  string f1;
  string f2;

  cout << "Enter the first name: ";
  cin >> first;

  cout << "Enter the last name: ";
  cin >> last;
  
  
  f1 = first + " " + last; 
  cout << f1 << endl;

  f2.append(first);
  f2.append(" ");
  f2.append(last);
  cout << f2 << endl;
  return 0;
}

