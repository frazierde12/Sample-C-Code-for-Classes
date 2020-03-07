#include <iostream>
using namespace std;

void passByPtr(int a[10], int* p);
int main()
{

  // problem 1
  int a = 5;
  int b = 10;
  int* aPrt = &a;
  int* bPrt = &b;

  cout << a << '\t' << aPrt << endl;
  cout << b << '\t' << bPrt << endl;  

  // problem 2
  int ar[10];
  for (size_t i =0; i < 10; i++)
    {
      cout << "Enter a number: ";
      cin >>ar[i];
    }
  int m = 0;
  int* mPtr = &m;
  passByPtr(ar, mPtr);
  cout << "Max value is " << m << endl;  

  // problem 3

  char* ex1;
  char** ex2;
  char *ex3[10];
  char ex4[30];
  const int* ex6;
  const int x = 5;
  int const* ex7 = &x;
  
  
  return 0;
}

void passByPtr(int a[10], int* p)
{
  *p = a[0];
    for (size_t i =0; i < 10; i++)
      {
	if (a[i] > *p)
	  {
	    *p = a[i];
	  }
      }
  

}
