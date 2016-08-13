#include<iostream>
#include "stack.h"
using namespace std;

int main()
{
    Stack s;
    s.push(3);
    s.push(13);
    s.push(31);
    cout<<s.peek()<<endl;
    while(!s.isEmpty())
        cout<<s.pop()<<endl;

}
