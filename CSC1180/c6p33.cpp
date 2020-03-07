#include <iostream>
#include <cstdlib>

using namespace std;

int flip();

int main()
{
  int f;
  int heads{0};
  int tails{0};
  
  srand(time(0));
  for(int i=0; i<100; i++)
    {
      f = flip();
      if (f == 1)
	{
	  // heads
	  cout << "Heads\n";
	  heads++;
	}
      else
	{
	  // tails
	  cout << "Tails\n";
	  tails++;
	}
    }

  cout << "Heads\t" << heads << endl;
  cout << "Tails\t" << tails << endl;  

  return 0;
}

int flip()
{
  return rand()%2;
}

