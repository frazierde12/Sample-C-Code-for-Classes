#include <iostream>
using namespace std;

int main()
{

  int x{0};

  cout << "Enter a number between 1 and 100: ";
  cin >> x;

  switch(x)
    {
    case 1 ... 33:
      cout << "small\n";
      break;
      
    case 34 ... 66:
      cout << "medium\n";
      break;


    default:
      cout << "large\n";
      

     

      


    }// end switch

  
  return 0;
}

