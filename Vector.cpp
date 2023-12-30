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

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v) {

    Node<T>* temp = v.head;
    if (temp == nullptr) {

        this->size = v.size;
        return *this;

    }
    while (this->head != nullptr) {

        Node<T>* temp2 = this->head;
        this->head = this->head->getNext();
        //delete temp2;

    }
    while (temp != nullptr) {

        T temp1 = temp->getData();
        this->push_back(temp1);
        temp = temp->getNext();

    }

    return *this;

}

template <typename T>
void Vector<T>::erase(const int& index) {
    if (index < 0 || index >= size) {
        return;
    }

    Node<T>* temp = head;

    for (int i = 0; i < index; i++) {
        temp = temp->getNext();
    }

    Node<T>* prevNode = temp->getPrev();
    Node<T>* nextNode = temp->getNext();

    if (prevNode != nullptr) {
        prevNode->setNext(nextNode);
    } 
    else {
        head = nextNode;
    }

    if (nextNode != nullptr) {
        nextNode->setPrev(prevNode);
    }

    //delete temp;

    size--;
}
// template <typename T>
// Vector<T>& Vector<T>::operator=(const Vector<T>& v) {
//     if (this != &v) { // Self-assignment check
//         // Clear current vector
//         while (head != nullptr) {
//             Node<T>* temp = head;
//             head = head->getNext();
//             delete temp;
//         }

//         // Copy elements from v to this
//         Node<T>* temp = v.head;
//         while (temp != nullptr) {
//             push_back(temp->getData());
//             temp = temp->getNext();
//         }

//         size = v.size;
//     }

//     return *this;
// }

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