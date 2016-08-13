#include<bits/stdc++.h>
using namespace std;

struct List{
    int data;
    struct List *next;
    struct List *prev;
}*head=NULL;

void insert(int data){
    List *n=new List;
    n->data= data;

    if(head==NULL){
        n->next=NULL;
        n->prev=NULL;
        head=n;
    }
    else{
        n->next=head;
        head->prev=n;
        n->prev=NULL;
        head=n;
    }
}

void add_random(int select_data,int insert_data){
    List *temp= new List;
    temp->data=insert_data;
    temp->next=NULL;
    temp->prev=NULL;

    for(List *n=head; n!=NULL; n=n->next){
        if(head->data == select_data){
            temp->next=head;
            head->prev=temp;
            head=temp;
            break;
        }
        else if(n->data == select_data){
            List *t=n->prev;
            temp->next=n;
            temp->prev=t;
            n->prev=temp;
            t->next=temp;
            break;
        }
    }
}

void search(){
    for(List *n=head; n!=NULL; n=n->next)
        cout << n->data << ' ';
    cout << endl;
}

int main(){

    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);

    search();

    add_random(7 , 20);

    search();

return 0;
}
