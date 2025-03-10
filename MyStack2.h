#ifndef MYSTACK2_H
#define MYSTACK2_H

#include "MyLinkedList.h"

class MyStack2 {
private:
    MyLinkedList* head;

public:
    MyStack2();
    void push(int val);
    void pop();
    int top();
    bool isEmpty();
    void printStack();
};

#endif