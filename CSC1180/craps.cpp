#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice(); //roll two dice

int main()
{
  srand(time(0));
  enum class Status {CONTINUE, WON, LOST};
  int myPoint{0};
  int sumOfDice;
  Status gameStatus;
  sumOfDice = rollDice();
  // switch for initial roll
  switch(sumOfDice)
    {
    case 7:
    case 11:
      gameStatus = Status::WON;
      break;

    case 2:
    case 3:
    case 12:
      gameStatus = Status::LOST;
      break;

    default:
      gameStatus = Status::CONTINUE;
      myPoint = sumOfDice;
      cout << "Point is " << myPoint << endl;

    } // end first switch
  
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

  // display won or lost
  if(Status::WON == gameStatus)
    {
      cout << "Player won\n";
    }
  else
    {
      cout << "Player lost\n";
    }
  
  return 0;
}

int rollDice()
{
  int die1{1+rand()%6};
  int die2{1+rand()%6};
  cout << die1 << '\t' << die2 << endl;
  return die1 + die2;
}
