#include <iostream>
#include <string>
#include "Boat.cpp"

using namespace std;

void displayMenu(Boat b);
int main()
{
  int l, m, h, b;
  int x = 1;
  char choice = 'Y';
  ClearScreen();
  cout << "Welcome to Cap'n Dave's Boat Simulator\n\n";
  cout << "\tTell us about your boat\n";
  
  cout << "What is the Length (in whole feet):";
  cin >> l;
  cout << "How many masts:";
  cin >> m;
  cout << "What is the Height (in whole feet):";
  cin >> h;
  cout << "What is the Beam (in whole feet):";  
  cin >> b;
  
  Boat b1(l, m, h, b);
  while (choice == 'Y')
    {
      displayMenu(b1);
      cout << "Enter Y to contuie or N to exit " << endl;
      cin >> choice;
      switch(choice)
	{
	case 'W':
	case 'w':
	  b1.fore();
	  break;
	  
	case 'S':
	case 's':
	  b1.aft();
	  break;
	  
	case 'A':
	case 'a':
	  b1.port();
	  break;
	  
	case 'D':
	case 'd':
	  b1.starbord();
	  break;            
	}
      displayMenu(b1);
    }
      return 0;
}
void displayMenu(Boat b)
{
  b.displayLocation();
  cout << endl;
  cout << "           W\n";
  cout << "      A         D\n";
  cout << "           S\n";
    
}

