#include<bits/stdc++.h>
using namespace std;


class Stack{
private:
    const static int MAXN =150;
    char A[MAXN];
    int top;

public:
    Stack(){
        top=0;
    }

    void push(char data){
        A[top] = data;
        top++;
    }

    char pop(){
       return A[--top];
    }

    char peek(){
        return A[top-1];
    }

    bool isEmpty(){
        return top==0;
    }
};




int main(){

    Stack s, t;



    char ch;

    string line;
    getc(stdin);

      cout << "Enter your infix expression:" << endl;

            getline(cin, line);

            cout << "prefix: ";
        for(int i= line.length()-1 ; i>=0; i--){
            if(line[i] == ' ')continue;
            else if(line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/' || line[i] == ')'){
                if(s.isEmpty()) s.push(line[i]);
                else if(line[i] == ')') s.push(line[i]);
                else if(line[i] == '*' || line[i] == '/') s.push(line[i]);
                else if(line[i] == '+' || line[i] == '-'){
                    while(s.peek() == '*' || s.peek() == '/' || s.peek() == '+' || s.peek() == '-'){
                        t.push(s.peek());
                        s.pop();
                    }
                    s.push(line[i]);
                }
            }
            else if(line[i] == '('){
                        while(s.peek() != ')'){
                            t.push(s.peek());
                            s.pop();
                        }
                        s.pop();
            }
            else t.push(line[i]);

        }

        while(!s.isEmpty()){
            t.push(s.peek());
            s.pop();
        }

        while(!t.isEmpty()){
            ch = t.peek();
            if(ch=='(' || ch==')')continue;
            cout << ch << " ";
            t.pop();
        }
        cout << endl;
    }

