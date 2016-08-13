#include<bits/stdc++.h>

using namespace std;

struct List{
    struct List *next;
    int value;

}*head=NULL;

void Insert()
{
    for(int i=1; i<=5; i++)
    {
        int value;
        cin>>value;
        if(head==NULL){
            head=new List();
            head->value=value;
            head->next=NULL;
        }
        else{
            List *temp=new List();
            List *c=new List();
            temp=head;
            while(temp->next!=NULL)temp=temp->next;
            c->value=value;
            temp->next=c;
            c->next=NULL;
        }
    }
}
void Delete(int n)
{
    List *cur=new List();
    List *prev=new List();
    prev=cur=head;
    while(true){
            if(cur->value==n){
        if(cur==head){
            head=head->next;
            cur=head;
            prev=head;

        }
        else{
            prev->next=cur->next;
            cur->next=NULL;
            cur=prev->next;
        }
            }
        else{
            if(cur->next==NULL) break;
                prev=cur;
                cur=cur->next;
            }
            if(cur==NULL)break;
        }
    }
    void Reverse(List *n=head)
    {
        if(n==NULL)return;
        else Reverse(n->next);
        cout<<n->value<<endl;

    }
int main()
{
    cout << "Insert: ";
    Insert();
   cout << "Delete: " ;
   int v;
   cin>>v;
    Delete(v);


    cout << "Reverse: ";
    Reverse();
    cout << endl;



    return 0 ;
}
