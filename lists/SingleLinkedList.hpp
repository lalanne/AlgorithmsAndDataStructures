
#ifndef __SINGLE_LINKED_LIST__
#define __SINGLE_LINKED_LIST__

#include "Node.hpp"
#include <iostream>

class SingleLinkedList {
    public:
        SingleLinkedList(Node* head) : head(head) {
            head->next = NULL;
        }

        int size() const {
            Node* n = head;

            int count = 0;

            while(n) {
                ++count;
                n = n->next;
            }

            return count;
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

        void push_back(Node* node) {
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

        void push_front(Node* node){
            if(!head) return;

            node->next = head;
            head = node;

        }

        Node* pop() {
            if(!head) return NULL;
            if(!head->next) return head;

            Node* n = head;
            while(n) {
                if(!n->next->next) {
                    Node* tmp = n->next;
                    n->next = NULL;
                    return tmp;
                } 
                n = n->next;
            }

            return NULL;
        }

        Node* find(const int data) const {
            if(!head) return NULL;
            
            Node* n = head;
            while(n) {
                if(n->data == data) return n;
                else n = n->next;
            }

            return NULL;
        }

        void removeAll(const int data) {
            if(!head) return;
            
            Node* n = head;
            while(n) {
                if(n->next->data == data) {
                    n->next = n->next->next;
                }    
                n = n->next;
            }
        }

    private:
        Node* head;
};

#endif
