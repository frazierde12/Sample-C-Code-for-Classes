#include <iostream>
using namespace std;

struct nodeType
{
  string first;
  string last;
  nodeType *next;
};

class list
{

private:
  nodeType *head, *tail, *current;

public:
    list()
    {
      head=NULL;
      tail = NULL;
      current = NULL;
    }

  void createnode(string f, string l)
  {
    nodeType *temp=new nodeType;
    temp->first = f;
    temp->last = l;    
    temp->next= NULL;
    if(head==NULL)
      {
	head = temp;
	tail = temp;
	tail->next = head;
	current = tail;
	current->next = head;
	temp=NULL;
      }
    else
      {
	tail->next = temp;
	tail = temp;
	tail->next = head;
	current = tail;
	current->next = head;
       
      }
  }

  string assign()
  {
    current = current->next;
    return current->first + " " + current->last;

					  
  }
};

int menu()
{
  cout << "\n\n\n";
  int choice;
  cout << "1. Add a student\n";
  cout << "2. Exit\n";
  cin >> choice;
  return choice;
}



int main()
{

  list l;
  l.createnode("Bob", "Smith");
  l.createnode("Alice", "Jones");
  l.createnode("Hector", "Sanchez");
  l.createnode("Li", "Chua");  

  int c = menu();
  while(c == 1)
    {
      cout << "New advisor is " << l.assign() << endl;
      c = menu();
    }
  

  return 0;
}

