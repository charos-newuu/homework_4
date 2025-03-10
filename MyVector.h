#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
private:
    int arr[100];
    int size;

public:
    MyVector();
    void push(int value);
    void pop();
    int top();
    bool isEmpty();
    void print();
};

#endif
