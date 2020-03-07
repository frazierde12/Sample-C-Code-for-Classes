#include <iostream>
using namespace std;

int main()
{

  int d4 = 8;
  int d3 = 9;
  int d2 = 0;
  int d1 = 1;

 
  d4 = ((d4 + 10) - 7)%10;
  d3 = ((d3 + 10) - 7)%10;
  d2 = ((d2 + 10) - 7)%10;
  d1 = ((d1 + 10) - 7)%10;  

  
  cout << d4 << '\t' << d3 << '\t' << d2 << '\t' << d1 << endl;
    
  return 0;
	  

}
