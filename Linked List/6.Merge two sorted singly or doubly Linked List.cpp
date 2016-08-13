#include <bits/stdc++.h>
using namespace std;

struct List{
    struct List *next ;
    int data ;
}*head=NULL, *tail=NULL;

void L_insert(int data){
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

struct Node{
    int data;
    struct Node *next;
}*Front=NULL, *Back=NULL;

void N_insert(int data){
    Node *n= new  Node;
    n->data=data;
    n->next=NULL;

    if(Front==NULL){
        Front=Back=n;
    }
    else{
        Back->next=n;
        Back=n;
    }
}

void merge(){
    while(Front!=NULL){
        List *temp=new List;
        temp->data=Front->data;
        temp->next=NULL;
        Front=Front->next;

        for(List *n=head; n->next!=NULL; n=n->next){
            if(temp->data < head->data){
                temp->next=head;
                head=temp;
                break;
            }
            else if(temp->data > tail->data){
                tail->next=temp;
                tail=temp;
                break;
            }
            else if(temp->data < n->next->data){
                temp->next=n->next;
                n->next=temp;
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
    cout << "How many node you want to 1st list create: ";
    int r; cin >> r;
    cout << endl << "Enter " << r << " values: " << endl;
    for(int i=0; i<r; i++){
         int a;cin >> a;
            L_insert(a);
    }

    cout << "How many node you want to 2nd list create: ";
    int p; cin >> p;
    cout << endl << "Enter " << p << " values: " << endl;
    for(int i=0; i<r; i++){
         int a;cin >> a;
            N_insert(a);

    }

    merge();

    cout << "Now nodes have values: ";
    search();

    return 0;
}
