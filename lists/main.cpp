

#include "SingleLinkedList.hpp"

#include <iostream>

using namespace std;

int main() {

    cout << "Hello World" << endl;

    Node* n1 = new Node(3);

    SingleLinkedList* list = new SingleLinkedList(n1);
    list->show();

    Node* n2 = new Node(10);
    list->push_back(n2);
    list->show();

    Node* n3 = new Node(5);
    list->push_back(n3);
    list->show();

    Node* n4 = new Node(6);
    list->push_back(n4);
    list->show();

    Node* n5 = new Node(6);
    list->push_back(n5);
    list->show();

    Node* n6 = new Node(-9);
    list->push_back(n6);
    list->show();

    Node* res = list->pop();
    list->show();
    res->show();

    res = list->pop();
    list->show();
    res->show();

    res = list->pop();
    list->show();
    res->show();

    res = list->find(10);
    res->show();

    list->push_front(n4);
    list->show();

    list->push_front(n6);
    list->show();

    list->removeAll(3);
    list->show();

    return 0;
}


