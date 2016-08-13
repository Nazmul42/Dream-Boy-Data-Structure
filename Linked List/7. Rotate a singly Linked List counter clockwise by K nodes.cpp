#include <bits/stdc++.h>
using namespace std;

struct List{
    struct List *next ;
    int data ;
}*head=NULL, *tail=NULL;

void insert(int data){
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


void rotate(){
    List *n=head;
    while(n->next!=tail){
        List *temp=n->next;
        n->next=n->next->next;
        temp->next=head;
        head=temp;
    }
    tail=n;
    n=n->next;
    tail->next=NULL;
    n->next=head;
    head=n;
}


void search(){
    for(List *n=head; n!=NULL; n=n->next)
        cout << n->data << ' ';
    cout << endl;
}

int main(){
    cout << "How many node you want to create: ";
    int r; cin >> r;
    cout << endl << "Enter " << r << " values: " << endl;
    for(int i=0; i<r; i++){
         int a;cin >> a;
            insert(a);
    }

    rotate();

    cout << "Now nodes have values: ";
    search();

    return 0;
}

