#include <iostream>
using namespace std;

int seqSearch(int *a, int key, int size)
{
  for (int i = 0; i < size; i++)
    {
      if ( a[i] == key)
	{
	  cout << "Sequential does " << i+1 <<  " comparisons" << endl;
	  return i;
	}
    }
  return -1;
}

int binarySearch(int *a, int key, int size)
{

}

int main()
{

  // create array to search
  int key, pos1, pos2;
  int maxSize = 10;
  int a[maxSize] = {1, 2, 3,4, 5, 6, 7, 8, 9 ,10};

    for (int i = 0; i < maxSize; i++)
      {
	cout << a[i] << " ";
      }
    cout << endl;
  
  cout << "Enter a integer to search for: ";
  cin >> key;
  pos1 = seqSearch(a, key, maxSize);
  cout << pos1 << endl;

  pos2 = binarySearch(a, key, maxSize);
  cout << pos2 << endl;  
  
  return 0;
}

