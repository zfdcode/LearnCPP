//
// Created by Fngd Z on 2018/4/16.
//

#include "BSTree.h"

Node *BSTree::getRoot() const {
    return root;
}

BSTree::BSTree() {
    root = nullptr;
}

Node *BSTree::find(int key, Node *node) {
    //if this node is not null
    if (node != nullptr) {
        //compare the key value with node key value
        if (node->key == key) {
            cout << "the key exists in this tree" << endl;
            return node;
        } else if (key < node->key) {
            //check left child tree
            if (node->leftChild != nullptr) {
                find(key, node->leftChild);
            } else {
                return node;
            }
        } else {
            //check right child tree
            if (node->rightChild != nullptr) {
                find(key, node->rightChild);
            } else {
                return node;
            }
        }
    } else {
        return nullptr;
    }
}

void BSTree::insert(int key) {
    cout << "starting to insert the key " + to_string(key) << endl;
    if (root == nullptr) {
        root = new Node(key);
        cout << "the key is placed in root" << endl;
    } else {
        Node *node = find(key, root);
        if (key != node->key) {
            if (key < node->key) {
                node->leftChild = new Node(key);
            } else {
                node->rightChild = new Node(key);
            }
        }
    }
}

void BSTree::print_bstree() {

}

bool Node::has_child() {
    return leftChild != nullptr || rightChild != nullptr;
}

Node::Node(int key) : key(key), leftChild(nullptr), rightChild(nullptr) {}
