#include <iostream>
using namespace std;

// function prototypes
int cube(int x);
double cube(double  x);


int main()
{

  cout << cube(3) << endl;
  cout << cube(4.5) << endl;
  
  return 0;
}

int cube(int x)
{
  return x * x * x;
}

double cube(double  x)
{
  return x * x * x;
}

