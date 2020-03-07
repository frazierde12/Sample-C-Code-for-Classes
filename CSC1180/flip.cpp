#include <iostream>
#include <cstdlib>
using namespace std;

int flip();

int main()
{
  srand(time(0));

  int f = flip();

  cout << f << endl;
  return 0;
}

int flip()
{
  return rand()%2;
}

