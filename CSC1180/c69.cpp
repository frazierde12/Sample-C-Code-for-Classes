#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// function prototypes

unsigned int rollDice();

int main()
{
  enum class Status {CONTINUE, WON, LOST};
  srand(time(0));
  
  unsigned int myPoint{0};
  Status gameStatus;
  unsigned int sumOfDice{rollDice()};

  switch(sumOfDice)
    {
    case 7: // win on first roll

    case 11: // win on first roll
      gameStatus = Status::WON;
      break;
      
    case 2: // lose
    case 3: // lose
    case 12: // lose
      gameStatus = Status::LOST;
      break;
    default:
      gameStatus = Status::CONTINUE;
      myPoint = sumOfDice;
      break;
    } // end first roll switch

  // while game is not complete
  while(Status::CONTINUE == gameStatus)
    {
      sumOfDice = rollDice();
      if (sumOfDice == myPoint)
	{
	  gameStatus = Status::WON;
	}
      else
	{
	  if (sumOfDice == 7)
	    {
	      gameStatus = Status::LOST;
	    }
	}
    }

  if (Status::WON == gameStatus)
    {
      cout << "Won" << endl;
    }
  else
    {
      cout << "Lost" << endl;
    }
  return 0;
}

unsigned int rollDice()
{
  int die1{1 + rand()%6};
  int die2{1 + rand()%6};
  return die1+die2;
}

