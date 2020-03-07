#include <iostream>
#include <string>
using namespace std;

int main()
{
  int x = 19;
  string semester = "Fall ";

  semester.append(to_string(x));
  cout << semester << endl;
  
  string s = "1234";
  int y = stof(s);
  cout << y + 5 << endl;
  
  return 0;
}

