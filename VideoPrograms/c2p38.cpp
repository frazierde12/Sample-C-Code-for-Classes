// digits of a 5 digit integer
// name


#include <iostream>
using namespace std;

int main()
{
  int n{0};
  int d5{0};
  int d4{0};
  int d3{0};
  int d2{0};
  int d1{0};
    
  // ask user for n
  cout << "Enter a five digit Integer: ";
  cin >> n;

  d5 = n/10000;
  n = n%10000;

  d4 = n/1000;
  n = n%1000;

  d3 = n/100;
  n = n%100;

  d2 = n/10;
  n = n%10;

  d1 = n;
  cout << d5 << '\t' << d4 << '\t' << d3 << '\t' << d2 << '\t' << d1 << endl;
  

  return 0;
}

