#include "Node.h"

template <typename T>
Node<T>::Node() 
    : prev(nullptr), next(nullptr), data(0) 
{}

template <typename T>
Node<T>::Node(const T& data) 
    : prev(nullptr), next(nullptr), data(data) 
{}

template <typename T>
Node<T>::Node(const Node<T>* node) 
    : prev(node->prev), next(node->next), data(node->data) 
{}

template <typename T>
bool Node<T>::operator==(const Node<T>& node) {

    return (this->data == node.data) && (this->next == node.next) && (this->prev == node.prev);

}

template <typename T>
T Node<T>::getData() {

    return this->data;

}

template <typename T>
void Node<T>::setNext(Node<T>* node) {

    this->next = node;

}

template <typename T>
Node<T>* Node<T>::getNext() {

    return this->next;

}

template <typename T>
void Node<T>::setPrev(Node<T>* node) {

    this->prev = node;
    
}

template <typename T>
Node<T>* Node<T>::getPrev() {

    return this->prev;

}

template <typename T>
Node<T>& Node<T>::operator=(const Node<T>& node) {

    this->data = node.data;
    this->next = node.next;
    this->prev = node.prev;
    return *this;
    
}