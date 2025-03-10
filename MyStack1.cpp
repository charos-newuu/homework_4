#include "MyStack1.h"

void MyStack1::push(int value) {
    vec.push(value);
}

void MyStack1::pop() {
    vec.pop();
}

bool MyStack1::isEmpty() {
    return vec.isEmpty();
}

void MyStack1::printStack() {
    vec.print();
}
