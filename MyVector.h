#ifndef MYVECTOR_H
#define MYVECTOR_H

class MyVector {
private:
    int arr[100];
    int size;

public:
    MyVector();
    void add(int val);
    int get(int index);
    void removeLast();
    int getSize();
};

#endif