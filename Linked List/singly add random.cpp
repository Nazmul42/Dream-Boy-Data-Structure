#include<bits/stdc++.h>
using namespace std;

struct List{
    int data;
    struct List *next;
}*head=NULL;

void insert(int data){
    List *n = new List;
    n->data=data;
    if(head==NULL){
        n->next=NULL;
        head=n;
    }
    else{
        n->next=head;
        head=n;
    }

}

void add_random(int prev_data, int new_data){
    List *temp = new List;
    temp->data = new_data;

    for(List *n=head; n->next!=NULL; n=n->next){
        if(head->data == prev_data){
            temp->next=head;
            head=temp;
            break;
        }
        if(n->next->data == prev_data){
            temp->next=n->next;
            n->next=temp;
            break;
        }
    }
}

void search(){
    for(List *n=head; n!=NULL; n=n->next)
        cout << n->data << " ";

    cout << endl;
}

int main(){
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);

    search();

    add_random(9, 20);

    search();

return 0;
}
