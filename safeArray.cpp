#include <iostream>
#include "safeArray.h"

using namespace std;

  // Constructor(s)
safeArray::safeArray(int l)
  {
    length = l;
    a = new int[l];
    for (int c = 0; c < l; c++)
      {
	a[c] = 0;
      }
	  
  }
  
int safeArray::getIndex(int i)
{
  if (i > length-1 or i < 0)
    {
      return -1;
    }
  else
    {
      return a[i];      
    }
  
}

int safeArray::setIndex(int i, int v)
{
  if (i > length-1 or i < 0)
    {
      return -1;
    }
  else
    {
      a[i] = v;
      return 0;      
    }
  
}

int safeArray::getLength()
{
  return length;
}
