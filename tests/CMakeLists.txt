add_executable(LinkedListTest linked_list_test.cpp)
target_link_libraries(LinkedListTest ${PROJECT_NAME}-LinkedList)

add_executable(SortingTest sorting_test.cpp)
target_link_libraries(SortingTest ${PROJECT_NAME}-Sorting ${PROJECT_NAME}-Util)
