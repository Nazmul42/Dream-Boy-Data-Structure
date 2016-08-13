#include "que.h"

Queue::Queue()
{
    head=0;
    tail=0;
    numElements=0;
}
void Queue::push(int data)
{
    array[tail]=data;
    tail++;
    tail=tail%maxn;
    numElements++;
}
int Queue::pop()
{
    int data=array[head];
    head++;
    head=head%maxn;
    numElements--;
    return data;
}
int Queue::peek()
{
    return array[head];
}
bool Queue::isEmpty()
{
    if(numElements==0)
        return true;
    else return false;

}

