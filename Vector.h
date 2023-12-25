#pragma once
#include "Node.cpp"
template <typename T>
class Vector {

    private:
        Node<T>* head;
        int size;

    public:
        Vector();
        void push_back(const T&);
        Node<T>& operator[](int);
        void setSize(const int&);
        int getSize();
        Vector<T>& operator=(Vector<T>);
        // void resize(int);
};