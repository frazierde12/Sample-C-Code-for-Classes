#include <iostream>
using namespace std;

int seqSearch(int *a, int key, int size)
{
  for (int i = 0; i < size; i++)
    {
      if (a[i] == key)
	{
	  cout << "Sequential search does " << i+1 << " comparisons." <<endl;
	  return i;
	}
    }
  cout << "Sequential search does " << size << " comparisons." <<endl;
  return -1;
}

int main()
{

  // create array to search
  int key, pos;
  int maxSize = 10;
  int a[maxSize] = {12,32,53,46,44,25,75,78,2,6};

  for (int i = 0; i < maxSize; i++)
    {
      cout << a[i] << " ";
    }
  cout << endl;
  
  cout << "Enter a integer to search for: ";
  cin >> key;
  pos = seqSearch(a, key, maxSize);
  cout << pos << endl;
  
  return 0;
}

