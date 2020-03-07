#include <iostream>
#include <string>
#include "Boat.h"
#include "utilities.h"

using namespace std;

// Constructor(s)
Boat::Boat(int l, int m, int h, int b)
{

  length = l;
  masts = m;
  height = h;
  beam = b;
  xPos = 5;
  yPos = 5;
}  

  // Accessors
std::string Boat::getLocation() const
{
  return "(" + to_string(xPos) + ", " + to_string(yPos) + ")";
}

int Boat::getHeight() const
{
  return height;
}

  // Mutators
void Boat::fore()
{
  yPos++;
  if (yPos >=11)
    {
      yPos = 10;
    }
}     

void Boat::aft()
{
  yPos--;
  if (yPos < 1)
    {
      yPos = 1;
    }
}

void Boat::port()
{
  xPos--;
  if (xPos < 1)
    {
      xPos = 1;
    }
}       
void Boat::starbord() // xPos++
{
  xPos++;
  if (xPos >=11)
    {
      xPos = 10;
    }
}       

void Boat::displayLocation()
{
  ClearScreen();
  for(int i = 0; i < 10; i++)
    {
      for(int j = 0; j < 10; j++)
	{
	  if ((i == xPos -1) and (j == yPos-1))
	    {
	      cout << "-x-";
	    }
	  else
	    {
	      cout << "---";
	    }
	}
      cout << endl << endl;
    }
}
	 
