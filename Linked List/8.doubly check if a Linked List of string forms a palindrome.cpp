#include<bits/stdc++.h>
using namespace std;

struct List{
    char data;
    struct List *next;
    struct List *prev;
}*head=NULL, *tail=NULL;

void insert(char data){
    List *n=new List;
    n->data= data;
    n->next=NULL;
    n->prev=NULL;

    if(head==NULL){
        head=tail=n;
    }
    else{
        tail->next=n;
        n->prev=tail;
        tail=n;
        tail->next=NULL;;
    }
}

bool palindrome(){
    List *p=tail;
    for(List *n=head; n!=NULL && p!=NULL; n=n->next , p=p->prev)
            if(p->data!=n->data)return false;

    return true;
}


int main(){
    cout << "Give a single word check palindrome: " << endl;
    string line;
    getline(cin, line);

    for(int i=0; line[i]; i++)
        insert(line[i]);

    cout << "Is the word palindrome?" << endl;
    if(palindrome()) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
