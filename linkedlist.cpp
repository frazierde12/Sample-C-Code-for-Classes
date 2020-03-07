#include <iostream>
using namespace std;

struct nodeType
{
  int info;
  nodeType *link;
};

int main()
{

  // ask the user for ints -999 end list

  nodeType *head = new nodeType;
  nodeType *current = new nodeType;
  current = head;

  int choice = 0;
  int sum = 0;
  int count = 0;

  while (choice != -999)
    {
      nodeType *temp = new nodeType;
      cout << "Enter a number ";
      cin >> choice;
      if (choice = -999)
	{
	  break;
	}
      count = count + 1;
      sum = sum + choice;
      current->link = temp;
      current = current->link;
    }

  

  




      

       

      
    }
  

  
  // cout the average
  return 0;
}

