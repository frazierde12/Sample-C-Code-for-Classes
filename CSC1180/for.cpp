#include <iostream>
using namespace std;

int main()
{

  for (int side1=0; side1<50; side1++)
    {
      for (int side2=0; side2<50; side2++)
	{
	  for (int side3=0; side3<50; side3++)
	    {
	      x = 6;               x      y     temp
	      y = 10;              6      10     6
	      temp = x;            x=y
				   10     10
				   y = temp
	      y = templ            10      6
	    }
	}
    }
  return 0;
}
