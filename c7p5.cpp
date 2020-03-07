#include <iostream>
#include <string>
#include "myStack.h"
using namespace std;

int main()
{
  stackType<char> p(100);
  string e;
  int err;

  cout << "\n\t\tEnter an expression: ";
  cin >> e;

  for (size_t i(0); i < e.length(); i++)
    {
      if (e.at(i) == '(')
	{
	  p.push(i);
	}
      else if (e.at(i) == ')')
	{
	  if (p.isEmptyStack())
	    {
	      err = 1;
	      break;
	    }
	  else
	    {
	      p.pop();
	    }
	}
    }

  if (err != 1)
    {
      if (p.isEmptyStack())
	{
	  cout << "\n\t\tYour expression has matching grouping symbols";
	}
      else
	{
	  cout << "\n\t\tYour expression does not have matching grouping symbols. There is an extra (";
	}
    }
  else
    {
      cout << "\n\t\tYour expression does not have matching grouping symbols. There is an extra )";
    }

  cout << endl << endl;

  return 0;

}
