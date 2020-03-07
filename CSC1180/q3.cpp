#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1;
  bool sFound = false;
  
  cout << "Enter a string: ";
  cin >> s1;

  "monkeys"

  for (size_t i=0; i<s1.size();i++)
    {
      // cout << s1[i] << endl;
      if (s1[i] == 's')
	{
	  sFound = true;
	  break;
	}
    }
      if (sFound == true)
	{
	  cout << "s Found" << endl;
	}
      else
	{
	  cout << "s Not Found" << endl;
	}
      while(true)
	{

	}
    
  return 0;
}

