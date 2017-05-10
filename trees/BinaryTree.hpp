
#ifndef __BINARY_TREE__
#define __BINARY_TREE__

#include "Node.hpp"

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

    private:
        int internal_size(Node* r) {
            if(r->left == NULL && r->right == NULL) return 1;

            return internal_size(r->left) + internal_size(r->right) + 1;
        }

    Node* root;

};


#endif
