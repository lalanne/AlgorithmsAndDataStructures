
#ifndef __BINARY_TREE__
#define __BINARY_TREE__

#include "Node.hpp"

#include <iostream>

struct BinaryTree {
    BinaryTree(Node* root) : root(root) {}


    int size() {
        if(!root) return 0;
        if(root->left == NULL && root->right == NULL) return 1;

        return  internal_size(root);
    }

    Node* search(Node* node) { 

        Node* n = root;
        while(n){
            if(node->data >  n->data) n = n->right;
            else if(node->data <  n->data) n = n->left;
            else return n;
        }

        return NULL;
    }

    void show_preorder() const {
        if(!root) std::cout << "empty tree" << std::endl;

        internal_show_preorder(root);
        
    }

    private:
        int internal_size(Node* r) {
            if(r->left == NULL && r->right == NULL) return 1;

            return internal_size(r->left) + internal_size(r->right) + 1;
        }

        void internal_show_preorder(Node* r) const {

            std::cout << r->data << " " << std::endl;

            if(r->left) internal_show_preorder(r->left);
            if(r->right) internal_show_preorder(r->right);
        }



    Node* root;

};


#endif
