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
    else{
        List *temp=new List();
        List *c=new List();
        temp=top;
        while(temp->next!=NULL)temp=temp->next;
        c->value=data;
        temp->next=c;
        c->next=NULL;
    }
}
void pop(){

    if (top==NULL) cout<<"Stack is Underflow";
    else{
        cout<<"Popped: "<<top->value<<endl;
        List *t=top;
        top=top->next;
        delete t;
    }

}
void top_print()
{
    if(top==NULL) cout<<"Stack empty";
    else cout<<"Top: "<<top->value<<endl;
}
int main()
{
    push(30);
    push(70);
    push(-7);
    top_print();
    pop();
    top_print();
    push(11);
    top_print();
    pop();
    top_print();
    return 0 ;
}
