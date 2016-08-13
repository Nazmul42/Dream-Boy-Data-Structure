#include <iostream>
using namespace std;

class Stack {
public:
    int array[100];
    int top;

    Stack() {
        top = 0;
    }

    void push(int data) {
        array[top] = data;
        top = top + 1;
    }

    int pop() {
        top = top - 1;
        return array[top];
    }

    int peek() {
        return array[top - 1];

    }

    bool isEmpty() {
        if (top == 0)
            return true;
        else return false;
    }
};

int main() {
    Stack s;
     int sum=0;
    s.push(4);
    s.push(5);
    cout << s.peek() << endl;
    s.push(3);
    while (!s.isEmpty())
        sum=s.pop()+s.pop();
        cout <<s.pop() << endl;


       /* for(int i=0; i<push(); i++){

        sum=sum+s.push();
        cout<< sum<<endl;
        }*/

    return 0;
}
