#include <iostream>
#include <string>
#include "r.h"

using namespace std;

std::string r::getRoman()
{
  return rn;
}

int r::getDecimal()
{
  return n;
}
  
int r::c2(char d)
{
  if (d == 'I')
    {
      return 1;
    }
  else if(d == 'V')
    {
      return 5;
    }

}

void r::convert()
{
  // set n in this function
  // "MCXIV" should equal 1114

  // loop from the right char of the string backwards to 0

  int cur = 0;
  int acc = 0;
  int max = 0;
  
  for(int i=rn.length()-1;i>=0; i--)
    {
      cur = c2(rn[i]);
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

r::r(std::string s)
{
  rn = s;
  convert()

}

