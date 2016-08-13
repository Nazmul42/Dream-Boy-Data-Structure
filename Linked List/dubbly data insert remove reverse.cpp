#include<bits/stdc++.h>
using namespace std;

struct List{
    int data;
    struct List *next;
    struct List *prev;
}*head=NULL, *tail=NULL;

void insert(int data){
    List *n= new List;
    n->data=data;
    n->next=NULL;
    n->prev=NULL;

    if(head==NULL){
        head=n;
    }
    else{
        if(tail==NULL){
            tail=n;
            tail->prev=head;
            head->next=tail;
        }
        else{
            n->prev=tail;
            tail->next=n;
            tail=n;
        }
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

void sort(){
    for(List *pre=head; pre->next!=NULL; pre=pre->next)
        for(List *cur=pre->next; cur!=NULL; cur=cur->next)
            if(pre->data > cur->data) //reverse sort condition: if(pre->data < cur->data)
                swap(pre->data, cur->data);
}

void remove_same_data(int data){
    for(List *n=head; n!=NULL; n=n->next){
            List *t=n;

        if(n->data==data){
            if(n==head){
            head=head->next;
            head->prev=NULL;
            }
            else if(n==tail){
            tail=tail->prev;
            tail->next=NULL;
            }
            else{
            List *first=n->prev;
            List *last=n->next;
            first->next=last;
            last->prev=first;
            }
            //delete t;
    }
    }
}


void reverse(List *n=head){
    if(n==NULL)return;
    else reverse(n->next);

    cout << n->data << " ";
}

void search(){
    for(List *n=head; n!=NULL; n=n->next)
        cout << n->data << ' ';
    cout << endl;
}

void reverse_search(){
    for(List *n=tail; n!=NULL; n=n->prev)
        cout << n->data << ' ';
    cout << endl;
}

int main(){

/*  cout << "how many numbers you want to insert? " << endl;
    int n; cin >> n;
    cout << "insert yours numbers: " << endl;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        insert(a);
    }*/

    insert(6);
    insert(5);
    insert(9);
    insert(8);
    insert(7);
    cout << "search data: ";
    search();

    cout << "After sort data -> -> -> -> -> -> -> -> ->" << endl;
    sort();
    cout << "search data: ";
    search();

    cout << "reverse search data: ";
    reverse_search();

    cout << "reverse by recursive data: ";reverse();cout << endl;

    add_random(7 , 10);//add 10 prev 7
    cout << "search data: ";
    search();

    add_random(9 , 10);//add 10 prev 9
    cout << "search data: ";
    search();

    add_random(5 , 10);//add 10 prev 5
    cout << "search data: ";
    search();

    cout << "After remove all 10 numbers -> -> -> -> -> -> -> -> ->" << endl;
    remove_same_data(10);//remove all 10 numbers
    cout << "search data: ";
    search();


return 0;
}
