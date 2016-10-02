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

    int c=0, d=0;
int reverse(List *n=head){
    if(n==NULL){d=c; c=0; return d;}
    else{ c++; reverse(n->next);}
}


int main(){
    cout << "How many node you want to create: ";
    int r; cin >> r;
    cout << endl << "Enter " << r << " values: " << endl;
    for(int i=0; i<r; i++){
         int a;cin >> a;
            insert(a);
    }


    cout << reverse() << endl;
    //cout << reverse() << endl;
    //cout << reverse() << endl;
    return 0;
}

