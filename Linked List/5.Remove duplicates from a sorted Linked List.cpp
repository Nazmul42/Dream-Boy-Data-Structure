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

void duplicates_remove(){
    cout << "removing all duplicates-> -> -> -> -> -> -> -> -> -> -> " << endl;
    for(List *n=head; n->next!=NULL; n=n->next){

        if(n->data==n->next->data){
                while(n->data==n->next->data && n->next!=tail)
                    n->next=n->next->next;
                if(n->next==tail && n->data==tail->data){
                    tail=n;
                    tail->next=NULL;
                    break;
                }
        }
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

    duplicates_remove();

    cout << "Now values: ";
    search();

    return 0;
}


