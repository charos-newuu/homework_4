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

#include "MyStack2.h"
#include <iostream>

MyStack2::MyStack2() : head(nullptr) {}

MyStack2::~MyStack2() {
    while (head) pop();
}

void MyStack2::push(int value) {
    MyLinkedList* newNode = new MyLinkedList(value);
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

bool MyStack2::isEmpty() {
    return head == nullptr;
}

void MyStack2::printStack() {
    MyLinkedList* temp = head;
    while (temp) {
        std::cout << temp->value << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
