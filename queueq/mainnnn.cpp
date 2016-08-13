#include <iostream>
#include "que.h"
using namespace std;

int main()
{
    Queue q;
    q.push(4);
    q.push(9);
    q.push(3);
    cout<<q.peek()<<endl;
    while(!q.isEmpty())
        cout<<q.pop()<<endl;
}

