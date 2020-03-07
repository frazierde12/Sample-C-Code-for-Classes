#include <iostream>
using namespace std;

struct nodeType
{
  char data;
  nodeType *prev;
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

  void createnode(char value)
  {
    nodeType *temp=new nodeType;
    temp->data=value;
    temp->next=NULL;
    temp->prev=NULL;
    
    if(head==NULL)
      {
	head=temp;
	tail=temp;
	temp=NULL;
      }
    else
      {
	tail->next=temp;
	temp->prev= tail;
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

  bool isPalindrome()
  {
    nodeType *p,*t;
    p = head;
    t = tail;
    string forward = "";
    string backward = "";    
    while(p!=NULL)
      {
	forward = forward + p->data;
	p = p->next;
      }

    while(t!=NULL)
      {
	backward = backward + t->data;
	t = t->prev;
      }
    if(forward == backward)
      {
	return true;
      }
    else
      {
	return false;
      }
  } 

};




int main()
{

  list l;
  string s;
  cout << "Enter a word: ";
  cin >> s;
  for(size_t i = 0; i<s.size(); i++)
    {
      l.createnode(s[i]);
    }

  l.display();
  if (l.isPalindrome())
    {
      cout << "Palindrome" <<endl;
    }
  else
    { 
      cout << "Not Palindrome" << endl;
    }
  return 0;
}

