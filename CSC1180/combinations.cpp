#include <iostream>
#include <array>

using namespace std;
const size_t NSIZE{10};

int main()
{
  array<int, NSIZE> n{1,2,3,4,5,6,7,8,9,10};
  int count = 0;
  for (size_t i =0; i <NSIZE; i++)
    {
      for (size_t j = i+1; j <NSIZE; j++)
	{
	  cout << "(" << n[i] << "," << n[j] << endl;
	  count++;
	}
    }
  cout << count << endl;
      

  return 0;
}

