#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stddef.h>

#include <iostream>

namespace MSDS {

template <typename T>
class Node {
   public:
    T data;
    Node *next;
};

template <typename T>
class LinkedList {
   public:
    LinkedList();

    /// @brief Function to insert element at index idx
    /// @param ele Element to be inserted
    /// @param idx Index to insert element at
    void insert(T ele, int idx);

    /// @brief Function to insert element at the end
    /// @param ele Element to be inserted
    void insert(T ele);

    /// @brief Function to get element from index idx
    /// @param idx Index to fetch element from
    T get(int idx);

    /// @brief Function to update element at index idx
    /// @param ele Element to be updated
    /// @param idx Index to update element at
    void update(T ele, int idx);

    /// @brief Function to get index of element
    /// @param ele Element to fetch index of
    int index(T ele);

   private:
    Node<T> *uno;
};

}  // namespace MSDS

#endif  // LINKEDLIST_HPP
