#include <bits/stdc++.h>
using namespace std;

struct List{
    struct List *next ;
    int data ;
}*head=NULL, *tail=NULL;

void Insert(int data){
    List *n= new List;
    n->data=data;
    n->next=NULL;

    if(head==NULL){
        head=tail=n;
    }
    else{
        tail->next=n;
        tail=n;
    }
}

void reverse(List *n=head){
    if(n==NULL)return;
    else reverse(n->next);

    cout << n->data << " ";
}

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}*Front=NULL, *Back=NULL;

void N_insert(int data){
    Node *n= new  Node;
    n->data=data;
    n->next=NULL;
    n->prev=NULL;

    if(Front==NULL){
        Front=Back=n;
    }
    else{
        Back->next=n;
        n->prev=Back;
        Back=n;
    }
}

void N_reverse(Node *n=Front){
    if(n==NULL)return;
    else N_reverse(n->next);

    cout << n->data << " ";
}


int main(){
    cout << "How many node you want to create: ";
    int r;
    cin >> r;
    cout << endl << "Enter " << r << " values: " << endl;
    for(int i=0; i<r; i++){
         int a;
         cin >> a;
        Insert(a);
        N_insert(a);

    }

    cout << "Singly linked list values Reverse print: " ;
    reverse();
    cout << endl << "Doubly linked list values Reverse print: " ;
    N_reverse();

    return 0;
}
