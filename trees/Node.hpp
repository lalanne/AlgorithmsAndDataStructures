
#ifndef __NODE__
#define __NODE__

#include <iostream>

struct Node {
    Node(const int data) : data(data), left(NULL), right(NULL) {}

    void show() const { std::cout << data << " "; }

    Node* left;
    Node* right;
    const int data;
};

#endif
