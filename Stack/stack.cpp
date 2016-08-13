#include "stack.h"

Stack::Stack()
{
    top=0;
}
void Stack::push(int data)
{
    array[top]=data;
    top++;
}
int Stack::pop()
{
    top--;
    return array[top];
}
int Stack::peek()
{
    return array[top-1];
}
bool Stack::isEmpty()
{
    return top==0;
}
