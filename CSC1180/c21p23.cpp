#include <iostream>
#include <string>
using namespace std;

int main()
{

  string a = "abcdefghijklmnop";
  
  int n;

  string b =" ";  // to hold black spaces

  cout << "a" << endl;

  for (int r = 1; r <= 5; r++)
    {
      n = 2*r+1;

      b.resize(n);
     

    }

  
  
  return 0;
}

