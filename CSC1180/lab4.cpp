// Pythagorean Triples to 500
#include <iostream>
using namespace std;

int main()
{
  int max = 500;
  for (int side1 = 1; side1 <max; side1++)
    {
        for (int side2 = 1; side2 <max; side2++)
	  {
	      for (int side3 = 1; side3 <max; side3++)
		{
		  if(side1*side1 + side2*side2 == side3*side3 && side1 <= side2)
		    {	    
		      cout << side1 << '\t' << side2 << '\t' << side3 << endl;
		    }
		}//end side 3 looop
	  }// end side 2 loop
    }// end side 1 loop

  return 0;
  
}
