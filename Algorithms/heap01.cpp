// Add a list of numbers to an array then heapify
// Initial Example:
// 100 | 5 | 10 | 15
// a[1] is the parent
// a[2], a[3] are children
// we know that this satisfies the essentially full
//    requirement because of the way we are
//    constructing it.
// we will need to prove parental dominance

#include <iostream>
using namespace std;

void swap(int &a, int &b) {     //swap the content of a and b              
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *ar, int size)
{
   for(int i = 1; i<size; i++)
      cout << ar[i] << " ";
   cout << endl;
}

void heapify(int *ar, int size )
{
  // just checking that I can get to the array
  display(ar, size);
  // now check that swap is working
  swap(ar[1], ar[2]);
  display(ar, size);

}

int main()
{
  int n = 4;
  int p = n/2;
  int a[] = {100, 5, 10, 15};
  heapify(a, n);
  
   return 0;
}
