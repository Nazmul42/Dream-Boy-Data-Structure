#include <bits/stdc++.h>
using namespace std;

 int Stack[1000], t;
void push(int a)
{
    Stack[t]=a;
    t=t+1;
}
void pop()
{
    if(t==0) puts("Stack Underflow");
    else {
            printf("Delete...%d\n", Stack[t-1]);
             t=t-1;
    }
}
void top(){
    if(t==0) puts("Stack is empty");
    else printf("%d\n", Stack[t-1]);
}
int main()
{
    push(44);
    push(84);
    push(14);
    top();
    pop();
    pop();
    push(3);
    top();

}
