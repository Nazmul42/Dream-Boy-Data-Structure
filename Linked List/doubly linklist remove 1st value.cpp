#include<iostream>
using namespace std;

struct List{

int data;
struct List *prev;
struct List *next;


};
 List *Head=NULL;
void Addlast(int value)
{
    List *tptr;
    List *nptr=new List();
    nptr->prev=NULL;
    nptr->data=value;
    nptr->next=NULL;

    if(Head==NULL)
    {
        Head=nptr;
        tptr=Head;
    }
    else{
        tptr->next=nptr;
        nptr->prev=tptr;
        tptr->next=nptr;
        //Head=tptr;
    }
}
void Removefirst()
{
    List *tptr=Head;
    if(Head==NULL){
        cout<<"list is empty"<<endl;

    }
    else{
        Head=tptr->next;
        tptr->prev=NULL;
        tptr=Head;
    }
}
void Print()
{
    cout<<"current List:";
    List *tptr=Head;
    while(tptr!=NULL){
        cout<<tptr->data<<"-> ";
          tptr=tptr->next;
}
    }

int main()
{
    Addlast(3);
    Print();
     Addlast(4);
    Print();
   Removefirst();
 Print();

  return 0;
}
