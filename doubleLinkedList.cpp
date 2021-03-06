#include <iostream>
using namespace std;

struct nodeType
{
  int info;
  nodeType *next;
  nodeType *back;
};

class doublyLinkedList
{
public:
  void insert(const int& insertItem)
  {
    nodeType *current;
    nodeType *trailCurrent;
    nodeType *newNode;
    bool found;

    newNode = new nodeType;
    newNode->info = insertItem;
    newNode->next = NULL;
    newNode->back = NULL;

    if(first == NULL) // if list is empty, newNode is the only node
      {
	first = newNode;
	last = newNode;
	count++;
      }
    else
      {
	found = false;
	current = first;
	while (current != NULL && !found) // search the list
	  {
	    if(current->info >= insertItem)
	      {
		found = true;
	      }
	    else
	      {
		trailCurrent = current;
		current = current->next;
	      }
	  }
	if(current == first) // insert newNode before first
	  {
	    first->back = newNode;
	    newNode->next = first;
	    first = newNode;
	    count++;
	  }
	else
	  {
	    // insert new node between trailCurrent and current
	    if(current != NULL
	      {
		trailCurrent->next = newNode;
		newNode->back = trailCurrent;
		newNode->next = current;
		current->back = newNode;
	      }
	      else
		{
		  trailCurrent->next = newNode;
		  newNode->back = trailCurrent;
		  last = newNode;
		}
		  count++;
	      }
	  }
      }
  }
       		  
		    
  doublyLinkedList()
  {
    first = NULL;
    last = NULL;
    count = 0;
  }
  
protected:
  int count;
  nodeType *first;
  nodeType *last;

private:
  void copyList(const doublyLinkedList& otherList);
  
};

int main()
{
  doublyLinkedList l;
  return 0;
}
