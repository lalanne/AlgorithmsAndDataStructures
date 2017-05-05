
#ifndef __SINGLE_LINKED_LIST__
#define __SINGLE_LINKED_LIST__

#include "Node.hpp"

#include <iostream>

class SingleLinkedList {
    public:
        SingleLinkedList(Node* head) : head(head) {
            if(head) head->next = NULL;
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
            if(!head) std::cout << "Empty List!" << std::endl;
            else {
                Node* n = head;
                while(n) {
                    n->show();
                    n = n->next;
                }

                std::cout << std::endl;
            }
        }

        void push_back(Node* node) {
            if(!head) {
                head = node;
                head->next = NULL;
            }
            else {
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
        }

        void push_front(Node* node){
            if(!head) {
                head = node;
                head->next = NULL;
            }
            else {
                node->next = head;
                head = node;
            }
        }

        Node* pop_back() {
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

        Node* pop_front() {
            if(!head) return NULL;

            Node* tmp = head;
            head = head->next;
            tmp->next = NULL;
            return tmp;
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

        void remove_all(const int data) {
            if(!head) return;
            if(head->data == data) {
                Node* tmp = head;
                head = tmp->next;
                tmp->next = NULL;
            }
            
            Node* n = head;
            while(n) {
                if(n->next && n->next->data == data) {
                    Node* tmp = n->next;
                    n->next = n->next->next;
                    tmp->next = NULL;
                }    
                else {
                    n = n->next;
                }
            }
        }

        void remove_all() {
            if(!head) return;
            if(!head->next) {
                head = NULL;
                return;
            }
            
            Node* n = head;
            while(n->next) {
                n->next = n->next->next;
            }

            head = NULL;
        }

    public:
        Node* head;
};

#endif
