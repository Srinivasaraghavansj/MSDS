#ifndef SORTING_H
#define SORTING_H
#include <stdlib.h>

#include <iostream>

#include "util.h"

namespace MSDS {

enum SORT_ALGO { SELECTION, BUBBLE, INSERTION, MERGE, QUICK, HEAP };

template <typename T>
T* selection_sort(T* arr, int len) {
    // create a copy of array
    T* arr_ = (T*)malloc(sizeof(T) * len);
    for (int i = 0; i < len; i++) {
        arr_[i] = arr[i];
    }

    for (int i = 0; i < len - 1; i++) {
        T lowest = arr_[i];
        int lowest_idx = i;

        for (int j = i + 1; j < len; j++) {
            if (arr_[j] < lowest) {
                lowest = arr_[j];
                lowest_idx = j;
            }
        }

        T swapper;
        if (arr_[i] > lowest) {
            swapper = arr_[lowest_idx];
            arr_[lowest_idx] = arr_[i];
            arr_[i] = swapper;
        }
    }

    return arr_;
}

template <typename T>
T* sort(T* arr, int len, SORT_ALGO algo) {
    switch (algo) {
        case SORT_ALGO::SELECTION:
            return selection_sort(arr, len);
        default:
            T* newT;
            return newT;
    }
}

};      // namespace MSDS
#endif  // SORTING_H