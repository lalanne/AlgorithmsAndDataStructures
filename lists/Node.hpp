
#ifndef __NODE__
#define __NODE__

#include <iostream>

class Node {
    public:
        Node(const int data) : m_data(data), next(NULL) {}

        void show() const { std::cout << m_data << " "; }

    public:
        Node* next;

    private:
        const int m_data;


};

#endif
