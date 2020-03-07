#include <iostream>
#include <string>

using namespace std;

int main()
{

  string s = "hello";

  for (size_t i{0}; i<s.size(); i++)
    {
      cout << s[i] << endl;
    }
  return 0;
}

