#include <iostream>
#include "utilities.h"

using namespace std;

int printMenu();

int main()
{
  int choice = 0;

  while (choice != 3)
    {
      choice = printMenu();      

      switch(choice)
	{
	case 1:
	  cout << "Hello!\n";
	  cin.ignore();
	  cin.get();
	  break;

	case 2:
	  cout << "Goodbye!\n";
	  cin.ignore();
	  cin.get();	  
	  break;

	case 3:
	  //nothing
	  break;
	  
	default:
	  cout << "Must choose 1, 2 or 3\n";
	  cin.ignore();
	  cin.get();	  
	}
    }
  
  return 0;
}

int printMenu()
{
  int choice;
  ClearScreen();
  cout << "1. Say Hello" << endl;
  cout << "2. Say Goodbye" << endl;
  cout << "3. Exit\n";
  cin >> choice;
  return choice;
}
