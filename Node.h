#pragma once
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Node {
    
    private:
        T data;
        Node<T>* next;
        Node<T>* prev;

    public:
        Node();
        Node(const T&);
        Node(const Node<T>*);
        T getData();
        void setNext(Node<T>*);
        void setPrev(Node<T>*);
        Node<T>* getNext();
        Node<T>* getPrev();
        bool operator==(const Node<T>&);
        Node<T>& operator=(const Node<T>&);
};