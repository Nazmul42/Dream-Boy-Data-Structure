#include<bits/stdc++.h>
using namespace std;
 struct List{

    struct List *next;
    int value;

 }*top=NULL;
 void push(int data){

    List *p=new List();
    p->value=data;
    if(top==NULL){
        top=p;
        top->next=p;

        }
        else{
            p->next=top->next;
            top->next=p;
            top=p;
            }
    }
    void pop(){

       if(top==NULL) cout<<"Stack is Underflow";
       else{
       List *t=top->next;
       cout<<"Popped: "<<top->next->value<<endl;
       if(top==t)
        top=NULL;
       else{
        top->next=t->next;
        delete t;
       }
       }

    }
    void front()
    {
        if(top==NULL) cout<< "Stack is empty";
        else cout<<"Top: "<<top->next->value<<endl;

    }

    int main()
{
    push(30);
    push(70);
    push(-7);
    front();
    pop();
    front();

    pop();
    front();
    return 0 ;
}
