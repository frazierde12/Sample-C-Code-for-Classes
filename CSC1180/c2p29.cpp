// c2p29 - print out a table of squares and cubes
// name

#include <iostream>
using namespace std;

int main()
{
  cout << "##################################\n";
  cout << "integer\t" << "square\t" << "cube\n";

  cout << 0 << '\t' << 0*0 << '\t' << 0*0*0 << endl;

  i = 1;
  cout << i << '\t' << i*i << '\t' << i*i*i << endl;

  i = 2;
  cout << i << '\t' << i*i << '\t' << i*i*i << endl;

  i = 3;
  cout << i << '\t' << i*i << '\t' << i*i*i << endl;

  i = 4; 
  cout << i << '\t' << i*i << '\t' << i*i*i << endl;

  i = 5;
  cout << i << '\t' << i*i << '\t' << i*i*i << endl;  

  cout << "##################################\n";

  return 0;
}
