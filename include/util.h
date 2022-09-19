#ifndef UTIL_H
#define UTIL_H

#include <stddef.h>

#include <iostream>
#include <random>

namespace MSDS {

template <typename T>
/// @brief Prints an array of length `len`
/// @tparam T accepts int or float typically
/// @param arr input of array pointer to be printed
/// @param len length of array
void print_array(T* arr, int len) {
    std::cout << "\n[";
    for (int i = 0; i <= len; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << "]\n";
}

/// @brief Creates an array of length `len` containing random integers sampled
/// from a uniform distribution between `max` and `min`
/// @param len length of array
/// @param min minimum range of elements
/// @param max maximum range of elements
/// @return array with given length and range
int* uniform_int_array(int len, int min, int max) {
    int* arr;
	arr = (int*)malloc(sizeof(int)*len);
    std::random_device rd;
    std::uniform_int_distribution<int> ud(min, max);
    for (int i = 0; i <= len; i++) {
        arr[i] = ud(rd);
    }
    return arr;
}

};  // namespace MSDS

#endif  // UTIL_H