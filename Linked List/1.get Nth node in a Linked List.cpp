#include <bits/stdc++.h>
using namespace std;

struct List
{
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



void search(int data){
    int i=0;
    for(List *n=head; n!=NULL; n=n->next){
            i++;
    if(i==data){
        cout << n->data << endl;
        break;
    }
    }
}

int main(){
    cout << "How many node you want to create: ";
    int r;
    cin >> r;
    cout << endl << "Enter " << r << " values: " << endl;
    for(int i=0; i<r; i++){
         int a;
         cin >> a;
        insert(a);
    }

    cout << "which node you want to search, give numerical value: ";
    int n;
    cin >> n;
    cout << endl << "The " << n << "th node value is: ";
    search(n);

    return 0;
}
