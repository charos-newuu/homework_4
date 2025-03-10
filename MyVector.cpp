#include "MyVector.h"
#include <iostream>

MyVector::MyVector() : size(0) {}

void MyVector::push(int value) {
    if (size < 100) arr[size++] = value;
}

void MyVector::pop() {
    if (size > 0) size--;
}

int MyVector::top() {
    return (size > 0) ? arr[size - 1] : -1;
}

bool MyVector::isEmpty() {
    return size == 0;
}

void MyVector::print() {
    for (int i = size - 1; i >= 0; i--)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
