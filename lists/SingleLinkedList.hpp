
#ifndef __SINGLE_LINKED_LIST__
#define __SINGLE_LINKED_LIST__

#include "Node.hpp"
#include <iostream>

class SingleLinkedList {
    public:
        SingleLinkedList(Node* head) : head(head) {
            head->next = NULL;
        }

        void show() const {
            std::cout << "showing list : ";

            if(!head) return;

            Node* n = head;
            while(n) {
                n->show();
                n = n->next;
            }

            std::cout << std::endl;
        }

        void push(Node* node) {
            if(!head) return;

            Node* n = head;
            while(n) {
                if(n->next) n = n->next;
                else {
                    n->next = node;
                    node->next = NULL;
                    n = n->next;
                }
            }
        }

    private:
        Node* head;
};

#endif
