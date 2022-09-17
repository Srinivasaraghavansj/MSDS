#include <iostream>
#include <linked_list.h>
#include <random>

int main() {
    std::random_device rd;
    std::uniform_int_distribution<int> ud(0, 100);

    MSDS::LinkedList<int> ll = MSDS::LinkedList<int>();
    for (int i = 0; i <= 10; i++) {
        ll.insert(ud(rd));
    }
    std::cout << "Original List:\n";
    for (int i = 0; i <= 10; i++) {
        std::cout << ll.get(i) << "\n";
    }

    int el;
    std::cout << "Enter the element to be searched: ";
    std::cin >> el;

    int idx_tr = ll.index(el);

    ll.update(-99, idx_tr);
    std::cout << "\nUpdated List:\n";
    for (int i = 0; i <= 10; i++) {
        std::cout << ll.get(i) << "\n";
    }

    return 0;
}
