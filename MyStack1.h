#ifndef MYSTACK1_H
#define MYSTACK1_H

#include "MyVector.h"

class MyStack1 {
private:
    MyVector data;

public:
    void push(int val);
    void pop();
    int top();
    bool isEmpty();
    void printStack();
};

#endif