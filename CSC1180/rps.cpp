// Rock, paper, and scissors
// 0 - rock  1 - paper  2 - scissors

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  // declare variables
  int computer{0};
  int player{0};
  int r{1};
  
  // seed random number generatory
  srand(time(0));

  while(r !=0)
    {
      // computer picks
      computer = rand()%3;

      // player picks
      cout << "\nEnter 0 for rock, 1 for paper, or 2 for scissors: ";
      cin >> player;

      while (player <0 || player >2)
	{
	  cout << "Must choose a 0, 1 or 2\n";
	  cout << "\nEnter 0 for rock, 1 for paper, or 2 for scissors: ";
	  cin >> player;
	}
      // see who wins

      // check for ties
      if (computer == player)
	{
	  cout << "It's a Tie\n\n";
	}

      // computer picks a 0
      if (computer == 0)
	{
	  if (player == 1)
	    {
	      cout << "Player wins!\n\n";
	    }
	  if (player == 2)
	    {
	      cout << "Computer wins!\n\n";
	    } 

	} // computer picks 1 end if

      // computer picks a 1
      if (computer == 1)
	{
	  if (player == 2)
	    {
	      cout << "Player wins!\n\n";
	    }
	  if (player == 0)
	    {
	      cout << "Computer wins!\n\n";
	    } 

	} // computer picks 1 end if      

  
      // computer picks a 2
      if (computer == 2)
	{
	  if (player == 0)
	    {
	      cout << "Player wins!\n\n";
	    }
	  if (player == 1)
	    {
	      cout << "Computer wins!\n\n";
	    } 

	} // computer picks 2 end if

      cout << "Enter 1 to play again, 0 to stop: ";
      cin >> r;
    } // end while

  return 0;
}
