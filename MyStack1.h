#ifndef MYSTACK1_H
#define MYSTACK1_H

#include "MyVector.h"

class MyStack1 {
private:
    MyVector vec;

public:
    void push(int value);
    void pop();
    bool isEmpty();
    void printStack();
};

#endif
