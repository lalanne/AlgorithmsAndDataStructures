
#ifndef __NODE__
#define __NODE__

#include <iostream>

class Node {
    public:
        Node(const int data) : data(data), next(NULL) {}

        void show() const { std::cout << data << " "; }

    public:
        Node* next;
        const int data;
};

#endif
