#include <iostream>
using namespace std;

struct List
{
    int data;
    List* next;
};
  List * Head=NULL;
void creat(int value)
{
    List* np=new List;
    np->data=value;
    np->next=NULL;
    if(Head==NULL)
    {
        Head=np;
    }
    else
    {
        List* temp=Head;
        temp->next=np;
        np=temp;
    }
}
void Reverse()
{
    List *p = new List();
    List *q = new List();
    if(p->next=NULL)
    {
        Head=p;
        return ;
    }
   // Reverse (p->next);
    q = p->next;
    q->next=p;
   p->next=NULL;
}
void printf()
{
    cout<<"current Linked list: ";
    List* temp=Head;
    while(temp!=NULL)
    {
        cout<<temp-> data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    creat(5);
     printf();
    creat(4);
     printf();
     Reverse();

}
