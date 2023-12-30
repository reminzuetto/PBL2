#pragma once
#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Node {
    
    private:
        T data;
        Node* next;
        Node* prev;

    public:
        Node();
        Node(const T&);
        Node(const Node*);
        void setData(const T&);
        T getData();
        void setNext(Node*);
        void setPrev(Node*);
        Node* getNext();
        Node* getPrev();
        bool operator==(const Node&);
        Node& operator=(const Node&);
};