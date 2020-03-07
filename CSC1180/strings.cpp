#include <iostream>

using namespace std;

int main()
{
  int x,y;
  
  //a  !(x<5) && !(y>=7)
  //   !((x<5) || (y>=7))

  // x true y true
  x=3;
  y=10;
  if( !(x<5) && !(y>=10))
    {
      cout << "True\n";
    }
  else
    {
      cout << "False\n";
    }

  if( !((x<5) ||(y>=10)))
    {
      cout << "True\n";
    }
  else
    {
      cout << "False\n";
    }

    // x false y false
  x=15;
  y=1;
  if( !(x<5) && !(y>=10))
    {
      cout << "True\n";
    }
  else
    {
      cout << "False\n";
    }

  if( !((x<5) ||(y>=10)))
    {
      cout << "True\n";
    }
  else
    {
      cout << "False\n";
    }
  

  

    
  return 0;
}

