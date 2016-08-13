#include<iostream>
using namespace std;

class Stack{
public:

    int array=[100];
    int top;

    Stack(){
    top=0;
    }
    void push(int data)
    {
        array[top]=data;
        top++;
    }
    int pop()
    {
        top--;
        return array[top];
    }
    int peek()
    {
        return array[top-1];
    }
    bool isEmpty()
    {
        return top==0;
    }
};
int main()
{
    Stack s;
    s.push(3);
    s.push(9);
    s.push(5);
    s.pop();
    cout<<s.peek()<<endl;
    while(!s.isEmpty())
        cout<<s.pop()<<endl;
}
