// c2p23 - desc
// name
// any issues

#include <iostream>
using namespace std;

int main()
{
  // initialize variables a-e and largest and smallest
  int a{0};
  int b{0};
  int c{0};
  int d{0};
  int e{0};
  int largest{0};
  int smallest{0};

  // ask user for ints
  cout << "Enter an Integer: ";
  cin >> a;

  cout << "Enter an Integer: ";
  cin >> b;

  cout << "Enter an Integer: ";
  cin >> c;

  cout << "Enter an Integer: ";
  cin >> d;

  cout << "Enter an Integer: ";
  cin >> e;  

  
  // set largest and smallest to a
  largest = a;
  smallest = a;
  
  // check largest against other ints
  if (b > largest)
    {
      largest = b;
    }

  if (c > largest)
    {
      largest = c;
    }

  if (d > largest)
    {
      largest = d;
    }

  if (e > largest)
    {
      largest = e;
    }  
  
  // check smallest against other ints
  if (b < smallest)
    {
      smallest = b;
    }

  if (c < smallest)
    {
      smallest = c;
    }

  if (d < smallest)
    {
      smallest = d;
    }

  if (e < smallest)
    {
      smallest = e;
    }
  // print out the results
  cout << "Largest is " << largest << endl;
  cout << "Smallest is " << smallest << endl;    
  return 0;
}
