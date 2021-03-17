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
  // right now we only have one parent to worry about
  // we will need to adjust this eventually
  // test if root is bigger than left and right child
  int p = 1;
  
  cout << "Original Array" << endl;
  display(ar, size);

  cout << "Check Left Child" << endl;
  if (ar[2*p] > ar[p])
    {
      cout << "\tLeft Child Violation" << endl;
      swap(ar[p], ar[2*p]);
    }
  cout << "\n\nCheck Right Child" << endl;
  if (ar[2*p+1] > ar[p])
    {
      cout << "\tRight Child Violation" << endl;
      swap(ar[p], ar[2*p+1]);
    }
  cout << "\n\nThis should be a heap with 15, 5 and 10" << endl;
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
