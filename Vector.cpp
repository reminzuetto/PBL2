#include "Vector.h"

template <typename T>
Vector<T>::Vector() : head(nullptr), size(0) {}

template <typename T>
void Vector<T>::push_back(const T& value) {
    Node<T>* newNode = new Node<T>(value);

    if (head == nullptr) {
        head = newNode;
    } 
    else {
        Node<T>* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    size++;
}

template <typename T>
void Vector<T>::print() {
    Node<T>* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

template <typename T>
Node<T>* Vector<T>::operator[](int index) {

    if (index > this->size - 1) return nullptr;

    Node<T>* temp = head;
    while (index > 0) {

        temp = temp->next;
        index --;

    }

    return temp;

}

template <typename T>
void Vector<T>::setData(Node<T>& value, int index) {

    Node<T>* temp = head;
    while (index > 0) {

        temp = temp->next;
        index --;

    }
    temp->data = value.data;

}

template <typename T>
T Vector<T>::getData(int index) {

    Node<T>* temp = head;
    while (index > 0) {

        temp = temp->next;
        index --;

    }

    return temp->data;

}