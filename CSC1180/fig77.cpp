#include <iostream>
#include <array>

using namespace std;

int main()
{
  const size_t NSIZE = 11;
  array<unsigned int, NSIZE> n{0,0,0,0,0,0,1,2,4,2,1};

  // for each element of array n, outbut a bar of the chart
  for (size_t i = 0; i<NSIZE; i++)
    {
      if (0 == i)
	{
	  cout << "  0-9: ";
	}
      else if (10 == i)
	{
	  cout << "  100: ";
	}
      else
	{
	  cout << i*10 << "-" << (i *10) + 9 << ": ";
	}
      // print out the asterisks
      for (unsigned int stars = 0; stars < n[i]; stars++)
	{
	  cout << '*';
	}
      cout << endl;
    }
  return 0;
}

