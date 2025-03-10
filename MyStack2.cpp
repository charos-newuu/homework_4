#include "MyStack2.h"
#include <iostream>

MyStack2::MyStack2() : head(nullptr) {}

void MyStack2::push(int val) {
    MyLinkedList* newNode = new MyLinkedList(val);
    newNode->next = head;
    head = newNode;
}

void MyStack2::pop() {
    if (head) {
        MyLinkedList* temp = head;
        head = head->next;
        delete temp;
    }
}

int MyStack2::top() {
    if (head) {
        return head->val;
    }
    return -1;
}

bool MyStack2::isEmpty() {
    return head == nullptr;
}

void MyStack2::printStack() {
    MyLinkedList* current = head;
    while (current) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}