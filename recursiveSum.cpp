// sum of {1,2,3,4,5} = 5 + sum of {1,2,3,4}
#include <iostream>
using namespace std;

int  sum(int a[], int n)
{
  if (n <= 0)    // base case
    {
      return 0;
    }
  else
    {
      return (sum(a, n-1) + a[n-1]);  // recursive step
    }

}

int main()
{

  int a[] = {1, 1, 1, 1, 1};
  int n = 5;
  cout << sum(a, n) << endl;


  return 0;
}
