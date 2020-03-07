// print a string backwards

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s = "123456";
  string x;
  //  x.erase(0);  
  //cout << "Enter a word: ";
  //cin >> s;

    for (int i = s.size()-1; i>=0 ; i--)
      {
	x.append(1, s[i]);

      }
    cout << x << endl;

  return 0;
}

