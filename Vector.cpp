#include "Vector.h"

template <typename T>
Vector<T>::Vector() {

    this->head = nullptr;
    this->size = 0;

}

template <typename T>
void Vector<T>::push_back(const T& value) {

    Node<T>* newNode = new Node<T>(value);

    if (head == nullptr) {

        head = newNode;

    } 

    else {
        Node<T>* temp = head;
        while (temp->getNext() != nullptr) {

            temp = temp->getNext();

        }

        temp->setNext(newNode);
        newNode->setPrev(temp);

    }

    size++;

}

template <typename T>
Node<T>& Vector<T>::operator[](int index) {
    Node<T>* temp = head;
    while (index > 0) {
        temp = temp->getNext();
        index--;
    }
    return *temp;
}

template <typename T>
int Vector<T>::getSize() {

    return this->size;

}

template <typename T>
void Vector<T>::setSize(const int& size) {

    this->size = size;

}

// template <typename T>
// void Vector<T>::resize(int newSize) {
//     if (newSize > size) {
//         for (int i = size; i < newSize; i++) {
//             push_back(T());
//         }
//     } else if (newSize < size) {
//         for (int i = size - 1; i >= newSize; i--) {
//             pop_back();
//         }
//     }
// }