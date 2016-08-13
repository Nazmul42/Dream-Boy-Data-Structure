class Queue{

public:
    static const int maxn=100;
    int array[maxn];
    int head;
    int tail;
    int numElements;

    Queue();

        void push(int data);
        int pop();
        int peek();
        bool isEmpty();






};
