#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "utilities.h"

using namespace std;

void moveHare(int* hPtr);
void moveTortoise(int* tPtr);

int main()
{
  srand(time(0));
  int pHare{1};
  int pTortoise{1};

  int* hPtr = &pHare;
  int* tPtr = &pTortoise;
  ClearScreen();
  while (pHare < 50 and pTortoise < 50)
    {
      moveHare(hPtr);
      moveTortoise(tPtr);
      for (int i = 0; i <=50; i=i+10)
	{
	  cout << "         |";
	}
      cout << endl;
	  
      for (int i = 0; i <=70 ;i++)
	{

	  if (pTortoise == i)
	    {
	      cout << "T";
	    }
	  else if (pHare == i)
	    {
	      cout << "H";
	    }
	  else
	    {
	      cout << " ";
	    }
	}
      cout << endl;
      sleep(1);
      ClearScreen();
    }
  
  if (pTortoise > pHare)
    {
      cout << "Tortoise is the winner!!!\n";
    }
  else
    {
      cout << "Hare is the winner!!!\n";
    }
  
  return 0;
    }
void moveTortoise(int* tPtr)
{
// t - 50 +3  20 -6  30 +1
  int r = 1 + rand()%100;
  if (r <= 50)
    {
      *tPtr = *tPtr + 3;
    }
  else if (r >50 and r <= 70)
    {
      *tPtr = *tPtr -6;
      if ( *tPtr < 1)
	{
	  *tPtr = 1;
	}
    }
  else
    {
      *tPtr = *tPtr + 1;
    }
}

void moveHare(int* hPtr)
{
// h - 20 +0  20 +9  10 -12 30+1 20 -2
  int r = 1 + rand()%100;
  if (r > 20 && r<=40)
    {
      *hPtr = *hPtr + 9;
    }
  else if (r >40 && r <= 50)
    {
      *hPtr = *hPtr -12;
      
    }
  else if (r > 50 and r <=80)
    {
      *hPtr = *hPtr + 1;
    }
  else
    {
      *hPtr = *hPtr -2;
    }

  if (*hPtr < 1)
    {
      *hPtr = 1;
    }
}
