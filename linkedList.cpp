#include <iostream>
using namespace std;

struct nodeType
{
  int data;
  nodeType *next;
};

class list
{

private:
    nodeType *head, *tail;

public:
    list()
    {
      head=NULL;
      tail=NULL;
    }

  void createnode(int value)
  {
    nodeType *temp=new nodeType;
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
      {
	head=temp;
	tail=temp;
	temp=NULL;
      }
    else
      {
	tail->next=temp;
	tail=temp;
      }
  }

  void display()
  {
    nodeType *temp=new nodeType;
    temp=head;
    while(temp!=NULL)
      {
	cout<<temp->data<<"\t";
	temp=temp->next;
      }
    cout << endl;
  }

};




int main()
{

  return 0;
}

