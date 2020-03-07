#include <iostream>
using namespace std;

int main()
{
  // declare variables
  double total{0.0};
  int prodID{1};
  int q{0};

  while (prodID != 0)
    {
      // ask the user for input
      cout << "Enter product id followed by quantity. 0 to end: ";
      cin >> prodID;
      cin >> q;

      switch(prodID)
	{
	case 0:
	  break;
	  
	case 1:
	  total = total + (2.98 * q);
	  break;

	case 2:
	  total = total + (4.50 * q);
	  break;

	case 3:
	  total = total + (9.98 * q);
	  break;

	case 4:
	  total = total + (4.49 * q);
	  break;

	case 5:
	  total = total + (6.87 * q);
	  break;	  

	default:
	  cout << "Error\n\n";

	} // end switch
    } // end while
  cout << "\nTotal is " << total << endl;
  return 0;
}

