#include <bits/stdc++.h>
#pragma once

using namespace std;

template <typename T>
class Node {
    
    public:
        T data;
        Node* next;
        Node() : next(nullptr), data(0) {}
        Node(const T& data) : next(nullptr), data(data) {}
        Node(const Node<T>* node) : next(node->next), data(node->data) {}
        
};