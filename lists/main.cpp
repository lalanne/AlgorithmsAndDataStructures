

#include "SingleLinkedList.hpp"

#include <iostream>

using namespace std;

int main() {

    cout << "Hello World" << endl;

    Node* n1 = new Node(3);

    SingleLinkedList* list = new SingleLinkedList(n1);
    list->show();

    Node* n2 = new Node(10);
    list->push(n2);
    list->show();

    Node* n3 = new Node(5);
    list->push(n3);
    list->show();

    Node* n4 = new Node(6);
    list->push(n4);
    list->show();


    return 0;
}
