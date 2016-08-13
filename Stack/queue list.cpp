#include <bits/stdc++.h>
using namespace std;

struct List{

  struct List *next;
  int value;
}*top=NULL;
void push(int data)
{
    if(top==NULL)
    {
        top=new List();
        top->value=data;
        top->next=NULL;
    }
    else
    {
        List *temp=new List();
        List *c=new List();
        temp=top;
        while(temp->next!=NULL)temp=temp->next;
        c->value=data;
        temp->next=c;
        c->next=NULL;
    }
}
void pop()
{
    if(top==NULL) cout<<"Stack is Underflow";
    else {
        cout<<"Popped:"<<top->value<<endl;
        List *t=new List();
        top=top->next;
        delete t;
    }
}
void front()
{
    if(top==NULL)cout<<"Stack is empty:\n";
    else cout<<"Top: "<<top->value<<endl;
}
int main()
{
    push(8);
    push(-8);
    push(98);
    front();
    pop();
    front();
    pop();
    front();
    return 0;
}
