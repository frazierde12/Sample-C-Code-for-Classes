#include <iostream>
#include <string>
#include "../Stacks/myStack.h"
#include "linkedQueueType.h"
using namespace std;

int main()
{
  stackType<char> s(100);
  linkedQueueType<char> q;

  string st;
  cout << "Enter a word: " << endl;
  cin >> st;
  
  for (size_t i = 0; i < st.length(); i++)
    {
      st[i] = tolower(st[i]);
      s.push(st.at(i));
      q.addQueue(st.at(i));
    }

  // get chars back out of stack
  string sWord = "";
  while(!s.isEmptyStack())
    {
      sWord = sWord + s.top();
      s.pop();
    }

  
  // get chars back out of queue
  string qWord = "";
  while(!q.isEmptyQueue())
    {
      qWord = qWord + q.front();
      q.deleteQueue();
    }

  if (sWord == qWord)
    {
      cout << st << " is a Palindrome.\n";
    }
  else
    {
      cout << st << " is NOT a Palindrome.\n";
    }    
  
  return 0;

}
