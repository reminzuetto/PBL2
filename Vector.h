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
        void print();
        T operator[](int);
};