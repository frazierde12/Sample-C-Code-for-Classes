#include <iostream>
using namespace std;

int main()
{

  int c{0};
  int n{0};
  
  int d4;
  int d3;
  int d2;
  int d1;
  int temp;


  cout << "Enter the number: ";
  cin >> n;

  d4 = n/1000;
  n = n%1000;

  d3 = n/100;
  n = n%100;

  d2 = n/10;
  n = n%10;

  d1 = n;

  // d1 flip with d3  d2 flip d4
  temp = d1;
  d1 = d3;
  d3 = temp;

  temp = d2;
  d2 = d4;
  d4 = temp;
  
  
  // d4
  if (d4/7 == 1)
    {
      d4 = d4 -7;
    }
  else
    {
      d4 = (d4 + 10) - 7;
    }
  //d3
  if (d3/7 == 1)
    {
      d3 = d3 -7;
    }
  else
    {
      d3 = (d3 + 10) - 7;
    }

  //d2
  if (d2/7 == 1)
    {
      d2 = d2 -7;
    }
  else
    {
      d2 = (d2 + 10) - 7;
    }

  //d1
  if (d1/7 == 1)
    {
      d1 = d1 -7;
    }
  else
    {
      d1 = (d1 + 10) - 7;
    }
  
  cout << d4 << '\t' << d3 << '\t' << d2 << '\t' << d1 << endl;
    
  return 0;
	  

}
