#include <iostream>
using namespace std;

string reverseDigits(int n, int f)
{
  int d, r;
  if(n == 0)
    {
      return " ";
    }
  else
    {
      d = n/f;
      r = n%f;
      return reverseDigits(r, f/10) + to_string(d);
      
    }	

}


int main()
{
  cout << stoi(reverseDigits(1234, 1000));
  cout << endl;

  return 0;
}

