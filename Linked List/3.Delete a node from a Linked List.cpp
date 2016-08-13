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


void Delete(int data){
    int i=0;
    List *r=head;
    for(List *n=head; n!=NULL; n=n->next){
            i++;
    if(i==data){
        cout << "Delete......." << n->data << endl;
        if(i==1){
            head=n->next;
            break;
        }
        else{
            r->next=n->next;
            break;
        }
    }
    r=n;
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

    cout << "which node you want to delete, give numerical value: ";
    int n;
    cin >> n;
    Delete(n);

    cout << "Now nodes have values: ";
    search();

    return 0;
}
