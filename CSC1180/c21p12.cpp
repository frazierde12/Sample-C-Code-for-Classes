// reverse a string by append
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s;
  string x;
  int xCount{0};
  
  cout << "Enter a word: ";
  cin >> s;

  x.resize(s.size());
  

  for (int i = s.size()-1; i >=0; i--)
    {
      x[xCount]=s[i];
      xCount++;
    }
  cout << x << endl;
  return 0;
}

