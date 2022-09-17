#include "linked_list.h"

using namespace MSDS;

template <class T>
LinkedList<T>::LinkedList() {
    uno = nullptr;
}

template <class T>
void LinkedList<T>::insert(T ele, int idx) {
    if (uno == nullptr) {
        if (idx == 0) {
            uno = new Node<T>();
            uno->data = ele;
            return;
        }
    }

    Node<T> *currentNode = uno;
    for (int i = 0; i < idx; i++) {
        if (currentNode == nullptr) {
            throw "Index out of bounds";
        }
        currentNode = currentNode->next;
    }
    // When exiting the loop, currentNode has the Node at index idx-1
    Node<T> *newNode = new Node<T>();
    newNode->data = ele;

    // Set pointer of new node to the element that was originally at index idx
    newNode->next = currentNode->next;

    // Point current node to the new node
    currentNode->next = newNode;
}

template <class T>
void LinkedList<T>::insert(T ele) {
    if (uno == nullptr) {
        uno = new Node<T>();
        uno->data = ele;
        return;
    }

    Node<T> *currentNode = uno;
    // Node<T>* lastNode;

    while (currentNode->next != nullptr) {
        currentNode = currentNode->next;
    }

    // When exiting the loop, currentNode has the last Node
    Node<T> *newNode = new Node<T>();
    newNode->data = ele;

    // Set pointer of new node to nullptr
    newNode->next = nullptr;

    // Point current node to the new node
    currentNode->next = newNode;
}

template <class T>
T LinkedList<T>::get(int idx) {
    if (uno == nullptr) {
        throw "Linked list is empty";
    }

    Node<T> *currentNode = uno;
    for (int i = 0; i < idx; i++) {
        if (currentNode == nullptr) {
            throw "Index out of bounds";
        }
        currentNode = currentNode->next;
    }

    return currentNode->data;
}

template <class T>
void LinkedList<T>::update(T ele, int idx) {
    if (uno == nullptr) {
        throw "Linked list is empty";
    }

    Node<T> *currentNode = uno;
    for (int i = 0; i < idx; i++) {
        if (currentNode == nullptr) {
            throw "Index out of bounds";
        }
        currentNode = currentNode->next;
    }
    currentNode->data = ele;
}

template <class T>
int LinkedList<T>::index(T ele) {
    Node<T> *currentNode = uno;
    int count = 0;
    while (currentNode->next != nullptr) {
        if (currentNode->data == ele) {
            return count;
        }
        currentNode = currentNode->next;
        count++;
    }
    return -1;
}

template class LinkedList<int>;
template class LinkedList<float>;

template class Node<int>;
template class Node<float>;
