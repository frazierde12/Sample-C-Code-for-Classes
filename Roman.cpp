#include <iostream>
#include <string>
#include "Roman.h"

using namespace std;

// Accessors
string Roman::getRoman() const
{
  return rn;
}

int Roman::getDecimal() const
{
  return n;
}

int Roman::convertDigit(char d)
{
  // I V X L C D M
  if (d ==  'I')
    {
      return 1;
    }
  else if (d == 'V')
    {
      return 5;
    }
  else if (d == 'X')
    {
      return 10;
    }
  else if (d == 'L')
    {
      return 50;
    }
  else if (d == 'C')
    {
      return 100;
    }
  else if (d == 'D')
    {
      return 500;
    }
  else
    {
     return 1000;
    }
}

  // Mutators
void Roman::convert()
{
  int cur = 0;
  int acc = 0;
  int max = 0;

  for (int i = rn.length() - 1; i >=0; i--)
    {
      cur = convertDigit(rn[i]);
      if (cur >= max)
	{
	  max = cur;
	  acc = acc + cur;
	}
      else
	{
	  acc = acc - cur;
	}
    }
  n = acc;
} 


// Constructor(s)
Roman::Roman(std::string s)
{
  rn = s;
  convert();
}

