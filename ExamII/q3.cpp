#include <iostream>
using namespace std;

// function prototypes
template <typename> T;
T cube(T x);



int main()
{

  cout << cube(3) << endl;
  cout << cube(4.5) << endl;
  
  return 0;
}

template <typename> T;
T cube(T x)
{
  return x * x * x;
}



