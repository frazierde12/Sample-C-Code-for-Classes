#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  // seed random numbers to the time
  srand(time(0));

  // declare variables
  int x{0};
  int c{0};
  
  while (c < 10)
    {
      // select a randome number between 0 and 99
      x = rand()%100;
      cout << x << endl;
      if ( x > 0 and x < 50)
	{
	  cout << "Small\n";
	}
      c++;
    }
  return 0;
}
