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
                return find(key, node->leftChild);
            } else {
                return node;
            }
        } else {
            //check right child tree
            if (node->rightChild != nullptr) {
                return find(key, node->rightChild);
            } else {
                return node;
            }
        }
    } else {
        return nullptr;
    }
}

void BSTree::insert_key(int key) {
    //cout << "starting to insert the key " + to_string(key) << endl;
    if (root == nullptr) {
        root = new Node(key, nullptr);
        cout << "the key is placed in root" << endl;
    } else {
        Node *node = find(key, root);
        if (key != node->key) {
            if (key < node->key) {
                node->leftChild = new Node(key, node);
            } else {
                node->rightChild = new Node(key, node);
            }
        } else {
            // do nothing
        }
    }
    //cout << "end of inserting the key " + to_string(key) << endl;
}

void BSTree::delete_key(int key) {
    //cout << "starting to delete the key" + to_string(key) << endl;
    //if empty tree
    /*
    if (root == nullptr) {
        cout << "the tree is empty" << endl;
    } else {
        // find the node
        Node *node = find(key, root);
        if (node->key != key) {
            cout << "no such node in tree" << endl;
        } else {
            // remove the connection between parend and child node
            if (node->parent->rightChild->key == key) {
                node->parent->rightChild = nullptr;
            } else {
                node->parent->leftChild = nullptr;
            }
        }
    }*/
    //cout << "end of deleting the key" + to_string(key) << endl;
}

void BSTree::show_bstree_helper(Node *node) {
    if (node == nullptr) {
        return;
    }
    show_bstree_helper(node->leftChild);
    cout << node->key << " ";
    show_bstree_helper(node->rightChild);
}

void BSTree::show_bstree() {
    show_bstree_helper(root);
    cout << endl;
}

Node *BSTree::find_successor(Node *node) {
    return nullptr;
}

bool Node::has_child() {
    return leftChild != nullptr || rightChild != nullptr;
}

Node::Node(int key, Node *parent) : key(key), parent(parent), leftChild(nullptr), rightChild(nullptr) {}
