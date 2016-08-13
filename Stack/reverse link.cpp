#include <bits/stdc++.h>
using namespace std;

struct List
{
    struct List *next ;
    int value ;
}*head=NULL;

void Insert()
{
    for(int i=1;i<=5;i++)
    {
        int value ;
        cin >> value ;
        if(head==NULL)
        {
            head = new List();
            head->value = value ;
            head->next = NULL;
        }
        else
        {
            List *temp = new List();
            List *c = new List();
            temp = head ;
            while(temp->next!=NULL) temp=temp->next;
            c->value = value ;
            temp->next = c ;
            c->next = NULL ;
        }
    }

}
/*void Search()
{

    List *temp = new List();
    temp = head ;
    if(head==NULL)return;

    while( true )
    {
        cout << temp->value << ' ' ;
        if(temp->next==NULL) break ;
        temp = temp->next ;
    }
}
*/
int main(){
    Insert();
   cout<<value<<endl;
    }
