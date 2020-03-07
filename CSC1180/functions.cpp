#include <iostream>
using namespace std;

// function prototypes
void greeting();
int addAndHalve(int x, int y);
void swapNum(int &i, int &j);
inline int add(int x, int y)
{
  return x+y;
}

int main()
{
  greeting();
  int x = 4;
  int y = 6;
  int z = addAndHalve(x, y);
  cout << z << endl;

  cout << "initial values " << x << '\t' << y << endl;
  swapNum(x,y);
  cout << "after swap " << x << '\t' << y << endl;

  int j = add(x,y);
  cout << j << endl;
  
  return 0;
}


// function definitions
void greeting()
{
  cout << "Welcome to my Program\n\n";
}

int addAndHalve(int x, int y)
{
  int z = (x + y)/2;
  return z;
}

void swapNum(int &i, int &j)
{
  int temp = i;
  i = j;
  j = temp;
}
