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

void last_to_front(int data){
    int i=0;
    while(i!=data){
    i++;
    List *temp=new List;
    temp->data=tail->data;
    temp->next=head;
    head=temp;

    List *n=head;
    while(n->next!=tail)n=n->next;
    tail=n;
    tail->next=NULL;
    }
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

    cout << "which node you want to move last to front, give numerical value: ";
    int n;
    cin >> n;
    last_to_front(n);

    cout << "Now values: ";
    search();

    return 0;
}

