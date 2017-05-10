
#ifndef __BINARY_TREE__
#define __BINARY_TREE__

struct BinaryTree {
    BinaryTree(root) : root(root) {}

    void search(Node* node) { 

        Node* n = root;
        while(n){
            if(node->data >  n->data) n = n->right;
            else if(node->data <  n->data) n = n->left;
            else return n;
        }

        return NULL;
    }

    Node* root;

};


#endif
