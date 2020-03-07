#include <iostream>
using namespace std;

int main()
{

  for(int c = 0; c<50; c++)
  {
    if(c == 30)
      {
	continue;
      }
    cout <<c << endl;
  }
  cout << "The end\n";  
  return 0;
}

