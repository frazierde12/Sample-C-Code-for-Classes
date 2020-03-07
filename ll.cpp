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
  nodeType* getHeadPointer()
  {
    return head;
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

  int search(int K)
  {
    int result = 0;
    nodeType *p=new nodeType;
    p=head;
    while(p!=NULL)
      {
	result = result+1;
	if (p->data == K)
	  {
	    return result;
	  }
	p=p->next;
      }
    return -1;
  }

  int largest()
  {
    int largest;
    nodeType *p;
    p = head;
    largest = p->data;
    while(p != NULL)
      {
	if (p->data > largest)
	  {
	    largest = p->data;
	  }
	p = p->next;	
      }
    return largest;
  }
  
  int length()
  {
    int result = 0;
    nodeType *p=new nodeType;
    p=head;
    while(p!=NULL)
      {
	result = result+1;
	p=p->next;
      }
    return result;
  }    


  
  void insert_start(int value)
  {
    nodeType *temp=new nodeType;
    temp->data=value;
    temp->next=head;
    head=temp;
  }

  void insert_position(int pos, int value)
  {
    nodeType *pre=new nodeType;
    nodeType *cur=new nodeType;
    nodeType *temp=new nodeType;
    cur=head;
    for(int i=1;i<pos;i++)
      {
	pre=cur;
	cur=cur->next;
      }
    temp->data=value;
    pre->next=temp;
    temp->next=cur;
  }

  void delete_first()
  {
    nodeType *temp=new nodeType;
    temp=head;
    head=head->next;
    delete temp;
  } 

  void delete_last()
  {
    nodeType *current=new nodeType;
    nodeType *previous=new nodeType;
    current=head;
    while(current->next!=NULL)
      {
	previous=current;
	current=current->next;
      }
    tail=previous;
    previous->next=NULL;
    delete current;
  }

  void delete_position(int pos)
  {
    nodeType *current=new nodeType;
    nodeType *previous=new nodeType;
    current=head;
    for(int i=1;i<pos;i++)
      {
	previous=current;
	current=current->next;
      }
    previous->next=current->next;
  }

  int count(nodeType *current)
  {
    if (current == NULL)
      {
	return 0;
      }
    else
      {
	return 1 + count(current->next);
      }

  }

  
  void reversePrint(nodeType *current)
  {
    if (current != NULL)
      {
	reversePrint(current->next);
	cout << current->data << '\t';
      }
  }

  int reverseSum(nodeType *current)
  {
    if (current != NULL)
      {
	return current->data + reverseSum(current->next);
      }
    return 0;
  }  
  

};




int main()
{

  list l;
  l.createnode(9);
  l.createnode(12);
  l.createnode(26);
  l.createnode(44);
  cout << l.search(4) << endl;
  cout << l.search(44)<< endl;
  cout << l.search(12)<< endl;  
  l.display();
  l.reversePrint(l.getHeadPointer());
  cout << endl;
  cout << l.reverseSum(l.getHeadPointer()) << endl;  
  cout << "count is " << l.count(l.getHeadPointer()) << endl;  
  cout << "largest is " << l.largest() << endl; 

  return 0;
}

