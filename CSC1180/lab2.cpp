#include <iostream>
using namespace std;

int main()
{
  int n;
  int tenThousands;
  int thousands;
  int hundreds;
  int tens;
  int ones;


  cout << "Enter a five digit integer: ";
  cin >> n;

  tenThousands = n/10000;
  n = n%10000;  
 

  thousands = n/1000;
  n = n%1000;

  hundreds = n/100;
  n = n%100;    

  tens = n/10;
  n = n%10;    

  
  cout << tenThousands << '\t' << thousands << '\t' << hundreds << '\t' << tens << '\t' << n  <<endl;  

  
  return 0;
}
