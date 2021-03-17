// Add a list of numbers to an array then heapify
// Initial Example:
// x | 2 | 7 | 4 | 3 | 15
// a[1] and a[2] are parents
// a[3], a[4] and a[5] are children

#include <iostream>
using namespace std;

int main()
{
  int n = 5;
  int a[] = {100, 2, 7, 4, 3, 15};
  for (int i = 1; i < n; i++)
    {
      cout << a[i] << endl;
    }
    

   return 0;
}
