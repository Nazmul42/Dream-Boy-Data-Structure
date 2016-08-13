#include<iostream>
using namespace std;

struct List{

int data;
struct List *prev;
struct List *next;


};
 List *Head=NULL;
void Addfirst(int value)
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
        nptr->next=tptr;
        tptr->prev=nptr;
        tptr=nptr;
        Head=tptr;
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
    Addfirst(3);
    Print();
     Addfirst(4);
    Print();



  return 0;
}
