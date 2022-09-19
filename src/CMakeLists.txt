add_library(${PROJECT_NAME}-LinkedList linked_list.cpp)
target_include_directories(${PROJECT_NAME}-LinkedList PUBLIC ../include)

add_library(${PROJECT_NAME}-Util INTERFACE)
target_include_directories(${PROJECT_NAME}-Util INTERFACE ../include)

add_library(${PROJECT_NAME}-Sorting INTERFACE)
target_include_directories(${PROJECT_NAME}-Sorting INTERFACE ../include)