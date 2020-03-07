#include <iostream>
#include <string>

using namespace std;

int main()
{

  string s;
  bool sFound = false;
  int numberOfs{0};
  
  cout << "Enter a word: ";
  cin >> s;

  for (size_t i = 0; i<s.size(); i++)
    {
      //      cout << s[i] << endl;
      if (s[i] == 's')
	{
	  sFound = true;
	  numberOfs++;
	}
    }

  if (sFound)
    {
      cout << "s found\n";
    }
  else
    {
      cout << "s not found\n";
    }
  
  return 0;
}

