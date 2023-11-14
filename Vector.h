#include "Node.h"
#pragma once

template <typename T>
class Vector {

    private:
        Node<T>* head;
        int size;

    public:
        Vector();
        void push_back(const T&);
        // void print();
        Node<T>* operator[](int);
        // void setData(Node<T>&, int);
        // T getData(int);
};