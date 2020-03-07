#include <iostream>
#include <array>

using namespace std;
const size_t NSIZE = 10;
void permutation(const array<int, NSIZE>& n);
int main()
{
  array<int, NSIZE>n {};
  for(size_t i = 0; i < NSIZE; i++)
    {
      cout << "Enter a number: ";
      cin >> n[i];
    }

  permutation(n);
  

  return 0;
}

void permutation(const array<int, NSIZE>& n)
{
  // do permutations
  for (size_t i = 0; i < NSIZE; i++)
    {
      for (size_t j = i+1; j < NSIZE; j++)
	{
	  cout << "(" <<n[i] << ", "  << n[j] << ")" << endl;
	  
	 }
    }
}
