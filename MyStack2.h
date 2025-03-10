#ifndef MYSTACK2_H
#define MYSTACK2_H

#include "MyLinkedList.h"

class MyStack2 {
private:
    MyLinkedList* head;

public:
    MyStack2();
    ~MyStack2();
    void push(int value);
    void pop();
    bool isEmpty();
    void printStack();
};

#endif
