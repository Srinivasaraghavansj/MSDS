#include <sorting.h>
#include <util.h>

#include <iostream>
#include <random>

#define ARRAY_LEN 10
#define ARRAY_MIN 0
#define ARRAY_MAX 100

int main() {
    std::cout << "Original List:";
    int* arr = MSDS::uniform_int_array(ARRAY_LEN, ARRAY_MIN, ARRAY_MAX);

    MSDS::print_array(arr, ARRAY_LEN);

    // Sort
    arr = MSDS::sort(arr, ARRAY_LEN, MSDS::SORT_ALGO::SELECTION);
    std::cout << "Selection sorted List:";
    MSDS::print_array(arr, ARRAY_LEN);

    return 0;
}